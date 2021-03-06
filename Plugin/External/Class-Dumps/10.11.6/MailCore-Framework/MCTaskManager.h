//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "MCActivityDelegate-Protocol.h"
#import "MCHandlerDelegate-Protocol.h"
#import "MCTaskListDelegate-Protocol.h"

@class MCTaskList, NSArray, NSMutableArray, NSMutableSet, NSOperationQueue, NSString;

@interface MCTaskManager : NSObject <MCTaskListDelegate, MCHandlerDelegate, MCActivityDelegate>
{
    NSMutableArray *_networkHandlers;
    NSMutableArray *_persistenceHandlers;
    NSMutableSet *_handlersCleaningUp;
    NSMutableSet *_activities;
    NSMutableSet *_bodyTrackers;
    NSMutableArray *_terminationBlocks;
    BOOL _reassignTasksWillRun;
    BOOL _hasActivity;
    NSOperationQueue *_serializationQueue;
    MCTaskList *_taskList;
    NSUInteger _maximumPersistenceHandlers;
    NSUInteger _maximumNetworkHandlers;
}

- (void)_reassignTasks;
- (void)activity:(id)arg1 didEncounterError:(id)arg2;
- (void)activityDidFinish:(id)arg1;
- (void)addActivity:(id)arg1;
- (void)addNetworkHandler:(id)arg1;
- (void)addPersistenceHandler:(id)arg1;
- (void)adjustHandlers;
- (void)assignActiveTasks;
- (void)assignIdleTasks;
- (void)bodyTracker:(id)arg1 didCacheBodiesForMessages:(id)arg2;
- (void)cleanUp;
- (void)dealloc;
- (void)failedToCreateNetworkHandler;
- (void)goOffline;
- (void)handler:(id)arg1 didFinishOperation:(id)arg2;
- (void)handlerDidCleanUp:(id)arg1;
@property BOOL hasActivity; // @synthesize hasActivity=_hasActivity;
- (id)init;
@property(readonly, nonatomic) BOOL isInSerializationQueue;
@property NSUInteger maximumNetworkHandlers; // @synthesize maximumNetworkHandlers=_maximumNetworkHandlers;
@property NSUInteger maximumPersistenceHandlers; // @synthesize maximumPersistenceHandlers=_maximumPersistenceHandlers;
@property(readonly, copy, nonatomic) NSArray *networkHandlers;
@property(readonly, nonatomic) BOOL networkIsLimited;
- (id)newBodyFetchContext;
- (id)newNetworkHandler;
- (id)newPersistenceHandler;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)orderedNetworkHandlers;
- (id)orderedPersistenceHandlers;
@property(readonly, copy, nonatomic) NSArray *persistenceHandlers;
@property BOOL reassignTasksWillRun; // @synthesize reassignTasksWillRun=_reassignTasksWillRun;
- (void)removeNetworkHandler:(id)arg1;
- (void)removePersistenceHandler:(id)arg1;
@property(readonly, nonatomic) NSOperationQueue *serializationQueue; // @synthesize serializationQueue=_serializationQueue;
@property(readonly, nonatomic) MCTaskList *taskList; // @synthesize taskList=_taskList;
- (void)taskListDidChange:(id)arg1;
- (void)tasksNeedAssignment;
- (void)terminate:(id)arg1;
@property(readonly, nonatomic) NSOperationQueue *utilityQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

