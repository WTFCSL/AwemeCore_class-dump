//
//     Generated by private class-dump
//

@class NSDictionary, NSCache, NSString;

@interface IESSecurityGurdManager : NSObject <IESGurdEventDelegate> {
    NSString *_appAccessKey;
    NSDictionary *_config;
    NSCache *_cache;
    NSDictionary *_bridgeDic;
    NSDictionary *_dataMap;
}

@property (copy, nonatomic) NSDictionary *config;
@property (retain, nonatomic) NSCache *cache;
@property (copy, nonatomic) NSDictionary *bridgeDic;
@property (copy, nonatomic) NSDictionary *dataMap;
@property (copy, nonatomic) NSString *appAccessKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)gurdDidFinishApplyingPackageForAccessKey:(id)arg0 channel:(id)arg1 succeed:(BOOL)arg2 error:(id)arg3;
- (void)setupCache;
- (id)dataMap;
- (void)setBridgeDic:(id)arg0;
- (id)bridgeDic;
- (id)appAccessKey;
- (void)setAppAccessKey:(id)arg0;
- (void)configBridgeValidateDic:(id)arg0;
- (BOOL)hasCacheForKey:(id)arg0;
- (id)rulesCacheForKey:(id)arg0;
- (void)setRules:(id)arg0 forKey:(id)arg1;
- (id)privacyBridgeConfig;
- (void)setDataMap:(id)arg0;
- (id)privacyBridgeDataMap;
- (void)setCache:(id)arg0;
- (id)cache;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;

@end