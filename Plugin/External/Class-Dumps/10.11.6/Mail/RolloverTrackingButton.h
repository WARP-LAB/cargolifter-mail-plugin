//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "ButtonPlus.h"

@class NSTrackingArea;

@interface RolloverTrackingButton : ButtonPlus
{
    BOOL _usesRolloverAppearanceInInactiveWindow;
    BOOL _usesRolloverAppearanceOnMouseDown;
    BOOL _redrawOnMouseEnteredAndExited;
    BOOL _mouseIsOver;
    BOOL _trackingMouseDown;
    id <RolloverTrackingButtonDelegate> _delegate;
    NSTrackingArea *_trackingArea;
}

- (void)_rolloverTrackingButtonCommonInit;
- (void)dealloc;
@property(nonatomic) __weak id <RolloverTrackingButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseEnteredOrExited:(BOOL)arg1;
- (void)mouseExited:(id)arg1;
@property(nonatomic) BOOL mouseIsOver; // @synthesize mouseIsOver=_mouseIsOver;
- (void)mouseUp:(id)arg1;
@property(nonatomic) BOOL redrawOnMouseEnteredAndExited; // @synthesize redrawOnMouseEnteredAndExited=_redrawOnMouseEnteredAndExited;
- (void)rightMouseDown:(id)arg1;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) BOOL trackingMouseDown; // @synthesize trackingMouseDown=_trackingMouseDown;
@property(nonatomic) BOOL usesRolloverAppearanceInInactiveWindow; // @synthesize usesRolloverAppearanceInInactiveWindow=_usesRolloverAppearanceInInactiveWindow;
@property(nonatomic) BOOL usesRolloverAppearanceOnMouseDown; // @synthesize usesRolloverAppearanceOnMouseDown=_usesRolloverAppearanceOnMouseDown;
@property(readonly, nonatomic) BOOL shouldUseRolloverAppearance;
- (void)updateMouseIsOver;
- (void)updateMouseIsOver:(long long)arg1;
- (void)updateTrackingAreas;

@end

