//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSArray, NSSharingService, NSSharingServicePicker;

@protocol NSSharingServicePickerDelegate <NSObject>

@optional
- (id <NSSharingServiceDelegate>)sharingServicePicker:(NSSharingServicePicker *)arg1 delegateForSharingService:(NSSharingService *)arg2;
- (void)sharingServicePicker:(NSSharingServicePicker *)arg1 didChooseSharingService:(NSSharingService *)arg2;
- (NSArray *)sharingServicePicker:(NSSharingServicePicker *)arg1 sharingServicesForItems:(NSArray *)arg2 proposedSharingServices:(NSArray *)arg3;
@end
