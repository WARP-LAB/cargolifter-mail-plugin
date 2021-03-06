//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class ConversationMember, MCActivityMonitor, MCMessageHeaders, MCTaskOperation, MUIWebDocument, NSMutableArray, NSOperationQueue;

@interface WebDocumentGenerator : NSObject
{
    NSMutableArray *_asyncLoadCompletionHandlers;
    MCActivityMonitor *_loadMonitor;
    MCTaskOperation *_fetchOperation;
    MCTaskOperation *_parseOperation;
    BOOL _startedLoad;
    BOOL _registeredForMessageDataAvailableNotification;
    MUIWebDocument *_webDocument;
    NSOperationQueue *_configurationSerialQueue;
    ConversationMember *_conversationMember;
    MCMessageHeaders *_messageHeaders;
}

- (id)_dataDetectorsContextForMessage:(id)arg1;
- (id)_loadQueue;
- (void)_messageBodyDataBecameAvailable:(id)arg1;
- (void)asyncLoadAllowingRemoteFetch:(BOOL)arg1 completionHandler:(id)arg2;
- (void)cancelLoad;
@property(readonly, nonatomic) NSOperationQueue *configurationSerialQueue; // @synthesize configurationSerialQueue=_configurationSerialQueue;
@property(readonly, nonatomic) __weak ConversationMember *conversationMember; // @synthesize conversationMember=_conversationMember;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithConversationMember:(id)arg1;
@property(retain, nonatomic) MCMessageHeaders *messageHeaders; // @synthesize messageHeaders=_messageHeaders;
@property(retain, nonatomic) MUIWebDocument *webDocument; // @synthesize webDocument=_webDocument;

@end

