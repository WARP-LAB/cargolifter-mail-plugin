//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class MFMailbox, NSString;

@interface MFDefaults : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)defaultNameForFlagColor:(BOOL)arg1;
+ (NSUInteger)deferredPreferredWindowBackingLocation;
+ (NSUInteger)preferredWindowBackingLocation;
+ (void)setPreferredWindowBackingLocation:(NSUInteger)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic) MFMailbox *archiveMailbox;
- (BOOL)boolForKey:(id)arg1;
@property(nonatomic) long long composeMode;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
@property(readonly, nonatomic) MFMailbox *draftsMailbox;
- (id)init;
- (long long)integerForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (BOOL)synchronize;
@property(readonly, copy, nonatomic) NSString *trashMailboxName;

@end
