//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSNotification, NSText;

@protocol NSTextDelegate <NSObject>

@optional
- (void)textDidBeginEditing:(NSNotification *)arg1;
- (void)textDidChange:(NSNotification *)arg1;
- (void)textDidEndEditing:(NSNotification *)arg1;
- (BOOL)textShouldBeginEditing:(NSText *)arg1;
- (BOOL)textShouldEndEditing:(NSText *)arg1;
@end

