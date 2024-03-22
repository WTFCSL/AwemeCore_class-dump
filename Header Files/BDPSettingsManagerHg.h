//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol BDPNetworkTaskProtocol;

@interface BDPSettingsManagerHg : NSObject {
    BOOL _succeedRequest;
    BOOL _requesting;
    NSDictionary *_settings;
    id<BDPNetworkTaskProtocol> _requestToken;
    NSMutableArray *_completionArray;
    NSMutableDictionary *_updateHandlers;
    NSMutableArray *_customParamsBlkArray;
    NSMutableArray *_getResponseBlkArray;
    double _lastRequestCPUTime;
    id _observerToken;
}

@property (copy, nonatomic) NSDictionary *odrList;
@property (copy, nonatomic) NSDictionary *settings;
@property (nonatomic) BOOL requesting;
@property (weak, nonatomic) id<BDPNetworkTaskProtocol> requestToken;
@property (retain, nonatomic) NSMutableArray *completionArray;
@property (retain, nonatomic) NSMutableDictionary *updateHandlers;
@property (retain, nonatomic) NSMutableArray *customParamsBlkArray;
@property (retain, nonatomic) NSMutableArray *getResponseBlkArray;
@property (nonatomic) double lastRequestCPUTime;
@property (readonly, nonatomic) long long lastSettingsTime;

+ (void)bootstrapLaunch;
+ (BOOL)enableUseHighPerformance:(id)arg0 withLibVersion:(long long)arg1;
+ (BOOL)enableProcessOtherPreload;
+ (BOOL)enablePreloadGameWebview;
+ (BOOL)isInAsyncUpdateListWithAppID:(id)arg0;
+ (BOOL)isODRXModeWithAppID:(id)arg0;
+ (BOOL)enablePostError;
+ (id)defaultSettings;
+ (id)sharedManager;

- (void)setupObserver;
- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)observeUpdateForConfigName:(id)arg0 withHandler:(id /* block */)arg1;
- (id)completionArray;
- (void)setLastRequestCPUTime:(double)arg0;
- (double)lastRequestCPUTime;
- (void)setCompletionArray:(id)arg0;
- (id)s_stringValueForKey:(id)arg0;
- (BOOL)s_boolValueForKey:(id)arg0;
- (id)s_objectValueForKey:(id)arg0;
- (long long)s_integerValueForKey:(id)arg0;
- (void)updateSettingsByForceIsAuto:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)s_dictionaryValueForKey:(id)arg0;
- (id)s_arrayValueForKey:(id)arg0;
- (BOOL)enableFullScreenPopGesture;
- (BOOL)enableNativeStyleWithAppID:(id)arg0;
- (double)s_floatValueForKey:(id)arg0;
- (void)updateSettingsIfNeedWithIsAuto:(BOOL)arg0 completion:(id /* block */)arg1;
- (BOOL)odrFtw;
- (void)updateSettingsIfNeed:(id /* block */)arg0;
- (void)addCustomParamsBlock:(id /* block */)arg0;
- (BOOL)requesting;
- (void)setRequesting:(BOOL)arg0;
- (BOOL)shouldEnableNetworkMonitor:(id)arg0;
- (id)possibleErrorCodeFields;
- (id)possibleErrorMessageFields;
- (long long)lastSettingsTime;
- (void)requestSettingsWithInfo:(id)arg0 shouldCache:(BOOL)arg1;
- (void)forceUpdateSettings;
- (id)customParamsBlkArray;
- (void)requestSettingsWithInfo:(id)arg0 shouldCache:(BOOL)arg1 autoRequest:(BOOL)arg2;
- (id)generalRequestParam;
- (id)fixCustomParamsIsAutoRequest:(BOOL)arg0;
- (void)handleRequestResultWithData:(id)arg0 response:(id)arg1 error:(id)arg2 trackInfo:(id)arg3 shouldCache:(BOOL)arg4;
- (void)trackRequestResultWithInfo:(id)arg0 error:(id)arg1;
- (void)trackServiceUpdateStartWithInfo:(id)arg0 key:(id)arg1;
- (void)trackServiceUpdateResultWithInfo:(id)arg0 key:(id)arg1 success:(BOOL)arg2 error:(id)arg3;
- (void)registerSettingsParams:(id)arg0 updateImmdiately:(BOOL)arg1;
- (void)setCustomParamsBlkArray:(id)arg0;
- (void)trackSettingsVersion;
- (void)addGetResponseBlock:(id /* block */)arg0;
- (id)odrList;
- (void)setOdrList:(id)arg0;
- (id)odrAllowList;
- (id)asyncUpdateAllowList;
- (id)getResponseBlkArray;
- (void)setGetResponseBlkArray:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (id)updateHandlers;
- (void)setUpdateHandlers:(id)arg0;
- (id)settings;
- (void)dealloc;
- (id)requestToken;
- (void)setRequestToken:(id)arg0;

@end