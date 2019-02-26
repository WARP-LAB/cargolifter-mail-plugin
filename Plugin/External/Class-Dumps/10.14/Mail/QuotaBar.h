//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSLevelIndicator;

@interface QuotaBar : NSView
{
    NSLevelIndicator *_levelIndicator;
}

- (id)_labelFont;
- (void)_quotaBarCommonInitWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) NSLevelIndicator *levelIndicator; // @synthesize levelIndicator=_levelIndicator;
- (void)setQuotaUsed:(NSUInteger)arg1 limit:(NSUInteger)arg2;

@end
