//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import <MCMessage.h>

@class MCMutableMessageHeaders, NSData, NSString;

@interface MCOutgoingMessage : MCMessage
{
    NSUInteger _localAttachmentsSize;
    NSString *_remoteID;
    MCMutableMessageHeaders *_mutableHeaders;
    NSString *_existingRemoteID;
    NSData *_rawData;
}

- (id)bodyDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)dataSource;
@property(retain, nonatomic) NSString *existingRemoteID; // @synthesize existingRemoteID=_existingRemoteID;
- (id)headersFetchIfNotAvailable:(BOOL)arg1;
- (id)init;
- (id)messageDataFetchIfNotAvailable:(BOOL)arg1 newDocumentID:(id)arg2;
- (NSUInteger)messageSize;
@property(retain, nonatomic) MCMutableMessageHeaders *mutableHeaders; // @synthesize mutableHeaders=_mutableHeaders;
@property(retain, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(copy) NSString *remoteID; // @synthesize remoteID=_remoteID;
- (void)setLocalAttachmentsSize:(NSUInteger)arg1;

@end

