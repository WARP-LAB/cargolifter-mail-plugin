//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "BannerViewController.h"

@class NSButton, NSTextField;

@interface CalendarBannerViewController : BannerViewController
{
    NSTextField *_eventTitle;
    NSTextField *_eventTime;
    NSButton *_openCalendarButton;
}

+ (id)keyPathsForValuesAffectingShouldHideMeetingCancellationOKButton;
+ (id)keyPathsForValuesAffectingShouldHideMeetingRequestButtons;
- (id)_dateStringForEvent:(id)arg1;
- (id)_eventForCurrentMessage;
- (id)_titleForEvent:(id)arg1;
- (id)backgroundColor;
- (double)bannerHeight;
@property(nonatomic) __weak NSTextField *eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) __weak NSTextField *eventTitle; // @synthesize eventTitle=_eventTitle;
- (id)nibName;
@property(nonatomic) __weak NSButton *openCalendarButton; // @synthesize openCalendarButton=_openCalendarButton;
- (void)openInCalendar:(id)arg1;
- (void)sendMeetingResponse:(id)arg1;
@property(readonly, nonatomic) BOOL shouldHideMeetingCancellationOKButton;
@property(readonly, nonatomic) BOOL shouldHideMeetingRequestButtons;
- (void)updateBannerContents;
- (void)updateWantsDisplay;

@end

