//
//     Generated by private class-dump
//

@class NSArray, NSString, ACCVideoQualitySetting, ACCVideoQualitySourceSettingPayload;

@interface ACCVideoQualitySourceSetting : NSObject {
    NSString *_sourceName;
    ACCVideoQualitySetting *_sourceBasicSetting;
    NSArray *_basicSettings;
    NSArray *_strategies;
    ACCVideoQualitySourceSettingPayload *_payload;
    ACCVideoQualitySourceSetting *_superSetting;
    NSArray *_sourceStrategies;
}

@property (retain, nonatomic) ACCVideoQualitySourceSetting *superSetting;
@property (copy, nonatomic) NSArray *sourceStrategies;
@property (copy, nonatomic) NSArray *basicSettings;
@property (copy, nonatomic) NSArray *strategies;
@property (copy, nonatomic) NSString *sourceName;
@property (retain, nonatomic) ACCVideoQualitySetting *sourceBasicSetting;
@property (retain, nonatomic) ACCVideoQualitySourceSettingPayload *payload;

+ (id)modelPropertyBlacklist;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)arg0;
- (void)setStrategies:(id)arg0;
- (void)setSourceBasicSetting:(id)arg0;
- (id)sourceBasicSetting;
- (id)basicSettings;
- (void)setSuperSetting:(id)arg0;
- (id)sourceStrategies;
- (id)superSetting;
- (void)setBasicSettings:(id)arg0;
- (void)setSourceStrategies:(id)arg0;
- (id)sourceName;
- (void)setSourceName:(id)arg0;
- (id)payload;
- (void).cxx_destruct;
- (void)setPayload:(id)arg0;
- (id)description;
- (id)strategies;

@end
