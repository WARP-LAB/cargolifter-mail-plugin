//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import <MFDeliveryAccount.h>

@class MFSMTPConnection, NSOperationQueue, NSTimer;

@interface MFSMTPAccount : MFDeliveryAccount
{
    MFSMTPConnection *_connection;
    id _smtpAccountLock;
    NSTimer *_timer;
    NSOperationQueue *_connectionCleanupQueue;
    long long _lastTimerSetTime;
}

+ (id)accountTypeString;
+ (id)standardPorts;
+ (id)standardSSLPorts;
- (void)_connectionExpired:(id)arg1;
- (void)_disconnect:(id)arg1;
- (id)_hostnameFromParentAccount:(id)arg1;
- (BOOL)_parentSystemAccountDidUpdateProperties:(id)arg1 changedSystemAccount:(char *)arg2;
- (void)_setTimer;
- (id)authenticatedConnection;
- (BOOL)canAuthenticateWithCurrentCredentials;
- (void)checkInConnection:(id)arg1;
- (BOOL)connectAndAuthenticate:(id)arg1;
@property(readonly, nonatomic) NSOperationQueue *connectionCleanupQueue; // @synthesize connectionCleanupQueue=_connectionCleanupQueue;
- (long long)defaultPortNumber;
- (NSUInteger)hash;
- (id)init;
- (id)initWithSystemAccount:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) long long lastTimerSetTime; // @synthesize lastTimerSetTime=_lastTimerSetTime;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
- (id)newDelivererWithMessage:(id)arg1;
- (id)objectSpecifier;
- (id)portNumberObject;
- (void)releaseAllConnections;
- (id)saslProfileName;
- (id)usesSSLObject;

@end

