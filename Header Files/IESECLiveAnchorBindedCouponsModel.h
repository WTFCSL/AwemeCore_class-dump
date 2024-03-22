//
//     Generated by private class-dump
//

@class NSArray, NSString, IESECLiveAnchorBindedCouponsExtraModel;

@interface IESECLiveAnchorBindedCouponsModel : IESECLiveApiBaseModel {
    BOOL _hasMore;
    BOOL _allowSetCoupons;
    NSArray *_coupons;
    NSString *_couponInstructionURL;
    IESECLiveAnchorBindedCouponsExtraModel *_extra;
    unsigned long long _page;
    NSString *_currentCouponID;
    NSArray *_currentCouponIds;
}

@property (copy, nonatomic) NSArray *coupons;
@property (copy, nonatomic) NSString *couponInstructionURL;
@property (retain, nonatomic) IESECLiveAnchorBindedCouponsExtraModel *extra;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long page;
@property (copy, nonatomic) NSString *currentCouponID;
@property (copy, nonatomic) NSArray *currentCouponIds;
@property (nonatomic) BOOL allowSetCoupons;

+ (id)extraJSONTransformer;
+ (id)couponsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)coupons;
- (void)setCoupons:(id)arg0;
- (id)couponInstructionURL;
- (void)setCouponInstructionURL:(id)arg0;
- (id)currentCouponID;
- (void)setCurrentCouponID:(id)arg0;
- (id)currentCouponIds;
- (void)setCurrentCouponIds:(id)arg0;
- (BOOL)allowSetCoupons;
- (void)setAllowSetCoupons:(BOOL)arg0;
- (unsigned long long)page;
- (void).cxx_destruct;
- (void)setPage:(unsigned long long)arg0;
- (id)extra;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;

@end
