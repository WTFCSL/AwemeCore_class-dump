//
//     Generated by private class-dump
//

@interface AWEConcernYellowDotDemotionSetting : AWEBaseApiModel {
    long long _yellowDotDemotionSwitch;
    long long _followDotDemotionThreshold;
    long long _familiarDotDemotionThreshold;
    long long _yellowDotDemotionMaxTime;
}

@property (nonatomic) long long yellowDotDemotionSwitch;
@property (nonatomic) long long followDotDemotionThreshold;
@property (nonatomic) long long familiarDotDemotionThreshold;
@property (nonatomic) long long yellowDotDemotionMaxTime;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)followDotDemotionThreshold;
- (long long)familiarDotDemotionThreshold;
- (long long)yellowDotDemotionMaxTime;
- (long long)yellowDotDemotionSwitch;
- (void)setYellowDotDemotionSwitch:(long long)arg0;
- (void)setFollowDotDemotionThreshold:(long long)arg0;
- (void)setFamiliarDotDemotionThreshold:(long long)arg0;
- (void)setYellowDotDemotionMaxTime:(long long)arg0;

@end