//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import <MFEWSRequestOperation.h>


@class MFEWSCopyItemsResponseOperation, NSArray, NSString;

@interface MFEWSCopyItemsRequestOperation : MFEWSRequestOperation <NSSecureCoding>
{
    NSString *_sourceEWSFolderIdString;
    NSString *_destinationEWSFolderIdString;
    NSArray *_EWSItemIds;
    NSArray *_offlineCreatedEWSItemIdStrings;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *EWSItemIds; // @synthesize EWSItemIds=_EWSItemIds;
- (void)_ewsCopyItemsRequestOperationCommonInitWithEWSItemIds:(id)arg1 sourceIdString:(id)arg2 destinationIdString:(id)arg3;
- (void)_newEWSItemIdStringsDidChange:(id)arg1;
- (id)activityString;
- (void)dealloc;
- (id)description;
@property(readonly, copy, nonatomic) NSString *destinationEWSFolderIdString; // @synthesize destinationEWSFolderIdString=_destinationEWSFolderIdString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEWSItemIds:(id)arg1 sourceIdString:(id)arg2 destinationIdString:(id)arg3 gateway:(id)arg4 errorHandler:(id)arg5;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (id)newResponseOperationWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(copy) NSArray *offlineCreatedEWSItemIdStrings; // @synthesize offlineCreatedEWSItemIdStrings=_offlineCreatedEWSItemIdStrings;
- (id)prepareRequest;
@property(retain, nonatomic) MFEWSCopyItemsResponseOperation *responseOperation;
- (void)setupOfflineResponse;
@property(readonly, copy, nonatomic) NSString *sourceEWSFolderIdString; // @synthesize sourceEWSFolderIdString=_sourceEWSFolderIdString;

@end
