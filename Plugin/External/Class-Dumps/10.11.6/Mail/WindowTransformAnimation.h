//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class FullScreenModalCapableWindow, ModalDimmingWindow;

@interface WindowTransformAnimation : NSAnimation
{
    BOOL _cancelled;
    long long _animationType;
    FullScreenModalCapableWindow *_window;
    ModalDimmingWindow *_dimmingWindow;
    long long _dimmingFade;
    double _maxScreenPosition;
    struct CGPoint _anchorPoint;
}

+ (id)windowTransformAnimationWithWindow:(id)arg1 dimmingWindow:(id)arg2 type:(long long)arg3;
- (NSUInteger)_animationCurveForAnimationType:(long long)arg1;
- (double)_animationDurationForAnimationType:(long long)arg1;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(readonly, nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (void)cancelAnimation;
@property(nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
- (void)dealloc;
@property(readonly, nonatomic) long long dimmingFade; // @synthesize dimmingFade=_dimmingFade;
@property(readonly, nonatomic) ModalDimmingWindow *dimmingWindow; // @synthesize dimmingWindow=_dimmingWindow;
- (id)initWithDuration:(double)arg1 animationCurve:(NSUInteger)arg2;
- (id)initWithWindow:(id)arg1 dimmingWindow:(id)arg2 type:(long long)arg3;
@property(readonly, nonatomic) double maxScreenPosition; // @synthesize maxScreenPosition=_maxScreenPosition;
- (void)setCurrentProgress:(float)arg1;
- (void)setWindowFlyInTranslationProgress:(double)arg1;
- (void)setWindowMagnificationForProgress:(double)arg1 anchorPoint:(struct CGPoint)arg2;
- (void)startAnimation;
@property(readonly, nonatomic) FullScreenModalCapableWindow *window; // @synthesize window=_window;

@end

