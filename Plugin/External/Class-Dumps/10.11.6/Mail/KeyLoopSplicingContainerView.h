//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@interface KeyLoopSplicingContainerView : NSView
{
    NSView *_firstKeyView;
    NSView *_lastKeyView;
    NSView *_externalNextKeyView;
}

@property(retain, nonatomic) NSView *externalNextKeyView; // @synthesize externalNextKeyView=_externalNextKeyView;
@property(nonatomic) __weak NSView *firstKeyView;
@property(nonatomic) __weak NSView *lastKeyView;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNextKeyView:(id)arg1;

@end
