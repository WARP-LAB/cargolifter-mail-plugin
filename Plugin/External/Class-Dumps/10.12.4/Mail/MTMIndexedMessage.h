//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "MTMMessage.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface MTMIndexedMessage : MTMMessage
{
    NSString *_realPath;
    BOOL _realPathComputed;
    NSString *_to;
    NSMutableDictionary *_computedAdditionalProperties;
    BOOL _hasCachedChange;
    BOOL _cachedChange;
    NSString *_identifier;
    NSDictionary *_attributes;
    NSUInteger _messageSize;
    NSUInteger _messageFlags;
    NSUInteger _readFlags;
}

- (id)URL;
@property(readonly, copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) BOOL cachedChange; // @synthesize cachedChange=_cachedChange;
- (void)computeAdditionalProperties;
@property(nonatomic) BOOL hasCachedChange; // @synthesize hasCachedChange=_hasCachedChange;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;
- (NSUInteger)messageFlags;
- (BOOL)messageHasChangedFromSnapshot:(id)arg1;
- (NSUInteger)messageSize;
- (id)path;
- (NSUInteger)readFlags;
- (id)savedDate;
- (id)subject;
- (id)to;
- (void)updateAdditionalPropertiesFromComputedProperties;

@end

