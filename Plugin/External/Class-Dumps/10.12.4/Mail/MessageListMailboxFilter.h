//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "MessageListFilter.h"

@class MFMailbox, NSImage, NSPredicate, NSString;

@interface MessageListMailboxFilter : NSObject <MessageListFilter>
{
    MFMailbox *_mailbox;
}

@property(readonly, copy, nonatomic) NSImage *icon;
- (id)init;
- (id)initWithMailbox:(id)arg1;
@property(readonly, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSPredicate *predicate;
@property(readonly, nonatomic) long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

