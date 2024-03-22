//
//     Generated by private class-dump
//

@class NSString, BDATMRulesResponseMeta;

@interface BDATMRulesResponseData : MTLModel <MTLJSONSerializing> {
    long long _appId;
    NSString *_appVersion;
    long long _platform;
    NSString *_atmConfigJson;
    BDATMRulesResponseMeta *_meta;
}

@property (nonatomic) long long appId;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) long long platform;
@property (copy, nonatomic) NSString *atmConfigJson;
@property (retain, nonatomic) BDATMRulesResponseMeta *meta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)metaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)atmConfigJson;
- (void)setAtmConfigJson:(id)arg0;
- (void)setAppId:(long long)arg0;
- (void)setMeta:(id)arg0;
- (id)meta;
- (void)setAppVersion:(id)arg0;
- (void).cxx_destruct;
- (void)setPlatform:(long long)arg0;
- (long long)platform;
- (id)appVersion;
- (long long)appId;

@end