//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "MFWebMessageDocument.h"

@class DOMHTMLDocument, DOMHTMLElement, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSURL;

@interface EditableWebMessageDocument : MFWebMessageDocument
{
    DOMHTMLElement *_contentElement;
    NSMutableDictionary *_savedUserContent;
    NSMutableDictionary *_savedUserAttachments;
    NSMutableArray *_orderedUserAttachmentsURLs;
    NSMutableArray *_savedUserImages;
    NSMutableDictionary *_backgroundImageAttachments;
    DOMHTMLDocument *_htmlDocument;
    NSDictionary *_remoteAttachments;
    NSURL *_imageArchiveURL;
    NSURL *_imageArchiveDownloadURL;
    NSDate *_expirationDate;
}

- (void)_addAttachmentsFromArchive:(id)arg1;
- (void)_addAttachmentsFromResource:(id)arg1;
- (void)addMailDropBannerWithSize:(NSUInteger)arg1;
- (id)attachmentElementEnumeratorForRange:(id)arg1 withOptions:(NSUInteger)arg2;
- (id)attachmentElementEnumeratorWithOptions:(NSUInteger)arg1;
- (id)attachmentForURLString:(id)arg1;
- (id)attachments;
- (id)attachmentsInRange:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *attachmentsIncludingBackgrounds;
- (id)backgroundImageAttachments;
@property(copy, nonatomic) DOMHTMLElement *contentElement;
- (void)convertAOSBoundAttachmentsToLinks;
- (void)copyBackgroundImageFromURL:(id)arg1 toURL:(id)arg2;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (void)forgetAllSavedContentAttachmentsAndImages;
- (void)forgetSavedContentWithKeys:(id)arg1;
@property(retain, nonatomic) DOMHTMLDocument *htmlDocument; // @synthesize htmlDocument=_htmlDocument;
@property(retain, nonatomic) NSURL *imageArchiveDownloadURL; // @synthesize imageArchiveDownloadURL=_imageArchiveDownloadURL;
@property(retain, nonatomic) NSURL *imageArchiveURL; // @synthesize imageArchiveURL=_imageArchiveURL;
- (void)insertSavedUserImagesIntoCompositeImages;
- (id)orderedCompositeImagesAndTheirURLs:(id *)arg1;
- (id)prepareToAddArchive:(id)arg1;
@property(copy, nonatomic) NSDictionary *remoteAttachments; // @synthesize remoteAttachments=_remoteAttachments;
- (void)removeAllBackgroundAttachments;
- (void)removeAllCompositeImageAttachments;
- (void)removeSavedUserAttachmentWithURL:(id)arg1;
- (void)saveAttachmentsWithURLsAsBackgroundAttachments:(id)arg1;
- (void)saveUserAttachments:(id)arg1 withOrdering:(id)arg2;
- (void)saveUserContent:(id)arg1;
- (void)saveUserImagesFromCompositeImages;
- (id)savedUserAttachmentForURL:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *savedUserAttachmentsOrdering;
- (id)savedUserContent;
@property(readonly, copy, nonatomic) NSArray *savedUserImagesFromCompositeImages;
- (id)userImageDictionaryFromAttachment:(id)arg1 withURL:(id)arg2;

@end

