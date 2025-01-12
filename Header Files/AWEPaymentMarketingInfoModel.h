//
//     Generated by private class-dump
//

@class AWEPaymentLimitFreeConfigModel, NSArray, AWEPaymentLimitFreeHintModel, AWEPaymentApplyCouponModel;

@interface AWEPaymentMarketingInfoModel : AWEBaseApiModel {
    AWEPaymentLimitFreeConfigModel *_limitFreeConfigModel;
    AWEPaymentLimitFreeHintModel *_limitFreeHintModel;
    AWEPaymentApplyCouponModel *_applyCouponModel;
    NSArray *_marketingTags;
}

@property (retain, nonatomic) AWEPaymentLimitFreeConfigModel *limitFreeConfigModel;
@property (retain, nonatomic) AWEPaymentLimitFreeHintModel *limitFreeHintModel;
@property (retain, nonatomic) AWEPaymentApplyCouponModel *applyCouponModel;
@property (copy, nonatomic) NSArray *marketingTags;

+ (id)limitFreeConfigModelJSONTransformer;
+ (id)limitFreeHintModelJSONTransformer;
+ (id)applyCouponModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)limitFreeConfigModel;
- (void)setLimitFreeConfigModel:(id)arg0;
- (id)limitFreeHintModel;
- (void)setLimitFreeHintModel:(id)arg0;
- (id)applyCouponModel;
- (void)setApplyCouponModel:(id)arg0;
- (id)marketingTags;
- (void)setMarketingTags:(id)arg0;
- (void).cxx_destruct;

@end
