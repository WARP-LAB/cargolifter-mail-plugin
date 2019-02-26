//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class MCMessageHeaders, MFPOPConnection, NSData;

@protocol MFPOPConnectionDelegate <NSObject>
- (void)connection:(MFPOPConnection *)arg1 didRetrieveData:(NSData *)arg2 forMessageNumber:(NSUInteger)arg3;
- (void)connection:(MFPOPConnection *)arg1 receivedNumberOfBytes:(NSUInteger)arg2;
- (long long)connection:(MFPOPConnection *)arg1 willRetrieveMessageNumber:(NSUInteger)arg2 header:(MCMessageHeaders *)arg3 size:(NSUInteger)arg4;
@property(readonly, nonatomic) BOOL connectionShouldPrefetchMessages;
@end
