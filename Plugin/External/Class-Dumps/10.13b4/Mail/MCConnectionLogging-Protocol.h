//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSData, NSString;

@protocol MCConnectionLogging <NSObject>
- (void)flushLog;
- (void)logBytes:(void *)arg1 length:(NSUInteger)arg2;
- (void)logData:(NSData *)arg1;
- (void)logData:(NSData *)arg1 range:(struct _NSRange)arg2;
- (void)logString:(NSString *)arg1;
@end

