//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSArray, NSDictionary, NSMutableArray;

@interface _MFSetFlags : NSObject
{
    NSMutableArray *_messages;
    NSDictionary *_flagsToSet;
}

- (void)addMessages:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *flagsToSet; // @synthesize flagsToSet=_flagsToSet;
- (NSUInteger)hash;
- (id)init;
- (id)initWithFlagsDictionary:(id)arg1 messages:(id)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *messages;

@end
