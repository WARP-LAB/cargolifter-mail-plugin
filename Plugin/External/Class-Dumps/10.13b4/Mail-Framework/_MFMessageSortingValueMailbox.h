//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import <MFMessageSortingValue.h>

@class MFMailbox;

@interface _MFMessageSortingValueMailbox : MFMessageSortingValue
{
    MFMailbox *_mailbox;
}

- (void)dealloc;
- (id)description;
@property(retain, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;

@end
