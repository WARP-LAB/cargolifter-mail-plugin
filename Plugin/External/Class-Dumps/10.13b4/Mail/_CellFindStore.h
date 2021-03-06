//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSArray;

@interface _CellFindStore : NSObject
{
    BOOL _matchesAreValid;
    NSArray *_matches;
    struct CGRect _visibleRectInCell;
    struct CGRect _cellRectInContainingView;
    struct CGRect _visibleRectInContainingView;
}

@property(nonatomic) struct CGRect cellRectInContainingView; // @synthesize cellRectInContainingView=_cellRectInContainingView;
@property(retain, nonatomic) NSArray *matches; // @synthesize matches=_matches;
@property(nonatomic) BOOL matchesAreValid; // @synthesize matchesAreValid=_matchesAreValid;
@property(nonatomic) struct CGRect visibleRectInCell; // @synthesize visibleRectInCell=_visibleRectInCell;
@property(nonatomic) struct CGRect visibleRectInContainingView; // @synthesize visibleRectInContainingView=_visibleRectInContainingView;

@end

