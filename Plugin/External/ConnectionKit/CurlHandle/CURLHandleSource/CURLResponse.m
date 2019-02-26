//
//  CURLResponse.m
//  CURLHandle
//
//  Created by Dan Wood <dwood@karelia.com> on Fri Jun 22 2001.
//  Copyright (c) 2013 Karelia Software. All rights reserved.

#import "CURLResponse.h"
#import "CURLHTTPParsing.h"


@interface CURLHTTPResponse : NSHTTPURLResponse
{
    NSInteger       _statusCode;
    NSDictionary    *_headerFields;
}
@end


@implementation CURLResponse

+ (NSURLResponse *)responseWithURL:(NSURL *)url statusCode:(NSInteger)statusCode headerString:(NSString *)header;
{
    NSString *scheme = url.scheme;
    if ([scheme caseInsensitiveCompare:@"http"] == NSOrderedSame || [scheme caseInsensitiveCompare:@"https"] == NSOrderedSame)
    {
        Class responseClass = ([NSHTTPURLResponse instancesRespondToSelector:@selector(initWithURL:statusCode:HTTPVersion:headerFields:)] ? [NSHTTPURLResponse class] : [CURLResponse class]);
        
        return [[[responseClass alloc] initWithURL:url
                                        statusCode:statusCode
                                       HTTPVersion:[header headerHTTPVersion]
                                      headerFields:[header allHTTPHeaderFields]]
                autorelease];
    }
    else
    {
        CURLResponse *result = [[self alloc] initWithURL:url MIMEType:nil expectedContentLength:NSURLResponseUnknownLength textEncodingName:nil];
        result->_code = statusCode;
        result->_header = [header copy];
        return [result autorelease];
    }
}

- (void)dealloc
{
    [_header release];
    [super dealloc];
}

@synthesize headerString = _header;
@synthesize statusCode = _code;

@end

@implementation CURLHTTPResponse

- (id)initWithURL:(NSURL *)URL statusCode:(NSInteger)statusCode HTTPVersion:(NSString *)HTTPVersion headerFields:(NSDictionary *)fields;
{
    if (self = [self initWithURL:URL
                        MIMEType:[fields objectForKey:@"Content-Type"]
           expectedContentLength:[[fields objectForKey:@"Content-Length"] integerValue]
                textEncodingName:[fields objectForKey:@"Content-Encoding"]])
    {
        _statusCode = statusCode;
        _headerFields = [fields copy];
    }
    return self;
}

- (NSInteger)statusCode; { return _statusCode; }

- (NSDictionary *)allHeaderFields; { return _headerFields; }

@end
