//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray, AWEECCpsTrackerConfig;

@interface AWEECCpsTrackerConfigManager : NSObject {
    AWEECCpsTrackerConfig *_config;
    NSString *_configString;
    NSDictionary *_paramConfigMap;
}

@property (retain, nonatomic) AWEECCpsTrackerConfig *config;
@property (readonly, copy, nonatomic) NSString *configString;
@property (copy, nonatomic) NSDictionary *paramConfigMap;
@property (readonly, copy, nonatomic) NSArray *allkeys;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSArray *blockList;
@property (readonly, nonatomic) long long maxRetryCount;
@property (readonly, nonatomic) BOOL useNewApi;
@property (readonly, nonatomic) BOOL useOldApi;

+ (id)sharedInstance;

- (BOOL)useNewApi;
- (BOOL)useOldApi;
- (id)modelFromJSONDictionary:(id)arg0;
- (id)paramConfigMap;
- (long long)timeIntervalForRetry:(long long)arg0;
- (id)allkeys;
- (id)configForKey:(id)arg0;
- (void)setParamConfigMap:(id)arg0;
- (long long)maxRetryCount;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)version;
- (id)blockList;
- (id)configString;
- (id)remoteConfig;

@end