//
//     Generated by private class-dump
//

@class NSString, FurionSmartSceneMonitorConfig, FurionSmartServicePortraitFilter, FurionSmartServiceBlockTimeFilter, NSDictionary;

@interface FurionSmartServiceConfig : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    BOOL _enableNewCommonService;
    BOOL _enableLock;
    NSString *sceneName;
    NSDictionary *configMap;
    NSString *_modelName;
    long long _realNextCount;
    FurionSmartServiceBlockTimeFilter *_blockTimeFilter;
    FurionSmartServicePortraitFilter *_portraitFilter;
    FurionSmartSceneMonitorConfig *_monitor;
}

@property (retain, nonatomic) FurionSmartServiceBlockTimeFilter *blockTimeFilter;
@property (retain, nonatomic) FurionSmartServicePortraitFilter *portraitFilter;
@property (retain, nonatomic) FurionSmartSceneMonitorConfig *monitor;
@property (nonatomic) BOOL enableLock;
@property (retain, nonatomic) NSString *sceneName;
@property (retain, nonatomic) NSString *modelName;
@property (nonatomic) long long realNextCount;
@property (retain, nonatomic) NSDictionary *configMap;
@property (nonatomic) BOOL enableNewCommonService;

- (void)setConfigMap:(id)arg0;
- (id)configMap;
- (void)setEnableNewCommonService:(BOOL)arg0;
- (id)getPortraitFilter;
- (id)getBlockTimeFilter;
- (void)doLock;
- (void)doUnlock;
- (BOOL)enableNewCommonService;
- (BOOL)enableLock;
- (void)setRealNextCount:(long long)arg0;
- (long long)realNextCount;
- (id)blockTimeFilter;
- (void)setBlockTimeFilter:(id)arg0;
- (id)portraitFilter;
- (void)setPortraitFilter:(id)arg0;
- (void)setEnableLock:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)monitor;
- (void)setModelName:(id)arg0;
- (id)modelName;
- (void)setMonitor:(id)arg0;
- (id)sceneName;
- (void)dealloc;
- (void)setSceneName:(id)arg0;

@end