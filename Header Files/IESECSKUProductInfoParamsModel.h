//
//     Generated by private class-dump
//

@class NSString;

@interface IESECSKUProductInfoParamsModel : MTLModel <MTLJSONSerializing> {
    BOOL _isMulti;
    NSString *_productId;
    NSString *_promotionId;
    NSString *_shopId;
    NSString *_combinationId;
    long long _promotionSource;
    NSString *_hotSaleSkuId;
}

@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *promotionId;
@property (nonatomic) BOOL isMulti;
@property (copy, nonatomic) NSString *shopId;
@property (copy, nonatomic) NSString *combinationId;
@property (nonatomic) long long promotionSource;
@property (copy, nonatomic) NSString *hotSaleSkuId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)promotionSource;
- (id)promotionId;
- (void)setPromotionId:(id)arg0;
- (id)shopId;
- (void)setShopId:(id)arg0;
- (void)setIsMulti:(BOOL)arg0;
- (void)setPromotionSource:(long long)arg0;
- (BOOL)isMulti;
- (void)setHotSaleSkuId:(id)arg0;
- (id)hotSaleSkuId;
- (void)setCombinationId:(id)arg0;
- (id)combinationId;
- (void).cxx_destruct;
- (id)productId;
- (void)setProductId:(id)arg0;

@end