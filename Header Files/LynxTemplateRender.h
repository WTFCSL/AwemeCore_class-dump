//
//     Generated by private class-dump
//

@class LynxEngineProxy, LynxDevtool, NSString, PaintingContextProxy, LynxUILayoutTick, NSMutableDictionary, LynxSSRHelper, LynxEventEmitter, LynxUIOwner, LynxTheme, LynxView, LynxKeyboardEventDispatcher, LynxGroup, LynxProviderRegistry, LynxConfig, LynxTemplateData, LynxUIIntersectionObserverManager, LynxEventHandler, LynxContext, LynxShadowNodeOwner, LynxTimingHandler;
@protocol LynxKryptonHelper, LynxTemplateRenderDelegate, LynxDynamicComponentFetcher;

@interface LynxTemplateRender : NSObject <TemplateRenderCallbackProtocol, LynxTemplateRenderProtocol> {
    BOOL _enableAsyncDisplayFromNative;
    BOOL _enableImageDownsampling;
    BOOL _enableTextNonContiguousLayout;
    BOOL _enableLayoutOnly;
    BOOL _hasStartedLoad;
    BOOL _enableAirStrictMode;
    BOOL _enableLayoutSafepoint;
    BOOL _enableAutoExpose;
    BOOL _needPendingUIOperation;
    BOOL _enablePendingJSTaskOnLayout;
    BOOL _enablePreUpdateData;
    BOOL _enableAsyncHydration;
    BOOL _enableMultiAsyncThread;
    BOOL _enableLynxResourceServiceLoaderInjection;
    BOOL _enableJSGroupThread;
    LynxConfig *_config;
    LynxContext *_context;
    LynxGroup *_group;
    LynxUILayoutTick *_uilayoutTick;
    LynxShadowNodeOwner *_shadowNodeOwner;
    LynxEventHandler *_eventHandler;
    LynxEventEmitter *_eventEmitter;
    LynxKeyboardEventDispatcher *_keyboardEventDispatcher;
    long long _threadStrategyForRendering;
    LynxUIIntersectionObserverManager *_intersectionObserverManager;
    double _fontScale;
    struct CGSize { double width; double height; } _intrinsicContentSize;
    struct unique_ptr<lynx::shell::LynxShell, std::default_delete<lynx::shell::LynxShell>> { struct __compressed_pair<lynx::shell::LynxShell *, std::default_delete<lynx::shell::LynxShell>> { struct LynxShell *__value_; } __ptr_; } shell_;
    PaintingContextProxy *_paintingContextProxy;
    LynxTheme *_localTheme;
    LynxTemplateData *_globalProps;
    struct weak_ptr<lynx::piper::ModuleManagerDarwin> { struct ModuleManagerDarwin *__ptr_; struct __shared_weak_count *__cntrl_; } module_manager_;
    struct shared_ptr<lynx::tasm::PageConfig> { struct PageConfig *__ptr_; struct __shared_weak_count *__cntrl_; } pageConfig_;
    BOOL _isDestroyed;
    BOOL _hasRendered;
    BOOL _enableJSRuntime;
    long long _layoutWidthMode;
    long long _layoutHeightMode;
    double _preferredMaxLayoutWidth;
    double _preferredMaxLayoutHeight;
    double _preferredLayoutWidth;
    double _preferredLayoutHeight;
    NSString *_url;
    LynxDevtool *_devTool;
    LynxTimingHandler *_timingHandler;
    NSMutableDictionary *_lepusModulesClasses_;
    id<LynxKryptonHelper> _kryptonHelper;
    NSMutableDictionary *_extra;
    LynxProviderRegistry *_providerRegistry;
    unsigned long long _initialMemory;
    unsigned long long _loadedMemory;
    LynxEngineProxy *_lynxEngineProxy;
    id<LynxTemplateRenderDelegate> _delegate;
    LynxView *_lynxView;
    LynxSSRHelper *_lynxSSRHelper;
    LynxUIOwner *_uiOwner;
    long long _initStartTiming;
    long long _initEndTiming;
    id<LynxDynamicComponentFetcher> _fetcher;
    id _lynxModuleExtraData;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameOfLynxView;
}

@property (retain, nonatomic) NSMutableDictionary *extra;
@property (retain, nonatomic) LynxProviderRegistry *providerRegistry;
@property (nonatomic) unsigned long long initialMemory;
@property (nonatomic) unsigned long long loadedMemory;
@property (retain, nonatomic) LynxEngineProxy *lynxEngineProxy;
@property (weak, nonatomic) id<LynxTemplateRenderDelegate> delegate;
@property (weak, nonatomic) LynxView *lynxView;
@property (retain, nonatomic) LynxSSRHelper *lynxSSRHelper;
@property (readonly, nonatomic) LynxUIOwner *uiOwner;
@property (nonatomic) long long initStartTiming;
@property (nonatomic) long long initEndTiming;
@property (readonly, nonatomic) id<LynxDynamicComponentFetcher> fetcher;
@property (retain, nonatomic) id lynxModuleExtraData;
@property (retain, nonatomic) id<LynxKryptonHelper> kryptonHelper;
@property (readonly, nonatomic) BOOL enableAirStrictMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long layoutWidthMode;
@property (nonatomic) long long layoutHeightMode;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) double preferredMaxLayoutHeight;
@property (nonatomic) double preferredLayoutWidth;
@property (nonatomic) double preferredLayoutHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameOfLynxView;
@property (nonatomic) BOOL isDestroyed;
@property (nonatomic) BOOL hasRendered;
@property (readonly, nonatomic) NSString *url;
@property (nonatomic) BOOL enableJSRuntime;
@property (retain, nonatomic) LynxDevtool *devTool;
@property (retain, nonatomic) LynxTimingHandler *timingHandler;
@property (retain, nonatomic) NSMutableDictionary *lepusModulesClasses_;

+ (void)secplugin_swizzleMethods;

- (void)setExtra:(id)arg0;
- (BOOL)enableAsyncDisplay;
- (id)getGestureArenaManager;
- (id)findViewWithName:(id)arg0;
- (void)sendGlobalEvent:(id)arg0 withParams:(id)arg1;
- (id)viewWithName:(id)arg0;
- (id)lynxView;
- (void)triggerLayout;
- (id)uiWithIdSelector:(id)arg0;
- (void)updateGlobalPropsWithDictionary:(id)arg0;
- (id)getPageDataByKey:(id)arg0;
- (float)rootHeight;
- (void)loadTemplateFromURL:(id)arg0 initData:(id)arg1;
- (void)loadTemplate:(id)arg0 withURL:(id)arg1 initData:(id)arg2;
- (void)onEnterBackground;
- (id)uiWithName:(id)arg0;
- (void)registerModule:(Class)arg0 param:(id)arg1;
- (void)setPreferredLayoutWidth:(double)arg0;
- (void)setPreferredLayoutHeight:(double)arg0;
- (void)setLayoutWidthMode:(long long)arg0;
- (void)setLayoutHeightMode:(long long)arg0;
- (void)onLynxEvent:(id)arg0;
- (id)kryptonHelper;
- (void)sendCustomEvent:(id)arg0;
- (void)attachLynxView:(id)arg0;
- (id)viewWithIdSelector:(id)arg0;
- (void)setLynxView:(id)arg0;
- (BOOL)isDestroyed;
- (void)setIsDestroyed:(BOOL)arg0;
- (void)onEnterForeground:(BOOL)arg0;
- (void)onEnterBackground:(BOOL)arg0;
- (id)secplugin_plugins;
- (id)secplugin_getLynxView;
- (void)setSecplugin_plugins:(id)arg0;
- (BOOL)secplugin_onMethodAuth:(id)arg0 inModule:(id)arg1 session:(id)arg2 invocation:(id)arg3;
- (id)secplugin_initWithBuilderBlock:(id /* block */)arg0 lynxView:(id)arg1;
- (void)secplugin_updateGlobalPropsWithTemplateData:(id)arg0;
- (void)secplugin_loadTemplateFromURL:(id)arg0 initData:(id)arg1;
- (void)secplugin_loadTemplate:(id)arg0 withURL:(id)arg1 initData:(id)arg2;
- (void)secplugin_loadTemplateBundle:(id)arg0 withURL:(id)arg1 initData:(id)arg2;
- (void)secplugin_loadSSRData:(id)arg0 withURL:(id)arg1 initData:(id)arg2;
- (id)getLynxContext;
- (void)loadTemplateBundle:(id)arg0 withURL:(id)arg1 initData:(id)arg2;
- (void)loadSSRData:(id)arg0 withURL:(id)arg1 initData:(id)arg2;
- (void)onTemplateBundleReady:(id)arg0;
- (void)onEnterForeground;
- (id)getCurrentData;
- (void)updateDataWithTemplateData:(id)arg0;
- (void)updateDataWithDictionary:(id)arg0 processorName:(id)arg1;
- (void)updateDataWithString:(id)arg0 processorName:(id)arg1;
- (void)resetDataWithTemplateData:(id)arg0;
- (long long)getThreadStrategyForRender;
- (void)updateScreenMetricsWithWidth:(double)arg0 height:(double)arg1;
- (BOOL)isLayoutFinish;
- (void)clearForDestroy;
- (void)resumeRootLayoutAnimation;
- (void)pauseRootLayoutAnimation;
- (BOOL)enableJSRuntime;
- (void)setEnableJSRuntime:(BOOL)arg0;
- (void)triggerEventBus:(id)arg0 withParams:(id)arg1;
- (void)updateMetaData:(id)arg0;
- (void)preloadDynamicComponents:(id)arg0;
- (id)getJSModule:(id)arg0;
- (BOOL)enableAirStrictMode;
- (void)reloadTemplateWithTemplateData:(id)arg0 globalProps:(id)arg1;
- (void)updateGlobalPropsWithTemplateData:(id)arg0;
- (void)startLynxRuntime;
- (void)setPreferredMaxLayoutHeight:(double)arg0;
- (id)initWithBuilderBlock:(id /* block */)arg0 lynxView:(id)arg1;
- (double)preferredLayoutWidth;
- (void)processLayoutWithSSRData:(id)arg0 withURL:(id)arg1 initData:(id)arg2;
- (void)processLayout:(id)arg0 withURL:(id)arg1 initData:(id)arg2;
- (void)updateFontScale:(double)arg0;
- (id)providerRegistry;
- (void)setProviderRegistry:(id)arg0;
- (void)sendGlobalEventToLepus:(id)arg0 withParams:(id)arg1;
- (long long)layoutWidthMode;
- (long long)layoutHeightMode;
- (void)setExtraTiming:(id)arg0;
- (void)ssrHydrateFromURL:(id)arg0 initData:(id)arg1;
- (double)preferredLayoutHeight;
- (id)cardVersion;
- (void)setImageFetcherInUIOwner:(id)arg0;
- (void)setResourceFetcherInUIOwner:(id)arg0;
- (void)onErrorOccurred:(long long)arg0 message:(id)arg1;
- (void)onErrorOccurred:(id)arg0;
- (void)loadComponent:(id)arg0 withURL:(id)arg1 withCallbackId:(int)arg2 componentIds:(id)arg3;
- (void)didInvokeMethod:(id)arg0 inModule:(id)arg1 errorCode:(int)arg2;
- (void)invokeLepusFunc:(id)arg0 callbackID:(int)arg1;
- (id)getLepusModulesClasses;
- (id)uiOwner;
- (void)setNeedPendingUIOperation:(BOOL)arg0;
- (void)setEnableAsyncDisplay:(BOOL)arg0;
- (BOOL)enableBackgroundShapeLayer;
- (void)runOnTasmThread:(id /* block */)arg0;
- (id)getLynxRuntimeId;
- (BOOL)sendSyncTouchEvent:(id)arg0;
- (BOOL)sendSyncTouchEvent:(id)arg0 event:(id)arg1;
- (void)sendGestureEvent:(int)arg0 event:(id)arg1;
- (void)onPseudoStatusChanged:(int)arg0 fromPreStatus:(int)arg1 toCurrentStatus:(int)arg2;
- (void)notifyIntersectionObservers;
- (void)onLongPress;
- (void)registerCanvasManager:(void *)arg0;
- (void)onErrorOccurred:(long long)arg0 sourceError:(id)arg1;
- (void)dispatchError:(id)arg0;
- (void)prepareEnvWidthScreenSize:(struct CGSize { double x0; double x1; })arg0 enableAsyncCreate:(BOOL)arg1;
- (BOOL)enableTextNonContiguousLayout;
- (void)dispatchDidFirstScreen;
- (void)dispatchDidPageUpdate;
- (void)setTimingHandler:(id)arg0;
- (id)lynxModuleExtraData;
- (void)setLynxModuleExtraData:(id)arg0;
- (void)initShadowNodeOwner;
- (void)prepareShell;
- (void)prepareEventHandler;
- (void)updateViewport;
- (void)setTiming:(unsigned long long)arg0 key:(id)arg1 updateFlag:(id)arg2;
- (id)getLynxGroupName;
- (void)setLepusModulesClasses_:(id)arg0;
- (id)lepusModulesClasses_;
- (id)getJSGroupThreadName;
- (void)initPiper;
- (void)updateNativeTheme;
- (void)updateNativeGlobalProps;
- (void)updateUrl:(id)arg0;
- (void)dispatchViewDidStartLoading;
- (void)internalLoadTemplate:(id)arg0 withUrl:(id)arg1 initData:(id)arg2;
- (id)lynxSSRHelper;
- (id)executeNativeOpSafely:(id /* block */)arg0;
- (void)detachLynxView;
- (void)onLoadFromURL:(id)arg0 initData:(id)arg1;
- (id)timingHandler;
- (id)devTool;
- (void)onFetchTemplateError:(id)arg0;
- (void)setInitialMemory:(unsigned long long)arg0;
- (id)formatLynxSchema:(id)arg0;
- (void)resetLayoutStatus;
- (void)prepareForLoadTemplateWithUrl:(id)arg0 initData:(id)arg1;
- (void)requestLayoutWhenSafepointEnable;
- (void)updateDataWithTemplateData:(id)arg0 updateFinishedCallback:(id /* block */)arg1;
- (void)executeUpdateDataSafely:(id /* block */)arg0;
- (void)resetTimingBeforeReload;
- (BOOL)getAutoExpose;
- (void)updateViewport:(BOOL)arg0;
- (id)processUrl:(id)arg0;
- (void)setLocalTheme:(id)arg0;
- (id)componentSet;
- (id)prepareEntryForInvokeUIMethodCallbackParam:(id)arg0;
- (void)onDataUpdated;
- (void)onPageChanged:(BOOL)arg0;
- (void)onTasmFinishByNative;
- (void)onTemplateLoaded:(id)arg0;
- (void)onRuntimeReady;
- (void)onFirstLoadPerf:(id)arg0;
- (void)onUpdatePerfReady:(id)arg0;
- (void)onDynamicComponentPerf:(id)arg0;
- (id)translatedResourceWithId:(id)arg0 themeKey:(id)arg1;
- (void)getI18nResourceForChannel:(id)arg0 withFallbackUrl:(id)arg1;
- (void)onCallJSBFinished:(id)arg0;
- (void)onJSBInvoked:(id)arg0;
- (long long)initStartTiming;
- (long long)initEndTiming;
- (void)invokeUIMethod:(id)arg0 params:(id)arg1 callback:(int)arg2 toNode:(int)arg3;
- (void)onSSRHydrateFinished:(id)arg0;
- (void)loadTemplateWithoutLynxView:(id)arg0 withURL:(id)arg1 initData:(id)arg2;
- (void)loadSSRDataFromURL:(id)arg0 initData:(id)arg1;
- (void)ssrHydrate:(id)arg0 withURL:(id)arg1 initData:(id)arg2;
- (void)triggerLayoutInTick;
- (BOOL)isModuleExist:(id)arg0;
- (id)getAllJsSource;
- (id)getAllTimingInfo;
- (id)getExtraInfo;
- (double)preferredMaxLayoutHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfLynxView;
- (void)setFrameOfLynxView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDevTool:(id)arg0;
- (void)hotModuleReplace:(id)arg0 withParams:(id)arg1;
- (id)findUIByIndex:(int)arg0;
- (void)syncFlush;
- (id)hitTestInEventHandler:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)viewsWithA11yID:(id)arg0;
- (id)forceGetPerf;
- (void)setImageDownsampling:(BOOL)arg0;
- (BOOL)enableImageDownsampling;
- (BOOL)enableNewImage;
- (BOOL)trailNewImage;
- (BOOL)enableNewListContainer;
- (long long)redBoxImageSizeWarningThreshold;
- (BOOL)enableLayoutOnly;
- (BOOL)enableTextLayerRender;
- (void)setCustomizedLayoutInUIContext:(id)arg0;
- (void)processLayoutWithTemplateBundle:(id)arg0 withURL:(id)arg1 initData:(id)arg2;
- (BOOL)processRender:(id)arg0;
- (id)getLynxUIIntersectionObserverManager;
- (void)setTemplateRenderDelegate:(id)arg0;
- (BOOL)registerDynamicComponent:(id)arg0 bundle:(id)arg1;
- (BOOL)enableFiberArch;
- (void)setKryptonHelper:(id)arg0;
- (unsigned long long)initialMemory;
- (unsigned long long)loadedMemory;
- (void)setLoadedMemory:(unsigned long long)arg0;
- (id)lynxEngineProxy;
- (void)setLynxEngineProxy:(id)arg0;
- (void)setLynxSSRHelper:(id)arg0;
- (void)setInitStartTiming:(long long)arg0;
- (void)setInitEndTiming:(long long)arg0;
- (void)setPreferredMaxLayoutWidth:(double)arg0;
- (void)setTheme:(id)arg0;
- (void).cxx_destruct;
- (id)theme;
- (int)instanceId;
- (id)extra;
- (id)delegate;
- (id)initWithCoder:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)willMoveToWindow:(id)arg0;
- (void)reset;
- (id)url;
- (double)preferredMaxLayoutWidth;
- (id).cxx_construct;
- (id)fetcher;
- (BOOL)hasRendered;
- (void)setScrollListener:(id)arg0;
- (float)rootWidth;
- (void)markDirty;
- (void)setHasRendered:(BOOL)arg0;
- (void)resetAnimation;
- (void)setPageConfig:(const void *)arg0;
- (void)restartAnimation;
- (void)didMoveToWindow:(BOOL)arg0;

@end