//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "AccountStatusDataSourceDelegate-Protocol.h"

@class ACAccount, AccountStatusDataSource, NSError, NSMutableSet, NSNumber, NSOperationQueue, NSPopUpButton, NSStackView, NSString, NSView, NSWindow;

@interface ServerSettingsController : NSViewController <AccountStatusDataSourceDelegate>
{
    NSMutableSet *_accountsBeingVerified;
    NSError *_lastVerificationError;
    ACAccount *_lastAccountWithError;
    BOOL _accountNeedsSaving;
    BOOL _accountNeedsVerification;
    BOOL _isVerifying;
    NSStackView *_serverSettings;
    NSView *_dynamicallyManagedProperties;
    NSPopUpButton *_outgoingAccountPopUp;
    AccountStatusDataSource *_outgoingAccountDataSource;
    NSWindow *_advancedSettingsSheet;
    NSOperationQueue *_keychainQueue;
    NSPopUpButton *_tlsCertificatesPopup;
    NSWindow *_settingsVerificationSheet;
}

+ (id)keyPathsForValuesAffectingAccountAllowsInsecureAuthentication;
+ (id)keyPathsForValuesAffectingAccountDisablesDynamicConfiguration;
+ (id)keyPathsForValuesAffectingAccountPassword;
+ (id)keyPathsForValuesAffectingAccountUsername;
- (void)_serverSettingsControllerCommonInit;
@property(retain, nonatomic) NSNumber *accountAllowsInsecureAuthentication;
- (void)accountDidFailToVerify:(id)arg1;
@property(retain, nonatomic) NSNumber *accountDisablesDynamicConfiguration;
@property(nonatomic) BOOL accountNeedsSaving; // @synthesize accountNeedsSaving=_accountNeedsSaving;
@property(nonatomic) BOOL accountNeedsVerification; // @synthesize accountNeedsVerification=_accountNeedsVerification;
@property(copy, nonatomic) NSString *accountPassword;
@property(copy, nonatomic) NSString *accountUsername;
@property(retain, nonatomic) NSWindow *advancedSettingsSheet; // @synthesize advancedSettingsSheet=_advancedSettingsSheet;
- (void)advancedSettingsSheetOKButtonClicked:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak NSView *dynamicallyManagedProperties; // @synthesize dynamicallyManagedProperties=_dynamicallyManagedProperties;
- (void)editServerList:(id)arg1 selectedAccount:(id)arg2;
- (id)getAccountsNeedingVerification;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) BOOL isVerifying; // @synthesize isVerifying=_isVerifying;
@property(readonly, nonatomic) NSOperationQueue *keychainQueue; // @synthesize keychainQueue=_keychainQueue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) AccountStatusDataSource *outgoingAccountDataSource; // @synthesize outgoingAccountDataSource=_outgoingAccountDataSource;
- (void)outgoingAccountDidChange:(id)arg1;
@property(nonatomic) __weak NSPopUpButton *outgoingAccountPopUp; // @synthesize outgoingAccountPopUp=_outgoingAccountPopUp;
@property(retain) ACAccount *representedObject;
- (void)saveAccounts:(id)arg1;
@property(nonatomic) __weak NSStackView *serverSettings; // @synthesize serverSettings=_serverSettings;
@property(retain, nonatomic) NSWindow *settingsVerificationSheet; // @synthesize settingsVerificationSheet=_settingsVerificationSheet;
@property(nonatomic) __weak NSPopUpButton *tlsCertificatesPopup; // @synthesize tlsCertificatesPopup=_tlsCertificatesPopup;
- (void)setUpUIForAccount:(id)arg1;
- (void)showAdvancedSettings:(id)arg1;
- (id)title;
- (void)tlsCertificatesPopUpClicked:(id)arg1;
- (void)verifyAndSaveAccounts:(id)arg1;
- (void)viewDidLoad;
- (id)willPresentError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

