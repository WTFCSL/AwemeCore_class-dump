//
//     Generated by private class-dump
//

@class NSDictionary, AWEBaseSmartServiceMonitorObserver, NSString;
@protocol FurionSmartCommonServiceProtocol;

@interface AWEBaseSmartServiceImpl : HTSService <FurionSmartServiceProtocol, FurionSmartCommonServiceDelegate, FurionPredictTruthInjector> {
    BOOL _isRunning;
    BOOL _commonServiceInitSuccess;
    id<FurionSmartCommonServiceProtocol> _smartCommonService;
    long long _skipTimes;
    long long _lastRunTime;
    NSDictionary *_appSessionFactorsConfigMap;
    AWEBaseSmartServiceMonitorObserver *_monitorObserver;
    NSString *_sceneName;
}

@property (retain, nonatomic) id<FurionSmartCommonServiceProtocol> smartCommonService;
@property (nonatomic) long long skipTimes;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) long long lastRunTime;
@property (nonatomic) BOOL commonServiceInitSuccess;
@property (copy, nonatomic) NSDictionary *appSessionFactorsConfigMap;
@property (retain, nonatomic) AWEBaseSmartServiceMonitorObserver *monitorObserver;
@property (copy, nonatomic) NSString *sceneName;
@property (readonly, nonatomic) unsigned long long engineType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;

- (void)setupCommonServiceWithConfigMap:(id)arg0;
- (BOOL)commonServiceInitSuccess;
- (void)setCommonServiceInitSuccess:(BOOL)arg0;
- (void)setSmartCommonService:(id)arg0;
- (id)smartCommonService;
- (id)monitorObserver;
- (void)setupAppSessionFactorsConfigMapWithServiceConfigMap:(id)arg0;
- (void)setAppSessionFactorsConfigMap:(id)arg0;
- (void)onRunConfigBuilder:(id)arg0;
- (void)onWillRunCompletion:(BOOL *)arg0 input:(id)arg1 output:(id)arg2;
- (void)onDidRunCompletion:(BOOL *)arg0 input:(id)arg1 output:(id)arg2;
- (void)runWithConfigBuilder:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)onAppSessionFactorsConfigMapUpdate:(id)arg0;
- (BOOL)shouldIgnoreRunWithParams:(id)arg0;
- (long long)skipTimes;
- (void)setSkipTimes:(long long)arg0;
- (id)appSessionFactorsConfigMap;
- (void)setMonitorObserver:(id)arg0;
- (void)setIsRunning:(BOOL)arg0;
- (BOOL)isRunning;
- (id)init;
- (BOOL)enabled;
- (void)setConfig:(id)arg0;
- (unsigned long long)engineType;
- (void).cxx_destruct;
- (id)serviceName;
- (void)prepare;
- (id)sceneName;
- (long long)lastRunTime;
- (void)setLastRunTime:(long long)arg0;
- (void)setSceneName:(id)arg0;
- (void)setupService;
- (id)lastResult;

@end