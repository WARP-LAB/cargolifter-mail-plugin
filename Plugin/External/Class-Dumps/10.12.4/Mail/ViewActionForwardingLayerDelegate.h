//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "CALayerDelegate-Protocol.h"

@class NSString, NSView;

@interface ViewActionForwardingLayerDelegate : NSObject <CALayerDelegate>
{
    NSView *_view;
}

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithView:(id)arg1;
@property(readonly, nonatomic) __weak NSView *view; // @synthesize view=_view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

