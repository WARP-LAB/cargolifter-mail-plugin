//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "MTMMessage.h"

@class NSDictionary;

@interface MTMFakeMessage : MTMMessage
{
    NSDictionary *_messageDescription;
}

- (id)init;
- (id)initWithDescription:(id)arg1;
- (NSUInteger)messageFlags;
- (NSUInteger)readFlags;
- (id)valueForKey:(id)arg1;

@end

