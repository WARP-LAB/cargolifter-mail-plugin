//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSArray, NSData, NSImage;

@protocol MCStationeryCompositeImageView <NSObject>
@property(readonly, nonatomic) long long approximateSize;
@property(readonly, copy, nonatomic) NSData *dataForCompositedImage;
@property(readonly, copy, nonatomic) NSArray *dataForDraggedImages;
- (void)setBaseImage:(NSImage *)arg1;
- (void)setOverlayImage:(NSImage *)arg1;
@end

