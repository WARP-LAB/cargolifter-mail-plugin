//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "IMAPMessage-Protocol.h"
#import "MCChanging-Protocol.h"

@class NSData, NSString;

@protocol IMAPPersistedMessage <IMAPMessage, MCChanging>
- (void)appendMimeData:(NSData *)arg1 partNumber:(NSString *)arg2;
@property(readonly, nonatomic) long long libraryID;
@property(copy) NSString *remoteID;
- (void)setData:(NSData *)arg1 isPartial:(BOOL)arg2;
@end
