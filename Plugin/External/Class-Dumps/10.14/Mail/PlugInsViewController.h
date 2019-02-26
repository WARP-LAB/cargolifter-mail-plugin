//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "TerminationHandler-Protocol.h"

@class NSArray, NSButton, NSMutableSet, NSProgressIndicator, NSString, NSTableView, NSTextField;

@interface PlugInsViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, NSUserInterfaceValidations, TerminationHandler>
{
    NSArray *_bundles;
    NSMutableSet *_bundlesToUninstall;
    NSMutableSet *_bundlesToInstall;
    NSTableView *_tableView;
    NSButton *_applyButton;
    NSButton *_cancelButton;
    NSTextField *_progressLabel;
    NSProgressIndicator *_progressIndicator;
}

- (void)_applyAndReopenMail:(id)arg1;
- (void)_showInFinder:(id)arg1;
- (void)_updateApplyButton;
@property(retain, nonatomic) NSButton *applyButton; // @synthesize applyButton=_applyButton;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSTextField *progressLabel; // @synthesize progressLabel=_progressLabel;
- (void)setState:(long long)arg1 forBundle:(id)arg2;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewDidDisappear;
- (void)viewWillAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
