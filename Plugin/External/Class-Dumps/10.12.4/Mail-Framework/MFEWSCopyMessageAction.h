//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import <MFEWSLocalMessageAction.h>

@class NSDictionary;

@interface MFEWSCopyMessageAction : MFEWSLocalMessageAction
{
    NSDictionary *_destinationMessagesBySourceItemIDs;
    NSDictionary *_destinationMessagesBySourceMessages;
    NSDictionary *_destinationItemIDsByMessage;
}

@property(copy, nonatomic) NSDictionary *destinationItemIDsByMessage; // @synthesize destinationItemIDsByMessage=_destinationItemIDsByMessage;
@property(copy, nonatomic) NSDictionary *destinationMessagesBySourceItemIDs; // @synthesize destinationMessagesBySourceItemIDs=_destinationMessagesBySourceItemIDs;
@property(copy, nonatomic) NSDictionary *destinationMessagesBySourceMessages; // @synthesize destinationMessagesBySourceMessages=_destinationMessagesBySourceMessages;
- (id)initWithMessageActionID:(long long)arg1 activityType:(id)arg2 mailbox:(id)arg3 userInitiated:(BOOL)arg4;
- (id)initWithMessageActionID:(long long)arg1 activityType:(id)arg2 mailbox:(id)arg3 userInitiated:(BOOL)arg4 destinationMessagesBySourceItemIDs:(id)arg5 destinationMessagesBySourceMessages:(id)arg6;
- (id)newSyncOperation;

@end
