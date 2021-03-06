//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class ComposeBackEnd, NSPort, NSSet;

@interface ScriptingComposeViewControllerFactory : NSObject
{
    BOOL _showEditor;
    BOOL _editorHasInitialized;
    ComposeBackEnd *_backEnd;
    long long _editedMessageType;
    NSSet *_targetMessages;
    NSPort *_initializationPort;
}

+ (id)fullyInitalizedComposeControllerWithBackEnd:(id)arg1 type:(long long)arg2 targetMessages:(id)arg3 showEditor:(BOOL)arg4;
- (void)_editorHasInitialized:(id)arg1;
- (id)_fullyInitalizedComposeController;
@property(readonly, nonatomic) ComposeBackEnd *backEnd; // @synthesize backEnd=_backEnd;
- (void)dealloc;
@property(readonly, nonatomic) long long editedMessageType; // @synthesize editedMessageType=_editedMessageType;
@property(nonatomic) BOOL editorHasInitialized; // @synthesize editorHasInitialized=_editorHasInitialized;
- (id)init;
- (id)initWithBackEnd:(id)arg1 editedMessageType:(long long)arg2 targetMessages:(id)arg3 showEditor:(BOOL)arg4;
@property(readonly, nonatomic) NSPort *initializationPort; // @synthesize initializationPort=_initializationPort;
@property(readonly, nonatomic) BOOL showEditor; // @synthesize showEditor=_showEditor;
@property(readonly, copy, nonatomic) NSSet *targetMessages; // @synthesize targetMessages=_targetMessages;

@end

