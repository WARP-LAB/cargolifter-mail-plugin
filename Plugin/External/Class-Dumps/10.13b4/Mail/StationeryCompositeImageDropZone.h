//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class MCStationeryCompositeImageMask, NSData, NSDictionary, NSImage, NSNumber, NSString;

@interface StationeryCompositeImageDropZone : NSObject
{
    NSImage *_userImage;
    double _zoomFactor;
    struct CGSize _panningOffset;
    BOOL _userImageNeedsDownsizedData;
    BOOL _useTemporaryImageForDrawing;
    NSData *_userImageOriginalData;
    NSNumber *_userImageOriginalFileType;
    NSString *_userImageID;
    MCStationeryCompositeImageMask *_mask;
    NSData *_userImageData;
    NSString *_userImageOriginalFileName;
    NSImage *_temporaryUserImage;
    double _temporaryZoomFactor;
    NSData *_temporaryUserImageData;
    NSData *_temporaryUserImageOriginalData;
    NSString *_temporaryUserImageOriginalFileName;
    NSNumber *_temporaryUserImageOriginalFileType;
    NSString *_temporaryUserImageID;
    NSImage *_compositedUserImage;
    NSImage *_rolloverImage;
    struct CGSize _temporaryPanningOffset;
}

- (void)abandonTemporaryUserImage;
@property(readonly, nonatomic) struct CGSize actualMaskSize;
@property(readonly, nonatomic) struct CGRect boundingBox;
@property(retain, nonatomic) NSImage *compositedUserImage; // @synthesize compositedUserImage=_compositedUserImage;
- (id)compositedUserImageIsForRollover:(char *)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (struct CGSize)disallowedOffsetOfVisibleRect:(struct CGRect)arg1 ofImageRect:(struct CGRect)arg2;
@property(readonly, nonatomic) double dropZoneAngle;
@property(readonly, nonatomic) struct CGSize dropZoneOffset;
@property(readonly, nonatomic) struct CGRect dropZoneRect;
@property(readonly, nonatomic) struct CGSize dropZoneSize;
- (void)getCurrentDrawingImage:(id *)arg1 zoomFactor:(double *)arg2 panningOffset:(struct CGSize *)arg3;
- (id)init;
- (id)initWithMask:(id)arg1;
- (void)initialScaling:(double *)arg1 offset:(struct CGSize *)arg2 forImage:(id)arg3;
- (void)makeTemporaryUserImagePermanent;
@property(readonly, nonatomic) MCStationeryCompositeImageMask *mask; // @synthesize mask=_mask;
@property(nonatomic) struct CGSize panningOffset;
@property(retain, nonatomic) NSImage *rolloverImage; // @synthesize rolloverImage=_rolloverImage;
- (void)setDownsizedUserImageData:(id)arg1;
@property(nonatomic) struct CGSize temporaryPanningOffset; // @synthesize temporaryPanningOffset=_temporaryPanningOffset;
@property(retain, nonatomic) NSImage *temporaryUserImage; // @synthesize temporaryUserImage=_temporaryUserImage;
@property(copy, nonatomic) NSData *temporaryUserImageData; // @synthesize temporaryUserImageData=_temporaryUserImageData;
@property(copy, nonatomic) NSDictionary *temporaryUserImageDictionary;
@property(copy, nonatomic) NSString *temporaryUserImageID; // @synthesize temporaryUserImageID=_temporaryUserImageID;
@property(copy, nonatomic) NSData *temporaryUserImageOriginalData; // @synthesize temporaryUserImageOriginalData=_temporaryUserImageOriginalData;
@property(copy, nonatomic) NSString *temporaryUserImageOriginalFileName; // @synthesize temporaryUserImageOriginalFileName=_temporaryUserImageOriginalFileName;
@property(retain, nonatomic) NSNumber *temporaryUserImageOriginalFileType; // @synthesize temporaryUserImageOriginalFileType=_temporaryUserImageOriginalFileType;
@property(nonatomic) double temporaryZoomFactor; // @synthesize temporaryZoomFactor=_temporaryZoomFactor;
@property(nonatomic) BOOL useTemporaryImageForDrawing; // @synthesize useTemporaryImageForDrawing=_useTemporaryImageForDrawing;
@property(retain, nonatomic) NSImage *userImage;
@property(copy, nonatomic) NSData *userImageData; // @synthesize userImageData=_userImageData;
- (void)setUserImageFromDictionary:(id)arg1;
@property(copy, nonatomic) NSString *userImageID; // @synthesize userImageID=_userImageID;
@property(nonatomic) BOOL userImageNeedsDownsizedData;
@property(copy, nonatomic) NSData *userImageOriginalData; // @synthesize userImageOriginalData=_userImageOriginalData;
@property(copy, nonatomic) NSString *userImageOriginalFileName; // @synthesize userImageOriginalFileName=_userImageOriginalFileName;
@property(retain, nonatomic) NSNumber *userImageOriginalFileType; // @synthesize userImageOriginalFileType=_userImageOriginalFileType;
@property(nonatomic) double zoomFactor;
- (id)userImageDictionary;
- (struct CGRect)visibleSubrectOfImage:(id)arg1 withZoomFactor:(double)arg2 panningOffset:(struct CGSize)arg3;

@end

