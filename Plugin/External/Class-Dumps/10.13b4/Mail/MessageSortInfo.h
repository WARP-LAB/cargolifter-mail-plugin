//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "ManagedListSortInfo.h"

@class NSMutableDictionary, NSString;

@interface MessageSortInfo : NSObject <ManagedListSortInfo>
{
    NSMutableDictionary *_sortValues;
    id <MFMessageSortingValueDelegate> _sortValueDelegate;
}

- (id)init;
- (id)initWithSortOrders:(id)arg1;
- (id)newComparatorWithSortOrders:(id)arg1;
- (void)registerSortInfoForObject:(id)arg1;
- (void)registerSortInfoForObjects:(id)arg1;
@property(nonatomic) __weak id <MFMessageSortingValueDelegate> sortValueDelegate; // @synthesize sortValueDelegate=_sortValueDelegate;
- (void)unregisterSortInfoForObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
