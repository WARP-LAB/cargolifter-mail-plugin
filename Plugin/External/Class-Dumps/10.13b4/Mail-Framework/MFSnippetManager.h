//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "MFSnippetCalculatorDelegate-Protocol.h"

@class MFSnippetCalculator, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface MFSnippetManager : NSObject <MFSnippetCalculatorDelegate>
{
    NSMutableSet *_messagesNeedingBodies;
    id _pendingSnippetsLock;
    NSMutableDictionary *_pendingSnippetDictionariesByStore;
    BOOL _queuedUpdate;
    MFSnippetCalculator *_snippetCalculator;
    NSOperationQueue *_snippetCommitQueue;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)log;
+ (id)sharedInstance;
- (void)_commitPendingSnippets;
- (void)_messageBodyDataAvailable:(id)arg1;
- (void)_queueCommitPendingSnippets;
- (void)dealloc;
- (void)didCalculateSnippet:(id)arg1 forMessage:(id)arg2;
- (id)fetchSnippetsForMessages:(id)arg1;
- (id)init;
@property(readonly, nonatomic) MFSnippetCalculator *snippetCalculator; // @synthesize snippetCalculator=_snippetCalculator;
@property(readonly, nonatomic) NSOperationQueue *snippetCommitQueue; // @synthesize snippetCommitQueue=_snippetCommitQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

