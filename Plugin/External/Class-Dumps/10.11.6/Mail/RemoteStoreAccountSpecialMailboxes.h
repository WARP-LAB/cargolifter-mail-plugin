//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "SpecialMailboxes.h"

@class NSButton;

@interface RemoteStoreAccountSpecialMailboxes : SpecialMailboxes
{
    NSButton *_keepDraftsOnServer;
    NSButton *_keepSentMessagesOnServer;
    NSButton *_keepTrashOnServer;
    NSButton *_keepJunkOnServer;
}

- (BOOL)isAccountInformationDirty:(id)arg1;
@property(nonatomic) __weak NSButton *keepDraftsOnServer; // @synthesize keepDraftsOnServer=_keepDraftsOnServer;
@property(nonatomic) __weak NSButton *keepJunkOnServer; // @synthesize keepJunkOnServer=_keepJunkOnServer;
@property(nonatomic) __weak NSButton *keepSentMessagesOnServer; // @synthesize keepSentMessagesOnServer=_keepSentMessagesOnServer;
@property(nonatomic) __weak NSButton *keepTrashOnServer; // @synthesize keepTrashOnServer=_keepTrashOnServer;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (BOOL)setupAccountFromValuesInUI:(id)arg1;
- (void)setupUIFromValuesInAccount:(id)arg1;

@end
