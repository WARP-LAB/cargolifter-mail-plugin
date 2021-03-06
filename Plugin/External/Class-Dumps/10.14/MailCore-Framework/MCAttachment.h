//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "MCAttachmentDataSource-Protocol.h"

@class MCFileWrapper, MCStationeryCompositeImage, NSData, NSDate, NSError, NSImage, NSNumber, NSProgress, NSString, NSURL;

@interface MCAttachment : NSObject
{
    id _cachedFetchedDataLock;
    NSData *_cachedFetchedData;
    id _cachedFetchedFileWrapperLock;
    MCFileWrapper *_cachedFetchedFileWrapper;
    NSImage *_iconImage;
    id _archiveFileWrapperLock;
    BOOL _isAutoArchiveAttachment;
    NSURL *_remoteURL;
    struct CGSize _resizedImageSize;
    BOOL _isPlayableByQTKit;
    BOOL _isMailDropImageArchive;
    BOOL _isMailDropImageThumbnail;
    BOOL _isMailDropIndividualImage;
    BOOL _isMessageExternalBodyWithURL;
    BOOL _isUnreferencedAttachment;
    BOOL _shouldHideExtension;
    BOOL _isCalendarInvitation;
    BOOL _hasResourceForkData;
    unsigned short _finderFlags;
    unsigned int _type;
    unsigned int _creator;
    id <MCAttachmentDataSource> _dataSource;
    NSProgress *_downloadProgress;
    NSDate *_downloadURLExpiration;
    NSError *_downloadError;
    NSString *_cloudKitRecordName;
    NSURL *_downloadURL;
    NSString *_filenameForSaving;
    NSString *_filename;
    NSNumber *_filePermissions;
    NSNumber *_fileSize;
    NSString *_mimePartNumber;
    NSString *_contentID;
    NSNumber *_mimeEncodedContentLength;
    NSString *_mimeType;
    NSString *_extension;
    NSString *_mailSpecialHandlingType;
    MCStationeryCompositeImage *_stationeryCompositeImage;
    NSData *_resizedData;
    NSString *_originalFilename;
    NSString *_originalMimeType;
}

+ (id)keyPathsForValuesAffectingIsDataDownloaded;
+ (id)log;
- (id)_cleanImageMetadataFromData:(id)arg1;
- (id)_freshFileWrapper;
- (BOOL)_hasPrivateImageMetadata:(id)arg1;
- (void)_mcAttachmentCommonInit;
- (id)_preferredFilenameForFileWrapper:(id)arg1;
- (id)_privateImageMetadataDescriptors;
- (void)_setupFileWrapper:(id)arg1;
- (NSUInteger)approximateSizeForAccessLevel:(long long)arg1;
@property(retain, nonatomic) NSData *cachedFetchedData;
@property(retain, nonatomic) MCFileWrapper *cachedFetchedFileWrapper;
@property(copy, nonatomic) NSString *cloudKitRecordName; // @synthesize cloudKitRecordName=_cloudKitRecordName;
- (void)configureWithFileWrapper:(id)arg1;
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(readonly, copy, nonatomic) NSString *contentIDHash;
@property(readonly, nonatomic) BOOL couldConfuseWindowsClients;
- (BOOL)createEmptyAttachmentAtURL:(id)arg1;
- (id)createTemporaryFile;
@property(nonatomic) unsigned int creator; // @synthesize creator=_creator;
- (id)dataForAccessLevel:(long long)arg1;
- (void)dataForAccessLevel:(long long)arg1 completionBlock:(id)arg2;
@property(retain, nonatomic) id <MCAttachmentDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)debugDescription;
- (id)description;
- (void)discardIconImage;
@property(retain, nonatomic) NSError *downloadError; // @synthesize downloadError=_downloadError;
@property(retain, nonatomic) NSProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(retain, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(retain, nonatomic) NSDate *downloadURLExpiration; // @synthesize downloadURLExpiration=_downloadURLExpiration;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSNumber *filePermissions; // @synthesize filePermissions=_filePermissions;
@property(retain, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
- (void)fileWrapperForAccessLevel:(long long)arg1 completionBlock:(id)arg2;
- (id)fileWrapperForAccessLevel:(long long)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) NSString *filenameForSaving; // @synthesize filenameForSaving=_filenameForSaving;
@property(readonly, copy, nonatomic) NSString *filenameWithoutHiddenExtension;
@property(nonatomic) unsigned short finderFlags; // @synthesize finderFlags=_finderFlags;
- (BOOL)getCompressedData:(id *)arg1 compressedFileURL:(id *)arg2 archiveType:(long long *)arg3 error:(id *)arg4;
- (void)getTypeIdentifier:(id *)arg1 andPedigree:(id *)arg2;
@property(readonly, nonatomic) BOOL hasPendingBackgroundRead;
@property(nonatomic) BOOL hasResourceForkData; // @synthesize hasResourceForkData=_hasResourceForkData;
@property(retain, nonatomic) NSImage *iconImage;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileWrapper:(id)arg1;
- (id)initWithMailInternalData:(id)arg1;
- (id)initWithMimePart:(id)arg1;
- (id)initWithStationeryCompositeImage:(id)arg1;
- (BOOL)isAnimatedImageForAccessLevel:(long long)arg1;
@property(readonly, nonatomic) BOOL isAudio;
@property(nonatomic) BOOL isAutoArchiveAttachment; // @synthesize isAutoArchiveAttachment=_isAutoArchiveAttachment;
@property(nonatomic) BOOL isCalendarInvitation; // @synthesize isCalendarInvitation=_isCalendarInvitation;
@property(readonly, nonatomic) BOOL isDataDownloaded;
@property(readonly, nonatomic) BOOL isDirectory;
@property(readonly, nonatomic) BOOL isFullSize;
@property(readonly, nonatomic) BOOL isImage;
- (void)isImage:(char *)arg1 isPDF:(char *)arg2 bestMimeType:(id *)arg3;
@property(nonatomic) BOOL isMailDropImageArchive; // @synthesize isMailDropImageArchive=_isMailDropImageArchive;
@property(nonatomic) BOOL isMailDropImageThumbnail; // @synthesize isMailDropImageThumbnail=_isMailDropImageThumbnail;
@property(nonatomic) BOOL isMailDropIndividualImage; // @synthesize isMailDropIndividualImage=_isMailDropIndividualImage;
@property(readonly, nonatomic) BOOL isMessageExternalBodyWithURL; // @synthesize isMessageExternalBodyWithURL=_isMessageExternalBodyWithURL;
@property(readonly, nonatomic) BOOL isPDF;
@property(nonatomic) BOOL isPartOfStationery;
@property(nonatomic) BOOL isPlayableByQTKit; // @synthesize isPlayableByQTKit=_isPlayableByQTKit;
@property(readonly, nonatomic) BOOL isRemotelyAccessed;
@property(readonly, nonatomic) BOOL isStationeryCompositeImage;
@property(nonatomic) BOOL isUnreferencedAttachment; // @synthesize isUnreferencedAttachment=_isUnreferencedAttachment;
@property(readonly, nonatomic) BOOL isVideo;
@property(copy, nonatomic) NSString *mailSpecialHandlingType; // @synthesize mailSpecialHandlingType=_mailSpecialHandlingType;
@property(readonly, nonatomic) NSNumber *mimeEncodedContentLength; // @synthesize mimeEncodedContentLength=_mimeEncodedContentLength;
@property(readonly, copy, nonatomic) NSString *mimePartNumber; // @synthesize mimePartNumber=_mimePartNumber;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property(copy, nonatomic) NSString *originalMimeType; // @synthesize originalMimeType=_originalMimeType;
@property(retain, nonatomic) NSURL *remoteURL;
@property(readonly, copy, nonatomic) NSData *resizedData; // @synthesize resizedData=_resizedData;
@property(readonly, nonatomic) struct CGSize resizedImageSize;
- (void)revertToOriginalData;
- (void)setFileNameForResizedImage:(id)arg1;
- (void)setMimeTypeForResizedImage:(id)arg1;
- (void)setResizedData:(id)arg1 imageSize:(struct CGSize)arg2;
@property(nonatomic) BOOL shouldHideExtension; // @synthesize shouldHideExtension=_shouldHideExtension;
@property(retain, nonatomic) MCStationeryCompositeImage *stationeryCompositeImage; // @synthesize stationeryCompositeImage=_stationeryCompositeImage;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void)takeNewDataFromPath:(id)arg1;
@property(readonly, nonatomic) MCAttachment *uneditableAttachment;

@end

