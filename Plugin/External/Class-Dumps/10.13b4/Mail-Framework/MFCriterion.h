//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header



@class MFMailbox, NSArray, NSString;

@interface MFCriterion : NSObject <NSCopying>
{
    NSString *_criterionIdentifier;
    long long _criterionType;
    NSArray *_criteria;
    BOOL _dateIsRelative;
    BOOL _allCriteriaMustBeSatisfied;
    BOOL _originatedFromSearchSuggestion;
    int _specialMailboxType;
    NSString *_name;
    NSString *_expression;
    long long _qualifier;
    long long _dateUnits;
    NSUInteger _knownLimit;
    NSString *_uniqueId;
}

+ (id)compoundCriterionWithCriteria:(id)arg1;
+ (BOOL)criteria:(id)arg1 areEqualToCriteria:(id)arg2;
+ (id)criteriaFromDefaultsArray:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(BOOL)arg2;
+ (long long)criterionTypeForString:(id)arg1;
+ (id)defaultsArrayFromCriteria:(id)arg1;
+ (BOOL)logCriterionConversionErrors;
+ (void)logSpotlightStatus;
+ (id)queryScopePathForMailbox:(id)arg1;
+ (id)stringForCriterionType:(long long)arg1;
- (id)SQLExpressionWithTables:(NSUInteger *)arg1 baseTable:(NSUInteger)arg2;
- (id)_comparisonOperatorForQualifier:(long long)arg1;
- (BOOL)_containsVIPSendersCriterionWithInFlightURLs:(id)arg1;
- (id)_descriptionWithDepth:(NSUInteger)arg1 includePII:(BOOL)arg2;
- (BOOL)_isCompoundCriterionSpotlightCriterion;
- (BOOL)_isSpotlightOnlyCriterion;
- (id)_qualifierString;
- (id)_searchTermForExpression:(id)arg1 withQualifer:(long long)arg2 exactMatch:(BOOL)arg3;
- (void)_setCriterionIdentifier:(id)arg1;
- (id)_simplifyOnce;
- (id)_spotlightDateQueryStringForAttribute:(id)arg1;
- (id)_spotlightQueryStringForAccountCriterion:(id)arg1;
- (id)_spotlightQueryStringForAnyAttachmentCriterion;
- (id)_spotlightQueryStringForAnyRecipientCriterion;
- (id)_spotlightQueryStringForAttachmentTypeCriterion;
- (id)_spotlightQueryStringForBodyCriterion;
- (id)_spotlightQueryStringForCompoundCriterionWithInFlightURLs:(id)arg1;
- (id)_spotlightQueryStringForContainsAttachmentsCriterion;
- (id)_spotlightQueryStringForFlagCriterion;
- (id)_spotlightQueryStringForFlaggedStatusCriterion;
- (id)_spotlightQueryStringForGmailLabelCriterion;
- (id)_spotlightQueryStringForGroupOrVIPSendersCriterion;
- (id)_spotlightQueryStringForHeaderCriterion;
- (id)_spotlightQueryStringForInASpecialMailboxCriterionWithQualifier:(long long)arg1 inFlightURLs:(id)arg2;
- (id)_spotlightQueryStringForMailboxCriterion:(id)arg1;
- (id)_spotlightQueryStringForMessageID;
- (id)_spotlightQueryStringForNotInAJunkOrTrashMailboxCriterion;
- (id)_spotlightQueryStringForPriorityCriterion;
- (id)_spotlightQueryStringForSize;
- (id)_spotlightQueryStringWithInFlightURLs:(id)arg1;
- (id)_spotlightStringForHeaderQueryString:(id)arg1 withSpotlightAttribute:(id)arg2;
@property BOOL allCriteriaMustBeSatisfied; // @synthesize allCriteriaMustBeSatisfied=_allCriteriaMustBeSatisfied;
@property(readonly, nonatomic) NSUInteger bestBaseTable;
@property(readonly, nonatomic) MFCriterion *compoundCriterionBySplittingExpression;
@property(readonly, nonatomic) BOOL containsJunkMailboxCriterion;
@property(readonly, nonatomic) BOOL containsMailboxCriterion;
@property(readonly, nonatomic) BOOL containsSpotlightCriterion;
@property(readonly, nonatomic) BOOL containsSpotlightOnlyCriterion;
@property(readonly, nonatomic) BOOL containsVIPSendersCriterion;
@property(readonly, nonatomic) BOOL containsWhereFromsCriterion;
- (id)convertToGmailLabelCriterionIfNeeded;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSArray *criteria;
- (id)criterionByMergingSpotlightCriteria;
@property(readonly, nonatomic) MFCriterion *criterionForSQL;
@property(readonly, nonatomic) MFCriterion *criterionForSQLIgnoringGmail;
- (id)criterionForSearchWithExpandedSmartMailboxes:(id)arg1 forSpotlight:(BOOL)arg2 convertingGmailCriteria:(BOOL)arg3;
@property(readonly, nonatomic) MFCriterion *criterionForSpotlight;
@property(copy, nonatomic) NSString *criterionIdentifier;
@property(nonatomic) long long criterionType;
- (id)criterionValueForNotEqualRelativeDates:(long long *)arg1;
@property BOOL dateIsRelative; // @synthesize dateIsRelative=_dateIsRelative;
@property long long dateUnits; // @synthesize dateUnits=_dateUnits;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationIncludePII:(BOOL)arg1;
- (id)escapedString:(id)arg1;
@property(copy) NSString *expression; // @synthesize expression=_expression;
- (id)fixOnceWithExpandedSmartMailboxes:(id)arg1 forSpotlight:(BOOL)arg2;
@property(readonly, nonatomic) BOOL hasExpression;
@property(readonly, nonatomic) BOOL hasNumberCriterion;
- (id)init;
- (id)initWithCriterion:(id)arg1 expression:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(BOOL)arg2;
- (BOOL)isEqualToCriterion:(id)arg1;
@property(readonly, nonatomic) BOOL isExpressibleInTigerSchema;
@property(readonly, nonatomic) BOOL isSpotlightCriterion;
- (BOOL)isValid:(id *)arg1 options:(unsigned int)arg2;
@property NSUInteger knownLimit; // @synthesize knownLimit=_knownLimit;
@property(copy) NSString *name; // @synthesize name=_name;
@property BOOL originatedFromSearchSuggestion; // @synthesize originatedFromSearchSuggestion=_originatedFromSearchSuggestion;
@property long long qualifier; // @synthesize qualifier=_qualifier;
@property(readonly, nonatomic) MFCriterion *reducedMailboxCriterion;
- (long long)ruleQualifierForString:(id)arg1;
@property int specialMailboxType; // @synthesize specialMailboxType=_specialMailboxType;
@property(readonly, nonatomic) MFCriterion *simplifiedCriterion;
@property(readonly, copy, nonatomic) NSString *spotlightQueryString;
- (id)stringForRuleQualifier:(long long)arg1;
@property(readonly, nonatomic) MFMailbox *targetSmartMailbox;
@property(readonly, copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (id)utiForMessageAttachmentType:(BOOL)arg1;

@end
