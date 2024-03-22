//
//     Generated by private class-dump
//

@class AWEPOIRankFeedStyleModel, NSString, NSArray, AWEPOIRankContentItemModel, AWEPOIServiceButtonModel, AWEPOISpuModel, AWEPOIInfoModel, AWEPOIDouDiscountItemCard;

@interface AWEPOIRankFeedPOIStruct : MTLModel <MTLJSONSerializing> {
    AWEPOIRankContentItemModel *_poiInfo;
    AWEPOIServiceButtonModel *_poiServiceButton;
    NSArray *_itemIDs;
    NSString *_rankUrl;
    NSString *_rankIndex;
    NSString *_rankName;
    NSString *_rankShortDesc;
    AWEPOIRankFeedStyleModel *_rankStyle;
    long long _rateCount;
    NSString *_rateCountStr;
    NSString *_selectItemId;
    NSArray *_highlightVideoReviews;
    NSArray *_otherRankedBrandPOIs;
    AWEPOIInfoModel *_poiStruct;
    AWEPOISpuModel *_spuInfo;
    AWEPOIDouDiscountItemCard *_rankItemCard;
    NSString *_recommendReason;
}

@property (retain, nonatomic) AWEPOIRankContentItemModel *poiInfo;
@property (retain, nonatomic) AWEPOIServiceButtonModel *poiServiceButton;
@property (copy, nonatomic) NSArray *itemIDs;
@property (copy, nonatomic) NSString *rankUrl;
@property (copy, nonatomic) NSString *rankIndex;
@property (copy, nonatomic) NSString *rankName;
@property (copy, nonatomic) NSString *rankShortDesc;
@property (retain, nonatomic) AWEPOIRankFeedStyleModel *rankStyle;
@property (nonatomic) long long rateCount;
@property (copy, nonatomic) NSString *rateCountStr;
@property (copy, nonatomic) NSString *selectItemId;
@property (retain, nonatomic) NSArray *highlightVideoReviews;
@property (retain, nonatomic) NSArray *otherRankedBrandPOIs;
@property (retain, nonatomic) AWEPOIInfoModel *poiStruct;
@property (retain, nonatomic) AWEPOISpuModel *spuInfo;
@property (retain, nonatomic) AWEPOIDouDiscountItemCard *rankItemCard;
@property (copy, nonatomic) NSString *recommendReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)highlightVideoReviewsJSONTransformer;
+ (id)otherRankedBrandPOIsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)poiInfo;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg0;
- (void)setPoiInfo:(id)arg0;
- (id)spuInfo;
- (void)setSpuInfo:(id)arg0;
- (id)poiServiceButton;
- (void)setPoiServiceButton:(id)arg0;
- (id)rankName;
- (void)setRankName:(id)arg0;
- (id)rankIndex;
- (void)setRankIndex:(id)arg0;
- (void)setRankUrl:(id)arg0;
- (id)rankUrl;
- (id)selectItemId;
- (id)poiStruct;
- (id)rankShortDesc;
- (id)rankStyle;
- (void)setRankShortDesc:(id)arg0;
- (void)setRankStyle:(id)arg0;
- (long long)rateCount;
- (void)setRateCount:(long long)arg0;
- (id)rateCountStr;
- (void)setRateCountStr:(id)arg0;
- (void)setSelectItemId:(id)arg0;
- (id)highlightVideoReviews;
- (void)setHighlightVideoReviews:(id)arg0;
- (id)otherRankedBrandPOIs;
- (void)setOtherRankedBrandPOIs:(id)arg0;
- (void)setPoiStruct:(id)arg0;
- (id)rankItemCard;
- (void)setRankItemCard:(id)arg0;
- (void).cxx_destruct;
- (id)itemIDs;
- (void)setItemIDs:(id)arg0;

@end