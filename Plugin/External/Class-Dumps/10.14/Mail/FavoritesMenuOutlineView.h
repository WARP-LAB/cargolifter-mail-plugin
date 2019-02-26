//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class FavoritesMenuController, NSTrackingArea;

@interface FavoritesMenuOutlineView : NSOutlineView
{
    FavoritesMenuController *_controller;
    NSTrackingArea *_trackingArea;
}

- (void)_favoritesMenuOutlineViewCommonInitWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak FavoritesMenuController *controller; // @synthesize controller=_controller;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)scrollWheel:(id)arg1;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
- (void)updateTrackingAreas;

@end
