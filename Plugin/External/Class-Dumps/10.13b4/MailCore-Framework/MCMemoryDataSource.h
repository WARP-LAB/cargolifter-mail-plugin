//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "MCMessageDataSource-Protocol.h"

@class MCMessage, NSData, NSMutableSet, NSString;

@interface MCMemoryDataSource : NSObject <MCMessageDataSource>
{
    NSMutableSet *_uniqueStrings;
    NSData *_data;
    NSData *_separator;
}

- (id)_flagChangeDictionaryForJunkMailLevel:(long long)arg1 forMessages:(id)arg2 userRecorded:(BOOL)arg3 changedMessages:(id)arg4;
@property(readonly, nonatomic) id <MCMailAccount> account;
- (void)async_setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (void)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)attachmentsDirectoryForMessage:(id)arg1;
- (id)attachmentsDirectoryForMessage:(id)arg1 partNumber:(id)arg2;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)bodyDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
@property(readonly, nonatomic) BOOL canCompact;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)doCompact;
- (void)flushAllCaches;
- (void)getTopLevelMimePart:(id *)arg1 headers:(id *)arg2 body:(id *)arg3 forMessage:(id)arg4 fetchIfNotAvailable:(BOOL)arg5 updateFlags:(BOOL)arg6 allowPartial:(BOOL)arg7;
- (id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)init;
- (id)initWithData:(id)arg1;
- (void)invalidateMessage:(id)arg1;
@property(readonly) BOOL isReadOnly;
@property(readonly, nonatomic) id <MCMailbox> mailbox;
@property(readonly, nonatomic) MCMessage *message;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (id)messageForMessageID:(id)arg1;
- (id)routeMessages:(id)arg1 fetchingBodies:(BOOL)arg2 messagesNeedingBodies:(id)arg3;
- (void)saveSnippetsForMessages:(id)arg1;
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(id)arg2 completionHandler:(id)arg3;
@property(readonly, copy, nonatomic) NSData *separator; // @synthesize separator=_separator;
- (void)setColor:(id)arg1 highlightTextOnly:(BOOL)arg2 forMessages:(id)arg3;
- (void)setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(BOOL)arg3 userRecorded:(BOOL)arg4;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (id)snippetsForMessages:(id)arg1;
@property(readonly, nonatomic) BOOL supportsSnippets;
- (id)uniquedString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

