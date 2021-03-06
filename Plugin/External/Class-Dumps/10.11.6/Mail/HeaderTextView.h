//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@interface HeaderTextView : NSTextView
{
    id <NSTextAttachmentCell> _attachmentCell;
    struct CGSize _contentSize;
    struct CGRect _attachmentCellRect;
}

- (id)_attachmentCellForCharacterAtIndex:(NSUInteger)arg1;
- (NSUInteger)_glyphIndexForPoint:(struct CGPoint)arg1 glyphRect:(struct CGRect *)arg2;
- (id)_selectedAttributedString;
@property(retain, nonatomic) id <NSTextAttachmentCell> attachmentCell; // @synthesize attachmentCell=_attachmentCell;
@property(nonatomic) struct CGRect attachmentCellRect; // @synthesize attachmentCellRect=_attachmentCellRect;
- (BOOL)autoscroll:(id)arg1;
- (BOOL)canBecomeKeyView;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (void)cursorUpdate:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)resetCursorRects;
- (BOOL)resignFirstResponder;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)setConstrainedFrameSize:(struct CGSize)arg1;
- (id)writablePasteboardTypes;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;

@end

