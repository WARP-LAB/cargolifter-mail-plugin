//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header



@class NSMenuItem, NSString;

@interface SortByMenuDelegate : NSObject <NSMenuDelegate>
{
    NSMenuItem *_ascendingMenuItem;
    NSMenuItem *_descendingMenuItem;
}

@property(nonatomic) __weak NSMenuItem *ascendingMenuItem; // @synthesize ascendingMenuItem=_ascendingMenuItem;
@property(nonatomic) __weak NSMenuItem *descendingMenuItem; // @synthesize descendingMenuItem=_descendingMenuItem;
- (void)menuNeedsUpdate:(id)arg1;
- (void)menuWillOpen:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
