//
//     Generated by private class-dump
//

@interface AWEECommerceUtils : NSObject

+ (id)formatTenthousandCount:(long long)arg0;
+ (BOOL)isGoodsCacheExpiredWithLastStoreTime:(double)arg0 cacheLimit:(double)arg1;
+ (BOOL)isToutiao:(long long)arg0;
+ (long long)indexOfPromotionID:(id)arg0 inGoodsList:(id)arg1;
+ (BOOL)isRelatedToAweme:(id)arg0;
+ (BOOL)isStatusOnSale:(long long)arg0;
+ (BOOL)isTaobao:(long long)arg0;
+ (id)toutiaoPromotionSources;
+ (void)tranferToURLString:(id)arg0;
+ (double)acquireAccurateActivityTime:(double)arg0 serverTime:(double)arg1;

@end
