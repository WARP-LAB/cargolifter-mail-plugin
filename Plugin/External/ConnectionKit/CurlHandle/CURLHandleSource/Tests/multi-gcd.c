/***************************************************************************
 *                                  _   _ ____  _
 *  Project                     ___| | | |  _ \| |
 *                             / __| | | | |_) | |
 *                            | (__| |_| |  _ <| |___
 *                             \___|\___/|_| \_\_____|
 *
 * Copyright (C) 1998 - 2013, Daniel Stenberg, <daniel@haxx.se>, et al.
 *
 * This software is licensed as described in the file COPYING, which
 * you should have received as part of this distribution. The terms
 * are also available at http://curl.haxx.se/docs/copyright.html.
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell
 * copies of the Software, and permit persons to whom the Software is
 * furnished to do so, under the terms of the COPYING file.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ***************************************************************************/

/* Example application code using the multi socket interface to download
 multiple files at once, but instead of using curl_multi_perform and
 curl_multi_wait, which uses select(), we use gcd.

 Written by Sam Deane, based on the multi-uv.c example.

 Requires gcd and (of course) libcurl.

 See http://en.wikipedia.org/wiki/Grand_Central_Dispatch for more information on gcd.
 */

#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>
#include <string.h>

#include <dispatch/dispatch.h>

#define log_message(...) fprintf(stderr, __VA_ARGS__)
#define log_error(...) fprintf(stderr, "ERROR: " __VA_ARGS__)

dispatch_queue_t queue;
int remaining = 0;
CURLM *curl_handle;
dispatch_source_t timeout;

#pragma mark - Socket context

typedef struct socket_context_s {
    dispatch_source_t read_source;
    dispatch_source_t write_source;
} socket_context_t;

socket_context_t* create_socket_context_s()
{
    socket_context_t *context = (socket_context_t *) malloc(sizeof *context);
    memset(context, 0, sizeof(socket_context_t));

    return context;
}

void destroy_socket_context_s(socket_context_t *context)
{
    if (context->read_source)
        dispatch_source_cancel(context->read_source);

    if (context->write_source)
        dispatch_source_cancel(context->write_source);

    free(context);
}

#pragma mark - Socket Action

void curl_perform_action(int socket, int actions)
{
    int running_handles;
    char *done_url;
    CURLMsg *message;
    int pending;

    curl_multi_socket_action(curl_handle, socket, actions, &running_handles);

    while ((message = curl_multi_info_read(curl_handle, &pending))) {
        switch (message->msg) {
            case CURLMSG_DONE:
            {
                CURL* easy = message->easy_handle;
                curl_easy_getinfo(easy, CURLINFO_EFFECTIVE_URL, &done_url);
                CURLcode code = message->data.result;
                printf("%s DONE\ncode:%d - %s\n", done_url, code, curl_easy_strerror(code));

                curl_multi_remove_handle(curl_handle, message->easy_handle);
                curl_easy_cleanup(message->easy_handle);
                --remaining;

                break;
            }
            default:
                log_error("CURLMSG default\n");
                abort();
        }
    }
}

#pragma mark - GCD utilities


dispatch_source_t create_source(dispatch_source_type_t type, int socket, int action)
{
    dispatch_source_t source = dispatch_source_create(type, socket, 0, queue);
    dispatch_source_set_event_handler(source, ^{
        curl_perform_action(socket, action);
    });
    dispatch_source_set_cancel_handler(source, ^{
        dispatch_release(source);
    });

    dispatch_resume(source);
    return source;
}

void create_timeout()
{
    timeout = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0, queue);
    dispatch_source_set_event_handler(timeout, ^{
        curl_perform_action(CURL_SOCKET_TIMEOUT, 0);
        if (remaining == 0)
        {
            curl_multi_cleanup(curl_handle);
            exit(0);
        }
    });

    dispatch_resume(timeout);
}


#pragma mark - MULTI callbacks

void timeout_func(CURLM *multi, long timeout_ms, void *userp)
{
    if (timeout_ms <= 0)
        timeout_ms = 1; /* 0 means directly call socket_action, but we'll do it in
                         a bit */

    int64_t timeout_ns = timeout_ms * NSEC_PER_MSEC;
    dispatch_source_set_timer(timeout, DISPATCH_TIME_NOW, timeout_ns, timeout_ns / 100);
}

int multi_socket_func(CURL *easy, curl_socket_t s, int action, void *userp, void *socketp)
{
    socket_context_t *curl_context = (socket_context_t*) socketp;

    if (action == CURL_POLL_IN || action == CURL_POLL_OUT) {
        if (!curl_context) {
            curl_context = create_socket_context_s();
            curl_multi_assign(curl_handle, s, (void *) curl_context);
        }
    }

    switch (action) {
        case CURL_POLL_IN:
            curl_context->read_source = create_source(DISPATCH_SOURCE_TYPE_READ, s, CURL_CSELECT_IN);
            break;

        case CURL_POLL_OUT:
            curl_context->write_source = create_source(DISPATCH_SOURCE_TYPE_WRITE, s, CURL_CSELECT_OUT);
            break;

        case CURL_POLL_REMOVE:
            if (curl_context) {
                destroy_socket_context_s(curl_context);
                curl_multi_assign(curl_handle, s, NULL);
            }
            break;
        default:
            abort();
    }
    
    return 0;
}

#pragma mark - Top Level

void add_download(const char *url, int num)
{
    char filename[50];
    FILE *file;
    CURL *handle;

    sprintf(filename, "%d.download.txt", num);

    file = fopen(filename, "w");
    if (file == NULL) {
        log_error("Error opening %s\n", filename);
        return;
    }

    handle = curl_easy_init();
    curl_easy_setopt(handle, CURLOPT_WRITEFUNCTION, NULL);
    curl_easy_setopt(handle, CURLOPT_WRITEDATA, file);
    curl_easy_setopt(handle, CURLOPT_URL, url);

    dispatch_async(queue, ^{
        curl_multi_add_handle(curl_handle, handle);
        log_message("Added download %s\n", url);
        ++remaining;
    });
}


int main(int argc, char **argv)
{
    queue = dispatch_queue_create("curl queue", 0);

    if (argc <= 1)
        return 0;

    if (curl_global_init(CURL_GLOBAL_ALL)) {
        log_error("Could not init cURL\n");
        return 1;
    }

    create_timeout();

    curl_handle = curl_multi_init();
    curl_multi_setopt(curl_handle, CURLMOPT_SOCKETFUNCTION, multi_socket_func);
    curl_multi_setopt(curl_handle, CURLMOPT_TIMERFUNCTION, timeout_func);
    
    while (argc-- > 1) {
        add_download(argv[argc], argc);
    }

    dispatch_main();

    return 0;
}