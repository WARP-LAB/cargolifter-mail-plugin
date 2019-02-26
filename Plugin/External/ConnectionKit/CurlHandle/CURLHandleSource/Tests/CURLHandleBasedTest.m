//
//  CURLHandleBasedTest
//  CURLHandle
//
//  Created by Sam Deane on 20/09/2012.
//  Copyright (c) 2013 Karelia Software. All rights reserved.
//

#import "CURLHandleBasedTest.h"
#import "KMSServer.h"

@implementation CURLHandleBasedTest

- (NSURL*)testFileURL
{
    NSURL* testFileURL = [[NSBundle bundleForClass:[self class]] URLForResource:@"TestContent" withExtension:@"txt"];

    return testFileURL;
}

- (NSURL*)testFileRemoteURL
{
    NSURL* testFileURL = [NSURL URLWithString:@"https://raw.github.com/karelia/CurlHandle/v4.x-beta/CURLHandleSource/Tests/TestContent.txt"];

    return testFileURL;
}

- (void)transfer:(CURLTransfer *)transfer didReceiveData:(NSData *)data
{
    NSMutableData* buffer = self.buffer;
    if (!buffer)
    {
        buffer = [NSMutableData dataWithCapacity:self.expected];
        self.buffer = buffer;
    }

    [buffer appendData:data];
}

- (void)transfer:(CURLTransfer *)transfer didReceiveResponse:(NSURLResponse *)response
{
    self.response = response;
    if (response.expectedContentLength > 0)
    {
        self.expected = response.expectedContentLength;
    }
}

- (void)transfer:(CURLTransfer *)transfer willSendBodyDataOfLength:(NSUInteger)bytesWritten
{
    self.sending = YES;
    if (bytesWritten == 0)
    {
        NSLog(@"test: upload done");
    }
}

- (void)transfer:(CURLTransfer *)transfer didReceiveDebugInformation:(NSString *)string ofType:(curl_infotype)type
{
    NSString* typeName = [transfer.class nameForType:type];
    if (!self.transcript)
    {
        self.transcript = [NSMutableString stringWithString:@""];
    }

    @synchronized(self.transcript)
    {
    [self.transcript appendFormat:@"%@: %@", typeName, string];
    }
}

- (void)transfer:(CURLTransfer*)transfer didCompleteWithError:(NSError *)error
{
    if (error)
    {
        NSLog(@"test: transfer failed with error %@", error);
        self.error = error;
    }
    else
    {
        NSLog(@"test: transfer %@ finished", transfer);
        self.finishedCount++;
    }
    
    [self pause];
}

- (void)pause
{
    NSLog(@"test: pause requested");
    if (self.server)
    {
        [self.server pause];
    }
    else
    {
        self.exitRunLoop = YES;
    }
}

- (void)runUntilPaused
{
    if (self.server)
    {
        [self.server runUntilPaused];
    }
    else
    {
        while (!self.exitRunLoop)
        {
            [[NSRunLoop currentRunLoop] runUntilDate:[NSDate date]];
        }
        self.exitRunLoop = NO;
    }
    NSLog(@"test: paused");
}

- (void)stopServer
{
    if (self.server)
    {
        [self.server stop];
        while (self.server.state != KMSStopped)
        {
            [[NSRunLoop currentRunLoop] runUntilDate:[NSDate date]];
        }
    }
}

- (BOOL)checkDownloadedBufferWasCorrect
{
    XCTAssertNotNil(self.response, @"got no response");
    XCTAssertTrue([self.buffer length] > 0, @"got no data, expected %ld", self.expected);
    XCTAssertNil(self.error, @"got error %@", self.error);

    NSError* error = nil;
    NSURL* testFileURL = [self testFileURL];
    NSString* testNotes = [NSString stringWithContentsOfURL:testFileURL encoding:NSUTF8StringEncoding error:&error];
    NSString* receivedNotes = [[NSString alloc] initWithData:self.buffer encoding:NSUTF8StringEncoding];

    BOOL result = [receivedNotes isEqualToString:testNotes];
    XCTAssertTrue(result, @"received notes didn't match: was:\n'%@'\n\nshould have been:\n'%@'", receivedNotes, testNotes);

    // clear the buffer
    [self.buffer setLength:0];
    
    return result;
}

- (BOOL)usingMockServer
{
    NSString* ftpTest = [[NSUserDefaults standardUserDefaults] objectForKey:@"CURLHandleFTPTestURL"];
    return [ftpTest isEqualToString:@"MockServer"];
}

- (NSURL*)ftpTestServer
{
    NSURL* result = nil;
    NSString* ftpTest = [[NSUserDefaults standardUserDefaults] objectForKey:@"CURLHandleFTPTestURL"];
    if ([ftpTest isEqualToString:@"MockServer"])
    {
        [self setupServerWithResponseFileNamed:@"ftp"];

        NSURL* testFileURL = [self testFileURL];
        self.server.data = [NSData dataWithContentsOfURL:testFileURL];

        result = [self URLForPath:@"/"];
    }
    else
    {
        XCTAssertNotNil(ftpTest, @"need to set a test server address using defaults, e.g: defaults write otest CURLHandleFTPTestURL \"ftp://user:password@ftp.test.com\"");
        result = [NSURL URLWithString:ftpTest];
    }

    return result;
}

- (void)cleanup
{
    if (self.transcript)
    {
        NSLog(@"Transcript:\n\n%@", self.transcript);
    }
    else
    {
        NSLog(@"No transcript.");
    }

    self.buffer = nil;
    self.transcript = nil;
    self.response = nil;
    self.error = nil;
    self.exitRunLoop = NO;
}

- (void)tearDown
{
    [self cleanup];
    [super tearDown];
}

@end
