//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "MCMessage.h"

@class MFMailbox, NSArray, NSIndexSet, NSMutableArray, NSMutableDictionary, NSString;

@interface MFMessageThread : MCMessage
{
    NSMutableArray *_filteredMessages;
    NSString *_formattedUnreadMessageCount;
    NSMutableDictionary *_pendingChanges;
    MCMessage *_newestMessage;
    MCMessage *_oldestMessage;
    MCMessage *_newestReceivedMessage;
    MCMessage *_newestSentMessage;
    MCMessage *_newestReadMessage;
    MCMessage *_snippetMessage;
    MCMessage *_messageWithHighestLibraryID;
    NSIndexSet *_primaryMessageIndexes;
    unsigned int _unreadMessageCount;
    unsigned int _flaggedMessageCount;
    unsigned int _junkMessageCount;
    unsigned int _attachmentCount;
    BOOL _isThreadOpen;
    BOOL _showDateInSubject;
}

+ (id)findMessageWithHighestLibraryIDInMessages:(id)arg1;
+ (id)findNewestMessageInMessages:(id)arg1;
+ (id)findNewestReadMessageInMessages:(id)arg1;
+ (id)findNewestReceivedMessageInMessages:(id)arg1;
+ (id)findNewestSentMessageInMessages:(id)arg1;
+ (id)findOldestMessageInMessages:(id)arg1;
+ (id)findSnippetMessageInMessages:(id)arg1;
+ (id)messagesByExpandingThreads:(id)arg1;
+ (id)sendersStringForMessages:(id)arg1 primaryIndexes:(id)arg2;
- (id)_changeDictionaryForTaskID:(id)arg1 toModify:(BOOL)arg2;
- (id)_invertedIndexes:(id)arg1 count:(NSUInteger)arg2;
- (id)_numberFormatter;
- (void)_setJunkFlags;
- (id)_threadComparator;
- (void)_updateFilteredMessages:(id)arg1;
- (id)addMessages:(id)arg1 secondaryMessages:(id)arg2;
- (id)allContainingLabelsAndMailboxes;
- (id)appliedFlagColors;
- (BOOL)commitPendingChangesForTaskID:(id)arg1;
@property(readonly) long long conversationID;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) NSUInteger countOfFilteredMessages;
- (id)dataSource;
- (double)dateLastViewedAsTimeIntervalSince1970;
- (double)dateReceivedAsTimeIntervalSince1970;
- (double)dateSentAsTimeIntervalSince1970;
- (void)dealloc;
- (id)deleteMessages:(id)arg1;
@property(readonly, copy) NSArray *filteredMessages;
- (BOOL)flagsHaveChanged;
@property(readonly, copy) NSString *formattedUnreadMessageCount;
- (id)gmailLabels;
- (id)init;
@property BOOL isOpen;
- (BOOL)isThread;
@property BOOL isThreadOpen; // @synthesize isThreadOpen=_isThreadOpen;
@property(readonly, nonatomic) MFMailbox *mailbox;
- (void)messageBecamePrimary:(id)arg1;
- (id)messageBody;
- (id)messageID;
- (NSUInteger)messageSize;
@property(readonly) MCMessage *messageWithHighestLibraryID;
@property(readonly) MCMessage *newestMessage;
@property(readonly) MCMessage *newestReadMessage;
@property(readonly) MCMessage *newestSentMessage;
- (NSUInteger)numberOfAttachments;
@property(readonly) NSUInteger numberOfUnreadMessages;
- (id)objectInFilteredMessagesAtIndex:(NSUInteger)arg1;
@property(readonly) MCMessage *oldestMessage;
- (void)replaceMessage:(id)arg1 withMessage:(id)arg2;
- (id)sender;
- (id)senderDisplayName;
- (id)senderDisplayNameInfo;
@property(readonly, copy) NSString *sendersString;
- (void)setNewestMessage:(MCMessage*)arg1;
- (void)setNewestReceivedMessage:(MCMessage*)arg1;
- (void)setNewestSentMessage:(MCMessage*)arg1;
- (void)setOldestMessage:(MCMessage*)arg1;
@property BOOL showDateInSubject; // @synthesize showDateInSubject=_showDateInSubject;
@property(readonly) MCMessage *snippetMessage;
- (void)sortMessagesUsingComparator:(id)arg1;
- (id)subject;
- (id)to;
- (void)updateSubjectEtc;
- (BOOL)willBeDeletedIfMessagesAreDeleted:(id)arg1;

@end

