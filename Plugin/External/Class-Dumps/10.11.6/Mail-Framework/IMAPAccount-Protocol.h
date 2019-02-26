//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "MCRemoteStoreAccount-Protocol.h"
#import "IMAPMessageDataSource-Protocol.h"

@class IMAPConnection, IMAPMailbox, IMAPQuotaRoot, IMAPResponse, IMAPServerInterface, IMAPTaskManager, MCError, NSArray, NSDictionary, NSString;

@protocol IMAPAccount <MCRemoteStoreAccount>
- (IMAPMailbox *)IMAPMailboxForMailboxName:(NSString *)arg1 createIfNeeded:(BOOL)arg2;
@property(readonly, copy, nonatomic) NSArray *allBackgroundMailboxNames;
@property(readonly) BOOL allowsPartialDownloads;
@property(retain) MCError *connectionError;
- (id <IMAPMessageDataSource>)dataSourceForMailboxName:(NSString *)arg1 createIfNeeded:(BOOL)arg2;
- (void)didConnectToServerWithServerInterface:(IMAPServerInterface *)arg1;
- (BOOL)handleResponseCodeFromResponse:(IMAPResponse *)arg1;
- (id <MCMailbox>)mailboxForName:(NSString *)arg1;
- (IMAPQuotaRoot *)quotaRootForName:(NSString *)arg1 createIfNeeded:(BOOL)arg2;
- (NSString *)separatorCharFetchIfNeeded:(BOOL)arg1;
@property(copy) NSDictionary *serverID;
@property(copy) NSString *serverPathPrefix;
- (void)setSeparatorChar:(NSString *)arg1;
- (void)setSupportsModificationSequences:(BOOL)arg1 forMailboxName:(NSString *)arg2;
@property BOOL supportsQuickResynchronization;
@property BOOL useIDLEIfAvailable;
@property(readonly) BOOL shouldMoveDeletedMessagesToTrash;
@property(readonly, nonatomic) IMAPTaskManager *taskManager;

@optional
- (void)detectAllMailMailboxWithConnection:(IMAPConnection *)arg1;
- (id <MCGmailLabel>)gmailLabelWithName:(NSString *)arg1;
@end
