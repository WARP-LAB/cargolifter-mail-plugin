//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header



@class MFMailbox, NSArray, NSColor, NSDictionary, NSMutableArray, NSString;

@interface MFMessageRule : NSObject <NSCopying>
{
    MFMailbox *_copyDestinationMailbox;
    NSString *_copyDestinationMailboxURL;
    MFMailbox *_destinationMailbox;
    NSString *_destinationMailboxURL;
    NSColor *_color;
    NSString *_playSound;
    NSString *_appleScriptPath;
    NSArray *_recipients;
    NSString *_responseMessage;
    int _autoResponseType;
    NSString *_ruleName;
    NSMutableArray *_criteria;
    long long _flags;
    unsigned int _isActive:1;
    unsigned int _ruleWasAutoDeactivated:1;
    unsigned int _allCriteriaMustBeSatisfied:1;
    unsigned int _shouldTransferMessage:1;
    unsigned int _shouldCopyMessage:1;
    unsigned int _shouldStopEvaluatingRules:1;
    unsigned int _highlightTextUsingColor:1;
    unsigned int _shouldNotifyUser:1;
    unsigned int _addInvitationAttachmentToCalendar:1;
    unsigned int _shouldSendNotification:1;
    BOOL _isJunkMailRule;
    BOOL _isSafeToMarkAsNotJunkRule;
    BOOL _isCalendarRule;
    BOOL _didChange;
    NSString *_uniqueId;
    NSDictionary *_otherInfo;
}

+ (id)appleScriptLock;
+ (void)initialize;
- (void)_appendMessages:(id)arg1 fromSourceMailbox:(id)arg2 toDestinationMailbox:(id)arg3 destinationStores:(id)arg4 rejectedMessages:(id)arg5 messagesToBeDeleted:(id)arg6;
- (id)_copyDestinationMailboxCreateIfNeeded:(BOOL)arg1;
- (id)_destinationMailbox:(id)arg1 withURL:(id)arg2 createIfNeeded:(BOOL)arg3 setUsingBlock:(id)arg4;
- (id)_destinationMailboxCreateIfNeeded:(BOOL)arg1;
- (void)_evaluateIfNeeded:(id)arg1 andSetUsingBlock:(id)arg2;
- (void)_performAddInvitationAttachmentToCalendarActionOnMessages:(id)arg1;
- (void)_performAppleScriptActionWithMessages:(id)arg1;
- (id)_performAutoResponseActionOnMessage:(id)arg1 encrypt:(BOOL)arg2 includeOrignalMessageText:(BOOL)arg3;
- (void)_performAutoResponseActionOnMessages:(id)arg1;
- (void)_performUserNotificationAction:(id)arg1;
- (void)_setDestinationIvar:(id *)arg1 toDestinationMailbox:(id)arg2 destinationURLIvar:(id *)arg3;
- (id)_syncableMailboxURLStringForMailbox:(id)arg1;
- (id)_tryToGetMailboxForURLString:(id)arg1;
- (void)_updateDefaultAppleEmailAddressRule;
- (unsigned int)actionColorMessage;
- (BOOL)actionDeleteMessage;
- (id)actionForwardText;
- (id)actionForwardToAddress;
- (BOOL)actionMarkAsFlagged;
- (long long)actionMarkAsFlaggedStatus;
- (BOOL)actionMarkAsRead;
- (id)actionRedirectToAddress;
- (id)actionReplyText;
- (id)actionRunApplescript;
- (void)addHeadersRequiredForRoutingToArray:(id)arg1;
@property(nonatomic) BOOL addInvitationAttachmentToCalendar;
@property(readonly, nonatomic) BOOL affectsColorEvaluation;
@property(nonatomic) BOOL allCriteriaMustBeSatisfied;
- (id)appleScriptCopyDestinationMailbox;
- (id)appleScriptDestinationMailbox;
@property(copy, nonatomic) NSString *appleScriptPath;
@property(copy, nonatomic) NSArray *autoResponseRecipients;
@property(nonatomic) int autoResponseType;
@property(retain, nonatomic) NSColor *color;
@property(retain, nonatomic) MFMailbox *copyDestinationMailbox;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSArray *criteria;
- (id)debugDescription;
- (id)description;
@property(retain, nonatomic) MFMailbox *destinationMailbox;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationIncludePII:(BOOL)arg1;
@property(nonatomic) BOOL didChange; // @synthesize didChange=_didChange;
- (BOOL)doesMessageSatisfyCriteria:(id)arg1 fetchBody:(BOOL)arg2 needsBody:(char *)arg3 successfullyEvaluated:(char *)arg4;
@property(nonatomic) long long flagsToApply;
- (void)handleDidChange;
- (void)handleDidChangeIfNeeded;
- (NSUInteger)hash;
- (unsigned int)highlightColorValue:(id)arg1;
@property(nonatomic) BOOL highlightTextUsingColor;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithRule:(id)arg1;
- (void)insertInCriteria:(id)arg1;
- (void)insertInCriteria:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)insertObject:(id)arg1 inCriteriaAtIndex:(NSUInteger)arg2;
- (BOOL)invalidateDestinationMailboxesForURLString:(id)arg1;
@property(nonatomic) BOOL isActive;
@property(nonatomic) BOOL isCalendarRule; // @synthesize isCalendarRule=_isCalendarRule;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRule:(id)arg1;
- (BOOL)isEquivalentExceptForTitleAndIDs:(id)arg1;
@property(nonatomic) BOOL isJunkMailRule; // @synthesize isJunkMailRule=_isJunkMailRule;
@property(nonatomic) BOOL isSafeToMarkAsNotJunkRule; // @synthesize isSafeToMarkAsNotJunkRule=_isSafeToMarkAsNotJunkRule;
@property(readonly, nonatomic) BOOL isTerminalAction;
- (BOOL)isValid:(id *)arg1 options:(unsigned int)arg2;
- (id)mailboxPathForMailboxURL:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)objectSpecifier;
@property(readonly, copy, nonatomic) NSDictionary *otherInfo; // @synthesize otherInfo=_otherInfo;
- (void)performActionsOnMessages:(id)arg1 sourceStores:(id)arg2 destinationStores:(id)arg3 transferredOrDeleted:(id)arg4 rejectedMessages:(id)arg5 messagesToBeDeleted:(id)arg6;
@property(copy, nonatomic) NSString *playSound;
- (void)removeFromCriteriaAtIndex:(NSUInteger)arg1;
- (void)removeObjectFromCriteriaAtIndex:(NSUInteger)arg1;
@property(copy, nonatomic) NSString *responseMessage;
- (id)ruleDescription;
@property(copy, nonatomic) NSString *ruleName;
- (void)setActionColorMessage:(unsigned int)arg1;
- (void)setActionDeleteMessage:(BOOL)arg1;
- (void)setActionForwardText:(id)arg1;
- (void)setActionForwardToAddress:(id)arg1;
- (void)setActionMarkAsFlagged:(BOOL)arg1;
- (void)setActionMarkAsFlaggedStatus:(long long)arg1;
- (void)setActionMarkAsRead:(BOOL)arg1;
- (void)setActionRedirectToAddress:(id)arg1;
- (void)setActionReplyText:(id)arg1;
- (void)setActionRunApplescript:(id)arg1;
- (void)setAddress:(id)arg1 forResponseType:(int)arg2;
- (void)setAppleScriptCopyDestinationMailbox:(id)arg1;
- (void)setAppleScriptDestinationMailbox:(id)arg1;
- (void)setRuleDescription:(id)arg1;
@property(nonatomic) BOOL shouldCopyMessage;
@property(nonatomic) BOOL shouldNotifyUser;
@property(nonatomic) BOOL shouldSendNotification;
@property(nonatomic) BOOL shouldStopEvaluatingRules;
@property(nonatomic) BOOL shouldTransferMessage;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void)tryToReconnectDestinationIfNeeded;
- (void)updateIsActive;

@end
