//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import <MCThrowingInvocationOperation.h>

@interface MCMainThreadInvocationOperation : MCThrowingInvocationOperation
{
    BOOL _isExecuting;
    BOOL _isFinished;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)_finish;
- (void)_setIsExecuting:(BOOL)arg1;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (void)start;

@end

