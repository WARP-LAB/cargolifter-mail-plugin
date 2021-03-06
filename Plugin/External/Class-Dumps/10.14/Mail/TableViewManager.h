//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "MailTableViewDelegate-Protocol.h"
#import "MessageListContentControllerDelegate-Protocol.h"
#import "SelectionOwner-Protocol.h"
#import "TableViewManagerDelegate-Protocol.h"
#import "SortTitleSetter-Protocol.h"

@class ConversationPrefetcher, MCMessage, MFGlobalBodyFetchContext, MFMessageThread, MailTableView, MessageListContentController, MessageSelection, NSArray, NSCache, NSDictionary, NSFont, NSMapTable, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSMutableSet, NSNumber, NSPredicate, NSSet, NSString, NSTableColumn, NSTableHeaderView, TableViewScrollState;

@interface TableViewManager : NSObject <MessageListContentControllerDelegate, NSPasteboardItemDataProvider, NSServicesMenuRequestor, MailTableViewDelegate, NSTableViewDataSource, SelectionOwner>
{
    MessageListContentController *_messageListContentController;
    NSMutableArray *_rawSelection;
    NSMutableSet *_mouseTrackers;
    NSFont *_font;
    NSMutableAttributedString *_truncatedString;
    NSMutableDictionary *_truncatedStringAttributes;
    NSMutableDictionary *_truncatedParagraphStyle;
    NSMutableSet *_selectedConversationIDs;
    id _snippetLock;
    NSMutableSet *_messagesBeingFetched;
    NSUInteger _lastRequestedRow;
    NSMapTable *_messageProxyObjects;
    BOOL _isRichMessageList;
    BOOL _isFocused;
    BOOL _sortColumnOrderAscending;
    BOOL _mailboxSortColumnOrderAscending;
    BOOL _isInThreadedMode;
    BOOL _includeDeleted;
    BOOL _awaitingInitialScrollPosition;
    BOOL _scrollFoundSelectionIntoView;
    BOOL _awaitingInitialSelection;
    BOOL _clearSelectionOnUpdate;
    BOOL _threadOpeningIsInProgress;
    BOOL _threadClosingIsInProgress;
    BOOL _dontUpdateTrackingRects;
    BOOL _useBoldFontForUnreadMessages;
    BOOL _clearingSearch;
    BOOL _animatingRowSelection;
    BOOL _needsColumnSetup;
    BOOL _keepSelectionWhenTogglingThread;
    unsigned char _suspendChangesToScrollingAndSelection;
    BOOL _animatingThreadOpening;
    BOOL _animatingThreadClosing;
    BOOL _selectingMessagesForTransfer;
    BOOL _didAwake;
    BOOL _isShowingToCc;
    BOOL _beganAnimationGrouping;
    MailTableView *_tableView;
    id <TableViewManagerDelegate> _delegate;
    NSArray *_tableColumns;
    NSMapTable *_storeStateTable;
    NSDictionary *_messageIDsToSelectWhenOpened;
    NSArray *_threadIDsToOpenWhenOpened;
    long long _sortColumnOrder;
    long long _mailboxSortColumnOrder;
    long long _initialScrollType;
    TableViewScrollState *_savedScrollState;
    NSDictionary *_initialMailboxViewingState;
    NSFont *_boldFont;
    long long _searchTarget;
    long long _searchField;
    id <SortTitleSetter> _sortTitleSetter;
    NSCache *_snippetsForMessage;
    ConversationPrefetcher *_conversationPrefetcher;
    NSArray *_expandedSelection;
    NSArray *_expandedSelectionForTransfer;
    long long _leftmostTextColumn;
    long long _colorHighlightLeftEdge;
    long long _colorHighlightWidth;
    MFMessageThread *_threadBeingClosed;
    MFMessageThread *_threadBeingOpened;
    long long _lastMouseDownInUnreadColumnEventNumber;
    long long _numberOfSelectedRowsBeforeTogglingThread;
    NSUInteger _numberOfSnippetLines;
    NSTableColumn *_richTableColumn;
    NSTableHeaderView *_tableHeaderView;
    long long _previouslyViewedMessageRow;
    long long _currentViewedMessageRow;
    long long _nextMessageDirection;
    MFGlobalBodyFetchContext *_bodyFetchContext;
    NSArray *_messageListItemsFromMouseDown;
    NSArray *_draggedMessageListItems;
    NSNumber *_sortViewHeight;
    NSNumber *_topHitsHeaderViewHeight;
    struct _NSRange _messageRangeFromMouseDown;
    struct CGPoint _lastMouseDownInUnreadColumnPoint;
    struct CGPoint _currentMouseLocationInWindow;
}

+ (id)_getDarkerThreadBackgroundColorForThread:(id)arg1;
+ (id)_getThreadBackgroundColorForThread:(id)arg1;
+ (void)initialize;
+ (BOOL)isColumnValid:(long long)arg1;
+ (id)keyPathsForValuesAffectingFilterPredicate;
+ (id)log;
+ (id)specialImageForMessageCount:(NSUInteger)arg1 offset:(struct CGPoint *)arg2;
- (void)_animateRowSelection:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (id)_archiveActionColor;
- (id)_attributesForTruncatedParagraphStyle;
- (void)_cacheSnippetsAroundRow:(NSUInteger)arg1 refreshProxies:(BOOL)arg2;
- (void)_callWillDisplayCellForClickedCell;
- (id)_colorForMessage:(id)arg1 inRow:(long long)arg2 withCell:(id)arg3;
- (long long)_columnForAppleScriptColumn:(unsigned int)arg1;
- (id)_columnWithIdentifierTag:(long long)arg1;
- (void)_configureColumnForEndTruncation:(id)arg1;
- (void)_configureColumnForImageCell:(id)arg1 alignment:(NSUInteger)arg2;
- (void)_configureColumnForRolloverCell:(id)arg1 alignment:(NSUInteger)arg2 action:(SEL)arg3;
- (void)_configureRichMessageListColumn;
- (void)_configureTableViewLayoutWithTableColumnResizingMasks:(id)arg1;
- (void)_conversationsUpdated:(id)arg1;
- (void)_createTintedImages;
- (id)_currentScrollStatePreferringSelection:(BOOL)arg1;
- (void)_datesNeedRedisplay:(id)arg1;
- (BOOL)_debugThreadAnimation;
- (id)_deleteActionForMessageCount:(NSUInteger)arg1;
- (void)_doubleClickedMessage:(id)arg1;
- (id)_filterAndExpandMessagesForTransfer:(id)arg1;
- (BOOL)_goUpInsteadOfDown;
- (void)_handleSelectionChangeFromNotification:(BOOL)arg1;
- (long long)_indexOfFirstNonDeletedNonSelectedMessage:(long long)arg1 withinRowRange:(struct _NSRange)arg2 goUp:(BOOL)arg3;
- (long long)_indexOfMessageNearest:(long long)arg1 numberOfRows:(long long)arg2 downward:(BOOL)arg3;
- (BOOL)_isAutomaticInsertionWhileSearchingOkayForColumn:(long long)arg1;
- (BOOL)_isColumnVisibleInSettings:(long long)arg1;
- (BOOL)_isMessageInSelectedThread:(id)arg1;
- (id)_mailboxViewingStatePreferringSelection:(BOOL)arg1;
- (id)_messageForRow:(long long)arg1;
- (id)_messageListItemForRow:(long long)arg1;
- (void)_messageMarkedForOverwrite:(id)arg1;
- (id)_messageSelectionColor;
- (id)_messageSelectionWithDataForPrinting:(BOOL)arg1;
- (id)_messageThreadForRow:(long long)arg1;
- (id)_messagesNeedingSnippetsAroundRow:(NSUInteger)arg1 refreshProxies:(BOOL)arg2;
- (NSUInteger)_modifierFlagsForKeyboardNavigation;
- (struct CGPoint)_mouseLocationInWindow;
- (id)_normalizedSelection:(id)arg1;
- (id)_openThreadIdentifiers;
- (void)_performSnippetFetching;
- (long long)_photoSizeForNumberOfSnippetLines:(NSUInteger)arg1;
- (void)_prepareCell:(id)arg1 withMessage:(id)arg2;
- (id)_prepareProxyForMessage:(id)arg1 selected:(BOOL)arg2 createIfNeeded:(BOOL)arg3 cacheSnippet:(char *)arg4;
- (id)_proxyForMessage:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)_proxyForMessage:(id)arg1 createIfNeeded:(BOOL)arg2 showRecipient:(BOOL)arg3;
- (void)_rawSelectionIdentifiersForThreads:(id *)arg1 identifiersForMessages:(id *)arg2;
- (void)_recordSelectionHistoryForRow:(long long)arg1;
- (void)_redeleteMessages:(id)arg1 messagesToSelect:(id)arg2;
- (void)_redisplayRowsAboveSelected;
- (void)_registerTableViewNibs;
- (void)_reloadDisplayOnlyForMessagesInSet:(id)arg1 highlightOnly:(BOOL)arg2;
- (void)_resetNextMessageTracking;
- (void)_resetObjectValueForCellView:(id)arg1;
- (void)_restoreScrollState:(id)arg1;
- (void)_selectMessages:(id)arg1 scrollIfNeeded:(BOOL)arg2 options:(NSUInteger)arg3 completionBlock:(id)arg4;
- (void)_selectOrDeselectMembersOfThread:(id)arg1 atIndex:(long long)arg2 select:(BOOL)arg3;
- (void)_setButtonCellNeedsDisplay;
- (void)_setColumn:(long long)arg1 toVisible:(BOOL)arg2;
- (void)_setupColumnHeaderIcon:(id)arg1 inColumnWithIdentifier:(id)arg2 accessibilityLabel:(id)arg3 alignment:(NSUInteger)arg4;
- (void)_setupColumns;
- (void)_setupColumnsForTableView;
- (void)_setupRowView:(id)arg1 atIndex:(long long)arg2;
- (void)_setupRowView:(id)arg1 messageListItem:(id)arg2 atIndex:(long long)arg3;
- (void)_setupRowViewAtRow:(long long)arg1 fetchingSnippet:(BOOL)arg2;
- (void)_setupTableColumnWidths;
- (BOOL)_shouldShowMailboxNames;
- (id)_snippetFetchQueue;
- (id)_snippetForMessage:(id)arg1;
- (void)_snippetLinePreferenceChanged:(id)arg1;
- (void)_snippetsUpdated:(id)arg1;
- (void)_tableViewScrolled:(id)arg1;
- (struct CGRect)_tableViewVisibleRectWithoutUnderscroll;
- (void)_threadColorPreferenceChanged:(id)arg1;
- (void)_toCcPreferenceChanged:(id)arg1;
- (id)_truncatedAttributedStringForString:(id)arg1 message:(id)arg2 row:(long long)arg3 shouldIndent:(BOOL)arg4;
- (void)_undeleteMessages:(id)arg1 allowUndo:(BOOL)arg2 unreadMessages:(id)arg3;
- (id)_undoActionNameForMessageCount:(NSUInteger)arg1;
- (id)_unreadActionIsRead:(BOOL)arg1 isChild:(BOOL)arg2;
- (id)_unreadColumn;
- (void)_unregisterTableViewNibs;
- (void)_updateAttributesForMailboxes;
- (void)_updateInitialViewingState;
- (void)_updateLayout;
- (void)_updateRowsWithNewSnippets:(id)arg1;
- (void)_updateSearchDelegate;
- (void)_updateSelectedThreadList;
- (void)_updateSnippetsForMessage:(id)arg1 ignoreExpected:(BOOL)arg2;
- (void)_updateTableHeaderToMatchCurrentSort;
- (void)_updateTableViewRowHeight;
- (void)_updateTrackingRects;
- (void)_updateViewingPaneToSelection;
- (void)_viewerPreferencesChanged:(id)arg1;
- (id)accesibilityUILinkedViewsForMailTableView:(id)arg1;
- (id)actionMessagesForOperation:(long long)arg1;
- (void)addMouseTrackersObject:(id)arg1;
- (void)addRawSelectionObject:(id)arg1;
@property(nonatomic) BOOL animatingRowSelection; // @synthesize animatingRowSelection=_animatingRowSelection;
@property(readonly, nonatomic) BOOL animatingThreadClosing; // @synthesize animatingThreadClosing=_animatingThreadClosing;
@property(readonly, nonatomic) BOOL animatingThreadOpening; // @synthesize animatingThreadOpening=_animatingThreadOpening;
@property(nonatomic) unsigned int appleScriptSortColumn;
@property(copy, nonatomic) NSArray *appleScriptVisibleColumns;
- (void)archiveMessages:(id)arg1 allowUndo:(BOOL)arg2 withAnimationOptions:(NSUInteger)arg3;
@property(nonatomic) BOOL awaitingInitialScrollPosition; // @synthesize awaitingInitialScrollPosition=_awaitingInitialScrollPosition;
@property(nonatomic) BOOL awaitingInitialSelection; // @synthesize awaitingInitialSelection=_awaitingInitialSelection;
- (void)awakeFromNib;
@property(nonatomic) BOOL beganAnimationGrouping; // @synthesize beganAnimationGrouping=_beganAnimationGrouping;
@property(readonly, nonatomic) MFGlobalBodyFetchContext *bodyFetchContext; // @synthesize bodyFetchContext=_bodyFetchContext;
@property(retain, nonatomic) NSFont *boldFont; // @synthesize boldFont=_boldFont;
@property(readonly, nonatomic) BOOL canSelectFirstReplyToMessage;
@property(readonly, nonatomic) BOOL canSelectNextMessage;
@property(readonly, nonatomic) BOOL canSelectNextReplyToParent;
@property(readonly, nonatomic) BOOL canSelectParentOfMessage;
@property(readonly, nonatomic) BOOL canSelectPreviousMessage;
- (void)clearSearch;
@property(nonatomic) BOOL clearSelectionOnUpdate; // @synthesize clearSelectionOnUpdate=_clearSelectionOnUpdate;
- (void)clearTrackingRects;
@property(nonatomic) BOOL clearingSearch; // @synthesize clearingSearch=_clearingSearch;
- (void)closeAllThreads;
- (void)closeThread:(id)arg1 row:(long long)arg2 selectThread:(BOOL)arg3;
@property(nonatomic) long long colorHighlightLeftEdge; // @synthesize colorHighlightLeftEdge=_colorHighlightLeftEdge;
@property(nonatomic) long long colorHighlightWidth; // @synthesize colorHighlightWidth=_colorHighlightWidth;
@property(retain, nonatomic) ConversationPrefetcher *conversationPrefetcher; // @synthesize conversationPrefetcher=_conversationPrefetcher;
@property(readonly, nonatomic) NSUInteger countOfRawSelection;
- (long long)countOfTableViewRowsForMessageListContentController:(id)arg1;
@property(readonly, nonatomic) MCMessage *currentDisplayedMessage;
@property(nonatomic) struct CGPoint currentMouseLocationInWindow; // @synthesize currentMouseLocationInWindow=_currentMouseLocationInWindow;
@property(nonatomic) long long currentViewedMessageRow; // @synthesize currentViewedMessageRow=_currentViewedMessageRow;
- (void)dealloc;
- (id)defaultMenuForTableHeaderView:(id)arg1;
@property(nonatomic) __weak id <TableViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteKeyPressed;
- (void)deleteMessages:(id)arg1 allowMoveToTrash:(BOOL)arg2 allowUndo:(BOOL)arg3 selectingNextMessage:(BOOL)arg4 withAnimationOptions:(NSUInteger)arg5;
- (void)deleteSelectionAllowingMoveToTrash:(BOOL)arg1;
@property(nonatomic) BOOL didAwake; // @synthesize didAwake=_didAwake;
@property(nonatomic) BOOL dontUpdateTrackingRects; // @synthesize dontUpdateTrackingRects=_dontUpdateTrackingRects;
@property(copy, nonatomic) NSArray *draggedMessageListItems; // @synthesize draggedMessageListItems=_draggedMessageListItems;
@property(copy, nonatomic) NSArray *expandedSelection; // @synthesize expandedSelection=_expandedSelection;
@property(copy, nonatomic) NSArray *expandedSelectionForTransfer; // @synthesize expandedSelectionForTransfer=_expandedSelectionForTransfer;
@property(retain, nonatomic) NSPredicate *filterPredicate;
@property(retain, nonatomic) NSFont *font;
- (struct CGRect)frameOfClickedCell;
- (void)hideDeletions;
- (BOOL)hideMessages:(id)arg1 selectingNextMessage:(BOOL)arg2 withAnimationOptions:(NSUInteger)arg3 completionHandler:(id)arg4;
@property(nonatomic) BOOL includeDeleted; // @synthesize includeDeleted=_includeDeleted;
- (id)init;
@property(copy, nonatomic) NSDictionary *initialMailboxViewingState; // @synthesize initialMailboxViewingState=_initialMailboxViewingState;
@property(nonatomic) long long initialScrollType; // @synthesize initialScrollType=_initialScrollType;
- (void)invalidateSelectionCache:(id)arg1;
- (BOOL)isColumnVisible:(long long)arg1;
@property(nonatomic) BOOL isFocused; // @synthesize isFocused=_isFocused;
@property(nonatomic) BOOL isInThreadedMode; // @synthesize isInThreadedMode=_isInThreadedMode;
@property(nonatomic) BOOL isRichMessageList;
@property(readonly, nonatomic) BOOL isSelectionVisible;
@property(nonatomic) BOOL isShowingToCc; // @synthesize isShowingToCc=_isShowingToCc;
@property(readonly, nonatomic) BOOL isSortedAscending;
- (BOOL)isSortedByDateReceived;
@property(nonatomic) BOOL keepSelectionWhenTogglingThread; // @synthesize keepSelectionWhenTogglingThread=_keepSelectionWhenTogglingThread;
@property(nonatomic) long long lastMouseDownInUnreadColumnEventNumber; // @synthesize lastMouseDownInUnreadColumnEventNumber=_lastMouseDownInUnreadColumnEventNumber;
@property(nonatomic) struct CGPoint lastMouseDownInUnreadColumnPoint; // @synthesize lastMouseDownInUnreadColumnPoint=_lastMouseDownInUnreadColumnPoint;
@property(nonatomic) long long leftmostTextColumn; // @synthesize leftmostTextColumn=_leftmostTextColumn;
- (void)mailTableView:(id)arg1 didMouseDown:(id)arg2;
- (BOOL)mailTableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (id)mailTableView:(id)arg1 dragImageForRowsWithIndexes:(id)arg2 event:(id)arg3 dragImageOffset:(struct CGPoint *)arg4;
- (void)mailTableView:(id)arg1 gotEvent:(id)arg2;
- (long long)mailTableView:(id)arg1 highlightStyleForRow:(long long)arg2 inRect:(struct CGRect *)arg3 color:(id *)arg4;
- (id)mailTableView:(id)arg1 rangesForBackgroundShadingInRange:(struct _NSRange)arg2 shadingColors:(id *)arg3 leftColumnColors:(id *)arg4;
- (BOOL)mailTableView:(id)arg1 shouldAddTableColumn:(id)arg2;
- (BOOL)mailTableView:(id)arg1 shouldRemoveTableColumn:(id)arg2;
- (long long)mailTableView:(id)arg1 shouldScrollRowToVisible:(long long)arg2;
- (id)mailTableView:(id)arg1 validRequestorForSendType:(id)arg2 returnType:(id)arg3;
- (void)mailTableView:(id)arg1 willDrawRowsInRange:(struct _NSRange)arg2;
- (void)mailTableView:(id)arg1 willMouseDown:(id)arg2;
- (void)mailTableView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)mailTableViewDidBecomeFirstResponder:(id)arg1;
- (void)mailTableViewDidEndLiveResize:(id)arg1;
- (void)mailTableViewDidMoveToWindow:(id)arg1;
- (void)mailTableViewDidResignFirstResponder:(id)arg1;
- (void)mailTableViewDragWillEnd:(id)arg1 operation:(NSUInteger)arg2;
- (void)mailTableViewWillStartLiveResize:(id)arg1;
@property(nonatomic) long long mailboxSortColumnOrder; // @synthesize mailboxSortColumnOrder=_mailboxSortColumnOrder;
@property(nonatomic) BOOL mailboxSortColumnOrderAscending; // @synthesize mailboxSortColumnOrderAscending=_mailboxSortColumnOrderAscending;
- (void)makeMessageListFirstResponder;
@property(copy, nonatomic) NSDictionary *messageIDsToSelectWhenOpened; // @synthesize messageIDsToSelectWhenOpened=_messageIDsToSelectWhenOpened;
@property(retain, nonatomic) MessageListContentController *messageListContentController;
- (BOOL)messageListContentController:(id)arg1 canIncludeItemsOfType:(long long)arg2;
- (void)messageListContentController:(id)arg1 didApplyChanges:(id)arg2;
- (void)messageListContentController:(id)arg1 foundPinnedIndex:(long long)arg2 withOffset:(double)arg3;
- (void)messageListContentController:(id)arg1 foundSelectionIndexes:(id)arg2 shouldAnimate:(BOOL)arg3;
- (void)messageListContentController:(id)arg1 refreshedObjects:(id)arg2;
- (void)messageListContentController:(id)arg1 willApplyChanges:(id)arg2;
- (void)messageListContentControllerDidChangeSort:(id)arg1;
- (void)messageListContentControllerDidFinishLoading:(id)arg1;
- (void)messageListContentControllerDidProcessUpdates:(id)arg1;
- (void)messageListContentControllerDidUpdateConversations:(id)arg1;
- (void)messageListContentControllerNeedsReload:(id)arg1;
- (void)messageListContentControllerWillProcessUpdates:(id)arg1;
@property(copy, nonatomic) NSArray *messageListItemsFromMouseDown; // @synthesize messageListItemsFromMouseDown=_messageListItemsFromMouseDown;
@property(nonatomic) struct _NSRange messageRangeFromMouseDown; // @synthesize messageRangeFromMouseDown=_messageRangeFromMouseDown;
@property(readonly, nonatomic) MessageSelection *messageSelection;
@property(readonly, nonatomic) MessageSelection *messageSelectionForPrinting;
@property(readonly, nonatomic) id <MCMessageDataSource> messageStore;
@property(readonly, nonatomic) MCMessage *messageThatUserIsProbablyReading;
- (id)messageToSelectIfEntireSelectionRemoved:(id)arg1;
- (id)messagesToTransferIsMove:(BOOL)arg1;
@property(copy, nonatomic) NSSet *mouseTrackers;
@property(nonatomic) BOOL needsColumnSetup; // @synthesize needsColumnSetup=_needsColumnSetup;
@property(nonatomic) long long nextMessageDirection; // @synthesize nextMessageDirection=_nextMessageDirection;
@property(readonly, nonatomic) BOOL nextMessageIsBelow;
- (long long)numberOfRowsInTableView:(id)arg1;
@property(nonatomic) long long numberOfSelectedRowsBeforeTogglingThread; // @synthesize numberOfSelectedRowsBeforeTogglingThread=_numberOfSelectedRowsBeforeTogglingThread;
@property(nonatomic) NSUInteger numberOfSnippetLines; // @synthesize numberOfSnippetLines=_numberOfSnippetLines;
- (id)objectInRawSelectionAtIndex:(NSUInteger)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)openAllThreads;
- (BOOL)openSelectedThread;
- (void)openThread:(id)arg1 row:(long long)arg2;
- (id)parentThreadForChildMessage:(id)arg1;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (void)prepareContentInRange:(struct _NSRange)arg1;
- (void)prepareForWindowClose;
@property(nonatomic) long long previouslyViewedMessageRow; // @synthesize previouslyViewedMessageRow=_previouslyViewedMessageRow;
@property(retain, nonatomic) NSArray *rawSelection;
- (void)readAttributesFromViewingOptions:(id)arg1;
- (void)recordMessageSelectionDuringSearch;
- (void)reloadMailboxes:(id)arg1 messageFilterPredicate:(id)arg2;
- (void)removeAllMouseTrackers;
- (void)removeAllRawSelection;
- (void)removeObjectFromRawSelectionAtIndex:(NSUInteger)arg1;
- (void)replaceObjectInRawSelectionAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)resetSnippetCache;
- (BOOL)respondsToSelector:(SEL)arg1;
@property(retain, nonatomic) NSTableColumn *richTableColumn; // @synthesize richTableColumn=_richTableColumn;
- (void)richUnreadButtonClicked:(id)arg1;
- (void)saveDefaultColumns;
@property(retain, nonatomic) TableViewScrollState *savedScrollState; // @synthesize savedScrollState=_savedScrollState;
@property(nonatomic) BOOL scrollFoundSelectionIntoView; // @synthesize scrollFoundSelectionIntoView=_scrollFoundSelectionIntoView;
- (void)scrollRowToVisible:(long long)arg1 position:(long long)arg2;
@property(nonatomic) long long searchField; // @synthesize searchField=_searchField;
- (void)searchForSuggestions:(id)arg1 in:(long long)arg2 withOptions:(long long)arg3 fromSuggestionsSearchField:(id)arg4 filterPredicate:(id)arg5;
@property(nonatomic) long long searchTarget; // @synthesize searchTarget=_searchTarget;
- (void)selectAllMessagesAndMakeFirstResponder;
- (void)selectFirstReplyToMessage;
- (void)selectMessage:(id)arg1 options:(NSUInteger)arg2 completionBlock:(id)arg3;
- (void)selectMessages:(id)arg1;
- (void)selectNextMessage:(BOOL)arg1;
- (void)selectNextMessageMovingDownward:(BOOL)arg1;
- (void)selectNextMessageMovingUpward:(BOOL)arg1;
- (void)selectParentOfMessage;
- (void)selectPreviousMessage:(BOOL)arg1;
@property(nonatomic) BOOL selectingMessagesForTransfer; // @synthesize selectingMessagesForTransfer=_selectingMessagesForTransfer;
@property(readonly, copy, nonatomic) NSArray *selection;
- (id)selectionExpandingThreadsAndHiddenCopies:(BOOL)arg1;
- (BOOL)selectionIsExactlyOneOpenThread;
@property(readonly, copy, nonatomic) NSString *selectionStateLog;
- (void)setColumn:(long long)arg1 toVisible:(BOOL)arg2;
- (void)setIsSortedAscending:(BOOL)arg1;
- (void)setMailboxes:(id)arg1 messageFilterPredicate:(id)arg2 isSettingUpUI:(BOOL)arg3;
- (void)setSortColumn:(long long)arg1 ascending:(BOOL)arg2;
@property(nonatomic) long long sortColumnOrder; // @synthesize sortColumnOrder=_sortColumnOrder;
@property(nonatomic) BOOL sortColumnOrderAscending; // @synthesize sortColumnOrderAscending=_sortColumnOrderAscending;
@property(nonatomic) __weak id <SortTitleSetter> sortTitleSetter; // @synthesize sortTitleSetter=_sortTitleSetter;
@property(retain, nonatomic) NSNumber *sortViewHeight; // @synthesize sortViewHeight=_sortViewHeight;
@property(retain, nonatomic) NSMapTable *storeStateTable; // @synthesize storeStateTable=_storeStateTable;
@property(nonatomic) unsigned char suspendChangesToScrollingAndSelection; // @synthesize suspendChangesToScrollingAndSelection=_suspendChangesToScrollingAndSelection;
@property(copy, nonatomic) NSArray *tableColumns; // @synthesize tableColumns=_tableColumns;
@property(retain, nonatomic) NSTableHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MailTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak MFMessageThread *threadBeingClosed; // @synthesize threadBeingClosed=_threadBeingClosed;
@property(nonatomic) __weak MFMessageThread *threadBeingOpened; // @synthesize threadBeingOpened=_threadBeingOpened;
@property(nonatomic) BOOL threadClosingIsInProgress; // @synthesize threadClosingIsInProgress=_threadClosingIsInProgress;
@property(copy, nonatomic) NSArray *threadIDsToOpenWhenOpened; // @synthesize threadIDsToOpenWhenOpened=_threadIDsToOpenWhenOpened;
@property(nonatomic) BOOL threadOpeningIsInProgress; // @synthesize threadOpeningIsInProgress=_threadOpeningIsInProgress;
@property(retain, nonatomic) NSNumber *topHitsHeaderViewHeight; // @synthesize topHitsHeaderViewHeight=_topHitsHeaderViewHeight;
@property(nonatomic) BOOL useBoldFontForUnreadMessages; // @synthesize useBoldFontForUnreadMessages=_useBoldFontForUnreadMessages;
- (void)setupColumnManager;
- (BOOL)shouldDeleteMessagesGivenCurrentState:(id)arg1;
- (BOOL)shouldSortAscendingByDefaultForColumn:(long long)arg1;
- (BOOL)shouldTrackMouse:(id)arg1;
- (void)showDeletions;
- (void)showFollowups:(id)arg1;
- (void)showFollowupsToMessageAtRow:(long long)arg1;
- (void)showSelectionAndCenter:(BOOL)arg1;
@property(readonly, nonatomic) NSCache *snippetsForMessage; // @synthesize snippetsForMessage=_snippetsForMessage;
- (id)sortByStringForColumn:(long long)arg1;
@property(readonly, nonatomic) long long sortColumn;
- (void)stepIntoSelectedThread;
- (void)stepOutOfSelectedThread;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (void)tableView:(id)arg1 didDragTableColumn:(id)arg2;
- (void)tableView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowActionsForRow:(long long)arg2 edge:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (id)tableView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableViewColumnDidMove:(id)arg1;
- (void)tableViewColumnDidResize:(id)arg1;
- (void)tableViewFrameChangedDuringLiveResize:(id)arg1;
- (id)tableViewGetDefaultMenu:(id)arg1;
- (long long)tableViewNumberOfColumnsToPinToLefthandSide:(id)arg1;
- (double)tableViewRowHeightForRichMessageList:(BOOL)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)toggleThread:(id)arg1;
- (void)toggleThread:(id)arg1 ignoreModifierKeys:(BOOL)arg2;
- (void)toggleThreadedMode;
- (void)transfer:(id)arg1 didCompleteWithError:(id)arg2;
- (void)undeleteMessages:(id)arg1 allowUndo:(BOOL)arg2;
- (void)undeleteMessagesAllowingUndo:(BOOL)arg1;
- (void)unhideMessages:(id)arg1;
- (void)updateColorHighlightEdges;
- (void)userDidScrollInTableView:(id)arg1;
- (void)writeAttributesToViewingOptions:(id)arg1;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

