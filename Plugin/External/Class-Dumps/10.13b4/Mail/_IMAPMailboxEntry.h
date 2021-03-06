//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class IMAPMailboxes, MFMailbox, NSArray, NSString;

@interface _IMAPMailboxEntry : NSObject
{
    NSArray *_filteredChildren;
    BOOL _subscribed;
    BOOL _isNoSelect;
    BOOL _hasEnabledDescendants;
    NSString *_name;
    NSString *_path;
    NSArray *_children;
    MFMailbox *_mailbox;
    _IMAPMailboxEntry *_parent;
    IMAPMailboxes *_controller;
}

@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
- (long long)compare:(id)arg1;
@property(nonatomic) __weak IMAPMailboxes *controller; // @synthesize controller=_controller;
@property(copy, nonatomic) NSArray *filteredChildren;
@property(nonatomic) BOOL hasEnabledDescendants; // @synthesize hasEnabledDescendants=_hasEnabledDescendants;
@property(nonatomic) BOOL isNoSelect; // @synthesize isNoSelect=_isNoSelect;
@property(readonly, nonatomic) BOOL isPathValidForCurrentFilter;
@property(readonly, nonatomic) BOOL isValidForCurrentFilter;
@property(retain, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) _IMAPMailboxEntry *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) BOOL subscribed; // @synthesize subscribed=_subscribed;

@end

