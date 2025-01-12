//
//     Generated by private class-dump
//

@class NSData, NSString, UIView, HybridObserver, IESECLynxCardTimingModel, LynxConfig, LynxTemplateData, LynxView, HybridContext, HybridLynxKitParams, NSNumber, HybridLynxResourceProvider;
@protocol HybridJSBServiceProtocol, HybridResourceProtocol, LynxTimingListener, IESECListCardsContextDelegate, HybridKitViewLifecycleProtocol;

@interface HybridLynxView : LynxView <LynxViewLifecycle, HybridLynxResourceProviderDelegate, LynxScrollListener, LynxViewProtocol> {
    BOOL isCached;
    BOOL isReused;
    BOOL isLynxCreated;
    BOOL isPrecreated;
    BOOL _loadFromTemplateData;
    BOOL _loadFromTemplateUrl;
    BOOL _loadFromTemplateBundle;
    id<HybridKitViewLifecycleProtocol> _lifecycleDelegate;
    unsigned long long loadState;
    id<HybridJSBServiceProtocol> bridgeService;
    double estimatedProgress;
    LynxConfig *_lynxConfig;
    HybridLynxResourceProvider *_internalResourceProvider;
    NSString *_channel;
    NSString *_sessionID;
    NSData *_resData;
    HybridLynxKitParams *_params;
    LynxTemplateData *_globalProps;
}

@property (retain, nonatomic) IESECLynxCardTimingModel *iesec_lynxCardTimingModel;
@property (retain, nonatomic) id<HybridResourceProtocol> iesec_lynxCardHybridResource;
@property (retain, nonatomic) id<LynxTimingListener> iesec_lynxTimingLister;
@property (copy, nonatomic) id /* block */ iesec_lynxViewOnTasmFinishBlock;
@property (weak, nonatomic) id<IESECListCardsContextDelegate> iesec_lynxCardContextDelegate;
@property (retain, nonatomic) NSNumber *iesec_hasSetContextDelegate;
@property (retain, nonatomic) LynxConfig *lynxConfig;
@property (retain, nonatomic) HybridLynxResourceProvider *internalResourceProvider;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSData *resData;
@property (retain, nonatomic) HybridLynxKitParams *params;
@property (retain, nonatomic) LynxTemplateData *globalProps;
@property (nonatomic) BOOL loadFromTemplateData;
@property (nonatomic) BOOL loadFromTemplateUrl;
@property (nonatomic) BOOL loadFromTemplateBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) LynxView *lynxView;
@property (nonatomic) BOOL isLynxCreated;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (readonly, nonatomic) UIView *rawView;
@property (readonly, nonatomic) id kitBridge;
@property (weak, nonatomic) id<HybridKitViewLifecycleProtocol> lifecycleDelegate;
@property (readonly, nonatomic) HybridObserver<HybridKitViewLifecycleProtocol> *lifeCycleObservers;
@property (nonatomic) unsigned long long loadState;
@property (nonatomic) BOOL isCached;
@property (nonatomic) BOOL isReused;
@property (nonatomic) BOOL isPrecreated;
@property (retain, nonatomic) id<HybridJSBServiceProtocol> bridgeService;
@property (nonatomic) double estimatedProgress;
@property (readonly, nonatomic) HybridContext *context;

+ (id)defaultGroup;

- (void)registerXBridgeMethod:(id)arg0;
- (void)registerUI:(Class)arg0 withName:(id)arg1;
- (void)updateData:(id)arg0 processorName:(id)arg1;
- (void)sendEvent:(id)arg0 params:(id)arg1;
- (void)updateAppThemeWithKey:(id)arg0 value:(id)arg1;
- (id)rawView;
- (id)lifecycleDelegate;
- (void)setLifecycleDelegate:(id)arg0;
- (id)lynxView;
- (void)sendEvent:(id)arg0 params:(id)arg1 callback:(id /* block */)arg2;
- (void)triggerLayout;
- (void)onShow:(id)arg0;
- (void)onHide:(id)arg0;
- (void)setGlobalProps:(id)arg0;
- (id)globalProps;
- (void)configWithParams:(id)arg0;
- (void)registerXBridgeMethodInstance:(id)arg0;
- (void)registerModule:(Class)arg0 param:(id)arg1;
- (void)registerHandler:(id /* block */)arg0 forMethod:(id)arg1;
- (void)lynxView:(id)arg0 onSetup:(id)arg1;
- (void)lynxView:(id)arg0 onUpdate:(id)arg1 timing:(id)arg2;
- (void)lynxViewDidStartLoading:(id)arg0;
- (void)lynxView:(id)arg0 didLoadFinishedWithUrl:(id)arg1;
- (void)lynxView:(id)arg0 didLoadFinishedWithConfigInfo:(id)arg1;
- (void)lynxViewDidFirstScreen:(id)arg0;
- (void)lynxViewDidPageUpdate:(id)arg0;
- (void)lynxViewDidConstructJSRuntime:(id)arg0;
- (void)lynxViewDidUpdate:(id)arg0;
- (void)lynxViewDidChangeIntrinsicContentSize:(id)arg0;
- (void)lynxViewOnTasmFinishByNative:(id)arg0;
- (void)lynxView:(id)arg0 didRecieveError:(id)arg1;
- (void)lynxView:(id)arg0 didReceiveFirstLoadPerf:(id)arg1;
- (void)lynxView:(id)arg0 didReceiveFirstLoadPerf:(id)arg1;
- (void)lynxView:(id)arg0 didReceiveUpdatePerf:(id)arg1;
- (void)lynxView:(id)arg0 didReceiveUpdatePerf:(id)arg1;
- (void)lynxView:(id)arg0 didReportComponentInfo:(id)arg1;
- (void)configGlobalProps:(id)arg0;
- (void)setupBridge;
- (void)setLynxConfig:(id)arg0;
- (id)lynxConfig;
- (void)updateGlobalProps:(id)arg0;
- (id)kitBridge;
- (void)registerShadowNode:(Class)arg0 withName:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 params:(id)arg1;
- (void)scrollerWillBeginDragging:(id)arg0;
- (void)scrollerDidEndDecelerating:(id)arg0;
- (id)containerInitTimeStamp;
- (void)resourceProviderDidStartLoadWithURL:(id)arg0;
- (void)resourceProviderDidFinsihLoadWithURL:(id)arg0 resource:(id)arg1 error:(id)arg2;
- (id)resData;
- (void)setResData:(id)arg0;
- (id)internalResourceProvider;
- (void)setLoadFromTemplateBundle:(BOOL)arg0;
- (void)setLoadFromTemplateData:(BOOL)arg0;
- (void)setLoadFromTemplateUrl:(BOOL)arg0;
- (BOOL)loadFromTemplateData;
- (BOOL)loadFromTemplateBundle;
- (BOOL)loadFromTemplateUrl;
- (void)setInternalResourceProvider:(id)arg0;
- (void)didTakeFromPrerenderCacheWithContext:(id)arg0;
- (BOOL)isPrecreated;
- (void)setIsPrecreated:(BOOL)arg0;
- (id)bridgeMethodInstanceWithName:(id)arg0;
- (void)superViewInDealloc;
- (id)bridgeService;
- (void)setBridgeService:(id)arg0;
- (void)setupMonitorBeforeLynxViewInitWithSettingModel:(id)arg0;
- (void)setupGlobalProps;
- (void)setupMonitorAfterLynxViewInit;
- (void)setIsLynxCreated:(BOOL)arg0;
- (BOOL)isLynxCreated;
- (id)findViewsFromRootView:(id)arg0 filter:(id /* block */)arg1;
- (id)iesec_lynxCardContextDelegate;
- (id)iesec_hasSetContextDelegate;
- (id)iesec_lynxCardTimingModel;
- (id)iesec_lynxCardHybridResource;
- (id)iesec_lynxTimingLister;
- (id /* block */)iesec_lynxViewOnTasmFinishBlock;
- (void)setIesec_lynxCardTimingModel:(id)arg0;
- (void)setIesec_lynxCardHybridResource:(id)arg0;
- (void)setIesec_lynxTimingLister:(id)arg0;
- (void)setIesec_lynxViewOnTasmFinishBlock:(id /* block */)arg0;
- (void)iesec_registerCustomUIElement:(id)arg0;
- (void)setIesec_lynxCardContextDelegate:(id)arg0;
- (id)ieseclistkit_DeallocObserver;
- (void)setIeseclistkit_DeallocObserver:(id)arg0;
- (void)setIesec_hasSetContextDelegate:(id)arg0;
- (void)registerModule:(Class)arg0;
- (id)channel;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (void)setChannel:(id)arg0;
- (id)sessionID;
- (unsigned long long)loadState;
- (double)estimatedProgress;
- (void)setEstimatedProgress:(double)arg0;
- (void)load;
- (id)context;
- (void)updateWithData:(id)arg0;
- (id)params;
- (void)layoutSubviews;
- (void)dealloc;
- (BOOL)isCached;
- (void)setIsCached:(BOOL)arg0;
- (id)sourceData;
- (void)setParams:(id)arg0;
- (void)reloadWithContext:(id)arg0;
- (void)setIsReused:(BOOL)arg0;
- (BOOL)isReused;
- (void)setSourceData:(id)arg0;
- (void)setLoadState:(unsigned long long)arg0;

@end
