//
//     Generated by private class-dump
//

@class LimitFreeStructV2, ApplyCouponStructV2, MarketingHintV2, NSMutableArray;

@interface MarketingInfoV2 : GPBMessage

@property (retain, nonatomic) LimitFreeStructV2 *limitFree;
@property (nonatomic) BOOL hasLimitFree;
@property (retain, nonatomic) MarketingHintV2 *marketingHint;
@property (nonatomic) BOOL hasMarketingHint;
@property (retain, nonatomic) NSMutableArray *marketingTagArray;
@property (readonly, nonatomic) unsigned long long marketingTagArray_Count;
@property (retain, nonatomic) ApplyCouponStructV2 *applyCoupon;
@property (nonatomic) BOOL hasApplyCoupon;

+ (id)descriptor;

- (id)limitFree;

@end