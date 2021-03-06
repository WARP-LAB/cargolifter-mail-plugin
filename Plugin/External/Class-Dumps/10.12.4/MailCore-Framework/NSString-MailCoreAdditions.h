//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class NSData;

@interface NSString (MailCoreAdditions)
+ (id)contentIDStringFromCidUrl:(id)arg1;
+ (id)messageIDStringWithDomainHint:(id)arg1;
+ (id)newURLForContentID:(id)arg1 percentEscaped:(BOOL)arg2;
@property(readonly, copy, nonatomic) NSData *MD5Digest;
- (long long)caseInsensitiveCompareExcludingXDash:(id)arg1;
@property(readonly, nonatomic) NSUInteger effectivePrefixLength;
@property(readonly, copy, nonatomic) NSData *encodedMessageID;
- (BOOL)isEqualToStringIgnoreCaseAndDiacritics:(id)arg1;
- (BOOL)isEqualToStringIgnoringCase:(id)arg1;
@property(readonly, copy, nonatomic) NSString *messageIDSubstring;
- (id)newStringByApplyingBodyClassName:(id)arg1;
- (id)stringByApplyingBodyClassName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *stringByLocalizingReOrFwdPrefix;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (id)stringByReplacingNonBreakingSpacesWithString:(id)arg1;
- (id)stringByReplacingString:(id)arg1 withString:(id)arg2;
@property(readonly, copy, nonatomic) NSString *stringSuitableForHTML;
@property(readonly, copy, nonatomic) NSString *stringWithNoExtraSpaces;
@end

