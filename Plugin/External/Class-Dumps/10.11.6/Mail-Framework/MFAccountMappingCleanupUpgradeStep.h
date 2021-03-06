//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import <MFRemoveMessagesUpgradeStep.h>

@interface MFAccountMappingCleanupUpgradeStep : MFRemoveMessagesUpgradeStep
{
}

+ (BOOL)needToPerformFromMinorVersion:(NSUInteger)arg1 initialLastWriteMinorVersion:(NSUInteger)arg2 fromBackBooting:(char *)arg3;
+ (NSUInteger)targetVersion;
- (void)_deleteMailboxesFromDatabase:(id)arg1;
- (id)_fetchOrphanedMailboxIDs:(id *)arg1;
- (id)_popAccountsNeedingRebuild:(id)arg1;
- (void)_rebuildPOPAccounts:(id)arg1;
- (id)initWithSQLHandle:(id)arg1 accounts:(id)arg2;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)arg1;

@end

