//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class MFMailAccount, NSImageCell;

@interface _AccountDisplayCell : NSTextFieldCell
{
    NSTextFieldCell *_descriptionTextCell;
    NSTextFieldCell *_activeTextCell;
    NSImageCell *_imageCell;
    MFMailAccount *_account;
}

- (void)_accountDisplayCellCommonInit;
@property(retain, nonatomic) MFMailAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSTextFieldCell *activeTextCell; // @synthesize activeTextCell=_activeTextCell;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSTextFieldCell *descriptionTextCell; // @synthesize descriptionTextCell=_descriptionTextCell;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
@property(readonly, nonatomic) NSImageCell *imageCell; // @synthesize imageCell=_imageCell;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)willBeDisplayed;

@end
