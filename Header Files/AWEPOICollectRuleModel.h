//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOICollectRuleModel : MTLModel <MTLJSONSerializing> {
    long long _maxFrequencyPerDay;
    long long _maxContinuousShowWithoutCollect;
    long long _maxDisableDay;
}

@property (nonatomic) long long maxFrequencyPerDay;
@property (nonatomic) long long maxContinuousShowWithoutCollect;
@property (nonatomic) long long maxDisableDay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)maxFrequencyPerDay;
- (void)setMaxFrequencyPerDay:(long long)arg0;
- (long long)maxContinuousShowWithoutCollect;
- (void)setMaxContinuousShowWithoutCollect:(long long)arg0;
- (long long)maxDisableDay;
- (void)setMaxDisableDay:(long long)arg0;

@end
