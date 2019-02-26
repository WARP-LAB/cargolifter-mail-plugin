//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "BannerViewController.h"

@class NSButton, NSImageView, NSMutableArray, NSString, NSTextField;

@interface ParentBannerViewController : BannerViewController
{
    NSMutableArray *_requestedAddresses;
    BOOL _requestIsForSenders;
    NSImageView *_icon;
    NSTextField *_messageField;
    NSButton *_helpButton;
    NSButton *_respondButton;
    NSString *_childAddress;
    long long _permissionRequestState;
}

- (void)_parentBannerViewControllerCommonInit;
- (void)approveChildRequest:(id)arg1;
@property(nonatomic) __weak NSString *childAddress; // @synthesize childAddress=_childAddress;
- (void)dealloc;
@property(nonatomic) __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak NSImageView *icon; // @synthesize icon=_icon;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField=_messageField;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) long long permissionRequestState; // @synthesize permissionRequestState=_permissionRequestState;
- (void)rejectChildRequest:(id)arg1;
@property(nonatomic) BOOL requestIsForSenders; // @synthesize requestIsForSenders=_requestIsForSenders;
@property(nonatomic) __weak NSButton *respondButton; // @synthesize respondButton=_respondButton;
- (void)setRepresentedObject:(id)arg1;
- (void)updateBannerContents;
- (void)updateWantsDisplay;

@end
