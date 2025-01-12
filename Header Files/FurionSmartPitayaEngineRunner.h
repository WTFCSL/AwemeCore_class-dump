//
//     Generated by private class-dump
//

@class NSString, FurionSmartEngineConfig;

@interface FurionSmartPitayaEngineRunner : NSObject <FurionSmartEngineRunnerProtocol> {
    FurionSmartEngineConfig *_config;
    long long _lastRunSdkCost;
    long long _lastRunRetCode;
}

@property (retain, nonatomic) FurionSmartEngineConfig *config;
@property (nonatomic) long long lastRunSdkCost;
@property (nonatomic) long long lastRunRetCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runWithConfigBuilder:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)setLastRunSdkCost:(long long)arg0;
- (void)setLastRunRetCode:(long long)arg0;
- (long long)lastRunSdkCost;
- (long long)lastRunRetCode;
- (void)fillMonitorData:(id)arg0 monitorType:(unsigned long long)arg1;
- (void)updateOutputData:(id)arg0 withOutputParams:(id)arg1;
- (BOOL)enabled;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (BOOL)isReady;
- (id)initWithConfig:(id)arg0;
- (void)prepare;
- (id)engineConfig;

@end
