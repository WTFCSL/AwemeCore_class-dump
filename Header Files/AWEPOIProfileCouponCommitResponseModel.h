//
//     Generated by private class-dump
//

@class AWEPOIInStoreCouponPageModel;

@interface AWEPOIProfileCouponCommitResponseModel : AWEPOIProfileCouponResponseModel {
    AWEPOIInStoreCouponPageModel *_couponPage;
    long long _followStatus;
}

@property (copy, nonatomic) AWEPOIInStoreCouponPageModel *couponPage;
@property (nonatomic) long long followStatus;

+ (id)followStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)followStatus;
- (void)setFollowStatus:(long long)arg0;
- (id)couponPage;
- (void)setCouponPage:(id)arg0;
- (void).cxx_destruct;

@end