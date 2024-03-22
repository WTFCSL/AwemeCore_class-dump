//
//     Generated by private class-dump
//

@class AWEAppExitPredictMonitorConfig, NSArray, NSDictionary, IESCombineFeatureConfig, NSString;
@protocol FurionSmartCommonServiceProtocol;

@interface AWEAppExitPredictSmartService : NSObject <IESFCEventObserver, FurionSmartServiceProtocol> {
    BOOL _isRunning;
    id<FurionSmartCommonServiceProtocol> _smartCommonService;
    long long _skipTimes;
    long long _lastRunTime;
    NSDictionary *_configMap;
    IESCombineFeatureConfig *_updateCombineTypeConfig;
    AWEAppExitPredictMonitorConfig *_monitorConfig;
    NSArray *_monitorDataCache;
}

@property (retain, nonatomic) id<FurionSmartCommonServiceProtocol> smartCommonService;
@property (nonatomic) long long skipTimes;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) long long lastRunTime;
@property (retain, nonatomic) NSDictionary *configMap;
@property (retain, nonatomic) IESCombineFeatureConfig *updateCombineTypeConfig;
@property (retain, nonatomic) AWEAppExitPredictMonitorConfig *monitorConfig;
@property (retain, nonatomic) NSArray *monitorDataCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setMonitorConfig:(id)arg0;
- (id)monitorConfig;
- (void)setConfigMap:(id)arg0;
- (id)configMap;
- (void)onTriggerEvent:(unsigned long long)arg0 params:(id)arg1;
- (void)setSmartCommonService:(id)arg0;
- (id)smartCommonService;
- (void)runWithConfigBuilder:(id /* block */)arg0 completion:(id /* block */)arg1;
- (long long)skipTimes;
- (void)setSkipTimes:(long long)arg0;
- (BOOL)ignoreRun:(id)arg0;
- (void)setUpdateCombineTypeConfig:(id)arg0;
- (id)updateCombineTypeConfig;
- (id)KVStorageHandler;
- (void)updateCombineFeature;
- (id)monitorDataCache;
- (void)setMonitorDataCache:(id)arg0;
- (void)saveMonitorDataCache;
- (void)setIsRunning:(BOOL)arg0;
- (BOOL)isRunning;
- (id)init;
- (BOOL)enabled;
- (void).cxx_destruct;
- (id)serviceName;
- (void)prepare;
- (long long)lastRunTime;
- (void)setLastRunTime:(long long)arg0;
- (id)lastResult;

@end