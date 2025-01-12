//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEColorFilterConfigurationHelper : NSObject {
    NSMutableDictionary *_ratioMapForBeautifyItems;
    unsigned long long _filterConfigurationType;
}

@property (retain, nonatomic) NSMutableDictionary *ratioMapForBeautifyItems;
@property (nonatomic) unsigned long long filterConfigurationType;

+ (id)configurationKeyWithType:(unsigned long long)arg0;

- (BOOL)hasIndensityRatioForColorEffect:(id)arg0;
- (float)getEffectIndensityRatioWithDefaultIndensity:(float)arg0 applyedIndensity:(float)arg1;
- (void)updateIndensityRatioForColorEffect:(id)arg0 publishModel:(id)arg1 ratioKey:(id)arg2;
- (float)getEffectIndensityWithDefaultIndensity:(float)arg0 Ratio:(float)arg1;
- (BOOL)hasIndensityRatioForColorEffect:(id)arg0 publishModel:(id)arg1;
- (float)indensityRatioForColorEffect:(id)arg0 publishModel:(id)arg1;
- (void)setIndensityRatioForColorEffect:(id)arg0 ratio:(float)arg1;
- (float)indensityRatioForColorEffect:(id)arg0;
- (void)setIndensityRatioForColorEffect:(id)arg0 publishModel:(id)arg1 ratio:(float)arg2;
- (void)setFilterConfigurationType:(unsigned long long)arg0;
- (id)getColorFilterRatioDicKey:(id)arg0 publishModel:(id)arg1;
- (id)ratioMapForBeautifyItems;
- (unsigned long long)filterConfigurationType;
- (id)initWithBeautyConfiguration:(unsigned long long)arg0;
- (void)setRatioMapForBeautifyItems:(id)arg0;
- (void).cxx_destruct;

@end
