//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "MCActivityTarget-Protocol.h"
#import "MFActivityProgressUpdater.h"

@class ACAccountStore, MCActivityAggregate, MCActivityMonitor, MFSqliteHandle, NSArray, NSString;

@interface MFLibraryUpgrader : NSObject <MCActivityTarget, MFActivityProgressUpdater>
{
    MFSqliteHandle *_handle;
    ACAccountStore *_accountStore;
    NSArray *_upgradeSteps;
    BOOL _readOnly;
    BOOL _shouldRecalculateConversations;
    BOOL _shouldUpdateSubjectPrefixes;
    BOOL _shouldResetSnippets;
    BOOL _shouldRecalculateMessageCounts;
    BOOL _shouldUpdateSpotlightAttributes;
    BOOL _shouldUpdateSpotlightAttributesWithMultipleRecipients;
    BOOL _shouldUpdateMailboxURLs;
    BOOL _shouldResetChangeIdentifierForGmailAccounts;
    BOOL _shouldNormalizeMailboxPaths;
    BOOL _shouldResetDynamicAccountConfiguration;
    BOOL _shouldRemoveMailboxesWithAbsoluteURLs;
    BOOL _shouldUpdateFavoritePersistentIDUnicodeComposition;
    BOOL _shouldRemoveLocalPathsFromRulesAndSmartMailboxes;
    BOOL _shouldUpdateUIDNext;
    BOOL _shouldRemoveJunkColors;
    BOOL _shouldReparseExchangeReferences;
    BOOL _shouldRecalculateAutomatedConversations;
    id <MFLibraryUpgraderDelegate> _delegate;
    MCActivityMonitor *_monitor;
    NSUInteger _initialLastWriteMinorVersion;
    NSUInteger _majorVersion;
    NSUInteger _minorVersion;
    MCActivityAggregate *_activity;
}

+ (id)log;
- (id)_accountsWithTypeIdentifiers:(id)arg1;
- (void)_addFileExtensionToSignatures;
- (void)_bootstrapVersioningEngine;
- (BOOL)_calculateInternationalSubjectPrefixes;
- (BOOL)_canLibraryBeUpgraded;
- (void)_changeRulesLayout;
- (void)_changeSignatureBundleLayout;
- (void)_changeSignaturesLayout;
- (void)_changeSmartMailboxesLayout;
- (void)_combineVIPSendersPlists;
- (id)_copySpotlightAttributesWithDateSent:(int)arg1 dateReceived:(int)arg2 dateLastViewed:(int)arg3 read:(int)arg4 libraryFlags:(long long)arg5 messageID:(const char *)arg6 conversationID:(long long)arg7 subject:(id)arg8 displayName:(id)arg9 senderName:(id)arg10 senderAddress:(id)arg11 recipientNames:(id)arg12 recipientAddresses:(id)arg13;
- (void)_createNewDatabaseObjects;
- (void)_dropTriggers;
- (void)_executeSQL:(id)arg1 updateMinorVersion:(NSUInteger)arg2;
- (void)_fakeLibraryUpgraderStep;
- (id)_fixAbsoluteMailboxURL:(id)arg1 mailAccounts:(id)arg2;
- (id)_fixCriteriaWithAbsoluteMailboxURLs:(id)arg1 mailAccounts:(id)arg2;
- (void)_fixEWSFoldersTable;
- (void)_fixShadowEMLXFiles;
- (void)_fixShadowEMLXFilesForAccount:(id)arg1;
- (id)_fixSmartMailboxWithAbsoluteMailboxURLs:(id)arg1 mailAccounts:(id)arg2;
- (void)_getRecipientsForMessageWithLibraryID:(long long)arg1 recipientNames:(id)arg2 recipientAddresses:(id)arg3 dbHandle:(id)arg4;
- (void)_getVersionInfo;
- (id)_handle;
- (NSUInteger)_lastWriteMinorVersion;
- (id)_libraryIDsOfAutomatedMessages;
- (BOOL)_libraryIsTooNew;
- (id)_mailboxFileSystemPathsByV1V2DatabaseURL;
- (id)_mailboxV1V2URLStringsForAccount:(id)arg1;
- (BOOL)_needsRun;
- (id)_newRulesRemovingLocalPathsFromRules:(id)arg1 accounts:(id)arg2;
- (id)_newRulesWithOnlyLastComponentForApplesScriptReferencesFromRules:(id)arg1;
- (id)_newSmartMailboxesRemovingLocalPathsFromSmartMailboxes:(id)arg1 accounts:(id)arg2;
- (void)_normalizeMailboxPathComponentsInMboxCache;
- (void)_populateRecipientPosition;
- (void)_removeContainerLogs;
- (void)_removeJunkColors;
- (void)_removeLocalPathsFromRulesAndSmartMailboxes;
- (void)_removeMailboxesWithAbsoluteURLs;
- (void)_removeMessageTypeFromRules;
- (BOOL)_removeMessageTypeFromSmartMailbox:(id)arg1 localProperties:(id)arg2;
- (void)_removeMessageTypeFromSmartMailboxes;
- (id)_reparseExchangeReferences;
- (void)_reparseReferencesForRowIDsByMailboxURL:(id)arg1;
- (void)_resetChangeIdentifierForGmailAccounts;
- (void)_resetConfigureDynamically;
- (void)_resetConversationsForExistingMessagesWithRowIDs:(id)arg1;
- (void)_resetSnippetColumn;
- (void)_sendSpotlightAttributesByPath:(id)arg1;
- (void)_setHandle:(id)arg1;
- (void)_setSpotlightAttributesForEMLXFilesInMailbox:(id)arg1 mailboxURLString:(id)arg2;
- (void)_stampCurrentMinorVersion:(NSUInteger)arg1;
- (void)_startMigratorServiceForAppleScriptFilesAndRules;
- (void)_startMigratorServiceForMailDownloads;
- (id)_systemAccountsWithAccountTypeIdentifiers:(id)arg1;
- (void)_updateCoalescedAddressReferences;
- (void)_updateMailboxURLUnicodeComposition;
- (void)_updateSmartMailboxUnreadMessages;
- (void)_updateSmartMailboxUnreadMessagesForMailboxes:(id)arg1;
- (void)_updateSpotlightAttributes;
- (void)_updateSpotlightAttributesWithMultipleRecipients;
- (void)_updateUIDNext;
- (void)_upgradeFromLeopardToSnowLeopard;
- (void)_upgradeFromLionToMountainLion;
- (void)_upgradeFromMavericksToSUMavericksBoard;
- (void)_upgradeFromMountainLionToSUMountainCalypso;
- (void)_upgradeFromSUMavericksBoardToSUMavericksCarve;
- (void)_upgradeFromSUMavericksCarveToSUMavericksDune;
- (void)_upgradeFromSUMavericksDuneToYosemite;
- (void)_upgradeFromSUMountainCalypsoToMavericks;
- (void)_upgradeFromSUSnowFeltToLion;
- (void)_upgradeFromSUYosemiteDomeToElCapitan;
- (void)_upgradeFromSnowLeopardToSUSnowFelt;
- (void)_upgradeFromTigerToLeopard;
- (void)_upgradeFromYosemiteToSUYosemiteDome:(NSUInteger)arg1;
- (void)_upgradeSchema:(id)arg1;
- (void)_upgradeSchemaFromBackBooting:(id)arg1;
- (id)_upgradeStepsAndUpgradeStepsFromBackBooting:(id *)arg1 withHandle:(id)arg2;
- (void)_upgradeV1V2Schema;
- (id)_urlV1V2StringForMailboxDirectory:(id)arg1 account:(id)arg2 levelFromAccountDirectory:(NSUInteger)arg3;
- (void)_useWALJournalingIfPossible;
- (void)_vacuum;
@property(readonly, nonatomic) ACAccountStore *accountStore;
@property(retain, nonatomic) MCActivityAggregate *activity; // @synthesize activity=_activity;
- (void)dealloc;
@property(nonatomic) __weak id <MFLibraryUpgraderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fixMailDownloadsMigrationKey;
- (void)incrementProgressIndicator;
- (void)incrementProgressIndicatorWithThreshold:(NSUInteger)arg1;
- (id)init;
@property(nonatomic) NSUInteger initialLastWriteMinorVersion; // @synthesize initialLastWriteMinorVersion=_initialLastWriteMinorVersion;
@property(readonly, nonatomic) long long libraryStatus;
@property(nonatomic) NSUInteger majorVersion; // @synthesize majorVersion=_majorVersion;
- (void)makeAppleScriptReferencesInRulesUseOnlyLastPathComponent;
@property(nonatomic) NSUInteger minorVersion; // @synthesize minorVersion=_minorVersion;
@property(retain, nonatomic) MCActivityMonitor *monitor; // @synthesize monitor=_monitor;
@property(nonatomic) BOOL readOnly; // @synthesize readOnly=_readOnly;
- (void)resetProgressItemsWithTotal:(NSUInteger)arg1 andStatusMessage:(id)arg2;
- (void)run;
- (void)setProgressItemTotal:(NSUInteger)arg1;
@property(nonatomic) BOOL shouldNormalizeMailboxPaths; // @synthesize shouldNormalizeMailboxPaths=_shouldNormalizeMailboxPaths;
@property(nonatomic) BOOL shouldRecalculateAutomatedConversations; // @synthesize shouldRecalculateAutomatedConversations=_shouldRecalculateAutomatedConversations;
@property(nonatomic) BOOL shouldRecalculateConversations; // @synthesize shouldRecalculateConversations=_shouldRecalculateConversations;
@property(nonatomic) BOOL shouldRecalculateMessageCounts; // @synthesize shouldRecalculateMessageCounts=_shouldRecalculateMessageCounts;
@property(nonatomic) BOOL shouldRemoveJunkColors; // @synthesize shouldRemoveJunkColors=_shouldRemoveJunkColors;
@property(nonatomic) BOOL shouldRemoveLocalPathsFromRulesAndSmartMailboxes; // @synthesize shouldRemoveLocalPathsFromRulesAndSmartMailboxes=_shouldRemoveLocalPathsFromRulesAndSmartMailboxes;
@property(nonatomic) BOOL shouldRemoveMailboxesWithAbsoluteURLs; // @synthesize shouldRemoveMailboxesWithAbsoluteURLs=_shouldRemoveMailboxesWithAbsoluteURLs;
@property(nonatomic) BOOL shouldReparseExchangeReferences; // @synthesize shouldReparseExchangeReferences=_shouldReparseExchangeReferences;
@property(nonatomic) BOOL shouldResetChangeIdentifierForGmailAccounts; // @synthesize shouldResetChangeIdentifierForGmailAccounts=_shouldResetChangeIdentifierForGmailAccounts;
@property(nonatomic) BOOL shouldResetDynamicAccountConfiguration; // @synthesize shouldResetDynamicAccountConfiguration=_shouldResetDynamicAccountConfiguration;
@property(nonatomic) BOOL shouldResetSnippets; // @synthesize shouldResetSnippets=_shouldResetSnippets;
@property(nonatomic) BOOL shouldUpdateFavoritePersistentIDUnicodeComposition; // @synthesize shouldUpdateFavoritePersistentIDUnicodeComposition=_shouldUpdateFavoritePersistentIDUnicodeComposition;
@property(nonatomic) BOOL shouldUpdateMailboxURLs; // @synthesize shouldUpdateMailboxURLs=_shouldUpdateMailboxURLs;
@property(nonatomic) BOOL shouldUpdateSpotlightAttributes; // @synthesize shouldUpdateSpotlightAttributes=_shouldUpdateSpotlightAttributes;
@property(nonatomic) BOOL shouldUpdateSpotlightAttributesWithMultipleRecipients; // @synthesize shouldUpdateSpotlightAttributesWithMultipleRecipients=_shouldUpdateSpotlightAttributesWithMultipleRecipients;
@property(nonatomic) BOOL shouldUpdateSubjectPrefixes; // @synthesize shouldUpdateSubjectPrefixes=_shouldUpdateSubjectPrefixes;
@property(nonatomic) BOOL shouldUpdateUIDNext; // @synthesize shouldUpdateUIDNext=_shouldUpdateUIDNext;
- (void)updateFavoritePersistentIDUnicodeComposition;
- (void)upgradeAppleScriptFilesAndRules;
- (void)upgradeMailDataIfNecessary;
- (void)upgradeMailDownloadsFiles;
- (void)upgradeRulesFromLion;
- (void)upgradeSignaturesFromLion;
- (void)upgradeSmartMailboxesFromLion;
@property(readonly, nonatomic) NSArray *upgradeSteps;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
