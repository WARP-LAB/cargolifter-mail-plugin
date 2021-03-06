//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "ImageConverterDelegate-Protocol.h"
#import "MCCIDURLProtocolDataProvider-Protocol.h"

@class DOMHTMLObjectElement, ImageConverter, MCAttachment, NSArray, NSImage, NSItemProvider, NSMutableArray, NSString, NSURL;

@interface AttachmentViewController : NSObject <ImageConverterDelegate, MCCIDURLProtocolDataProvider, NSCopying>
{
    NSMutableArray *_attachmentViews;
    BOOL _canBeDisplayedInline;
    BOOL _canBeDisplayedInRegisteredViewer;
    NSImage *_inlineImage;
    BOOL _isBeingDisplayedInline;
    BOOL _isInvisible;
    struct CGSize _targetImageSize;
    struct CGSize _previousTargetImageSize;
    struct CGSize _currentImageSize;
    BOOL _isImageOriginal;
    ImageConverter *_imageConverter;
    BOOL _imageConversionOptionsComputed;
    NSUInteger _imageConversionOptions;
    BOOL _needsForcedJPEGConversion;
    BOOL _originalImageSizeHasBeenComputed;
    struct CGSize _originalImageSize;
    BOOL _isImageBeingConverted;
    MCAttachment *_attachment;
    DOMHTMLObjectElement *_objectElement;
    long long _domNodeWidth;
    long long _domNodeHeight;
}

+ (Class)_viewProviderClassForMimeType:(id)arg1;
+ (void)registerViewingClass:(Class)arg1 forMimeTypes:(id)arg2;
- (void)_attachmentDidFinishReading:(id)arg1;
- (void)_computeImagePropertiesIfNecessary;
- (void)_imageDataDidChange:(id)arg1;
- (struct CGSize)_imageSizeForTag:(long long)arg1;
- (void)_revertImageToOriginal;
- (void)_updateInlineImage;
- (void)addAttachmentView:(id)arg1;
@property(readonly, nonatomic) MCAttachment *attachment; // @synthesize attachment=_attachment;
@property(readonly, copy, nonatomic) NSArray *attachmentViews;
@property(nonatomic) BOOL canBeDisplayedInline;
@property(readonly) NSURL *cidURL;
- (BOOL)convertAttachmentForSelectedImageConversionOption:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dataWithCompletionBlock:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long domNodeHeight; // @synthesize domNodeHeight=_domNodeHeight;
@property(nonatomic) long long domNodeWidth; // @synthesize domNodeWidth=_domNodeWidth;
@property(readonly, copy, nonatomic) NSImage *iconImage;
@property(readonly, nonatomic) NSUInteger imageConversionOptions;
- (void)imageConverter:(id)arg1 didFinishConversionWithResultCode:(long long)arg2;
- (id)init;
- (id)initWithAttachment:(id)arg1;
@property(readonly, copy, nonatomic) NSImage *inlineImage;
@property(nonatomic) BOOL isBeingDisplayedInline;
@property(nonatomic) BOOL isImageBeingConverted; // @synthesize isImageBeingConverted=_isImageBeingConverted;
@property(readonly, nonatomic) NSItemProvider *itemProvider;
@property(readonly, copy) NSString *mimeType;
@property(retain, nonatomic) DOMHTMLObjectElement *objectElement; // @synthesize objectElement=_objectElement;
@property(readonly, nonatomic) struct CGSize originalImageSize;
- (void)setInvisible:(BOOL)arg1;
@property(readonly, nonatomic) BOOL shouldBeDisplayedInlineByDefault;
@property(readonly, nonatomic) struct CGSize targetImageSize; // @synthesize targetImageSize=_targetImageSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) long long fileSize;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

