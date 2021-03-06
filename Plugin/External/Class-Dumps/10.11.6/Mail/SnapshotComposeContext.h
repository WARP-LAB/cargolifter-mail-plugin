//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "BasicComposeContext.h"

@interface SnapshotComposeContext : BasicComposeContext
{
    id _completion;
}

- (id)_newToolbarImageForWindow:(id)arg1;
- (id)_setUpCoverWindowForFrame:(struct CGRect)arg1;
@property(copy, nonatomic) id completion; // @synthesize completion=_completion;
- (void)controllerInitialized:(id)arg1;
- (void)generateQuotedContentWithCompletion:(id)arg1;
- (id)initWithCompletion:(id)arg1;
- (id)initWithType:(long long)arg1 targetMessages:(id)arg2;
- (void)presentEditor:(id)arg1 completion:(id)arg2;
- (BOOL)shouldBlockTermination;

@end

