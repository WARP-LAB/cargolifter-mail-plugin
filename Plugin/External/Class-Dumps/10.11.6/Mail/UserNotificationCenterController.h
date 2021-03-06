//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header



@class MFMailbox, NSMutableArray, NSMutableSet, NSOperationQueue, NSString;

@interface UserNotificationCenterController : NSObject <NSUserNotificationCenterDelegate>
{
    MFMailbox *_userNotificationMailbox;
    NSMutableSet *_messagesNeedingSnippets;
    NSMutableSet *_postUserNotificationOperations;
    NSMutableSet *_messagesSentBySelf;
    NSMutableSet *_forcedNotificationMessageIDs;
    NSMutableArray *_mostRecentMessageDates;
    id _playSoundLock;
    BOOL _needToPlayNewMailSound;
    BOOL _isRichList;
    long long _userNotificationScope;
    NSOperationQueue *_operationQueue;
    NSUInteger _numberOfSnippetLines;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void)_clearNotificationsForDeletedAccounts;
- (void)_deleteUserNotificationWithMessages:(id)arg1;
- (void)_mailAccountsChanged:(id)arg1;
- (void)_mailboxWillBeInvalidated:(id)arg1;
- (void)_messageSnippetsUpdated:(id)arg1;
- (void)_messagesWereAdded:(id)arg1;
- (void)_messagesWereReadOrDeleted:(id)arg1;
- (void)_newMailReceived:(id)arg1;
- (void)_playNewMailSoundIfNeeded;
- (void)_postUserNotificationForMessages:(id)arg1 withSnippets:(id)arg2;
- (void)_ruleWasMatched:(id)arg1;
- (void)_setUserNotificationMailbox:(id)arg1;
- (BOOL)_shouldGetSnippetForMessage:(id)arg1;
- (BOOL)_shouldSendUserNotificationForMessage:(id)arg1 inMailbox:(id)arg2;
- (void)_snippetLinePreferenceChanged:(id)arg1;
- (id)_snippetsForMessages:(id)arg1;
- (void)_viewerLayoutPreferenceChanged:(id)arg1;
- (void)dealloc;
- (id)init;
@property(nonatomic) BOOL isRichList; // @synthesize isRichList=_isRichList;
@property(nonatomic) NSUInteger numberOfSnippetLines; // @synthesize numberOfSnippetLines=_numberOfSnippetLines;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) long long userNotificationScope; // @synthesize userNotificationScope=_userNotificationScope;
- (void)setUserNotificationScope:(long long)arg1 mailbox:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didDismissAlert:(id)arg2;
- (BOOL)userNotificationCenter:(id)arg1 shouldActivateForNotification:(id)arg2;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
@property(readonly, nonatomic) MFMailbox *userNotificationMailbox;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

