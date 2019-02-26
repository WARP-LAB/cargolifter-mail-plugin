//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header



@class CALayer, FavoritesBarView, MailBarContainerButton, MessageViewer, NSButton, NSLayoutConstraint, NSStackView, NSString, _MailBarDividerView;

@interface MailBarContainerView : NSView <NSAccessibilityGroup>
{
    BOOL _isVisible;
    BOOL _barWasHiddenBeforeSearch;
    BOOL _isShowingSearchResults;
    MessageViewer *_messageViewer;
    long long _searchTarget;
    FavoritesBarView *_favoritesBarView;
    NSStackView *_stackView;
    NSStackView *_searchScopeView;
    NSView *_searchScopeClipView;
    MailBarContainerButton *_sidebarButton;
    NSButton *_saveButton;
    MailBarContainerButton *_primaryErrorButton;
    NSLayoutConstraint *_animationConstraint;
    MailBarContainerButton *_allButton;
    MailBarContainerButton *_extraButton;
    _MailBarDividerView *_topDivider;
    CALayer *_bottomDividerLayer;
}

- (void)_accountOfflineStatusChanged:(id)arg1;
- (void)_animateSearchScopeView:(BOOL)arg1;
- (void)_appearSearchScopeView:(BOOL)arg1;
- (id)_extraSearchButtonTitle;
- (void)_mailBarContainerViewCommonInit;
- (void)_networkStatusChanged:(id)arg1;
- (void)_saveButtonAction:(id)arg1;
- (void)_scopeChanged;
- (void)_scopeWillChange;
- (void)_setupSearchScopeViewUI;
- (void)_tearDown;
- (void)_toolbarVisibilityDidChange:(id)arg1;
- (void)_updatePrimaryErrorButton;
- (id)accessibilityChildren;
- (id)accessibilityLabel;
@property(nonatomic) __weak MailBarContainerButton *allButton; // @synthesize allButton=_allButton;
@property(retain, nonatomic) NSLayoutConstraint *animationConstraint; // @synthesize animationConstraint=_animationConstraint;
- (void)awakeFromNib;
@property(nonatomic) BOOL barWasHiddenBeforeSearch; // @synthesize barWasHiddenBeforeSearch=_barWasHiddenBeforeSearch;
@property(nonatomic) __weak CALayer *bottomDividerLayer; // @synthesize bottomDividerLayer=_bottomDividerLayer;
- (void)clearSearchButtons;
- (void)dealloc;
@property(nonatomic) __weak MailBarContainerButton *extraButton; // @synthesize extraButton=_extraButton;
@property(readonly, nonatomic) BOOL extraButtonsSelected;
@property(nonatomic) __weak FavoritesBarView *favoritesBarView; // @synthesize favoritesBarView=_favoritesBarView;
- (void)finishedShowHideAnimation;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)isFlipped;
@property(nonatomic) BOOL isShowingSearchResults; // @synthesize isShowingSearchResults=_isShowingSearchResults;
@property(nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
- (void)layoutSublayersOfLayer:(id)arg1;
@property(nonatomic) __weak MessageViewer *messageViewer; // @synthesize messageViewer=_messageViewer;
@property(nonatomic) __weak MailBarContainerButton *primaryErrorButton; // @synthesize primaryErrorButton=_primaryErrorButton;
- (void)primaryErrorButtonClicked:(id)arg1;
@property(nonatomic) __weak NSButton *saveButton; // @synthesize saveButton=_saveButton;
- (void)scopeButtonClicked:(id)arg1;
- (void)scopeToAllMailboxes;
@property(nonatomic) __weak NSView *searchScopeClipView; // @synthesize searchScopeClipView=_searchScopeClipView;
@property(nonatomic) __weak NSStackView *searchScopeView; // @synthesize searchScopeView=_searchScopeView;
@property(nonatomic) long long searchTarget; // @synthesize searchTarget=_searchTarget;
- (void)setCanSaveSearch:(BOOL)arg1;
- (void)setCanSearchSelectedMailbox:(BOOL)arg1;
- (void)setSearchScopeViewVisible:(BOOL)arg1 animate:(BOOL)arg2;
@property(nonatomic) __weak MailBarContainerButton *sidebarButton; // @synthesize sidebarButton=_sidebarButton;
@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak _MailBarDividerView *topDivider; // @synthesize topDivider=_topDivider;
- (void)updateConstraints;
- (void)updateLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
