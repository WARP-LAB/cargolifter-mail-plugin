//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "MCCIDURLProtocolDataProvider-Protocol.h"

@class NSData, NSImage, NSString, NSURL;

@interface _MUIWebAttachmentIconPrintingDataProvider : NSObject <MCCIDURLProtocolDataProvider>
{
    NSImage *_iconImage;
    NSURL *_cidURL;
    NSURL *_markupCIDURL;
}

@property(readonly) NSURL *cidURL; // @synthesize cidURL=_cidURL;
@property(readonly, copy) NSData *data;
@property(retain) NSImage *iconImage; // @synthesize iconImage=_iconImage;
- (id)init;
- (id)initWithImage:(id)arg1 baseURL:(id)arg2;
@property(retain, nonatomic) NSURL *markupCIDURL; // @synthesize markupCIDURL=_markupCIDURL;
@property(readonly, copy) NSString *mimeType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) long long fileSize;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
