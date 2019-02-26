//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class MFMailbox, NSArray, NSMenu, NSString, NSWindow;

@protocol MailboxSelectionOwner <NSObject>
@property(readonly, nonatomic) BOOL isSelectedMailboxSpecial;
- (BOOL)mailboxIsExpanded:(MFMailbox *)arg1;
@property(readonly, nonatomic) NSWindow *mailboxSelectionWindow;
- (void)revealMailbox:(MFMailbox *)arg1;
- (BOOL)sectionIsExpanded:(NSString *)arg1;
- (void)selectPathsToMailboxes:(NSArray *)arg1;
@property(readonly, nonatomic) MFMailbox *selectedMailbox;
@property(readonly, copy, nonatomic) NSArray *selectedMailboxes;
@property(readonly, copy, nonatomic) NSArray *sortedSectionItemsForTimeMachine;

@optional
- (void)didCloseContextMenu:(NSMenu *)arg1;
@property(readonly, copy, nonatomic) NSArray *expandedItems;
- (void)willShowContextMenu:(NSMenu *)arg1;
@end
