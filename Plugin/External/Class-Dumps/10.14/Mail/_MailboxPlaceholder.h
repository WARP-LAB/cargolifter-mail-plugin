//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "MFUIMailbox-Protocol.h"

@class NSArray, NSImage, NSString;

@interface _MailboxPlaceholder : NSObject <MFUIMailbox>
{
    BOOL _isContainer;
    int _mailboxType;
    NSString *_persistentID;
    NSString *_displayName;
    NSString *_accountURLString;
}

@property(readonly, nonatomic) NSImage *accountIcon;
@property(copy, nonatomic) NSString *accountURLString; // @synthesize accountURLString=_accountURLString;
@property(readonly, copy) NSArray *children;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger displayCount;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *extendedDisplayName;
@property(readonly) BOOL hasChildren;
- (id)init;
- (id)initWithPersistentID:(id)arg1 name:(id)arg2 accountURLString:(id)arg3 type:(int)arg4 isContainer:(BOOL)arg5;
@property(readonly, nonatomic) BOOL isAccountActive;
@property(nonatomic) BOOL isContainer; // @synthesize isContainer=_isContainer;
- (BOOL)isDescendantOfMailboxWithType:(int)arg1;
@property(readonly, nonatomic) BOOL isLocal;
@property(readonly, nonatomic) BOOL isPlaceholder;
@property(readonly, nonatomic) BOOL isSpotlightMailbox;
@property(readonly, nonatomic) BOOL isStore;
@property(readonly) BOOL isVisibleFlaggedMailbox;
@property int mailboxType; // @synthesize mailboxType=_mailboxType;
@property(readonly) NSUInteger numberOfChildren;
@property(copy, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
