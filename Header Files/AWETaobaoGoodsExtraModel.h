//
//     Generated by private class-dump
//

@class NSString, AWETaoBaoGoodsCouponModel;

@interface AWETaobaoGoodsExtraModel : MTLModel <MTLJSONSerializing> {
    AWETaoBaoGoodsCouponModel *_coupon;
}

@property (retain, nonatomic) AWETaoBaoGoodsCouponModel *coupon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)couponJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)coupon;
- (void)setCoupon:(id)arg0;
- (void).cxx_destruct;

@end
