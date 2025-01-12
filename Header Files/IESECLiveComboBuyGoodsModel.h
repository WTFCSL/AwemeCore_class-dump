//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface IESECLiveComboBuyGoodsModel : MTLModel <MTLJSONSerializing> {
    NSString *_coverURL;
    NSString *_promotionID;
    NSString *_productID;
    NSNumber *_minPrice;
    NSNumber *_maxPrice;
    long long _goodsState;
}

@property (copy, nonatomic) NSString *coverURL;
@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSNumber *minPrice;
@property (copy, nonatomic) NSNumber *maxPrice;
@property (nonatomic) long long goodsState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)promotionID;
- (void)setPromotionID:(id)arg0;
- (id)minPrice;
- (void)setMinPrice:(id)arg0;
- (id)maxPrice;
- (void)setMaxPrice:(id)arg0;
- (long long)goodsState;
- (void)setGoodsState:(long long)arg0;
- (id)productID;
- (void).cxx_destruct;
- (void)setProductID:(id)arg0;
- (id)coverURL;
- (void)setCoverURL:(id)arg0;

@end
