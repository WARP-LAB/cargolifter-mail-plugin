//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "FavoriteHoverViewDirectionProtocol.h"

@class FavoritesMenuOutlineView, NSScrollView, NSString, NSTimer, NSWindow, _FavoriteMenuScrollHoverView;

@interface FavoritesMenuController : NSObject <FavoriteHoverViewDirectionProtocol, NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    BOOL _isScrolling;
    BOOL _isOpeningMenu;
    BOOL _needsScrollers;
    id <FavoritesMenuDelegateProtocol> _delegate;
    NSWindow *_window;
    NSWindow *_parentWindow;
    id <MFUIMailbox> _mailbox;
    NSScrollView *_scrollView;
    FavoritesMenuOutlineView *_outlineView;
    id _mouseClickedMonitor;
    _FavoriteMenuScrollHoverView *_upScrollHoverView;
    _FavoriteMenuScrollHoverView *_downScrollHoverView;
    NSTimer *_scrollTimer;
}

+ (void)closeExitingMenu;
- (void)_applicationShouldClosePopup:(id)arg1;
- (BOOL)_canDragMessageIntoMailbox:(id)arg1;
- (void)_cleanupMenu;
- (void)_constrainWindowToScreen;
- (void)_dragEnded:(id)arg1;
- (NSUInteger)_dragOperationForCurrentEvent;
- (void)_insertOutlineViewInScrollView;
- (void)_mouseClickedInApplicationWithEvent:(id)arg1;
- (id)_nibForFavoriteMenuItemView;
- (void)_scrollToNextPoint:(id)arg1;
- (void)_sizeWindowToFitCells;
- (id)_titleForTopLevelMailbox:(id)arg1;
- (struct CGSize)_windowSizeForOutlineViewSize:(struct CGSize)arg1;
- (void)closePopup;
- (void)dealloc;
@property(nonatomic) __weak id <FavoritesMenuDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _FavoriteMenuScrollHoverView *downScrollHoverView; // @synthesize downScrollHoverView=_downScrollHoverView;
- (id)init;
- (id)initWithMailbox:(id)arg1 atWindow:(id)arg2;
@property(nonatomic) BOOL isOpeningMenu; // @synthesize isOpeningMenu=_isOpeningMenu;
@property(nonatomic) BOOL isScrolling; // @synthesize isScrolling=_isScrolling;
@property(readonly, nonatomic) id <MFUIMailbox> mailbox; // @synthesize mailbox=_mailbox;
@property(retain, nonatomic) id mouseClickedMonitor; // @synthesize mouseClickedMonitor=_mouseClickedMonitor;
@property(nonatomic) BOOL needsScrollers; // @synthesize needsScrollers=_needsScrollers;
@property(retain, nonatomic) FavoritesMenuOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (NSUInteger)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
@property(readonly, nonatomic) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void)presentPopupAtLocation:(struct CGPoint)arg1;
@property(retain, nonatomic) NSTimer *scrollTimer; // @synthesize scrollTimer=_scrollTimer;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) _FavoriteMenuScrollHoverView *upScrollHoverView; // @synthesize upScrollHoverView=_upScrollHoverView;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
- (void)startScrolling:(long long)arg1;
- (void)stopScrolling;
- (void)stopScrolling:(long long)arg1;
- (void)updateScrollArrows;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
