//
//     Generated by private class-dump
//

@class NSString;

@interface IESECLiveGoodsExtraModel : MTLModel <MTLJSONSerializing> {
    NSString *_notAvailableReason;
    double _operateTime;
    NSString *_showNotice;
    NSString *_couponThresholdPrice;
    NSString *_hasDiscount;
    NSString *_originID;
    NSString *_originType;
    NSString *_trackExtra;
}

@property (copy, nonatomic) NSString *notAvailableReason;
@property (nonatomic) double operateTime;
@property (copy, nonatomic) NSString *showNotice;
@property (retain, nonatomic) NSString *couponThresholdPrice;
@property (copy, nonatomic) NSString *hasDiscount;
@property (copy, nonatomic) NSString *originID;
@property (copy, nonatomic) NSString *originType;
@property (copy, nonatomic) NSString *trackExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operateTimeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)trackExtra;
- (void)setTrackExtra:(id)arg0;
- (void)setHasDiscount:(id)arg0;
- (id)hasDiscount;
- (id)showNotice;
- (void)setShowNotice:(id)arg0;
- (double)operateTime;
- (id)notAvailableReason;
- (void)setNotAvailableReason:(id)arg0;
- (void)setOperateTime:(double)arg0;
- (id)couponThresholdPrice;
- (void)setCouponThresholdPrice:(id)arg0;
- (void).cxx_destruct;
- (void)setOriginID:(id)arg0;
- (id)originID;
- (id)originType;
- (void)setOriginType:(id)arg0;

@end
