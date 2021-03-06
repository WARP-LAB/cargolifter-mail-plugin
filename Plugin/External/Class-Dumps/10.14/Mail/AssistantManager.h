//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "AssistantDelegate-Protocol.h"

@class Assistant, NSButton, NSEvent, NSString, NSView, NSWindow;

@interface AssistantManager : NSObject <AssistantDelegate>
{
    Assistant *_assistant;
    BOOL _userWantsToQuit;
    NSView *_assistantContainerView;
    NSButton *_backButton;
    NSButton *_forwardButton;
    NSButton *_cancelButton;
    NSWindow *_window;
    NSButton *_helpButton;
    NSEvent *_libraryUpgradeCompletedEvent;
    long long _type;
    AssistantManager *_me;
}

+ (BOOL)isImporting;
+ (id)openAssistantOfType:(long long)arg1 modalForWindow:(id)arg2;
+ (id)openAssistantOfType:(long long)arg1 modalForWindow:(id)arg2 userWantsToQuit:(char *)arg3;
- (id)_initWithType:(long long)arg1;
- (void)_moveWindowToFront:(id)arg1;
- (id)_newAssistantOfType:(long long)arg1;
- (void)_sheetWillBegin:(id)arg1;
- (void)_showInWindow:(id)arg1;
- (void)_start;
- (void)_terminate;
- (void)_windowDidBecomeKey:(id)arg1;
@property(retain, nonatomic) Assistant *assistant;
@property(nonatomic) __weak NSView *assistantContainerView; // @synthesize assistantContainerView=_assistantContainerView;
- (void)assistantDidFinish:(id)arg1;
- (void)back:(id)arg1;
@property(nonatomic) __weak NSButton *backButton; // @synthesize backButton=_backButton;
- (void)cancel:(id)arg1;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void)dealloc;
- (void)forward:(id)arg1;
@property(nonatomic) __weak NSButton *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(nonatomic) __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
- (id)init;
@property(retain, nonatomic) NSEvent *libraryUpgradeCompletedEvent; // @synthesize libraryUpgradeCompletedEvent=_libraryUpgradeCompletedEvent;
@property(retain, nonatomic) AssistantManager *me; // @synthesize me=_me;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) BOOL userWantsToQuit; // @synthesize userWantsToQuit=_userWantsToQuit;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

