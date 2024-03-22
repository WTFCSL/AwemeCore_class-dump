//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableSet, HMDHeimdallrConfig;
@protocol HMDNetworkProvider;

@interface HMDConfigStore : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexlock;
    BOOL _configFromDefaultDictionary;
    BOOL _firstFetchingCompleted;
    NSString *_appID;
    NSMutableDictionary *_lastTimestamp;
    HMDHeimdallrConfig *_hostConfig;
    NSMutableDictionary *_configList;
    id<HMDNetworkProvider> _hostProvider;
    NSMutableDictionary *_providerList;
    NSMutableSet *_sdkAppIDList;
}

@property (copy, nonatomic) NSString *appID;
@property (retain, nonatomic) NSMutableDictionary *lastTimestamp;
@property (retain, nonatomic) HMDHeimdallrConfig *hostConfig;
@property (retain, nonatomic) NSMutableDictionary *configList;
@property (retain, nonatomic) id<HMDNetworkProvider> hostProvider;
@property (retain, nonatomic) NSMutableDictionary *providerList;
@property (retain, nonatomic) NSMutableSet *sdkAppIDList;
@property (readonly, copy, nonatomic) NSString *hostAppID;
@property BOOL configFromDefaultDictionary;
@property BOOL firstFetchingCompleted;

+ (id)loadSDKAppIDList;
+ (void)saveSDKAppIDList:(id)arg0;

- (id)configList;
- (void)setConfigList:(id)arg0;
- (BOOL)configFromDefaultDictionary;
- (void)setProviderList:(id)arg0;
- (void)setSdkAppIDList:(id)arg0;
- (id)hostAppID;
- (BOOL)isHostAppID:(id)arg0;
- (id)providerList;
- (void)setHostProvider:(id)arg0;
- (id)sdkAppIDList;
- (id)lastTimestampForAppID:(id)arg0;
- (void)setLastTimestamp:(id)arg0 forAppIDList:(id)arg1;
- (id)majorConfig;
- (BOOL)setDefaultConfig:(id)arg0 forAppID:(id)arg1;
- (BOOL)setRemoteConfigs:(id)arg0;
- (id)configForAppID:(id)arg0;
- (void)enumerateAppIDsAndConfigsUsingBlock:(id /* block */)arg0;
- (BOOL)addProvider:(id)arg0 forAppID:(id)arg1;
- (BOOL)removeProvider:(void *)arg0 forAppID:(id)arg1;
- (id)providerForAppID:(id)arg0;
- (void)enumerateAppIDsAndProvidersUsingBlock:(id /* block */)arg0;
- (void)setConfigFromDefaultDictionary:(BOOL)arg0;
- (BOOL)firstFetchingCompleted;
- (void)setFirstFetchingCompleted:(BOOL)arg0;
- (id)hostProvider;
- (id)init;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (void)setLastTimestamp:(id)arg0;
- (id)appID;
- (id)lastTimestamp;
- (id)hostConfig;
- (void)setHostConfig:(id)arg0;

@end