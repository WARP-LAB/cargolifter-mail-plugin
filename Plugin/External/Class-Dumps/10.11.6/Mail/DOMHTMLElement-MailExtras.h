//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "DOMHTMLElement.h"

@interface DOMHTMLElement (MailExtras)
+ (BOOL)isRichTextStyle:(id)arg1;
+ (BOOL)isRichTextStyleCheckingOnlyFont:(id)arg1;
+ (BOOL)isRichTextStyleNotCheckingFont:(id)arg1;
- (void)attachment:(id *)arg1 url:(id *)arg2 fromDocument:(id)arg3;
- (BOOL)hasClassName:(id)arg1;
- (BOOL)isRichTextElementForMessageFont:(id)arg1;
@property(readonly, nonatomic) BOOL isRichTextElementType;
- (void)recursivelyRemoveMailAttributes:(BOOL)arg1 convertObjectsToImages:(BOOL)arg2 convertEditableElements:(BOOL)arg3 removeDefaultColorStyle:(BOOL)arg4;
- (void)restoreEditableElementsEdited:(id *)arg1 unedited:(id *)arg2;
@end

