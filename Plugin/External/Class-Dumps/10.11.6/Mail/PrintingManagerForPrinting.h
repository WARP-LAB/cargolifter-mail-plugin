//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header

#import "PrintingManager.h"

@class NSMutableArray;

@interface PrintingManagerForPrinting : PrintingManager
{
    NSMutableArray *_arraysOfConversationMembersToGenerateHTMLFor;
    NSUInteger _numberOfConversationsNotYetLoaded;
}

- (void)_printIfAllNecessaryConversationMembersHaveBeenLoaded;
@property(retain, nonatomic) NSMutableArray *arraysOfConversationMembersToGenerateHTMLFor; // @synthesize arraysOfConversationMembersToGenerateHTMLFor=_arraysOfConversationMembersToGenerateHTMLFor;
- (void)dealloc;
- (void)dispatch;
@property(nonatomic) NSUInteger numberOfConversationsNotYetLoaded; // @synthesize numberOfConversationsNotYetLoaded=_numberOfConversationsNotYetLoaded;
- (id)progressMessage;

@end
