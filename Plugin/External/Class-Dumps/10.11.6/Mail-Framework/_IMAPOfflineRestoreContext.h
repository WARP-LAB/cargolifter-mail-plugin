//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class IMAPServerInterface, MCActivityMonitor, NSMapTable, NSMutableDictionary, NSString;

@interface _IMAPOfflineRestoreContext : NSObject
{
    MCActivityMonitor *_monitor;
    IMAPServerInterface *_serverInterface;
    NSMapTable *_temporaryToRealUidMap;
    NSMutableDictionary *_storesByMailboxName;
    NSUInteger _currentSize;
    NSUInteger _totalSize;
    long long _activityAccessKey;
    NSString *_oldTaskName;
}

@property(nonatomic) long long activityAccessKey; // @synthesize activityAccessKey=_activityAccessKey;
@property(nonatomic) NSUInteger currentSize; // @synthesize currentSize=_currentSize;
- (id)description;
@property(retain, nonatomic) MCActivityMonitor *monitor; // @synthesize monitor=_monitor;
@property(copy, nonatomic) NSString *oldTaskName; // @synthesize oldTaskName=_oldTaskName;
@property(retain, nonatomic) IMAPServerInterface *serverInterface; // @synthesize serverInterface=_serverInterface;
@property(retain, nonatomic) NSMutableDictionary *storesByMailboxName; // @synthesize storesByMailboxName=_storesByMailboxName;
@property(retain, nonatomic) NSMapTable *temporaryToRealUidMap; // @synthesize temporaryToRealUidMap=_temporaryToRealUidMap;
@property(nonatomic) NSUInteger totalSize; // @synthesize totalSize=_totalSize;

@end
