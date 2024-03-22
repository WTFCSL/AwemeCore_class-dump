//
//     Generated by private class-dump
//

@class NSDictionary, NSString, DIRSContext;

@interface DIRSInternalFeatureModule : DIRSBasicModule <IRISModule, IRISConfigurationObserver, IRISParameterHandler> {
    NSDictionary *_settingsHoldParamters;
    NSDictionary *_applogHoldParamters;
}

@property (retain) NSDictionary *settingsHoldParamters;
@property (retain) NSDictionary *applogHoldParamters;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)moduleVersion;

- (id)exportFeatureOptions;
- (void)onRemoteSettingsDidUpdate:(id)arg0;
- (void)onRealtimeSettingsDidUpdate:(id)arg0;
- (void)setSettingsHoldParamters:(id)arg0;
- (void)setApplogHoldParamters:(id)arg0;
- (id)applogHoldParamters;
- (id)settingsHoldParamters;
- (BOOL)requestExpectedEventBatchInterval:(double)arg0 withOptions:(id)arg1;
- (void).cxx_destruct;
- (void)commonInit;

@end