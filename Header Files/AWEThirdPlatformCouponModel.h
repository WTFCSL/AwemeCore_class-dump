//
//     Generated by private class-dump
//

@class NSString;

@interface AWEThirdPlatformCouponModel : MTLModel <MTLJSONSerializing> {
    NSString *_couponPrice;
    NSString *_couponText;
}

@property (copy, nonatomic) NSString *couponPrice;
@property (copy, nonatomic) NSString *couponText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)couponPrice;
- (id)couponText;
- (void)setCouponPrice:(id)arg0;
- (void)setCouponText:(id)arg0;
- (void).cxx_destruct;

@end
