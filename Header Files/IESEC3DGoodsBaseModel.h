//
//     Generated by private class-dump
//

@class NSString;

@interface IESEC3DGoodsBaseModel : MTLModel <MTLJSONSerializing> {
    long long _promotionSource;
    NSString *_shopId;
    NSString *_productID;
    NSString *_promotionID;
}

@property (nonatomic) long long promotionSource;
@property (retain, nonatomic) NSString *shopId;
@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSString *promotionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)promotionID;
- (long long)promotionSource;
- (void)setPromotionID:(id)arg0;
- (id)shopId;
- (void)setShopId:(id)arg0;
- (void)setPromotionSource:(long long)arg0;
- (id)productID;
- (void).cxx_destruct;
- (void)setProductID:(id)arg0;

@end