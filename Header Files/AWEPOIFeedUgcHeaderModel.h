//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEPOIFeedUgcTagModel, AWEWeakAssociatedObjectWrapper, NSValue, NSNumber, NSDictionary;
@protocol AWEPOIDetailFeedUgcTagItemModelProtocol;

@interface AWEPOIFeedUgcHeaderModel : MTLModel <AWEPOIDetailFeedUgcModelABParamsProtocol, MTLJSONSerializing> {
    long long _visitedCount;
    long long _effectiveTagRatesCount;
    unsigned long long _recommendedLevel;
    NSString *_recommendedScore;
    NSArray *_tags;
    NSArray *_userAvatars;
    NSString *_recommendedPopupUrl;
    NSArray *_impressions;
    NSString *_loadMoreTextTopRight;
    NSString *_loadMoreTextBottom;
    long long _validCount;
    NSString *_headerModuleTitle;
    NSDictionary *_mobParams;
}

@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL hasExpandButton;
@property (nonatomic) BOOL forceHideExpandButton;
@property (retain, nonatomic) AWEPOIFeedUgcTagModel *expandButtonTag;
@property (readonly, nonatomic) double cellHeight;
@property (retain, nonatomic) NSNumber *collapsedCellHeight;
@property (retain, nonatomic) NSNumber *expandedCellHeight;
@property (retain, nonatomic) NSNumber *collapsedCellHeightFromIsolated;
@property (retain, nonatomic) NSNumber *expandedCellHeightFromIsolated;
@property (nonatomic) BOOL hiddenInfo;
@property (retain, nonatomic) NSNumber *infoCardHeight;
@property (retain, nonatomic) NSNumber *infoHeight;
@property (retain, nonatomic) NSNumber *infoCardHeightFromIsolated;
@property (retain, nonatomic) NSNumber *infoHeightFromIsolated;
@property (retain, nonatomic) NSNumber *impressionTagsHeight;
@property (retain, nonatomic) NSNumber *collapsedTagsHeight;
@property (retain, nonatomic) NSNumber *expandedTagsHeight;
@property (retain, nonatomic) NSArray *impureTags;
@property (readonly, nonatomic) NSArray *integratedTags;
@property (retain, nonatomic) NSArray *truncatedImpressionTags;
@property (retain, nonatomic) AWEWeakAssociatedObjectWrapper *containerBeforeReload;
@property (retain, nonatomic) NSValue *contentOffsetBeforeReload;
@property (retain, nonatomic) id<AWEPOIDetailFeedUgcTagItemModelProtocol> scrollToTagBeforeReload;
@property (nonatomic) BOOL hasTrackedShow;
@property (nonatomic) BOOL hasTrackedExpandingTagShow;
@property (nonatomic) BOOL hasShownUgcReachZero;
@property (copy, nonatomic) NSDictionary *abParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long visitedCount;
@property (nonatomic) long long effectiveTagRatesCount;
@property (nonatomic) unsigned long long recommendedLevel;
@property (copy, nonatomic) NSString *recommendedScore;
@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSArray *userAvatars;
@property (copy, nonatomic) NSString *recommendedPopupUrl;
@property (retain, nonatomic) NSArray *impressions;
@property (copy, nonatomic) NSString *loadMoreTextTopRight;
@property (copy, nonatomic) NSString *loadMoreTextBottom;
@property (nonatomic) long long validCount;
@property (copy, nonatomic) NSString *headerModuleTitle;
@property (copy, nonatomic) NSDictionary *mobParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsJSONTransformer;
+ (id)impressionsJSONTransformer;
+ (id)userAvatarsJSONTransformer;
+ (id)mobParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)recommendedScore;
- (void)setRecommendedScore:(id)arg0;
- (id)abParams;
- (void)setAbParams:(id)arg0;
- (void)setInfoHeight:(id)arg0;
- (id)infoHeight;
- (BOOL)hasTrackedShow;
- (void)setHasTrackedShow:(BOOL)arg0;
- (id)mobParams;
- (void)setMobParams:(id)arg0;
- (BOOL)hasExpandButton;
- (id)trackingParams;
- (id)trackingParamsWithConstData:(id)arg0;
- (void)setHasExpandButton:(BOOL)arg0;
- (id)headerModuleTitle;
- (BOOL)forceHideExpandButton;
- (void)setForceHideExpandButton:(BOOL)arg0;
- (double)cellHeightWithIsolatedStatus:(BOOL)arg0;
- (BOOL)hitHeaderAB;
- (id)loadMoreTextTopRight;
- (BOOL)hasShownUgcReachZero;
- (long long)visitedCount;
- (long long)effectiveTagRatesCount;
- (BOOL)hiddenInfo;
- (unsigned long long)recommendedLevel;
- (BOOL)hasTrackedExpandingTagShow;
- (void)setHasTrackedExpandingTagShow:(BOOL)arg0;
- (BOOL)hitTagAB;
- (id)integratedTags;
- (double)impressionTagsTopWithIsolatedStatus:(BOOL)arg0;
- (id)impressionTagsHeight;
- (double)tagsTopWithIsolatedStatus:(BOOL)arg0;
- (double)tagsHeightWithIsolatedStatus:(BOOL)arg0;
- (double)lineTopWithIsolatedStatus:(BOOL)arg0;
- (id)userAvatars;
- (long long)indexOfTag:(id)arg0;
- (id)recommendedPopupUrl;
- (id)integratedTagsWithIsolatedStatus:(BOOL)arg0;
- (BOOL)isSameSelectedWithTagModel:(id)arg0;
- (id)defaultMixTag;
- (id)selectWithTagModel:(id)arg0;
- (void)setContainerBeforeReload:(id)arg0;
- (void)setContentOffsetBeforeReload:(id)arg0;
- (id)containerBeforeReload;
- (id)contentOffsetBeforeReload;
- (id)scrollToTagBeforeReload;
- (void)setScrollToTagBeforeReload:(id)arg0;
- (id)infoHeightFromIsolated;
- (id)expandedTagsHeight;
- (id)collapsedTagsHeight;
- (void)setCollapsedTagsHeight:(id)arg0;
- (void)setExpandedTagsHeight:(id)arg0;
- (void)setExpandButtonTag:(id)arg0;
- (id)expandButtonTag;
- (void)setImpureTags:(id)arg0;
- (void)setTruncatedImpressionTags:(id)arg0;
- (id)truncatedImpressionTags;
- (id)selectedTagModel;
- (unsigned long long)ugcDisplayStyle;
- (id)selectWithConstData:(id)arg0;
- (void)decreaseTagCountWithKey:(id)arg0;
- (id)resetToSelectDefaultMixTag;
- (void)setHasShownUgcReachZero:(BOOL)arg0;
- (double)floatingBottomWithIsolatedStatus:(BOOL)arg0;
- (BOOL)hitPOIScoreInRateListAB;
- (void)setHiddenInfo:(BOOL)arg0;
- (id)expandedCellHeight;
- (id)collapsedCellHeight;
- (void)setCollapsedCellHeight:(id)arg0;
- (void)setExpandedCellHeight:(id)arg0;
- (id)collapsedCellHeightFromIsolated;
- (void)setCollapsedCellHeightFromIsolated:(id)arg0;
- (id)expandedCellHeightFromIsolated;
- (void)setExpandedCellHeightFromIsolated:(id)arg0;
- (id)infoCardHeight;
- (void)setInfoCardHeight:(id)arg0;
- (id)infoCardHeightFromIsolated;
- (void)setInfoCardHeightFromIsolated:(id)arg0;
- (void)setInfoHeightFromIsolated:(id)arg0;
- (void)setImpressionTagsHeight:(id)arg0;
- (id)impureTags;
- (void)resetTagsTrackStatus;
- (BOOL)hitTitleAB;
- (void)setVisitedCount:(long long)arg0;
- (void)setEffectiveTagRatesCount:(long long)arg0;
- (void)setRecommendedLevel:(unsigned long long)arg0;
- (void)setUserAvatars:(id)arg0;
- (void)setRecommendedPopupUrl:(id)arg0;
- (void)setLoadMoreTextTopRight:(id)arg0;
- (id)loadMoreTextBottom;
- (void)setLoadMoreTextBottom:(id)arg0;
- (void)setHeaderModuleTitle:(id)arg0;
- (void).cxx_destruct;
- (void)setIsExpanded:(BOOL)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)tags;
- (BOOL)isExpanded;
- (id)impressions;
- (void)setTags:(id)arg0;
- (void)setImpressions:(id)arg0;
- (double)cellHeight;
- (void)recalculateSize;
- (void)setValidCount:(long long)arg0;
- (long long)validCount;

@end
