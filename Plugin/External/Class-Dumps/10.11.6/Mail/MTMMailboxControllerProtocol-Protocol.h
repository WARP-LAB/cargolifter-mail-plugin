//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class MTMAccount, MTMFakeMailbox, MTMMailbox, MTMMessage, NSDictionary, NSURL, NSWindow;

@protocol MTMMailboxControllerProtocol <NSObject>
- (MTMAccount *)accountForAccountID:(id)arg1;
- (void)activate;
@property(readonly, nonatomic) BOOL activated;
- (void)adjustDisplayStateAfterTimeMachineStarted;
- (void)close;
- (void)deactivate;
@property(copy, nonatomic) NSDictionary *displayState;
@property(readonly, nonatomic) double fadeDuration;
@property(retain, nonatomic) NSURL *focusURL;
@property(readonly, nonatomic) NSURL *mailLibraryURL;
- (void)mailboxListWasUpdated:(MTMMailbox *)arg1;
- (void)mailboxListWillBeUpdated:(MTMMailbox *)arg1;
- (MTMMessage *)messageWithID:(id)arg1;
- (void)restore:(id)arg1;
- (id)revisionIDForURL:(NSURL *)arg1;
@property(readonly, nonatomic) MTMMailbox *rootMailbox;
@property(readonly, nonatomic) MTMMailbox *selectedMailbox;
- (void)showWindow:(id)arg1;
@property(readonly, nonatomic) NSURL *tocURL;
- (void)updateMessageListBindingsWithDisplayedMailbox:(MTMFakeMailbox *)arg1 scrollerDelta:(double)arg2;
- (void)updateThumbnail;
- (void)updateThumbnailAsGenericWindow;
@property(readonly, nonatomic) NSWindow *window;
@end

