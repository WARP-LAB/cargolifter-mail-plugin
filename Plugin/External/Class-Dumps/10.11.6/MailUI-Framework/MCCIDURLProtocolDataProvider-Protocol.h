//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSData, NSString, NSURL;

@protocol MCCIDURLProtocolDataProvider <NSObject>
@property(readonly) NSURL *cidURL;
@property(readonly, copy) NSData *data;
@property(readonly, copy) NSString *mimeType;

@optional
@property(readonly) long long fileSize;
@end

