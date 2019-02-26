//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSData;

@interface MCDataScanner : NSObject
{
    NSData *_data;
    NSUInteger _scanLocation;
}

+ (id)scannerWithData:(id)arg1;
- (BOOL)_scanBytes:(const void *)arg1 length:(NSUInteger)arg2 intoData:(id *)arg3;
- (BOOL)_scanUpToBytes:(const void *)arg1 length:(NSUInteger)arg2 intoData:(id *)arg3;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)init;
- (id)initWithData:(id)arg1;
@property(readonly, nonatomic) BOOL isAtEnd;
- (BOOL)scanByte:(char *)arg1;
- (BOOL)scanBytesFromSet:(id)arg1 intoData:(id *)arg2;
- (BOOL)scanCString:(const char *)arg1 intoData:(id *)arg2;
- (BOOL)scanData:(id)arg1 intoData:(id *)arg2;
- (BOOL)scanInteger:(long long *)arg1;
@property(nonatomic) NSUInteger scanLocation; // @synthesize scanLocation=_scanLocation;
- (BOOL)scanUpToBytesFromSet:(id)arg1 intoData:(id *)arg2;
- (BOOL)scanUpToCString:(const char *)arg1 intoData:(id *)arg2;
- (BOOL)scanUpToData:(id)arg1 intoData:(id *)arg2;

@end
