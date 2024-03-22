//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESECShopHybridSecurityConfig : MTLModel <MTLJSONSerializing> {
    NSString *_configName;
    long long _verifyMode;
    NSString *_version;
    NSDictionary *_jsbAllowList;
    NSDictionary *_paramLimitSetting;
}

@property (copy, nonatomic) NSString *configName;
@property (nonatomic) long long verifyMode;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSDictionary *jsbAllowList;
@property (copy, nonatomic) NSDictionary *paramLimitSetting;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configDictJSONTransformerForClass:(Class)arg0;
+ (id)jsbAllowListJSONTransformer;
+ (id)paramLimitSettingJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)verifyMode;
- (void)setVerifyMode:(long long)arg0;
- (id)jsbAllowList;
- (void)setJsbAllowList:(id)arg0;
- (id)paramLimitSetting;
- (void)setParamLimitSetting:(id)arg0;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)version;
- (id)configName;
- (void)setConfigName:(id)arg0;

@end