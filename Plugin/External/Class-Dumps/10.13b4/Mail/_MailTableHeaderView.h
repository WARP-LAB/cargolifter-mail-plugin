//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class MailTableView;

@interface _MailTableHeaderView : NSTableHeaderView
{
    BOOL _didLazyLoadMenu;
}

@property(nonatomic) BOOL didLazyLoadMenu; // @synthesize didLazyLoadMenu=_didLazyLoadMenu;
- (id)menu;
@property MailTableView *tableView;

@end
