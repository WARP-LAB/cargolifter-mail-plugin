//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "MCActivityTarget-Protocol.h"

@class MCInvocationQueue, NSArray, NSDate, NSMutableArray, NSMutableSet, NSString, NSURL;

@interface MFParentalControlManager : NSObject <MCActivityTarget>
{
    NSMutableSet *_pcStores;
    NSDate *_lastCleanupDate;
    NSMutableArray *_recentRequests;
    BOOL _isDirty;
    BOOL _recentRequestsDirty;
    NSMutableSet *_pendingRequests;
    MCInvocationQueue *_tasks;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
- (void)_approveAddresses:(id)arg1 responseFromAccount:(id)arg2;
- (void)_approveEmailListChanged:(id)arg1;
- (void)_approveSenders:(id)arg1 sourcePCMailbox:(id)arg2 destinationAccount:(id)arg3;
- (void)_cleanupPCStore:(id)arg1;
- (void)_cleanupPCStores;
- (void)_cleanupPCStoresAfterDelay:(id)arg1;
- (void)_deliverApprovalRequestMessage:(id)arg1 forOutgoingMessage:(id)arg2;
- (id)_deliverMessage:(id)arg1;
- (void)_deliverResponseMessage:(id)arg1 requestMessage:(id)arg2;
- (void)_emailAddresses:(id)arg1 approvedOrRejected:(BOOL)arg2;
- (BOOL)_hasPendingRequestForSender:(id)arg1;
- (BOOL)_hasRecentlySentPermissionRequestForSender:(id)arg1;
- (id)_makeRequestMessageForMessage:(id)arg1 isOutgoingMessage:(BOOL)arg2;
- (id)_makeResponseMessageToRequest:(id)arg1 approve:(BOOL)arg2;
- (id)_openPCStoreForAccount:(id)arg1;
- (id)_openStoreForPCMailbox:(id)arg1;
- (id)_openStoreForPCMailbox:(id)arg1 keepOpen:(BOOL)arg2;
- (void)_reallyCleanupPCStores;
- (void)_reallyRequestApprovalForIncomingMessage:(id)arg1 srcStore:(id)arg2 pcStore:(id)arg3 messageInPCStore:(id)arg4;
- (id)_recentRequestsFile;
- (id)_recentRequestsNoLock;
- (void)_rejectAddresses:(id)arg1 responseFromAccount:(id)arg2;
- (void)_rejectSenders:(id)arg1 sourcePCMailbox:(id)arg2;
- (void)_removeSendersFromRecentRequests:(id)arg1;
- (void)_requestApprovalForIncomingMessage:(id)arg1 srcStore:(id)arg2 pcStore:(id)arg3 messageInPCStore:(id)arg4;
- (void)_requestApprovalForOutgoingMessage:(id)arg1 srcStore:(id)arg2;
- (BOOL)_respondToRequest:(id)arg1 approve:(BOOL)arg2;
- (void)_saveChangesWithDelay;
- (BOOL)approveRequest:(id)arg1;
- (void)dealloc;
- (void)deleteAccount:(id)arg1;
- (void)emailAddressesApproved:(id)arg1;
- (void)emailAddressesRejected:(id)arg1;
- (BOOL)haveEmailsBeenApproved:(id)arg1 unapprovedOnes:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *headersRequiredForParentalControl;
- (id)init;
@property BOOL isDirty;
- (BOOL)isEmail:(id)arg1 inEmailList:(id)arg2;
@property(readonly, nonatomic) BOOL isParentEmailAvailable;
@property(readonly, nonatomic) NSURL *parentalControlDirectory;
- (BOOL)processIncomingMessage:(id)arg1 messageIsParentResponse:(char *)arg2;
- (BOOL)rejectRequest:(id)arg1;
- (BOOL)requestApprovalForOutgoingMessage:(id)arg1;
- (void)saveChanges;
@property(readonly, nonatomic) MCInvocationQueue *tasks; // @synthesize tasks=_tasks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly) Class superclass;

@end
