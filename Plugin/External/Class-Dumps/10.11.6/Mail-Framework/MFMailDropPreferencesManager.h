//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@interface MFMailDropPreferencesManager : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic) long long attachmentTTL;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) float maxMessageSize;
@property(readonly, nonatomic) float minMessageSize;
- (BOOL)validateURL:(id)arg1;

@end
