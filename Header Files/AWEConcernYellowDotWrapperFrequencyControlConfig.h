//
//     Generated by private class-dump
//

@class AWEConcernYellowDotNoClickFrequencyConfig, AWEConcernYellowDotNaturalDayCountFrequencyConfig, AWEConcernYellowDotMaxCountMinIntervalFrequencyConfig;

@interface AWEConcernYellowDotWrapperFrequencyControlConfig : NSObject {
    long long _groupID;
    AWEConcernYellowDotNoClickFrequencyConfig *_noClickFrequency;
    AWEConcernYellowDotMaxCountMinIntervalFrequencyConfig *_maxCountMinIntervalFrequency;
    AWEConcernYellowDotNaturalDayCountFrequencyConfig *_naturalDayCountFrequency;
}

@property (nonatomic) long long groupID;
@property (retain, nonatomic) AWEConcernYellowDotNoClickFrequencyConfig *noClickFrequency;
@property (retain, nonatomic) AWEConcernYellowDotMaxCountMinIntervalFrequencyConfig *maxCountMinIntervalFrequency;
@property (retain, nonatomic) AWEConcernYellowDotNaturalDayCountFrequencyConfig *naturalDayCountFrequency;

- (id)configWithGroupID:(long long)arg0;
- (id)noClickFrequency;
- (id)maxCountMinIntervalFrequency;
- (id)naturalDayCountFrequency;
- (id)findConfigWithGroupID:(long long)arg0;
- (void)setNoClickFrequency:(id)arg0;
- (void)setMaxCountMinIntervalFrequency:(id)arg0;
- (void)setNaturalDayCountFrequency:(id)arg0;
- (void)setGroupID:(long long)arg0;
- (id)init;
- (long long)groupID;
- (void).cxx_destruct;

@end
