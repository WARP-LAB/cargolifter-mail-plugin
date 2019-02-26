//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "MessageList.h"

@class ManagedList, NSArray, NSString;

@interface SingletonMessageList : NSObject <MessageList>
{
    id <MessageListDelegate> _delegate;
    ManagedList *_listOfMessages;
}

- (void)addPrimaryMessages:(id)arg1 secondaryMessages:(id)arg2;
- (NSUInteger)adjustedIndexOfMessage:(id)arg1 adjustForChildren:(BOOL)arg2;
- (void)applyFilter;
@property(readonly, nonatomic) __weak id <MessageListDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)invert;
@property(readonly, nonatomic) ManagedList *listOfMessages; // @synthesize listOfMessages=_listOfMessages;
- (void)removeMessages:(id)arg1 andReplaceMessages:(id)arg2 animate:(BOOL)arg3;
- (void)resort;
@property(readonly, nonatomic) NSUInteger totalMessageCount;
@property(readonly, copy, nonatomic) NSArray *unrolledObjects;
- (void)updateMessages:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
