//
//     Generated by private class-dump
//

@class NSString;
@protocol FurionSmartCommonServiceProtocol;

@interface AWEPlayerVolumeAdjustSmartService : HTSService <AWEPlayerVolumeAdjustSmartService, FurionSmartServiceProtocol> {
    BOOL _isRunning;
    id<FurionSmartCommonServiceProtocol> _smartCommonService;
    long long _skipTimes;
    long long _lastRunTime;
}

@property (retain, nonatomic) id<FurionSmartCommonServiceProtocol> smartCommonService;
@property (nonatomic) long long skipTimes;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) long long lastRunTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;
+ (id)sharedInstance;

- (void)setSmartCommonService:(id)arg0;
- (id)smartCommonService;
- (void)runWithConfigBuilder:(id /* block */)arg0 completion:(id /* block */)arg1;
- (long long)skipTimes;
- (void)setSkipTimes:(long long)arg0;
- (BOOL)ignoreRun:(id)arg0;
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
