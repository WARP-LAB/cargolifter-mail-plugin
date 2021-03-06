//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import <MFMessageStore.h>

@class MFMailAccount;

@interface MFParentalControlStore : MFMessageStore
{
}

+ (BOOL)createEmptyStoreForPath:(id)arg1;
- (id)_defaultRouterDestination;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (void)_rebuildTableOfContentsSynchronously;
- (void)deleteLastMessageWithHeaders:(id)arg1 compactWhenDone:(BOOL)arg2;
- (void)fetchSynchronously;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)arg1;
@property(readonly, nonatomic) MFMailAccount *realAccount;
- (void)saveChanges;
- (void)setParentalControlMessageState:(long long)arg1 forMessage:(id)arg2;
- (void)setParentalControlMessageState:(long long)arg1 forMessages:(id)arg2;
- (BOOL)shouldCallCompactWhenClosing;
- (void)updateMetadata;
- (void)writeUpdatedMessageDataToDisk;

@end

