//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "AttachmentManagerDelegate-Protocol.h"
#import "ImageConverterDelegate-Protocol.h"
#import "MCActivityTarget-Protocol.h"
#import "MFScriptingMessage-Protocol.h"

@class DOMHTMLDocument, DOMNode, EditableWebMessageDocument, MCInvocationQueue, MCMessage, MCMessageBody, MCMessageHeaders, MFDeliveryAccount, MFMailAccount, MFMailbox, MFSignature, NSArray, NSFont, NSInputStream, NSMutableArray, NSMutableData, NSMutableDictionary, NSMutableSet, NSNumber, NSOperationQueue, NSOutputStream, NSPort, NSScriptObjectSpecifier, NSString, NSUUID, NSUndoManager, NSUserActivity, StationeryController;

@interface ComposeBackEnd : NSObject <MFScriptingMessage, AttachmentManagerDelegate, ImageConverterDelegate, MCActivityTarget, NSStreamDelegate, NSUserActivityDelegate>
{
    StationeryController *_stationeryController;
    NSArray *_originalMessages;
    NSMutableDictionary *_originalMessageHeaders;
    NSMutableDictionary *_cleanHeaders;
    NSMutableDictionary *_extraRecipients;
    NSMutableDictionary *_directoriesByAttachment;
    id _smimeLock;
    NSMutableDictionary *_signingIdentities;
    NSMutableDictionary *_encryptionCertificates;
    NSMutableSet *_knownMessageIds;
    long long _type;
    BOOL _hasChanges;
    BOOL _shouldDownloadRemoteAttachments;
    BOOL _overrideRemoteAttachmentsPreference;
    NSMutableArray *_converters;
    NSMutableArray *_composeDataToStream;
    NSMutableData *_replyData;
    BOOL _includeHeaders;
    BOOL _canSign;
    BOOL _canEncrypt;
    BOOL _signIfPossible;
    BOOL _encryptIfPossible;
    BOOL _isUndeliverable;
    BOOL _isDeliveringMessage;
    BOOL _willCloseEditor;
    BOOL _sendAttachmentsViaMailDrop;
    BOOL _saveThreadCancelFlag;
    BOOL _hadChangesBeforeSave;
    BOOL _contentsWasEditedByUser;
    BOOL _didAppendMessageToOutbox;
    BOOL _isEditing;
    BOOL _isSendFormatInitialized;
    BOOL _attachmentUploadFailed;
    id <ComposeBackEndDelegate> _delegate;
    NSNumber *_uniqueID;
    NSString *_saveThreadMessageId;
    MFMailbox *_saveThreadMailbox;
    MCMessageBody *_originalMessageBody;
    EditableWebMessageDocument *_document;
    NSUUID *_documentID;
    NSUndoManager *_undoManager;
    long long _composeMode;
    MCMessageBody *_initialMessageBody;
    NSArray *_generatedMessageBodies;
    DOMNode *_stationerySignatureNode;
    NSUserActivity *_activity;
    MCInvocationQueue *_saveQueue;
    MCMessageBody *_restoredMessageBody;
    NSOperationQueue *_smimeQueue;
    long long _windowsFriendliness;
    NSUInteger _encodingHint;
    NSUInteger _composeDataOffset;
    NSOutputStream *_outputStream;
    NSInputStream *_inputStream;
    NSUInteger _replyBytesRead;
    NSUInteger _imagesToResize;
    NSPort *_resizePort;
    NSUInteger _imageArchiveSize;
    id <ComposeBackEndDelegate> _delegateScopeRetain;
    NSUUID *_placeholderMessageID;
}

+ (id)_workQueue;
+ (id)composeBackEndForUniqueID:(id)arg1;
+ (id)composeBackEndsByUniqueID;
+ (id)draftsLog;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingAccount;
+ (id)mailDropUploadsLog;
+ (void)registerComposeBackEnd:(id)arg1;
+ (id)supportedMailboxTypes;
+ (void)unregisterComposeBackEnd:(id)arg1;
- (void)_addRecipientsForKey:(id)arg1 toArray:(id)arg2;
- (void)_backgroundAppendEnded:(id)arg1;
- (void)_backgroundSaveDidChangeMessageId:(id)arg1;
- (void)_beginResizeOfImageAttachment:(id)arg1;
- (void)_ccOrBccMyselfGivenOriginalMessage:(id)arg1 uniquedRecipientsTable:(id)arg2;
- (void)_configureLastDraftInformationFromHeaders:(id)arg1 overwrite:(BOOL)arg2;
- (void)_configureLoadingOfRemoteAttachments;
- (void)_continueToSetupContentsForView:(id)arg1 withMessageBodies:(id)arg2;
- (long long)_convertSaveOrSendResultFromResultCodeT:(long long)arg1;
- (id)_copyOfContentsForDraft:(BOOL)arg1 shouldBePlainText:(BOOL)arg2 isOkayToForceRichText:(BOOL)arg3 isMailDropPlaceholderMessage:(BOOL)arg4;
- (id)_createAttachmentRecordWithZoneID:(id)arg1 data:(id)arg2 filename:(id)arg3 mimeType:(id)arg4 error:(id *)arg5;
- (id)_createImageAttachmentRecordWithZoneID:(id)arg1 images:(id)arg2 error:(id *)arg3;
- (void)_createUniqueID;
- (NSUInteger)_encodingHint;
- (id)_firstValidReplyAddress;
- (id)_formattedAddressMatchingRawAddress:(id)arg1 inAccount:(id)arg2;
- (void)_generateMessageBodiesFromOriginalMessages;
- (void)_initializeStationeryController;
- (BOOL)_isValidSaveDestination:(id)arg1;
- (id)_knownMessageIds;
- (id)_makeMessageWithContents:(id)arg1 isDraft:(BOOL)arg2 shouldSign:(BOOL)arg3 shouldEncrypt:(BOOL)arg4 shouldSkipSignature:(BOOL)arg5 shouldBePlainText:(BOOL)arg6;
- (void)_markForOverwrite:(id)arg1;
- (id)_newAttachmentRecordWithZoneID:(id)arg1 URL:(id)arg2 filesize:(id)arg3 filename:(id)arg4 mimeType:(id)arg5;
- (id)_newPlainTextRepresentationIncludeAttachments:(BOOL)arg1;
- (void)_notifyDelegateMonitor:(id)arg1 alreadyDone:(char *)arg2;
- (void)_recordZoneIDInDatabase:(id)arg1 completionHandler:(id)arg2;
- (void)_recursivelyURLifyNode:(id)arg1;
- (id)_replyAddressBasedOnSelection;
- (void)_revertAttachments:(id)arg1 andExecuteBlock:(id)arg2 withError:(id)arg3;
- (void)_saveRecipients;
- (void)_saveThreadRemoveLastSave;
- (void)_saveThreadSaveContentsUserInitiated:(BOOL)arg1;
- (void)_saveThreadSetMessageId:(id)arg1 mailbox:(id)arg2 overwrite:(id)arg3;
- (BOOL)_saveThreadShouldCancel;
- (void)_saveThreadUpdateAccount:(id)arg1 mailbox:(id)arg2;
- (void)_setCleanHeaders:(id)arg1;
- (void)_setStructuredList:(id)arg1 forHeader:(id)arg2;
- (void)_setupDefaultRecipientsFirstTime:(BOOL)arg1;
- (id)_structuredListForHeader:(id)arg1;
- (void)_synchronouslyAppendMessageToOutboxWithContents:(id)arg1;
- (void)_uploadAttachments:(id)arg1 completionBlock:(id)arg2;
@property(retain, nonatomic) MFMailAccount *account;
@property(retain, nonatomic) NSUserActivity *activity; // @synthesize activity=_activity;
- (void)addBaseURLTagToNode:(id)arg1;
- (void)addHeaders:(id)arg1;
- (id)addressListForHeader:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allRecipients;
- (id)appleScriptSender;
- (id)appleScriptSubject;
- (BOOL)attachmentCanBeSentInline:(id)arg1;
@property(nonatomic) BOOL attachmentUploadFailed; // @synthesize attachmentUploadFailed=_attachmentUploadFailed;
@property(readonly, copy, nonatomic) NSArray *attachments;
- (void)backgroundSaveEnded:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *bccRecipients;
@property BOOL canEncrypt; // @synthesize canEncrypt=_canEncrypt;
@property BOOL canSign; // @synthesize canSign=_canSign;
@property(readonly, copy, nonatomic) NSArray *ccRecipients;
- (id)cleanHeaders;
@property(nonatomic) NSUInteger composeDataOffset; // @synthesize composeDataOffset=_composeDataOffset;
@property(nonatomic) long long composeMode; // @synthesize composeMode=_composeMode;
@property(readonly, nonatomic) BOOL containsAttachments;
@property(readonly, nonatomic) BOOL containsAttachmentsThatCouldConfuseWindowsClients;
@property(readonly, nonatomic) BOOL containsRichText;
- (id)content;
@property(nonatomic) BOOL contentsWasEditedByUser; // @synthesize contentsWasEditedByUser=_contentsWasEditedByUser;
- (void)dealloc;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) BOOL defaultFormatIsRich;
- (id)defaultMessageStore;
@property(nonatomic) __weak id <ComposeBackEndDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <ComposeBackEndDelegate> delegateScopeRetain; // @synthesize delegateScopeRetain=_delegateScopeRetain;
- (void)deliverMessageCompletionHandler:(id)arg1;
@property(readonly, nonatomic) MFDeliveryAccount *deliveryAccount;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL didAppendMessageToOutbox; // @synthesize didAppendMessageToOutbox=_didAppendMessageToOutbox;
- (id)directoryForAttachment:(id)arg1;
@property(readonly, nonatomic) long long displayableMessagePriority;
@property(retain, nonatomic) EditableWebMessageDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) NSUUID *documentID; // @synthesize documentID=_documentID;
@property(nonatomic) NSUInteger encodingHint; // @synthesize encodingHint=_encodingHint;
@property(nonatomic) BOOL encryptIfPossible; // @synthesize encryptIfPossible=_encryptIfPossible;
- (void)fetchAndCacheMessages;
- (void)finishPreparingContent;
- (void)generateMessageBodies;
@property(copy, nonatomic) NSArray *generatedMessageBodies; // @synthesize generatedMessageBodies=_generatedMessageBodies;
- (void)getSignatureElement:(id *)arg1 parent:(id *)arg2 nextSibling:(id *)arg3;
@property(nonatomic) BOOL hadChangesBeforeSave; // @synthesize hadChangesBeforeSave=_hadChangesBeforeSave;
- (id)handleCloseScriptCommand:(id)arg1;
- (id)handleSaveMessageCommand:(id)arg1;
- (id)handleSendMessageCommand:(id)arg1;
@property(nonatomic) BOOL hasChanges;
@property(readonly, nonatomic) BOOL hasContents;
@property(readonly, nonatomic) BOOL hasStationery;
@property(readonly, nonatomic) DOMHTMLDocument *htmlDocumentForSave;
- (id)htmlStringForSignature:(id)arg1;
- (id)htmlStringFromRange:(id)arg1 htmlDocument:(id)arg2 removeCustomAttributes:(BOOL)arg3 convertObjectsToImages:(BOOL)arg4 convertEditableElements:(BOOL)arg5;
@property(nonatomic) NSUInteger imageArchiveSize; // @synthesize imageArchiveSize=_imageArchiveSize;
- (void)imageConverter:(id)arg1 didFinishConversionWithResultCode:(long long)arg2;
@property NSUInteger imagesToResize; // @synthesize imagesToResize=_imagesToResize;
@property(nonatomic) BOOL includeHeaders; // @synthesize includeHeaders=_includeHeaders;
- (id)init;
@property(retain, nonatomic) MCMessageBody *initialMessageBody; // @synthesize initialMessageBody=_initialMessageBody;
@property __weak NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
- (void)insertAddress:(id)arg1 forHeader:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)insertInBccRecipients:(id)arg1;
- (void)insertInBccRecipients:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)insertInCcRecipients:(id)arg1;
- (void)insertInCcRecipients:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)insertInToRecipients:(id)arg1;
- (void)insertInToRecipients:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)insertRecipient:(id)arg1 atIndex:(NSUInteger)arg2 inHeaderWithKey:(id)arg3;
- (BOOL)isAddressHeaderKey:(id)arg1;
@property(readonly, nonatomic) BOOL isAppleScriptMessage;
@property(readonly, nonatomic) BOOL isContentSignificant;
@property(nonatomic) BOOL isDeliveringMessage; // @synthesize isDeliveringMessage=_isDeliveringMessage;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
- (BOOL)isEditingMessage:(id)arg1;
@property(readonly, nonatomic) BOOL isRedirecting;
@property(readonly, nonatomic) BOOL isSavingMessage;
@property(nonatomic) BOOL isSendFormatInitialized; // @synthesize isSendFormatInitialized=_isSendFormatInitialized;
@property(nonatomic) BOOL isUndeliverable; // @synthesize isUndeliverable=_isUndeliverable;
- (BOOL)isVisible;
- (id)mailboxCreateIfNeeded:(BOOL)arg1;
- (id)message;
@property(readonly, copy, nonatomic) NSString *messageID;
- (id)messageSignature;
- (id)newOutgoingMessageUsingWriter:(id)arg1 contents:(id)arg2 headers:(id)arg3 isDraft:(BOOL)arg4 shouldBePlainText:(BOOL)arg5;
@property(readonly) NSScriptObjectSpecifier *objectSpecifier;
@property(readonly, nonatomic) BOOL okToAddSignatureAutomatically;
@property(readonly, nonatomic) BOOL okToLetUserAddSignature;
@property(retain, nonatomic) MCMessage *originalMessage;
@property(retain, nonatomic) MCMessageBody *originalMessageBody; // @synthesize originalMessageBody=_originalMessageBody;
@property(readonly, nonatomic) MCMessageHeaders *originalMessageHeaders;
@property __weak NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSUUID *placeholderMessageID; // @synthesize placeholderMessageID=_placeholderMessageID;
- (id)plainTextMessage;
- (id)recipients;
@property(readonly, copy, nonatomic) NSArray *recipientsThatHaveNoKeyForEncryption;
- (void)removeAddressForHeader:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)removeFromBccRecipientsAtIndex:(NSUInteger)arg1;
- (void)removeFromCcRecipientsAtIndex:(NSUInteger)arg1;
- (void)removeFromToRecipientsAtIndex:(NSUInteger)arg1;
- (void)removeLastDraft;
- (void)replaceFormattedAddress:(id)arg1 withAddress:(id)arg2 forKey:(id)arg3;
- (id)replyAddressForMessage:(id)arg1;
@property(nonatomic) NSUInteger replyBytesRead; // @synthesize replyBytesRead=_replyBytesRead;
@property(readonly, nonatomic) NSPort *resizePort; // @synthesize resizePort=_resizePort;
@property(retain, nonatomic) MCMessageBody *restoredMessageBody; // @synthesize restoredMessageBody=_restoredMessageBody;
- (BOOL)saveMessageDueToUserAction:(BOOL)arg1;
@property(readonly, nonatomic) MCInvocationQueue *saveQueue; // @synthesize saveQueue=_saveQueue;
@property(readonly, copy, nonatomic) NSString *saveTaskName;
@property BOOL saveThreadCancelFlag; // @synthesize saveThreadCancelFlag=_saveThreadCancelFlag;
@property(retain) MFMailbox *saveThreadMailbox; // @synthesize saveThreadMailbox=_saveThreadMailbox;
@property(copy) NSString *saveThreadMessageId; // @synthesize saveThreadMessageId=_saveThreadMessageId;
@property(nonatomic) BOOL sendAttachmentsViaMailDrop; // @synthesize sendAttachmentsViaMailDrop=_sendAttachmentsViaMailDrop;
@property(nonatomic) BOOL sendWindowsFriendlyAttachments;
@property(retain, nonatomic) NSString *sender;
- (void)setAddressList:(id)arg1 forHeader:(id)arg2;
- (void)setAppleScriptSender:(id)arg1;
- (void)setAppleScriptSubject:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setDefaultSenderIfNeeded;
- (void)setHtmlContent:(id)arg1;
- (void)setIsVisible:(BOOL)arg1;
- (void)setMessagePriority:(long long)arg1;
- (void)setMessageSignature:(id)arg1;
- (void)setOriginalMessages:(id)arg1;
- (void)setShouldDownloadRemoteAttachments:(BOOL)arg1;
@property(nonatomic) BOOL signIfPossible; // @synthesize signIfPossible=_signIfPossible;
@property(retain, nonatomic) MFSignature *signature;
- (void)setStateFromBackEnd:(id)arg1;
@property(retain, nonatomic) DOMNode *stationerySignatureNode; // @synthesize stationerySignatureNode=_stationerySignatureNode;
@property(retain, nonatomic) NSString *subject;
@property(nonatomic) long long type;
- (void)setTypeAndConfigureLoadingOfRemoteAttachments:(long long)arg1;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain, nonatomic) NSNumber *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)setVcardPath:(id)arg1;
@property(nonatomic) BOOL willCloseEditor; // @synthesize willCloseEditor=_willCloseEditor;
@property(nonatomic) long long windowsFriendliness; // @synthesize windowsFriendliness=_windowsFriendliness;
- (void)setupContentsForView:(id)arg1;
@property(readonly, copy, nonatomic) NSString *signatureId;
@property(readonly, nonatomic) NSOperationQueue *smimeQueue; // @synthesize smimeQueue=_smimeQueue;
@property(readonly, nonatomic) StationeryController *stationeryController;
- (void)stream:(id)arg1 handleEvent:(NSUInteger)arg2;
@property(readonly, copy, nonatomic) NSArray *toRecipients;
- (void)updateDocumentReference:(id)arg1;
- (void)updateSMIMEStatus:(id)arg1;
- (void)updateSaveDestinationAccount:(id)arg1 mailbox:(id)arg2;
- (void)userActivity:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3;
@property(readonly, nonatomic) NSFont *userDefaultMessageFont;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

