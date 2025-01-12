//
//     Generated by private class-dump
//

@class NSDictionary, WKWebViewConfiguration, BDXUIContext, NSString, BDXHybridMonitorContext, BDXTracertMonitor, NSArray, BDXSeperateRenderContext, BDXContainerContext, BDXMonitor, BDXSchemaParam, BDXLynxOnlyContext, NSData, BDXResourceLoaderConfig, UIView, BDXPreCreateTemplateRenderContext, BDXResourceLoaderProcessorConfig, BDXWebSecureLinkConfig, BDXSchemeContext, BDXResourceLoaderContext, UIColor, NSMapTable, NSNumber, BDXWebOnlyContext;
@protocol BDXPolicyProtocol, BDXPoolProtocol, BDXBridgeProviderProtocol, BDXLoadingViewProtocol, BDXNavigationBarProtocol, BDXPerfMonitorProtocol, BDXBridgeNetworkServiceProtocol, BDXLoadErrorViewProtocol, BDXContainerLifecycleProtocol, BDXHostNavigationProtocol;

@interface BDXContext : NSObject <NSCopying> {
    BOOL _shouldUseAnniePro;
    BOOL _falconSchemeHandlerEnable;
    BOOL _falconEnable;
    BOOL _enableWebContentPreloadOffline;
    BOOL _enableSSR;
    BOOL _enableADBlock;
    BOOL _ignoreSchemaBid;
    BOOL _freezeFlag;
    BDXUIContext *_uiContext;
    BDXContainerContext *_containerContext;
    BDXLynxOnlyContext *_lynxOnlyContext;
    BDXWebOnlyContext *_webOnlyContext;
    BDXSchemeContext *_schemeContext;
    BDXResourceLoaderContext *_resourceLoaderContext;
    BDXHybridMonitorContext *_hybridMonitorContext;
    id _globalProps;
    NSString *_accessKey;
    NSString *_aid;
    NSString *_bid;
    NSString *_sdkVersion;
    NSDictionary *_monitorCommonParams;
    NSString *_originURL;
    NSDictionary *_extraInfo;
    id /* block */ _getGlobalPropsBlock;
    NSString *_appThemeReloadKey;
    NSNumber *_forceHttps;
    NSArray *_hostAllowList;
    NSString *_apAppId;
    NSString *_prefetchBusiness;
    NSDictionary *_prefetchInitData;
    NSArray *_preloadPathsForForceNetwork;
    NSArray *_preloadPathsForForbiddenRouter;
    NSDictionary *_preloadResources;
    BDXResourceLoaderProcessorConfig *_processorConfig;
    BDXSeperateRenderContext *_seperateRenderContext;
    NSNumber *_useSingletonResourceLoader;
    NSArray *_imageCacheSharedDomainList;
    BDXResourceLoaderConfig *_loaderConfig;
    id<BDXPoolProtocol> _xpool;
    BDXPreCreateTemplateRenderContext *_preCreateTemplateRenderContext;
    id<BDXPerfMonitorProtocol> _perfMonitor;
    BDXTracertMonitor *_tracertMonitor;
    NSNumber *_trackFrequency;
    NSNumber *_enableMonitor;
    id /* block */ _localInitDataBlock;
    id<BDXContainerLifecycleProtocol> _containerLifecycleDelegate;
    id<BDXHostNavigationProtocol> _hostNavigationDelegate;
    NSString *_containerName;
    id /* block */ _hasAgreedPrivacy;
    id<BDXPolicyProtocol> _policyService;
    Class _pageClazz;
    Class _schemeParamClazz;
    Class _bridgeClass;
    NSArray *_bridgeProviderClasses;
    id<BDXBridgeProviderProtocol> _bridgeProvider;
    NSArray *_xBridgeMethods;
    NSArray *_xBridgeMethodInstances;
    id<BDXBridgeNetworkServiceProtocol> _networkService;
    NSArray *_bridgesDispatchDirectly;
    NSDictionary *_additionalRequestParams;
    NSData *_templateData;
    NSDictionary *_initialData;
    NSArray *_customUIElements;
    NSString *_initialDataMarkState;
    NSNumber *_disableAutoExpose;
    NSNumber *_enableRadonCompatible;
    id /* block */ _rawViewBuilderBlock;
    id _monitorSettingModel;
    BDXWebSecureLinkConfig *_secureLinkConfig;
    NSDictionary *_additionalRequestHeaderFields;
    NSArray *_appendCommonParamsHostAllowList;
    id /* block */ _searchBlock;
    NSArray *_enableAdBlockAllowList;
    id /* block */ _networkCommonParamsBlock;
    id /* block */ _saveWebImage;
    NSString *_customUA;
    NSArray *_webInstancePlugins;
    WKWebViewConfiguration *_webViewConfig;
    NSNumber *_widthMode;
    NSNumber *_heightMode;
    double _fontScale;
    double _viewZoom;
    double _containerFontScale;
    UIView<BDXLoadingViewProtocol> *_loadingView;
    id /* block */ _loadingViewBuilder;
    UIView<BDXLoadErrorViewProtocol> *_loadFailedView;
    id /* block */ _failedViewBuilder;
    UIView<BDXNavigationBarProtocol> *_navBar;
    id /* block */ _navBarReportHandle;
    id /* block */ _navBarShareHandle;
    UIColor *_containerBackgroundColor;
    NSNumber *_containerStatusBarStyle;
    UIColor *_titleColor;
    UIColor *_lineColor;
    UIColor *_progressTintColor;
    id /* block */ _appThemeBlock;
    NSString *_defaultPageTitle;
    NSNumber *_shouldAutorotate;
    NSNumber *_orientationMask;
    id /* block */ _appFontScaleBlock;
    id /* block */ _appViewZoomBlock;
    BDXSchemaParam *_schemaParams;
    NSArray *_schemaInterceptors;
    long long _cardOptimizeMode;
    NSMapTable *_weakObjHolder;
    NSMapTable *_strongObjHolder;
    NSMapTable *_dupObjHolder;
    NSString *_sessionID;
}

@property (nonatomic) BOOL awe_enableReportToTea;
@property (retain, nonatomic) BDXMonitor *lifeCycleMonitor;
@property (retain, nonatomic) NSNumber *kitFrameWidth;
@property (retain, nonatomic) NSNumber *kitFrameHeight;
@property (nonatomic) BOOL openFromXRouter;
@property (nonatomic) long long viewType;
@property (retain, nonatomic) NSNumber *bdxLogPid;
@property (nonatomic) struct CGSize { double x0; double x1; } preferMetrixScreenSize;
@property (copy, nonatomic) NSMapTable *weakObjHolder;
@property (copy, nonatomic) NSMapTable *strongObjHolder;
@property (copy, nonatomic) NSMapTable *dupObjHolder;
@property (nonatomic) BOOL freezeFlag;
@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) BDXUIContext *uiContext;
@property (retain, nonatomic) BDXContainerContext *containerContext;
@property (retain, nonatomic) BDXLynxOnlyContext *lynxOnlyContext;
@property (retain, nonatomic) BDXWebOnlyContext *webOnlyContext;
@property (retain, nonatomic) BDXSchemeContext *schemeContext;
@property (retain, nonatomic) BDXResourceLoaderContext *resourceLoaderContext;
@property (retain, nonatomic) BDXHybridMonitorContext *hybridMonitorContext;
@property (retain, nonatomic) id globalProps;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSDictionary *monitorCommonParams;
@property (copy, nonatomic) NSString *originURL;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ getGlobalPropsBlock;
@property (copy, nonatomic) NSString *appThemeReloadKey;
@property (retain, nonatomic) NSNumber *forceHttps;
@property (copy, nonatomic) NSArray *hostAllowList;
@property (nonatomic) BOOL shouldUseAnniePro;
@property (copy, nonatomic) NSString *apAppId;
@property (copy, nonatomic) NSString *prefetchBusiness;
@property (copy, nonatomic) NSDictionary *prefetchInitData;
@property (copy, nonatomic) NSArray *preloadPathsForForceNetwork;
@property (copy, nonatomic) NSArray *preloadPathsForForbiddenRouter;
@property (copy, nonatomic) NSDictionary *preloadResources;
@property (retain, nonatomic) BDXResourceLoaderProcessorConfig *processorConfig;
@property (retain, nonatomic) BDXSeperateRenderContext *seperateRenderContext;
@property (retain, nonatomic) NSNumber *useSingletonResourceLoader;
@property (copy, nonatomic) NSArray *imageCacheSharedDomainList;
@property (retain, nonatomic) BDXResourceLoaderConfig *loaderConfig;
@property (weak, nonatomic) id<BDXPoolProtocol> xpool;
@property (retain, nonatomic) BDXPreCreateTemplateRenderContext *preCreateTemplateRenderContext;
@property (retain, nonatomic) id<BDXPerfMonitorProtocol> perfMonitor;
@property (retain, nonatomic) BDXTracertMonitor *tracertMonitor;
@property (retain, nonatomic) NSNumber *trackFrequency;
@property (retain, nonatomic) NSNumber *enableMonitor;
@property (copy, nonatomic) id /* block */ localInitDataBlock;
@property (weak, nonatomic) id<BDXContainerLifecycleProtocol> containerLifecycleDelegate;
@property (weak, nonatomic) id<BDXHostNavigationProtocol> hostNavigationDelegate;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) id /* block */ hasAgreedPrivacy;
@property (retain, nonatomic) id<BDXPolicyProtocol> policyService;
@property (nonatomic) BOOL falconSchemeHandlerEnable;
@property (nonatomic) BOOL falconEnable;
@property (retain, nonatomic) Class pageClazz;
@property (retain, nonatomic) Class schemeParamClazz;
@property (weak, nonatomic) Class bridgeClass;
@property (copy, nonatomic) NSArray *bridgeProviderClasses;
@property (weak, nonatomic) id<BDXBridgeProviderProtocol> bridgeProvider;
@property (copy, nonatomic) NSArray *xBridgeMethods;
@property (copy, nonatomic) NSArray *xBridgeMethodInstances;
@property (retain, nonatomic) id<BDXBridgeNetworkServiceProtocol> networkService;
@property (copy, nonatomic) NSArray *bridgesDispatchDirectly;
@property (copy, nonatomic) NSDictionary *additionalRequestParams;
@property (nonatomic) BOOL enableWebContentPreloadOffline;
@property (retain, nonatomic) NSData *templateData;
@property (copy, nonatomic) NSDictionary *initialData;
@property (copy, nonatomic) NSArray *customUIElements;
@property (copy, nonatomic) NSString *initialDataMarkState;
@property (retain, nonatomic) NSNumber *disableAutoExpose;
@property (retain, nonatomic) NSNumber *enableRadonCompatible;
@property (copy, nonatomic) id /* block */ rawViewBuilderBlock;
@property (nonatomic) BOOL enableSSR;
@property (retain, nonatomic) id monitorSettingModel;
@property (retain, nonatomic) BDXWebSecureLinkConfig *secureLinkConfig;
@property (copy, nonatomic) NSDictionary *additionalRequestHeaderFields;
@property (copy, nonatomic) NSArray *appendCommonParamsHostAllowList;
@property (copy, nonatomic) id /* block */ searchBlock;
@property (copy, nonatomic) NSArray *enableAdBlockAllowList;
@property (copy, nonatomic) id /* block */ networkCommonParamsBlock;
@property (copy, nonatomic) id /* block */ saveWebImage;
@property (copy, nonatomic) NSString *customUA;
@property (copy, nonatomic) NSArray *webInstancePlugins;
@property (retain, nonatomic) WKWebViewConfiguration *webViewConfig;
@property (nonatomic) BOOL enableADBlock;
@property (retain, nonatomic) NSNumber *widthMode;
@property (copy, nonatomic) NSNumber *heightMode;
@property (nonatomic) double fontScale;
@property (nonatomic) double viewZoom;
@property (nonatomic) double containerFontScale;
@property (retain, nonatomic) UIView<BDXLoadingViewProtocol> *loadingView;
@property (copy, nonatomic) id /* block */ loadingViewBuilder;
@property (retain, nonatomic) UIView<BDXLoadErrorViewProtocol> *loadFailedView;
@property (copy, nonatomic) id /* block */ failedViewBuilder;
@property (retain, nonatomic) UIView<BDXNavigationBarProtocol> *navBar;
@property (copy, nonatomic) id /* block */ navBarReportHandle;
@property (copy, nonatomic) id /* block */ navBarShareHandle;
@property (retain, nonatomic) UIColor *containerBackgroundColor;
@property (retain, nonatomic) NSNumber *containerStatusBarStyle;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *lineColor;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (copy, nonatomic) id /* block */ appThemeBlock;
@property (copy, nonatomic) NSString *defaultPageTitle;
@property (retain, nonatomic) NSNumber *shouldAutorotate;
@property (retain, nonatomic) NSNumber *orientationMask;
@property (copy, nonatomic) id /* block */ appFontScaleBlock;
@property (copy, nonatomic) id /* block */ appViewZoomBlock;
@property (retain, nonatomic) BDXSchemaParam *schemaParams;
@property (copy, nonatomic) NSArray *schemaInterceptors;
@property (nonatomic) BOOL ignoreSchemaBid;
@property (nonatomic) long long cardOptimizeMode;

+ (id)mergeProp:(id)arg0 to:(id)arg1 override:(BOOL)arg2;
+ (id)mergeArray:(id)arg0 to:(id)arg1 override:(BOOL)arg2;
+ (id)mergeDict:(id)arg0 to:(id)arg1 override:(BOOL)arg2;
+ (id)mergeTable:(id)arg0 to:(id)arg1 override:(BOOL)arg2;

- (void)setExtraInfo:(id)arg0;
- (id)containerLifecycleDelegate;
- (void)setContainerLifecycleDelegate:(id)arg0;
- (id)initialData;
- (void)setInitialData:(id)arg0;
- (void)setWidthMode:(id)arg0;
- (void)setHeightMode:(id)arg0;
- (id)enableMonitor;
- (void)setEnableMonitor:(id)arg0;
- (BOOL)falconEnable;
- (void)setTemplateData:(id)arg0;
- (void)setGlobalProps:(id)arg0;
- (void)setXBridgeMethods:(id)arg0;
- (void)setXBridgeMethodInstances:(id)arg0;
- (void)setFailedViewBuilder:(id /* block */)arg0;
- (void)setLoadingViewBuilder:(id /* block */)arg0;
- (void)setSecureLinkConfig:(id)arg0;
- (id)hybridMonitorContext;
- (void)setDefaultPageTitle:(id)arg0;
- (void)setAdditionalRequestHeaderFields:(id)arg0;
- (void)setBid:(id)arg0;
- (id)globalProps;
- (id)templateData;
- (id)widthMode;
- (id)heightMode;
- (void)setSchemaParams:(id)arg0;
- (id)schemaParams;
- (void)setPreloadResources:(id)arg0;
- (void)setHostNavigationDelegate:(id)arg0;
- (id)lynxOnlyContext;
- (void)mergeGlobalCtxWithBid:(id)arg0;
- (void)mergeContext:(id)arg0;
- (void)setIgnoreSchemaBid:(BOOL)arg0;
- (void)setShouldAutorotate:(id)arg0;
- (void)setOrientationMask:(id)arg0;
- (id)uiContext;
- (void)setPrefetchBusiness:(id)arg0;
- (id)bid;
- (void)setInitialDataMarkState:(id)arg0;
- (void)setSchemaInterceptors:(id)arg0;
- (void)setBridgesDispatchDirectly:(id)arg0;
- (id)monitorCommonParams;
- (void)setTracertMonitor:(id)arg0;
- (void)setMonitorCommonParams:(id)arg0;
- (id)tracertMonitor;
- (void)setLoadFailedView:(id)arg0;
- (id)loadFailedView;
- (id /* block */)failedViewBuilder;
- (id /* block */)loadingViewBuilder;
- (void)setFalconEnable:(BOOL)arg0;
- (void)setFalconSchemeHandlerEnable:(BOOL)arg0;
- (void)setCustomUA:(id)arg0;
- (id)orientationMask;
- (void)setUiContext:(id)arg0;
- (id)customUA;
- (void)setSchemeParamClazz:(Class)arg0;
- (id)schemaInterceptors;
- (void)setRawViewBuilderBlock:(id /* block */)arg0;
- (void)setBridgeProvider:(id)arg0;
- (void)freeze:(BOOL)arg0;
- (void)mergeContext:(id)arg0 shouldOverride:(BOOL)arg1;
- (BOOL)freezeFlag;
- (void)setFreezeFlag:(BOOL)arg0;
- (id)lifeCycleMonitor;
- (id)webOnlyContext;
- (void)setAppFontScaleBlock:(id /* block */)arg0;
- (void)setBridgeClass:(Class)arg0;
- (void)setGetGlobalPropsBlock:(id /* block */)arg0;
- (void)setContainerFontScale:(double)arg0;
- (void)setNetworkCommonParamsBlock:(id /* block */)arg0;
- (void)setAppThemeReloadKey:(id)arg0;
- (void)setAppThemeBlock:(id /* block */)arg0;
- (void)setXpool:(id)arg0;
- (void)setAppendCommonParamsHostAllowList:(id)arg0;
- (id)additionalRequestHeaderFields;
- (void)setUseSingletonResourceLoader:(id)arg0;
- (void)setTrackFrequency:(id)arg0;
- (void)setSearchBlock:(id /* block */)arg0;
- (void)setEnableAdBlockAllowList:(id)arg0;
- (void)setHasAgreedPrivacy:(id /* block */)arg0;
- (void)setPolicyService:(id)arg0;
- (id)customUIElements;
- (void)setCustomUIElements:(id)arg0;
- (void)setPerfMonitor:(id)arg0;
- (void)setAppViewZoomBlock:(id /* block */)arg0;
- (void)setContainerStatusBarStyle:(id)arg0;
- (BOOL)awe_enableReportToTea;
- (void)setAwe_enableReportToTea:(BOOL)arg0;
- (void)setViewZoom:(double)arg0;
- (id)preloadPathsForForbiddenRouter;
- (void)setPreloadPathsForForbiddenRouter:(id)arg0;
- (id)prefetchBusiness;
- (id)bridgeProvider;
- (void)setEnableSSR:(BOOL)arg0;
- (void)setEnableRadonCompatible:(id)arg0;
- (void)setSeperateRenderContext:(id)arg0;
- (void)setupSubContext;
- (id)perfMonitor;
- (id)webViewConfig;
- (id)enableRadonCompatible;
- (void)setLifeCycleMonitor:(id)arg0;
- (id /* block */)hasAgreedPrivacy;
- (id)resourceLoaderContext;
- (id /* block */)searchBlock;
- (BOOL)falconSchemeHandlerEnable;
- (void)setWebViewConfig:(id)arg0;
- (id /* block */)appThemeBlock;
- (void)setPageClazz:(Class)arg0;
- (void)setNavBarShareHandle:(id /* block */)arg0;
- (void)setSaveWebImage:(id /* block */)arg0;
- (id)disableAutoExpose;
- (void)setDisableAutoExpose:(id)arg0;
- (BOOL)shouldUseAnniePro;
- (void)setShouldUseAnniePro:(BOOL)arg0;
- (id)apAppId;
- (void)setApAppId:(id)arg0;
- (void)setCardOptimizeMode:(long long)arg0;
- (long long)cardOptimizeMode;
- (id /* block */)networkCommonParamsBlock;
- (id)appendCommonParamsHostAllowList;
- (id)xpool;
- (double)viewZoom;
- (id)prefetchInitData;
- (id)defaultPageTitle;
- (id /* block */)navBarReportHandle;
- (id /* block */)navBarShareHandle;
- (id)policyService;
- (struct CGSize { double x0; double x1; })preferMetrixScreenSize;
- (void)setPreferMetrixScreenSize:(struct CGSize { double x0; double x1; })arg0;
- (id)hostNavigationDelegate;
- (id)xBridgeMethodInstances;
- (BOOL)ignoreSchemaBid;
- (void)setOpenFromXRouter:(BOOL)arg0;
- (id)forceHttps;
- (id)hostAllowList;
- (Class)schemeParamClazz;
- (id)loaderConfig;
- (void)setPrefetchInitData:(id)arg0;
- (BOOL)openFromXRouter;
- (id /* block */)getGlobalPropsBlock;
- (void)setKitFrameWidth:(id)arg0;
- (void)setKitFrameHeight:(id)arg0;
- (id)xBridgeMethods;
- (id)bridgeProviderClasses;
- (Class)pageClazz;
- (id)appThemeReloadKey;
- (id)containerStatusBarStyle;
- (double)containerFontScale;
- (id)seperateRenderContext;
- (id /* block */)rawViewBuilderBlock;
- (BOOL)isMonitorEnabled;
- (id)monitorSettingModel;
- (void)setMonitorSettingModel:(id)arg0;
- (id)bridgesDispatchDirectly;
- (BOOL)enableSSR;
- (id)kitFrameWidth;
- (id)kitFrameHeight;
- (id)preCreateTemplateRenderContext;
- (void)setPreCreateTemplateRenderContext:(id)arg0;
- (id /* block */)localInitDataBlock;
- (void)setLocalInitDataBlock:(id /* block */)arg0;
- (id /* block */)appFontScaleBlock;
- (id /* block */)appViewZoomBlock;
- (id)initialDataMarkState;
- (void)setLoaderConfig:(id)arg0;
- (id)imageCacheSharedDomainList;
- (void)setImageCacheSharedDomainList:(id)arg0;
- (id)useSingletonResourceLoader;
- (id)preloadPathsForForceNetwork;
- (id)bdxLogPid;
- (void)setBdxLogPid:(id)arg0;
- (void)setWeakObjHolder:(id)arg0;
- (void)setStrongObjHolder:(id)arg0;
- (void)setDupObjHolder:(id)arg0;
- (void)attachSettings;
- (id)weakObjHolder;
- (id)strongObjHolder;
- (id)dupObjHolder;
- (Class)bridgeClass;
- (void)setBridgeProviderClasses:(id)arg0;
- (void)setPreloadPathsForForceNetwork:(id)arg0;
- (void)setNavBarReportHandle:(id /* block */)arg0;
- (id /* block */)saveWebImage;
- (void)setForceHttps:(id)arg0;
- (void)setHostAllowList:(id)arg0;
- (id)enableAdBlockAllowList;
- (id)trackFrequency;
- (id)webInstancePlugins;
- (void)setWebInstancePlugins:(id)arg0;
- (BOOL)enableWebContentPreloadOffline;
- (void)setEnableWebContentPreloadOffline:(BOOL)arg0;
- (id)schemeContext;
- (void)setSchemeContext:(id)arg0;
- (void)setLynxOnlyContext:(id)arg0;
- (void)setWebOnlyContext:(id)arg0;
- (void)setResourceLoaderContext:(id)arg0;
- (void)setHybridMonitorContext:(id)arg0;
- (id)secureLinkConfig;
- (BOOL)enableADBlock;
- (void)setEnableADBlock:(BOOL)arg0;
- (BOOL)__updatePropertyWithKey:(id)arg0 value:(id)arg1;
- (id)getObjForKey:(id)arg0;
- (id)__getPropertyWithKey:(id)arg0;
- (void)registerWeakObj:(id)arg0 forType:(Class)arg1;
- (void)registerStrongObj:(id)arg0 forType:(Class)arg1;
- (void)registerCopyObj:(id)arg0 forType:(Class)arg1;
- (void)registerWeakObj:(id)arg0 forKey:(id)arg1;
- (void)registerStrongObj:(id)arg0 forKey:(id)arg1;
- (void)registerCopyObj:(id)arg0 forKey:(id)arg1;
- (id)getObjForType:(Class)arg0;
- (BOOL)isWeakObjForKey:(id)arg0;
- (id)shouldAutorotate;
- (id)init;
- (id)networkService;
- (void)setLineColor:(id)arg0;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (id)sessionID;
- (id)lineColor;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)titleColor;
- (id)containerName;
- (void)setProgressTintColor:(id)arg0;
- (void)setNetworkService:(id)arg0;
- (void)setTitleColor:(id)arg0;
- (long long)viewType;
- (void)dealloc;
- (void)setContainerName:(id)arg0;
- (id)progressTintColor;
- (id)sdkVersion;
- (id)containerBackgroundColor;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (id)containerContext;
- (void)setContainerContext:(id)arg0;
- (double)fontScale;
- (void)setFontScale:(double)arg0;
- (id)originURL;
- (void)setOriginURL:(id)arg0;
- (id)processorConfig;
- (void)setProcessorConfig:(id)arg0;
- (id)preloadResources;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setViewType:(long long)arg0;
- (id)extraInfo;
- (void)setAid:(id)arg0;
- (id)aid;
- (void)setSdkVersion:(id)arg0;
- (void)setAdditionalRequestParams:(id)arg0;
- (id)additionalRequestParams;
- (void)setContainerBackgroundColor:(id)arg0;
- (id)navBar;
- (void)setNavBar:(id)arg0;

@end
