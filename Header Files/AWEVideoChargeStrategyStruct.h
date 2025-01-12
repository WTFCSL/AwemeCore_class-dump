//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEVideoChargeStrategyStruct : AWEBaseApiModel {
    BOOL _supportSegmentUnlock;
    NSNumber *_totalPrice;
    long long _chargeStyle;
    NSNumber *_unitPrice;
    long long _discounThreshold;
    NSNumber *_hasPaidEpisodes;
    NSNumber *_minimumDiscount;
    NSNumber *_unlockCount;
    NSString *_extra;
}

@property (nonatomic) BOOL supportSegmentUnlock;
@property (retain, nonatomic) NSNumber *totalPrice;
@property (nonatomic) long long chargeStyle;
@property (retain, nonatomic) NSNumber *unitPrice;
@property (nonatomic) long long discounThreshold;
@property (retain, nonatomic) NSNumber *hasPaidEpisodes;
@property (retain, nonatomic) NSNumber *minimumDiscount;
@property (retain, nonatomic) NSNumber *unlockCount;
@property (copy, nonatomic) NSString *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (long long)chargeStyle;
- (void)setChargeStyle:(long long)arg0;
- (BOOL)supportSegmentUnlock;
- (void)setSupportSegmentUnlock:(BOOL)arg0;
- (id)totalPrice;
- (void)setTotalPrice:(id)arg0;
- (long long)discounThreshold;
- (void)setDiscounThreshold:(long long)arg0;
- (id)hasPaidEpisodes;
- (void)setHasPaidEpisodes:(id)arg0;
- (id)minimumDiscount;
- (void)setMinimumDiscount:(id)arg0;
- (id)unlockCount;
- (void)setUnlockCount:(id)arg0;
- (void).cxx_destruct;
- (id)extra;
- (id)unitPrice;
- (void)setUnitPrice:(id)arg0;

@end
