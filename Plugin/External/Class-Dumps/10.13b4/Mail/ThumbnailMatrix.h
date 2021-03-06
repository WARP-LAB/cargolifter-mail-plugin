//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@interface ThumbnailMatrix : NSMatrix
{
    BOOL _shouldShowButtons;
}

- (void)_addButtonAtIndex:(long long)arg1;
- (BOOL)_performDragFromMouseDown:(id)arg1;
- (struct CGRect)frameOfThumbnailAtIndex:(long long)arg1;
- (void)highlightCell:(BOOL)arg1 atRow:(long long)arg2 column:(long long)arg3;
@property(nonatomic) BOOL shouldShowButtons; // @synthesize shouldShowButtons=_shouldShowButtons;
- (void)showDeleteButtons:(BOOL)arg1 beginningAtIndex:(long long)arg2;

@end

