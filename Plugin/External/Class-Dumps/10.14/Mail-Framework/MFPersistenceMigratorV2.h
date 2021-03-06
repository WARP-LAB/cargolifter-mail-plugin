//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header



@class NSFileManager, NSMutableDictionary, NSString;

@interface MFPersistenceMigratorV2 : NSObject <NSFileManagerDelegate>
{
    NSMutableDictionary *_lostItems;
    BOOL _isTrackingCleanupProgress;
    NSFileManager *_fileManager;
    id <MFActivityProgressUpdater> _activityProgressUpdater;
    NSUInteger _progressChunkSize;
    NSUInteger _messagesProgressCount;
    NSUInteger _v1CleanupCount;
}

- (id)_accountPrefixes;
- (BOOL)_directoryExistsAtPath:(id)arg1;
- (void)_handleAttachmentsMigrationResult:(BOOL)arg1 error:(id)arg2 message:(id)arg3 libraryID:(long long)arg4;
- (id)_lostItemsForBaseDirectory:(id)arg1;
- (id)_mailSystemAccountsWithAccountStore:(id)arg1;
- (id)_mailboxSuffixes;
- (void)_migrateMailboxesFromDirectory:(id)arg1 toDirectory:(id)arg2 baseDirectory:(id)arg3 usingUUID:(id)arg4 mailboxCacheDictionary:(id)arg5 accountPrefix:(id)arg6;
- (BOOL)_path:(id)arg1 hasPrefixInArray:(id)arg2;
- (id)_prefixOfString:(id)arg1 fromSet:(id)arg2;
- (BOOL)_shouldIgnoreFilename:(id)arg1;
- (BOOL)_string:(id)arg1 hasPrefixInSet:(id)arg2;
- (BOOL)_string:(id)arg1 hasSuffixInSet:(id)arg2;
- (id)_stringByAppendingV2MailboxSuffix:(id)arg1;
@property(readonly, nonatomic) id <MFActivityProgressUpdater> activityProgressUpdater; // @synthesize activityProgressUpdater=_activityProgressUpdater;
- (void)dealloc;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
- (BOOL)fileManager:(id)arg1 shouldRemoveItemAtPath:(id)arg2;
- (id)init;
- (id)initWithActivityProgressUpdater:(id)arg1;
@property(nonatomic) BOOL isTrackingCleanupProgress; // @synthesize isTrackingCleanupProgress=_isTrackingCleanupProgress;
@property(nonatomic) NSUInteger messagesProgressCount; // @synthesize messagesProgressCount=_messagesProgressCount;
- (void)migrate;
@property(nonatomic) NSUInteger progressChunkSize; // @synthesize progressChunkSize=_progressChunkSize;
@property(nonatomic) NSUInteger v1CleanupCount; // @synthesize v1CleanupCount=_v1CleanupCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

