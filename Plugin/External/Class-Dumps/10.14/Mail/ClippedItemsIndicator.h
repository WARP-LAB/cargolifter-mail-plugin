//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header



@class NSMenu, NSString;

@interface ClippedItemsIndicator : NSButton <NSMenuDelegate>
{
    NSMenu *_menu;
    id <ClippedItemsIndicatorDelegate> _delegate;
}

- (void)_clippedItemsIndicatorCommonInit;
- (void)_popUpMenu;
@property(nonatomic) __weak id <ClippedItemsIndicatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSMenu *menu; // @synthesize menu=_menu;
- (void)menuDidClose:(id)arg1;
- (void)mouseDown:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
