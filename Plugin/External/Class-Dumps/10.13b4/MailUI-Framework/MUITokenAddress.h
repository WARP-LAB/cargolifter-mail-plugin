//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


#import "CNAutocompleteFetchDelegate-Protocol.h"

@class ABCNContact, ABGroup, CNAutocompleteStore, NSArray, NSMenu, NSString, NSTextView, NSTokenField;

@interface MUITokenAddress : NSObject <CNAutocompleteFetchDelegate, NSCopying>
{
    BOOL _shouldRefreshNameIfPossible;
    id <MUITokenAddressDelegate> _delegate;
    NSTokenField *_tokenField;
    NSTextView *_textView;
    ABCNContact *_contact;
    ABGroup *_group;
    NSString *_recentRawAddress;
    NSString *_recentName;
    NSString *_currentRawAddress;
    NSString *_currentName;
    long long _tokenStyle;
    id <CNCancelable> _autocompletionSearchRequest;
    CNAutocompleteStore *_autocompleteStore;
}

+ (id)_contactsCache;
+ (BOOL)addressIsExternal:(id)arg1;
+ (id)keyPathsForValuesAffectingIsExternal;
+ (id)tokenWithAddress:(id)arg1;
+ (id)tokenWithAddress:(id)arg1 isRecent:(BOOL)arg2 contact:(id)arg3;
+ (void)writeTokens:(id)arg1 toPasteboard:(id)arg2;
- (id)_contactForEmail:(id)arg1;
- (id)_contactNameFormatter;
- (void)_contactsChanged:(id)arg1;
- (id)_contactsOperationQueue;
- (id)_formattedCurrentAddress;
- (id)_formattedRecentAddress;
- (void)_getAddressAndNameFromRecord;
- (void)_getRecordFromAddress;
- (void)_muiTokenAddressCommonInit;
- (void)_refreshToken;
- (id)_suggestionSerializedRepresentation;
- (id)_tokenForTokenAddress:(id)arg1;
- (void)_writeToPasteboard:(id)arg1 forceAddressOnly:(BOOL)arg2;
- (BOOL)_writeToPasteboard:(id)arg1 type:(id)arg2 forceAddressOnly:(BOOL)arg3;
- (void)addToContacts:(id)arg1;
- (void)addToVIPSenders:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
@property(readonly, nonatomic) CNAutocompleteStore *autocompleteStore; // @synthesize autocompleteStore=_autocompleteStore;
@property(retain, nonatomic) id <CNCancelable> autocompletionSearchRequest; // @synthesize autocompletionSearchRequest=_autocompletionSearchRequest;
- (void)changeAddress:(id)arg1;
@property(retain, nonatomic) ABCNContact *contact; // @synthesize contact=_contact;
- (void)copyAddressToClipboard:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *currentName; // @synthesize currentName=_currentName;
@property(copy, nonatomic) NSString *currentRawAddress; // @synthesize currentRawAddress=_currentRawAddress;
- (void)dealloc;
@property(retain, nonatomic) id <MUITokenAddressDelegate> delegate; // @synthesize delegate=_delegate;
- (id)displayStringWithMode:(long long)arg1;
- (void)editAddress:(id)arg1;
- (void)expandGroupAddress:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *expandedTokens;
@property(readonly, copy, nonatomic) NSString *formattedAddress;
- (void)getRecordFromAddress;
@property(retain, nonatomic) ABGroup *group; // @synthesize group=_group;
- (id)init;
- (id)initWithAddress:(id)arg1 isRecent:(BOOL)arg2 contact:(id)arg3;
- (id)initWithGroup:(id)arg1;
@property(readonly, nonatomic) BOOL isExternal;
@property(readonly, nonatomic) NSMenu *menu;
- (void)openInContacts:(id)arg1;
- (void)openNewMessage:(id)arg1;
- (void)openPersonCard:(id)arg1;
@property(copy, nonatomic) NSString *recentName; // @synthesize recentName=_recentName;
@property(copy, nonatomic) NSString *recentRawAddress; // @synthesize recentRawAddress=_recentRawAddress;
- (void)removeAddress:(id)arg1;
- (void)removeFromAddressHistory:(id)arg1;
- (void)removeFromVIPSenders:(id)arg1;
- (void)searchForToken:(id)arg1;
@property(nonatomic) BOOL shouldRefreshNameIfPossible; // @synthesize shouldRefreshNameIfPossible=_shouldRefreshNameIfPossible;
@property(nonatomic) __weak NSTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak NSTokenField *tokenField; // @synthesize tokenField=_tokenField;
@property(nonatomic) long long tokenStyle; // @synthesize tokenStyle=_tokenStyle;
- (id)suggestionWithGenius:(id)arg1;
- (id)toolTipWithMode:(long long)arg1;
- (BOOL)validateMenuItem:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *writablePasteboardTypes;
- (void)writeToPasteboard:(id)arg1;
- (BOOL)writeToPasteboard:(id)arg1 type:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

