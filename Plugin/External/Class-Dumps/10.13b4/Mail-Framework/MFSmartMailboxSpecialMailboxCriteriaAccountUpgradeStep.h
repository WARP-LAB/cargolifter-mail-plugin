//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import <MFLibraryUpgradeStep.h>

@class NSDictionary;

@interface MFSmartMailboxSpecialMailboxCriteriaAccountUpgradeStep : MFLibraryUpgradeStep
{
    NSDictionary *_syncableSystemAccountURLBySyncableV1V2PersistenceAccountURL;
}

+ (BOOL)needToPerformFromMinorVersion:(NSUInteger)arg1 initialLastWriteMinorVersion:(NSUInteger)arg2 fromBackBooting:(char *)arg3;
+ (BOOL)requiredAfterBackbooting;
+ (NSUInteger)targetVersion;
- (id)_fixCriteriaWithLegacyAccountURLs:(id)arg1;
- (id)_fixV1V2PersistenceAccountURL:(id)arg1;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)arg1;
@property(copy, nonatomic) NSDictionary *syncableSystemAccountURLBySyncableV1V2PersistenceAccountURL; // @synthesize syncableSystemAccountURLBySyncableV1V2PersistenceAccountURL=_syncableSystemAccountURLBySyncableV1V2PersistenceAccountURL;

@end

