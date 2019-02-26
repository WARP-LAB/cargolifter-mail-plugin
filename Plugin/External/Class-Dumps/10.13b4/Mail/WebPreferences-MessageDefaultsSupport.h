//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "WebPreferences.h"

@interface WebPreferences (MessageDefaultsSupport)
+ (id)_unrenderedUserStyleSheet;
+ (id)plainTextComposeWebPreferences;
+ (id)plainTextMailWebPreferences;
+ (id)richTextComposeWebPreferences;
+ (id)richTextMailWebPreferences;
+ (id)unrenderedMailWebPreferences;
- (void)_configureCommonPlainTextPreferences;
- (void)_configureCommonPreferences;
- (void)_configureCommonRichTextPreferences;
- (void)_configureComposePlainTextPreferences:(id)arg1;
- (void)_configureComposeRichPreferences:(id)arg1;
- (void)_configureFixedFont;
- (void)_configurePlainTextMessagePreferences:(id)arg1;
- (void)_configureRichTextMessagePreferences:(id)arg1;
- (id)_userStyleSheetURLIsForCompose:(BOOL)arg1;
@end
