//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSDictionary, NSMutableSet, NSString, NSNumber, NSMutableArray;

@interface BDUGLuckyContainerService : NSObject <BDXBridgeNetworkServiceProtocol, BDSchemaInterceptorProtocol, BDXHostNavigationProtocol, BDUGLuckyContainerProtocol> {
    NSMutableArray *containerInjectDataBuildBlock;
    NSDictionary *_containerSettings;
    NSNumber *_domainAllowListDisabled;
    NSMutableDictionary *_thermalStatus;
    double _feedReadyTimestamp;
    NSMutableSet *_triggeredPreloadURLs;
}

@property (copy, nonatomic) NSDictionary *containerSettings;
@property (copy, nonatomic) NSNumber *domainAllowListDisabled;
@property (retain, nonatomic) NSMutableDictionary *thermalStatus;
@property (nonatomic) double feedReadyTimestamp;
@property (retain, nonatomic) NSMutableSet *triggeredPreloadURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *containerInjectDataBuildBlock;

+ (void)didFinishLogin;
+ (void)didFinishLogout;
+ (void)registerQueryRemoveAdapter;
+ (void)__initPreloadBDIWithType:(long long)arg0;
+ (void)initializeBulletSettings;
+ (void)didFinishLoadFeed;
+ (void)appSettingsDidUpdate;
+ (void)updateListenStatus:(id)arg0;
+ (void)updateSystemPerfStatus:(id)arg0;
+ (id)sharedInstance;
+ (id)serviceProtocol;

- (BOOL)closeWithContainerID:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (void)bdxPushViewController:(id)arg0 animated:(BOOL)arg1;
- (void)bdxPresentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)__forestPreloadByFeedReady:(BOOL)arg0;
- (void)__forestPreloadByFeedReady:(BOOL)arg0 settingsDict:(id)arg1;
- (void)__forestPreloadByAppSettingsUpdate:(id)arg0;
- (id)__queryToRemoveForSchema:(id)arg0;
- (void)sSettingsDidUpdate:(id)arg0;
- (void)dSettingsDidUpdate:(id)arg0;
- (void)pSettingsDidUpdate:(id)arg0;
- (void)actTokenDidFail:(id)arg0;
- (void)pSettingsDidChange:(id)arg0;
- (void)actCommonDidUpdate:(id)arg0;
- (void)parseNewContainerSettings;
- (void)__updatePreConfig;
- (id)ugBDXContextWithUrlString:(id)arg0;
- (id)ugBDXContextWithUrlString:(id)arg0 monitorParams:(id)arg1;
- (id)ugBDXContextWithUrlString:(id)arg0 initialData:(id)arg1 monitorParams:(id)arg2;
- (void)recordContainerOpenTimestamp:(id)arg0;
- (void)openWithUrl:(id)arg0 lifecycleDelegate:(id)arg1 completion:(id /* block */)arg2;
- (void)openWithUrl:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (id)createContainerWithUrl:(id)arg0 params:(id)arg1 error:(id *)arg2;
- (id)createContainerViewWithUrl:(id)arg0 params:(id)arg1 error:(id *)arg2;
- (void)loadCreatedContainerView:(id)arg0 enableLoadingView:(BOOL)arg1 enableLoadFailedView:(BOOL)arg2;
- (void)setCreatedContainerView:(id)arg0 appeared:(BOOL)arg1;
- (void)preloadWithUrlString:(id)arg0 completion:(id /* block */)arg1;
- (void)prefetchWithUrlString:(id)arg0;
- (void)preloadForestWithUrlString:(id)arg0 triggerType:(id)arg1;
- (void)preloadBDIWithUrlString:(id)arg0;
- (id)containerInjectDataBuildBlock;
- (void)setContainerInjectDataBuildBlock:(id)arg0;
- (id)_realURLForURLSchema:(id)arg0;
- (BOOL)isAllowedURL:(id)arg0 originURLString:(id)arg1;
- (id)__preprocessURLString:(id)arg0 realURL:(id)arg1 addHostExtraParams:(BOOL)arg2;
- (void)trySetupPrefetch;
- (id)mergedLifecycleDelegateWith:(id)arg0;
- (id)ugBDXContextWithUrlString:(id)arg0 initialData:(id)arg1 lifecycleDelegate:(id)arg2;
- (void)__configTraceRouteMonitorMetricWithContext:(id)arg0 params:(id)arg1 currentTime:(double)arg2;
- (BOOL)isViewFloatingWithURL:(id)arg0 queryItems:(id)arg1;
- (BOOL)isPopupWithQueueWithURL:(id)arg0 queryItems:(id)arg1;
- (void)postProcessContainer:(id)arg0 attachment:(id)arg1 failedViewHasClose:(BOOL)arg2;
- (id)__mergedViewLifecycleDelegateWith:(id)arg0;
- (BOOL)__isOptimizationEnabledForURLString:(id)arg0 switchName:(id)arg1;
- (id)__forestPreloadConfigWithConfig:(id)arg0;
- (id)ugBDXContextWithUrlString:(id)arg0 initialData:(id)arg1 lifecycleDelegate:(id)arg2 monitorParams:(id)arg3;
- (void)__configInjectDataInContext:(id)arg0 schema:(id)arg1;
- (void)__configGlobalPropsInContext:(id)arg0 url:(id)arg1;
- (void)__configUIInContext:(id)arg0 url:(id)arg1;
- (void)__configNetworkServiceInContext:(id)arg0;
- (void)__configSchemaInterceptorInContext:(id)arg0;
- (void)__configBridgeAsyncExecuteInContext:(id)arg0;
- (void)__configTracertMonitorInContext:(id)arg0 schema:(id)arg1 monitorParams:(id)arg2;
- (void)__configBDIPreloadInContext:(id)arg0 url:(id)arg1;
- (id)containerSettings;
- (id)__urlStringByAddingHostAdditionalParamsWithUrl:(id)arg0;
- (void)__configQueryParamsDataForInjectData:(id)arg0 queryItem:(id)arg1;
- (void)__configAppSettingsDataForInjectData:(id)arg0 url:(id)arg1 queryItem:(id)arg2;
- (void)__configDogSettingsDataForInjectData:(id)arg0 originURLString:(id)arg1 url:(id)arg2 queryItem:(id)arg3;
- (void)__configOldDogSettingsDataForInjectData:(id)arg0 url:(id)arg1;
- (void)__configTimeForInjectData:(id)arg0 path:(id)arg1;
- (void)__configOtherDataForInjectData:(id)arg0 path:(id)arg1;
- (void)__configDownGradeSettingsForInjectData:(id)arg0 path:(id)arg1;
- (id)__outterAddtionalGlobalPropsWithUrl:(id)arg0;
- (id)__innerAddtionalGlobalProps;
- (BOOL)__isH5Container:(id)arg0;
- (id)__failReasonForSettingsUpdate;
- (id)__optimizationSettingsWithPath:(id)arg0;
- (void)sendSettingsUpdatedEventWithSettingsType:(unsigned long long)arg0;
- (void)sendSettingsChangedEventWithSettingsType:(unsigned long long)arg0;
- (void)setContainerSettings:(id)arg0;
- (void)updateThermalStatus:(id)arg0;
- (id)__optimizationSettingsWithURLString:(id)arg0;
- (id)domainAllowListDisabled;
- (BOOL)__mergedLifecycleDelegateShouldUseNewMultiDelegate;
- (id)__transferSchemas:(id)arg0 optSwitchName:(id)arg1;
- (BOOL)__isOptimizationEnabledForPath:(id)arg0 switchName:(id)arg1;
- (void)setFeedReadyTimestamp:(double)arg0;
- (double)feedReadyTimestamp;
- (void)__forestPreloadExecuteWithConfig:(id)arg0 delayMS:(double)arg1;
- (id)triggeredPreloadURLs;
- (void)__preloadForestWithConfig:(id)arg0;
- (id)apiParams;
- (void)requestWithParam:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)__configTracertMonitorInContext:(id)arg0 schema:(id)arg1;
- (void)setDomainAllowListDisabled:(id)arg0;
- (void)setThermalStatus:(id)arg0;
- (void)setTriggeredPreloadURLs:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)errorMessage;
- (BOOL)convert:(id)arg0;
- (id)thermalStatus;

@end