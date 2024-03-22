//
//     Generated by private class-dump
//

@class NSString;

@interface IESECLiveSkuInfo : MTLModel <MTLJSONSerializing> {
    NSString *_skuId;
    long long _stockNum;
    long long _price;
    long long _couponPrice;
}

@property (copy, nonatomic) NSString *skuId;
@property (nonatomic) long long stockNum;
@property (nonatomic) long long price;
@property (nonatomic) long long couponPrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)skuId;
- (void)setSkuId:(id)arg0;
- (long long)couponPrice;
- (void)setCouponPrice:(long long)arg0;
- (long long)stockNum;
- (void)setStockNum:(long long)arg0;
- (long long)price;
- (void).cxx_destruct;
- (void)setPrice:(long long)arg0;

@end
