//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


//#import "MCActivityTarget-Protocol.h"
#import "TerminationHandler-Protocol.h"
#import "MailboxSelectionOwner-Protocol.h"

@class MFMailbox, MFSyncedFile, MailboxesChooser, NSArray, NSButton, NSConditionLock, NSMutableDictionary, NSMutableSet, NSPopUpButton, NSString, NSTextField, NSView, NSWindow;

@interface MailboxesController : NSObject <MCActivityTarget, NSMenuDelegate, TerminationHandler>
{
    MFMailbox *_currentTransferMailbox;
    NSConditionLock *_smartMailboxesNeedSavingLock;
    NSMutableSet *_rootMailboxMenus;
    NSMutableDictionary *_contextualMenus;
    BOOL _currentTransferDeletesOriginals;
    NSWindow *_makeNewMailboxPanel;
    NSTextField *_makeNewMailboxField;
    NSTextField *_makeNewMailboxMessage;
    NSButton *_makeNewMailboxOKButton;
    NSPopUpButton *_makeNewMailboxPopUp;
    MailboxesChooser *_makeNewMailboxChooser;
    NSView *_exportChildrenView;
    NSButton *_exportChildrenCheckbox;
    id <MailboxSelectionOwner> _mailboxSelectionOwner;
    MailboxesChooser *_menuMailboxesChooser;
    NSArray *_originalGlobalSortOrder;
}

+ (void)_createDownsizedImages;
+ (id)_filteredMailUserInfoDictionary:(id)arg1;
+ (id)_flagColorForColor:(BOOL)arg1;
+ (id)_iconForGenericMailboxWithSize:(long long)arg1 style:(NSUInteger)arg2;
+ (id)_iconForSmartMailboxWithSize:(long long)arg1 style:(NSUInteger)arg2;
+ (id)_imageForFlagColor:(BOOL)arg1 ofSize:(long long)arg2;
+ (id)_mergeOldMailUserInfoDictionary:(id)arg1 withSyncChanges:(id)arg2;
+ (id)iconForMailbox:(id)arg1 size:(long long)arg2 style:(NSUInteger)arg3;
- (void)_addLocalProperties:(id)arg1 toSmartMailboxes:(id)arg2;
- (void)_asynchronouslyChangeReadFlag:(BOOL)arg1 forMessages:(id)arg2;
- (void)_changeReadFlag:(BOOL)arg1 forMessages:(id)arg2;
- (void)_configureNewMailboxPanelForMailbox:(id)arg1;
- (void)_diagnosticsNotificationReceived:(id)arg1;
- (void)_exportMailboxes:(id)arg1 toDirectory:(id)arg2 includeChildren:(id)arg3;
- (void)_gatherMessagesForFlagChange:(id)arg1;
- (BOOL)_isCopyMenu:(id)arg1;
- (BOOL)_isMoveMenu:(id)arg1;
- (id)_loadDefaultSmartMailboxes;
- (id)_readSmartMailboxesFromDisk;
- (void)_reloadSmartMailboxesSyncedFile:(id)arg1;
- (void)_removeLocalProperties:(id)arg1 fromSmartMailboxes:(id)arg2;
- (void)_setSmartMailboxesNeedSaving:(BOOL)arg1;
- (void)_smartMailboxChanged:(id)arg1;
- (id)_smartMailboxesDictionaryRepresentationsFilteredForSync:(BOOL)arg1 localProperties:(id *)arg2;
- (id)_smartMailboxesFromDictionaryRepresentations:(id)arg1 andMergeOldUserInfoFromMailboxes:(BOOL)arg2;
- (BOOL)_smartMailboxesNeedSaving;
- (id)_sortMailboxes:(id)arg1 withIdentifiers:(id)arg2;
- (id)_sortMailboxesDictionaries:(id)arg1 withIdentifiers:(id)arg2;
- (void)_synchronouslyCopyMailboxes:(id)arg1 toParent:(id)arg2 atIndex:(NSUInteger)arg3 originalParent:(id)arg4;
- (void)_synchronouslyCreateNewMailboxWithName:(id)arg1 parent:(id)arg2;
- (void)_synchronouslyDeleteMailboxes:(id)arg1;
- (void)_synchronouslySetName:(id)arg1 andParent:(id)arg2 forMailboxes:(id)arg3 insertionIndex:(NSUInteger)arg4;
- (id)_unreadMessagesInMailbox:(id)arg1;
- (void)_updateDisplayIndexesInParentMailbox:(id)arg1 byMovingMailboxes:(id)arg2 toIndex:(NSUInteger)arg3;
- (void)_userEditedMailboxName:(id)arg1;
- (void)_writeSmartMailboxesToDisk;
- (void)_writeSmartMailboxesToDiskWithDelay;
- (void)addSmartMailbox:(id)arg1 select:(BOOL)arg2;
- (void)addSmartMailboxFolder:(id)arg1;
- (void)bringUpTransferMenu:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)copyMailboxes:(id)arg1 toParentMailbox:(id)arg2 atIndex:(NSUInteger)arg3;
@property(nonatomic) BOOL currentTransferDeletesOriginals; // @synthesize currentTransferDeletesOriginals=_currentTransferDeletesOriginals;
@property(readonly, nonatomic) MFMailbox *currentTransferMailbox;
- (void)dealloc;
- (void)deleteMailbox:(id)arg1;
- (void)duplicateSmartMailbox:(id)arg1;
- (void)editSmartMailbox:(id)arg1;
@property(nonatomic) __weak NSButton *exportChildrenCheckbox; // @synthesize exportChildrenCheckbox=_exportChildrenCheckbox;
@property(retain, nonatomic) NSView *exportChildrenView; // @synthesize exportChildrenView=_exportChildrenView;
- (void)exportMailbox:(id)arg1;
- (id)init;
- (void)initializeSmartMailboxes;
- (void)mailboxPopUpChanged:(id)arg1;
@property(nonatomic) __weak id <MailboxSelectionOwner> mailboxSelectionOwner; // @synthesize mailboxSelectionOwner=_mailboxSelectionOwner;
- (id)mailboxSelectionOwnerFromSender:(id)arg1;
@property(retain, nonatomic) MailboxesChooser *makeNewMailboxChooser; // @synthesize makeNewMailboxChooser=_makeNewMailboxChooser;
@property(nonatomic) __weak NSTextField *makeNewMailboxField; // @synthesize makeNewMailboxField=_makeNewMailboxField;
@property(nonatomic) __weak NSTextField *makeNewMailboxMessage; // @synthesize makeNewMailboxMessage=_makeNewMailboxMessage;
@property(nonatomic) __weak NSButton *makeNewMailboxOKButton; // @synthesize makeNewMailboxOKButton=_makeNewMailboxOKButton;
@property(retain, nonatomic) NSWindow *makeNewMailboxPanel; // @synthesize makeNewMailboxPanel=_makeNewMailboxPanel;
@property(nonatomic) __weak NSPopUpButton *makeNewMailboxPopUp; // @synthesize makeNewMailboxPopUp=_makeNewMailboxPopUp;
- (void)markAllAsRead:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (id)menuForMailbox:(id)arg1 isContextMenu:(BOOL)arg2;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
@property(retain, nonatomic) MailboxesChooser *menuMailboxesChooser; // @synthesize menuMailboxesChooser=_menuMailboxesChooser;
- (void)menuNeedsUpdate:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (BOOL)moveAccount:(id)arg1 toAfterAccount:(id)arg2;
- (BOOL)moveMailboxes:(id)arg1 toParentMailbox:(id)arg2 atIndex:(NSUInteger)arg3;
- (BOOL)moveOrCopy:(id)arg1 smartMailboxes:(id)arg2 toIndex:(NSUInteger)arg3;
- (void)newFolder:(id)arg1;
- (void)newGroup:(id)arg1;
- (void)newMailbox:(id)arg1;
- (void)newMailboxWithParent:(id)arg1;
- (void)newSmartMailbox:(id)arg1;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)okClicked:(id)arg1;
@property(retain, nonatomic) NSArray *originalGlobalSortOrder; // @synthesize originalGlobalSortOrder=_originalGlobalSortOrder;
- (id)previousMailboxIdentifiersOfType:(id)arg1 fromDictionary:(id)arg2;
- (id)previousSmartMailboxIdentifiersFromDictionary:(id)arg1;
- (id)previousVersionedSmartMailboxIdentifiersFromDictionary:(id)arg1;
- (void)readDefaults;
- (void)removeAccount:(id)arg1;
- (void)removeFromVIPSenders:(id)arg1;
- (void)renameMailbox:(id)arg1;
- (void)resignMailboxSelectionOwnerFor:(id)arg1;
- (void)saveDefaults;
- (void)setCurrentTransferMailbox:(id)arg1 deletedOriginals:(BOOL)arg2;
- (void)setSpecialMailbox:(id)arg1;
- (void)showOutOfOfficeSettings:(id)arg1;
- (void)smartMailboxWasEdited:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *smartMailboxes;
- (id)smartMailboxesPathForFile:(id)arg1;
@property(readonly, nonatomic) MFSyncedFile *smartMailboxesSyncedFile;
- (void)tentativelyAddSmartMailbox:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly) Class superclass;

@end

