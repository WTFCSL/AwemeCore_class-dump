//
//     Generated by private class-dump
//

@class NSArray, NSDictionary;

@interface BDXABTestHelper : NSObject {
    BOOL _enableBDXSettings;
    BOOL _enableBDXDowngrade;
    BOOL _enableMonitorReportTEA;
    BOOL _enbaleAnnieXMonitor;
    BOOL _enablePreload;
    BOOL _enablePreCreate;
    BOOL _isClearPrecreateWKWhenMemoryWarning;
    BOOL _isDestoryMonitorWhenDestruct;
    BOOL _xOpenCloseNewLogic;
    BOOL _luckyDisablePreload;
    BOOL _luckyDisablePrefetchV2;
    BOOL _layoutTopBarInViewDidLoad;
    BOOL _disableDismissHook;
    BOOL _xUploadCommonOptimizer;
    BOOL _xchooseMediaVideoPathFixedEnabled;
    BOOL _fixLogJsonEncode;
    BOOL _bdxbridgewebviewnativeParseEnabled;
    BOOL _bdxbridgeCallbackShowMessageUUID;
    BOOL _insertBlockBeforeResetView;
    BOOL _deallocHeimdallrLog;
    BOOL _lazyloadWeakCollection;
    BOOL _disableLogger;
    BOOL _enableContainerInfo;
    BOOL _enableAppendWebURLInCreatingDataStage;
    BOOL _enableUseSeclinkInSecureManagerPlugin;
    NSArray *_bdxMonitorEventBlackList;
    NSArray *_bdxMonitorEventWhiteList;
    NSArray *_bdxMonitorURLWhiteList;
    NSArray *_hostBDXMonitorURLWhiteList;
    NSArray *_hostBDXMonitorChannelWhiteList;
    long long _memorySize;
    long long _preloadSubResMemorySize;
    long long _preloadTemplateCount;
    NSDictionary *_bdxMonitorEventAbConfig;
    NSDictionary *_privateDomains;
    NSArray *_enableStrictAuthNamespace;
    long long _cardOptimizeMode;
}

@property (nonatomic) BOOL enableBDXSettings;
@property (nonatomic) BOOL enableBDXDowngrade;
@property (nonatomic) BOOL enableMonitorReportTEA;
@property (copy, nonatomic) NSArray *bdxMonitorEventBlackList;
@property (copy, nonatomic) NSArray *bdxMonitorEventWhiteList;
@property (copy, nonatomic) NSArray *bdxMonitorURLWhiteList;
@property (copy, nonatomic) NSArray *hostBDXMonitorURLWhiteList;
@property (copy, nonatomic) NSArray *hostBDXMonitorChannelWhiteList;
@property (nonatomic) BOOL enbaleAnnieXMonitor;
@property (nonatomic) long long memorySize;
@property (nonatomic) long long preloadSubResMemorySize;
@property (nonatomic) long long preloadTemplateCount;
@property (nonatomic) BOOL enablePreload;
@property (nonatomic) BOOL enablePreCreate;
@property (nonatomic) BOOL isClearPrecreateWKWhenMemoryWarning;
@property (nonatomic) BOOL isDestoryMonitorWhenDestruct;
@property (readonly, copy, nonatomic) NSArray *forestDisallowListWeb;
@property (readonly, copy, nonatomic) NSArray *forestDisallowListLynx;
@property (readonly, copy, nonatomic) NSArray *forestAllowListWeb;
@property (readonly, copy, nonatomic) NSArray *forestAllowListLynx;
@property (readonly, nonatomic) BOOL enableForestPia;
@property (copy, nonatomic) NSDictionary *bdxMonitorEventAbConfig;
@property (readonly, nonatomic) BOOL enableHybridMonitorWebBlank;
@property (readonly, nonatomic) long long updateAuthConfigTimeInterval;
@property (readonly, nonatomic) BOOL enableUpdateAuthConfig;
@property (readonly, nonatomic) long long settingsVersion;
@property (readonly, nonatomic) BOOL isCloseAuth;
@property (readonly, nonatomic) BOOL openConfigUpdate;
@property (readonly, nonatomic) BOOL isCloseAllH5Auth;
@property (readonly, nonatomic) BOOL isCloseAllLynxAuth;
@property (readonly, nonatomic) BOOL isCloseAllLynxExceptionAuth;
@property (readonly, nonatomic) BOOL isCloseAllH5ExceptionAuth;
@property (readonly, copy, nonatomic) NSArray *closeAuthUrls;
@property (readonly, nonatomic) BOOL isCloseAppIDJSBAuth;
@property (readonly, nonatomic) BOOL authTTAllPassed;
@property (readonly, nonatomic) BOOL forceUseIESAuth;
@property (readonly, nonatomic) BOOL shouldUpdateAuthConfigOnSubThread;
@property (readonly, copy, nonatomic) NSArray *lynxSignVerifyWhiteList;
@property (readonly, nonatomic) BOOL enableJSBAuthV3;
@property (readonly, nonatomic) BOOL enableAutoMatchUrl;
@property (copy, nonatomic) NSDictionary *privateDomains;
@property (readonly, copy, nonatomic) NSArray *enableStrictAuthNamespace;
@property (readonly, nonatomic) BOOL enableWebForcePrivate;
@property (readonly, copy, nonatomic) NSArray *webPublicMethods;
@property (readonly, nonatomic) BOOL enableLynxForcePrivate;
@property (readonly, copy, nonatomic) NSArray *lynxPublicMethods;
@property (readonly, copy, nonatomic) NSDictionary *commonSecureMethod;
@property (readonly, nonatomic) BOOL removeWebMethodRegister;
@property (readonly, nonatomic) BOOL removeLynxMethodRegister;
@property (nonatomic) BOOL xOpenCloseNewLogic;
@property (nonatomic) BOOL luckyDisablePreload;
@property (nonatomic) BOOL luckyDisablePrefetchV2;
@property (nonatomic) BOOL layoutTopBarInViewDidLoad;
@property (nonatomic) BOOL disableDismissHook;
@property (nonatomic) BOOL xUploadCommonOptimizer;
@property (nonatomic) BOOL xchooseMediaVideoPathFixedEnabled;
@property (readonly, nonatomic) BOOL xChooseMediaDeallocBlockEnabled;
@property (readonly, nonatomic) BOOL xChooseMediaFixUserCancelEnabled;
@property (nonatomic) BOOL fixLogJsonEncode;
@property (readonly, nonatomic) BOOL eventSubscriberEnabled;
@property (readonly, nonatomic) BOOL eventSubscriberEnabledChufa;
@property (nonatomic) BOOL bdxbridgewebviewnativeParseEnabled;
@property (nonatomic) BOOL bdxbridgeCallbackShowMessageUUID;
@property (nonatomic) BOOL insertBlockBeforeResetView;
@property (readonly, nonatomic) BOOL bdjsbridgeH5JSBAuthEnabled;
@property (readonly, nonatomic) BOOL webUrlInvokeFrameUrlEnabled;
@property (nonatomic) BOOL deallocHeimdallrLog;
@property (nonatomic) BOOL lazyloadWeakCollection;
@property (readonly, copy, nonatomic) NSArray *webviewTTNetAllowlist;
@property (nonatomic) BOOL disableLogger;
@property (nonatomic) long long cardOptimizeMode;
@property (nonatomic) BOOL enableContainerInfo;
@property (readonly, copy, nonatomic) NSDictionary *annieWebViewTerminateRescuerConfig;
@property (nonatomic) BOOL enableAppendWebURLInCreatingDataStage;
@property (nonatomic) BOOL enableUseSeclinkInSecureManagerPlugin;

+ (id)shareInstance;

- (BOOL)enablePreload;
- (void)setEnablePreload:(BOOL)arg0;
- (void)setEnablePreCreate:(BOOL)arg0;
- (void)setHostBDXMonitorURLWhiteList:(id)arg0;
- (void)setHostBDXMonitorChannelWhiteList:(id)arg0;
- (void)setMemorySize:(long long)arg0;
- (void)setEnableBDXSettings:(BOOL)arg0;
- (BOOL)enableBDXSettings;
- (BOOL)layoutTopBarInViewDidLoad;
- (long long)updateAuthConfigTimeInterval;
- (BOOL)enableUpdateAuthConfig;
- (BOOL)isCloseAuth;
- (BOOL)isCloseAllH5Auth;
- (BOOL)isCloseAllLynxAuth;
- (BOOL)isCloseAllLynxExceptionAuth;
- (BOOL)isCloseAllH5ExceptionAuth;
- (BOOL)isCloseAppIDJSBAuth;
- (BOOL)authTTAllPassed;
- (BOOL)openConfigUpdate;
- (id)closeAuthUrls;
- (BOOL)forceUseIESAuth;
- (BOOL)shouldUpdateAuthConfigOnSubThread;
- (id)lynxSignVerifyWhiteList;
- (BOOL)removeLynxMethodRegister;
- (id)privateDomains;
- (BOOL)enableLynxForcePrivate;
- (id)lynxPublicMethods;
- (id)commonSecureMethod;
- (void)setPrivateDomains:(id)arg0;
- (BOOL)enableJSBAuthV3;
- (BOOL)enableWebForcePrivate;
- (id)webPublicMethods;
- (BOOL)enableAutoMatchUrl;
- (BOOL)removeWebMethodRegister;
- (BOOL)isClearPrecreateWKWhenMemoryWarning;
- (void)setIsClearPrecreateWKWhenMemoryWarning:(BOOL)arg0;
- (BOOL)xChooseMediaDeallocBlockEnabled;
- (BOOL)xChooseMediaFixUserCancelEnabled;
- (BOOL)xchooseMediaVideoPathFixedEnabled;
- (BOOL)eventSubscriberEnabled;
- (BOOL)eventSubscriberEnabledChufa;
- (BOOL)bdjsbridgeH5JSBAuthEnabled;
- (BOOL)xOpenCloseNewLogic;
- (BOOL)xUploadCommonOptimizer;
- (BOOL)webUrlInvokeFrameUrlEnabled;
- (BOOL)bdxbridgeCallbackShowMessageUUID;
- (BOOL)bdxbridgewebviewnativeParseEnabled;
- (void)setEnableBDXDowngrade:(BOOL)arg0;
- (BOOL)enableMonitorReportTEA;
- (id)bdxMonitorEventBlackList;
- (id)bdxMonitorEventWhiteList;
- (id)bdxMonitorEventAbConfig;
- (BOOL)enableHybridMonitorWebBlank;
- (BOOL)enbaleAnnieXMonitor;
- (id)bdxMonitorURLWhiteList;
- (long long)preloadSubResMemorySize;
- (long long)preloadTemplateCount;
- (BOOL)enableClearTopNewLogic;
- (BOOL)luckyDisablePreload;
- (BOOL)luckyDisablePrefetchV2;
- (BOOL)disableDismissHook;
- (BOOL)fixLogJsonEncode;
- (BOOL)insertBlockBeforeResetView;
- (BOOL)deallocHeimdallrLog;
- (BOOL)lazyloadCollection;
- (id)webviewTTNetAllowlist;
- (BOOL)enableModifyBDColorRGBAStringObtain;
- (void)setCardOptimizeMode:(long long)arg0;
- (BOOL)enableContainerInfo;
- (BOOL)disableLogger;
- (id)sccConfig;
- (id)secLinkConfig;
- (BOOL)bdxPadAdaptSplitScreen;
- (id)forestDisallowListWeb;
- (id)forestDisallowListLynx;
- (id)forestAllowListWeb;
- (id)forestAllowListLynx;
- (BOOL)enableForestPia;
- (id)annieWebViewTerminateRescuerConfig;
- (BOOL)enableAppendWebURLInCreatingDataStage;
- (BOOL)enableUseSeclinkInSecureManagerPlugin;
- (BOOL)enablePreCreate;
- (BOOL)isDestoryMonitorWhenDestruct;
- (BOOL)enableBDXDowngrade;
- (void)setEnableMonitorReportTEA:(BOOL)arg0;
- (void)setBdxMonitorEventBlackList:(id)arg0;
- (void)setBdxMonitorEventWhiteList:(id)arg0;
- (void)setBdxMonitorURLWhiteList:(id)arg0;
- (id)hostBDXMonitorURLWhiteList;
- (id)hostBDXMonitorChannelWhiteList;
- (void)setEnbaleAnnieXMonitor:(BOOL)arg0;
- (void)setPreloadSubResMemorySize:(long long)arg0;
- (void)setPreloadTemplateCount:(long long)arg0;
- (void)setIsDestoryMonitorWhenDestruct:(BOOL)arg0;
- (void)setBdxMonitorEventAbConfig:(id)arg0;
- (id)enableStrictAuthNamespace;
- (void)setXOpenCloseNewLogic:(BOOL)arg0;
- (void)setLuckyDisablePreload:(BOOL)arg0;
- (void)setLuckyDisablePrefetchV2:(BOOL)arg0;
- (void)setLayoutTopBarInViewDidLoad:(BOOL)arg0;
- (void)setDisableDismissHook:(BOOL)arg0;
- (void)setXUploadCommonOptimizer:(BOOL)arg0;
- (void)setXchooseMediaVideoPathFixedEnabled:(BOOL)arg0;
- (void)setFixLogJsonEncode:(BOOL)arg0;
- (void)setBdxbridgewebviewnativeParseEnabled:(BOOL)arg0;
- (void)setBdxbridgeCallbackShowMessageUUID:(BOOL)arg0;
- (void)setInsertBlockBeforeResetView:(BOOL)arg0;
- (void)setDeallocHeimdallrLog:(BOOL)arg0;
- (BOOL)lazyloadWeakCollection;
- (void)setLazyloadWeakCollection:(BOOL)arg0;
- (void)setDisableLogger:(BOOL)arg0;
- (long long)cardOptimizeMode;
- (void)setEnableContainerInfo:(BOOL)arg0;
- (void)setEnableAppendWebURLInCreatingDataStage:(BOOL)arg0;
- (void)setEnableUseSeclinkInSecureManagerPlugin:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)memorySize;
- (void)setup;
- (long long)settingsVersion;

@end