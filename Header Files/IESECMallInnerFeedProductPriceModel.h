//
//     Generated by private class-dump
//

@class IESECMallInnerFeedProductPriceDescModel, NSString, NSArray, NSNumber;

@interface IESECMallInnerFeedProductPriceModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_originalPrice;
    NSNumber *_minPrice;
    NSNumber *_maxPrice;
    NSNumber *_marketPrice;
    IESECMallInnerFeedProductPriceDescModel *_minPriceDesc;
    NSNumber *_hotSalePrice;
    NSString *_hotSaleSKUID;
    IESECMallInnerFeedProductPriceDescModel *_hotSalePriceDesc;
    NSNumber *_showPrice;
    NSString *_showSkuID;
    NSString *_showPriceType;
    NSArray *_suffixArray;
}

@property (retain, nonatomic) NSNumber *originalPrice;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (retain, nonatomic) NSNumber *marketPrice;
@property (retain, nonatomic) IESECMallInnerFeedProductPriceDescModel *minPriceDesc;
@property (retain, nonatomic) NSNumber *hotSalePrice;
@property (copy, nonatomic) NSString *hotSaleSKUID;
@property (retain, nonatomic) IESECMallInnerFeedProductPriceDescModel *hotSalePriceDesc;
@property (retain, nonatomic) NSNumber *showPrice;
@property (copy, nonatomic) NSString *showSkuID;
@property (copy, nonatomic) NSString *showPriceType;
@property (copy, nonatomic) NSArray *suffixArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suffixArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)showPrice;
- (void)setShowPrice:(id)arg0;
- (id)minPrice;
- (void)setMinPrice:(id)arg0;
- (id)maxPrice;
- (void)setMaxPrice:(id)arg0;
- (void)setOriginalPrice:(id)arg0;
- (id)originalPrice;
- (id)marketPrice;
- (void)setMarketPrice:(id)arg0;
- (id)showPriceType;
- (void)setShowPriceType:(id)arg0;
- (id)hotSaleSKUID;
- (id)hotSalePrice;
- (id)hotSalePriceDesc;
- (id)minPriceDesc;
- (id)suffixArray;
- (void)setMinPriceDesc:(id)arg0;
- (void)setHotSalePrice:(id)arg0;
- (void)setHotSaleSKUID:(id)arg0;
- (void)setHotSalePriceDesc:(id)arg0;
- (id)showSkuID;
- (void)setShowSkuID:(id)arg0;
- (void)setSuffixArray:(id)arg0;
- (void).cxx_destruct;

@end