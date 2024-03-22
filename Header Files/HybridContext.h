//
//     Generated by private class-dump
//

@class NSMapTable, HybridResourceLoaderProcessorConfig, NSDictionary, HybridWebSecureLinkConfig, HybridSchemaParam, IESLiveDefaultSettingModel, NSString, WKWebViewConfiguration, UIColor, LynxSSRConfig, NSNumber, NSArray, HybridLynxViewPreLayoutContext, HybridMonitor;
@protocol IESECListCardsContextDelegate, LynxResourceFetcher, LynxTemplateProvider, HybridRuntimeProtocol, LynxImageFetcher, LynxDynamicComponentFetcher, LynxResourceProvider, HybridLynxMonitorProtocol;

@interface HybridContext : NSObject <NSCopying> {
    BOOL _enableJSRuntime;
    BOOL _asyncLoadTemplate;
    BOOL _disableTTNetProxy;
    BOOL _setUserAgentToRequestHeaderFields;
    BOOL _pauseAVPlayerOnHide;
    BOOL _appendCommonParams;
    id _globalProps;
    NSString *_accessKey;
    NSString *_aid;
    NSString *_bid;
    NSString *_prefetchBusiness;
    NSDictionary *_prefetchInitData;
    HybridSchemaParam *_schemaParams;
    Class _bridgeClass;
    NSArray *_bridgeProviderClasses;
    NSArray *_xBridgeMethods;
    NSArray *_xBridgeMethodInstances;
    IESLiveDefaultSettingModel *_monitorSettingModel;
    HybridResourceLoaderProcessorConfig *_processorConfig;
    HybridMonitor *_lifeCycleMonitor;
    NSDictionary *_monitorCommonParams;
    NSString *_originURL;
    NSDictionary *_preloadConfig;
    NSDictionary *_queryItems;
    NSString *_bridgeNameSpace;
    id /* block */ _getGlobalPropsBlock;
    double _cdnCacheLifeTimeMax;
    NSString *_containerName;
    NSString *_region;
    id /* block */ _didSendEventBlock;
    id /* block */ _settingsFetchBlock;
    NSNumber *_widthMode;
    NSNumber *_heightMode;
    id _templateData;
    id _templateBundle;
    LynxSSRConfig *_lynxSSRConfig;
    NSArray *_customUIElements;
    NSDictionary *_lynxModule;
    NSDictionary *_initialData;
    NSNumber *_disableAutoExpose;
    NSString *_initialDataMarkState;
    double _fontScale;
    id<LynxTemplateProvider> _templateProvider;
    id<LynxImageFetcher> _imageFetcher;
    id<LynxResourceFetcher> _resourceFetcher;
    id<LynxDynamicComponentFetcher> _dynamicComponentFetcher;
    id<LynxResourceProvider> _i18nProvider;
    id /* block */ _rawViewBuilderBlock;
    NSNumber *_enableUIOperationQueue;
    HybridLynxViewPreLayoutContext *_preLayoutContext;
    id<HybridLynxMonitorProtocol> _lynxMonitor;
    NSArray *_lynxPrefetchXBridgeMethods;
    WKWebViewConfiguration *_webViewConfig;
    HybridWebSecureLinkConfig *_secureLinkConfig;
    NSString *_customUA;
    NSString *_defaultPageTitle;
    UIColor *_progressTintColor;
    id _webviewNavigationDelegate;
    NSDictionary *_additionalRequestHeaderFields;
    id /* block */ _handleURLRequestBlock;
    id<HybridRuntimeProtocol> _runtime;
    id _sccCustomHandler;
    NSNumber *_enableScc;
    NSNumber *_enableSccContentBlocker;
    NSNumber *_needSCCForbiddenJumpToOtherAPP;
    NSString *_customSccContentRuleChannel;
    id /* block */ _commonParamsBlock;
    NSNumber *_allowsBackForwardNavigationGestures;
    NSMapTable *_weakObjHolder;
    NSMapTable *_strongObjHolder;
    NSMapTable *_dupObjHolder;
}

@property (weak, nonatomic) id<IESECListCardsContextDelegate> iesec_lynxCardContextDelegate;
@property (retain, nonatomic) NSNumber *iesec_hasSetContextDelegate;
@property (copy, nonatomic) NSMapTable *weakObjHolder;
@property (copy, nonatomic) NSMapTable *strongObjHolder;
@property (copy, nonatomic) NSMapTable *dupObjHolder;
@property (retain, nonatomic) id globalProps;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSString *prefetchBusiness;
@property (copy, nonatomic) NSDictionary *prefetchInitData;
@property (retain, nonatomic) HybridSchemaParam *schemaParams;
@property (weak, nonatomic) Class bridgeClass;
@property (copy, nonatomic) NSArray *bridgeProviderClasses;
@property (copy, nonatomic) NSArray *xBridgeMethods;
@property (copy, nonatomic) NSArray *xBridgeMethodInstances;
@property (retain, nonatomic) IESLiveDefaultSettingModel *monitorSettingModel;
@property (retain, nonatomic) HybridResourceLoaderProcessorConfig *processorConfig;
@property (retain, nonatomic) HybridMonitor *lifeCycleMonitor;
@property (copy, nonatomic) NSDictionary *monitorCommonParams;
@property (copy, nonatomic) NSString *originURL;
@property (copy, nonatomic) NSDictionary *preloadConfig;
@property (copy, nonatomic) NSDictionary *queryItems;
@property (retain, nonatomic) NSString *bridgeNameSpace;
@property (copy, nonatomic) id /* block */ getGlobalPropsBlock;
@property (nonatomic) double cdnCacheLifeTimeMax;
@property (retain, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) id /* block */ didSendEventBlock;
@property (copy, nonatomic) id /* block */ settingsFetchBlock;
@property (retain, nonatomic) NSNumber *widthMode;
@property (copy, nonatomic) NSNumber *heightMode;
@property (retain, nonatomic) id templateData;
@property (retain, nonatomic) id templateBundle;
@property (retain, nonatomic) LynxSSRConfig *lynxSSRConfig;
@property (copy, nonatomic) NSArray *customUIElements;
@property (copy, nonatomic) NSDictionary *lynxModule;
@property (copy, nonatomic) NSDictionary *initialData;
@property (retain, nonatomic) NSNumber *disableAutoExpose;
@property (copy, nonatomic) NSString *initialDataMarkState;
@property (nonatomic) double fontScale;
@property (nonatomic) BOOL enableJSRuntime;
@property (weak, nonatomic) id<LynxTemplateProvider> templateProvider;
@property (weak, nonatomic) id<LynxImageFetcher> imageFetcher;
@property (weak, nonatomic) id<LynxResourceFetcher> resourceFetcher;
@property (weak, nonatomic) id<LynxDynamicComponentFetcher> dynamicComponentFetcher;
@property (weak, nonatomic) id<LynxResourceProvider> i18nProvider;
@property (copy, nonatomic) id /* block */ rawViewBuilderBlock;
@property (nonatomic) BOOL asyncLoadTemplate;
@property (retain, nonatomic) NSNumber *enableUIOperationQueue;
@property (retain, nonatomic) HybridLynxViewPreLayoutContext *preLayoutContext;
@property (retain, nonatomic) id<HybridLynxMonitorProtocol> lynxMonitor;
@property (copy, nonatomic) NSArray *lynxPrefetchXBridgeMethods;
@property (retain, nonatomic) WKWebViewConfiguration *webViewConfig;
@property (retain, nonatomic) HybridWebSecureLinkConfig *secureLinkConfig;
@property (copy, nonatomic) NSString *customUA;
@property (copy, nonatomic) NSString *defaultPageTitle;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (nonatomic) BOOL disableTTNetProxy;
@property (weak, nonatomic) id webviewNavigationDelegate;
@property (nonatomic) BOOL setUserAgentToRequestHeaderFields;
@property (nonatomic) BOOL pauseAVPlayerOnHide;
@property (copy, nonatomic) NSDictionary *additionalRequestHeaderFields;
@property (copy, nonatomic) id /* block */ handleURLRequestBlock;
@property (retain, nonatomic) id<HybridRuntimeProtocol> runtime;
@property (nonatomic) BOOL appendCommonParams;
@property (weak, nonatomic) id sccCustomHandler;
@property (retain, nonatomic) NSNumber *enableScc;
@property (retain, nonatomic) NSNumber *enableSccContentBlocker;
@property (retain, nonatomic) NSNumber *needSCCForbiddenJumpToOtherAPP;
@property (retain, nonatomic) NSString *customSccContentRuleChannel;
@property (copy, nonatomic) id /* block */ commonParamsBlock;
@property (retain, nonatomic) NSNumber *allowsBackForwardNavigationGestures;

+ (id)mergeProp:(id)arg0 to:(id)arg1 override:(BOOL)arg2;
+ (id)mergeArray:(id)arg0 to:(id)arg1 override:(BOOL)arg2;
+ (id)mergeDict:(id)arg0 to:(id)arg1 override:(BOOL)arg2;

- (id)templateBundle;
- (id)initialData;
- (void)setInitialData:(id)arg0;
- (void)setWidthMode:(id)arg0;
- (void)setHeightMode:(id)arg0;
- (id)preloadConfig;
- (void)setTemplateData:(id)arg0;
- (void)setGlobalProps:(id)arg0;
- (void)setXBridgeMethods:(id)arg0;
- (void)setXBridgeMethodInstances:(id)arg0;
- (void)setSecureLinkConfig:(id)arg0;
- (void)setDefaultPageTitle:(id)arg0;
- (void)setAdditionalRequestHeaderFields:(id)arg0;
- (void)setBid:(id)arg0;
- (id)globalProps;
- (id /* block */)commonParamsBlock;
- (void)setCommonParamsBlock:(id /* block */)arg0;
- (id)templateData;
- (id)widthMode;
- (id)heightMode;
- (void)setSchemaParams:(id)arg0;
- (id)schemaParams;
- (void)setImageFetcher:(id)arg0;
- (void)setResourceFetcher:(id)arg0;
- (void)mergeGlobalCtxWithBid:(id)arg0;
- (void)mergeContext:(id)arg0;
- (void)setPrefetchBusiness:(id)arg0;
- (id)bid;
- (void)setInitialDataMarkState:(id)arg0;
- (id)monitorCommonParams;
- (void)setMonitorCommonParams:(id)arg0;
- (void)setCustomUA:(id)arg0;
- (id)resourceFetcher;
- (id)customUA;
- (void)setRawViewBuilderBlock:(id /* block */)arg0;
- (void)setBridgeNameSpace:(id)arg0;
- (void)mergeContext:(id)arg0 shouldOverride:(BOOL)arg1;
- (id)bridgeNameSpace;
- (id)lifeCycleMonitor;
- (void)setBridgeClass:(Class)arg0;
- (void)setGetGlobalPropsBlock:(id /* block */)arg0;
- (id)additionalRequestHeaderFields;
- (id)customUIElements;
- (void)setCustomUIElements:(id)arg0;
- (void)setPreloadConfig:(id)arg0;
- (id)prefetchBusiness;
- (id)webViewConfig;
- (BOOL)enableJSRuntime;
- (void)setEnableJSRuntime:(BOOL)arg0;
- (id)enableUIOperationQueue;
- (void)setEnableUIOperationQueue:(id)arg0;
- (void)setTemplateBundle:(id)arg0;
- (void)setLifeCycleMonitor:(id)arg0;
- (void)setLynxModule:(id)arg0;
- (id)lynxModule;
- (void)setWebViewConfig:(id)arg0;
- (id)disableAutoExpose;
- (void)setDisableAutoExpose:(id)arg0;
- (BOOL)appendCommonParams;
- (id)prefetchInitData;
- (id)defaultPageTitle;
- (id)xBridgeMethodInstances;
- (void)setPrefetchInitData:(id)arg0;
- (id /* block */)getGlobalPropsBlock;
- (id)xBridgeMethods;
- (id)bridgeProviderClasses;
- (id /* block */)rawViewBuilderBlock;
- (id)monitorSettingModel;
- (void)setMonitorSettingModel:(id)arg0;
- (id)initialDataMarkState;
- (id)dynamicComponentFetcher;
- (void)setAppendCommonParams:(BOOL)arg0;
- (void)setWeakObjHolder:(id)arg0;
- (void)setStrongObjHolder:(id)arg0;
- (void)setDupObjHolder:(id)arg0;
- (id)weakObjHolder;
- (id)strongObjHolder;
- (id)dupObjHolder;
- (Class)bridgeClass;
- (void)setBridgeProviderClasses:(id)arg0;
- (id)secureLinkConfig;
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
- (void)setDynamicComponentFetcher:(id)arg0;
- (void)setWebviewNavigationDelegate:(id)arg0;
- (id)webviewNavigationDelegate;
- (double)cdnCacheLifeTimeMax;
- (void)setCdnCacheLifeTimeMax:(double)arg0;
- (id /* block */)didSendEventBlock;
- (void)setDidSendEventBlock:(id /* block */)arg0;
- (id /* block */)settingsFetchBlock;
- (void)setSettingsFetchBlock:(id /* block */)arg0;
- (id)lynxSSRConfig;
- (void)setLynxSSRConfig:(id)arg0;
- (id)preLayoutContext;
- (void)setPreLayoutContext:(id)arg0;
- (id)lynxMonitor;
- (void)setLynxMonitor:(id)arg0;
- (id)lynxPrefetchXBridgeMethods;
- (void)setLynxPrefetchXBridgeMethods:(id)arg0;
- (id)i18nProvider;
- (void)setI18nProvider:(id)arg0;
- (id)sccCustomHandler;
- (void)setSccCustomHandler:(id)arg0;
- (id)enableScc;
- (void)setEnableScc:(id)arg0;
- (id)enableSccContentBlocker;
- (void)setEnableSccContentBlocker:(id)arg0;
- (id)needSCCForbiddenJumpToOtherAPP;
- (void)setNeedSCCForbiddenJumpToOtherAPP:(id)arg0;
- (id)customSccContentRuleChannel;
- (void)setCustomSccContentRuleChannel:(id)arg0;
- (BOOL)disableTTNetProxy;
- (void)setDisableTTNetProxy:(BOOL)arg0;
- (BOOL)setUserAgentToRequestHeaderFields;
- (void)setSetUserAgentToRequestHeaderFields:(BOOL)arg0;
- (BOOL)pauseAVPlayerOnHide;
- (void)setPauseAVPlayerOnHide:(BOOL)arg0;
- (id /* block */)handleURLRequestBlock;
- (void)setHandleURLRequestBlock:(id /* block */)arg0;
- (BOOL)asyncLoadTemplate;
- (void)setAsyncLoadTemplate:(BOOL)arg0;
- (id)iesec_lynxCardContextDelegate;
- (id)iesec_hasSetContextDelegate;
- (void)setIesec_lynxCardContextDelegate:(id)arg0;
- (void)setIesec_hasSetContextDelegate:(id)arg0;
- (id)queryItems;
- (id)region;
- (id)init;
- (void)setRegion:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)containerName;
- (void)setProgressTintColor:(id)arg0;
- (void)setContainerName:(id)arg0;
- (void)setAllowsBackForwardNavigationGestures:(id)arg0;
- (id)progressTintColor;
- (void)setQueryItems:(id)arg0;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (double)fontScale;
- (void)setFontScale:(double)arg0;
- (id)originURL;
- (void)setOriginURL:(id)arg0;
- (id)allowsBackForwardNavigationGestures;
- (id)runtime;
- (id)processorConfig;
- (void)setProcessorConfig:(id)arg0;
- (void)setAid:(id)arg0;
- (id)aid;
- (id)templateProvider;
- (void)setTemplateProvider:(id)arg0;
- (void)setRuntime:(id)arg0;
- (id)imageFetcher;

@end