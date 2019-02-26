//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "MCConnection.h"

@class MFSMTPAccount, NSMutableArray, NSMutableData, NSString, _MFSMTPEnhancedStatusCode;

@interface MFSMTPConnection : MCConnection
{
    id _lastResponse;
    NSMutableArray *_serviceExtensions;
    NSMutableData *_mdata;
    NSString *_domainName;
    BOOL _needToSendGreeting;
    int _lastReplyCode;
    _MFSMTPEnhancedStatusCode *_lastStatusCode;
    double _originalSocketTimeout;
    double _timeLastCommandWasSent;
    long long _greeting;
    NSString *_logCategory;
}

- (BOOL)_authenticateWithSaslClient:(id)arg1;
- (BOOL)_completeConnectionWithResult:(BOOL)arg1;
- (long long)_doHandshakeTryHELOIfEHLOFails:(BOOL)arg1;
- (id)_domainName;
- (id)_getErrorFromFailedAuthentication;
- (long long)_getReply;
- (BOOL)_hasParameter:(id)arg1 forKeyword:(id)arg2;
- (id)_makeInvalidCredentialsError;
- (void)_readResponseRange:(struct _NSRange *)arg1 isContinuation:(char *)arg2;
- (long long)_sendCommand:(const char *)arg1 length:(NSUInteger)arg2 argument:(id)arg3 dontLogArgumentRange:(struct _NSRange)arg4 trailer:(unsigned char)arg5;
- (long long)_sendDataDontLogBytesInRange:(struct _NSRange)arg1;
- (long long)_sendEHLOWithClientDomainName:(id)arg1;
- (long long)_sendHELOWithClientDomainName:(id)arg1;
- (void)_setupConnection;
- (BOOL)_startTLS;
- (long long)_state;
@property __weak MFSMTPAccount *account;
- (BOOL)authenticate;
- (id)authenticationMechanisms;
- (BOOL)connectDiscoveringBestSettings:(BOOL)arg1;
- (id)errorURLScheme;
@property(nonatomic) long long greeting; // @synthesize greeting=_greeting;
- (id)init;
@property(nonatomic) int lastReplyCode; // @synthesize lastReplyCode=_lastReplyCode;
@property(readonly, copy, nonatomic) NSString *lastResponse;
@property(readonly, nonatomic) _MFSMTPEnhancedStatusCode *lastStatusCode; // @synthesize lastStatusCode=_lastStatusCode;
@property(retain, nonatomic) NSString *logCategory; // @synthesize logCategory=_logCategory;
- (long long)mailFrom:(id)arg1;
@property(readonly, nonatomic) NSUInteger maximumMessageBytes;
@property(nonatomic) BOOL needToSendGreeting; // @synthesize needToSendGreeting=_needToSendGreeting;
- (long long)noop;
@property(nonatomic) double originalSocketTimeout; // @synthesize originalSocketTimeout=_originalSocketTimeout;
- (void)quit;
- (long long)rcptTo:(id)arg1;
- (long long)sendDatas:(id)arg1;
@property(nonatomic) double timeLastCommandWasSent; // @synthesize timeLastCommandWasSent=_timeLastCommandWasSent;

@end
