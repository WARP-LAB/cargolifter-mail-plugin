//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import <MCMessage.h>

@class MCMutableMessageHeaders, NSData, NSString, _MCOutgoingMimeBody;

@interface MCOutgoingMessage : MCMessage
{
    _MCOutgoingMimeBody *_mimeBody;
    NSUInteger _localAttachmentsSize;
    MCMutableMessageHeaders *_mutableHeaders;
    NSString *_existingRemoteID;
    NSString *_remoteID;
    NSData *_rawData;
}

- (id)bodyData;
- (id)bodyDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)dataSource;
@property(retain, nonatomic) NSString *existingRemoteID; // @synthesize existingRemoteID=_existingRemoteID;
- (id)headers;
- (id)headersIfAvailable;
- (id)init;
- (id)messageDataIncludingFromSpace:(BOOL)arg1 newDocumentID:(id)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (NSUInteger)messageSize;
@property(retain, nonatomic) _MCOutgoingMimeBody *mimeBody;
@property(retain, nonatomic) MCMutableMessageHeaders *mutableHeaders; // @synthesize mutableHeaders=_mutableHeaders;
@property(retain, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(copy, nonatomic) NSString *remoteID; // @synthesize remoteID=_remoteID;
- (void)setLocalAttachmentsSize:(NSUInteger)arg1;

@end

