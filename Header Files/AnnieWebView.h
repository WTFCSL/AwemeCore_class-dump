//
//     Generated by private class-dump
//

@class UIScreenEdgePanGestureRecognizer, NSString, NSURL, HybridIESWebView, PuzzleWebRLPerformanceTracker, NSMutableDictionary, NSDictionary, PuzzleHybridFullLinkMonitor, NSMutableSet, UIView, PuzzleContext, UIScrollView;
@protocol IESFalconMetaData, PuzzleHybridStateCenterProtocol, IESLiveHybridContainerDelegate, IESLivePiperProtocol, PuzzleRouterServiceProtocol, IESHYHybridViewLifecycleProtocol;

@interface AnnieWebView : UIView <UIGestureRecognizerDelegate, WKNavigationDelegate, IESLiveWebViewProtocol, IESLiveWebViewReuseProtocol> {
    BOOL _enableForestResourceLoader;
    BOOL _allowBackNavigationGesture;
    BOOL _allowForwardNavigationGesture;
    BOOL _enableBackGesture;
    BOOL _enableSecLink;
    BOOL _hasInjectedGlobalProps;
    BOOL _gloabalPropertiesScriptInjectSucceeded;
    BOOL _isCheckingGloabalPropertiesScriptInject;
    NSString *_liveBusiness;
    id<IESHYHybridViewLifecycleProtocol> _lifecycleDelegate;
    PuzzleContext *_context;
    id<PuzzleHybridStateCenterProtocol> _stateCenter;
    id<IESLiveHybridContainerDelegate> liveHybridContainerDelegate;
    NSMutableSet *_bridgeHandlers;
    PuzzleHybridFullLinkMonitor *_hybridFullLinkMonitor;
    id<IESHYHybridViewLifecycleProtocol> _realLifeCycleDelegate;
    UIScreenEdgePanGestureRecognizer *_backNavigationGesture;
    UIScreenEdgePanGestureRecognizer *_forwardNavigationGesture;
    NSString *_urlString;
    NSString *_secLinkScene;
    NSDictionary *_routerParams;
    double _initTime;
    NSDictionary *_initialData;
    id<IESLivePiperProtocol> _liveBridge;
    id<IESFalconMetaData> _falconMeta;
    NSURL *_requestURL;
    NSMutableDictionary *_storedUpdatedGlobalProps;
    double _currentTime;
    id<PuzzleRouterServiceProtocol> _schemaRouter;
    NSString *_containerMonitorID;
    HybridIESWebView *_hybridWebView;
}

@property (retain, nonatomic) PuzzleWebRLPerformanceTracker *puzzle_perfTracker;
@property (weak, nonatomic) id<IESHYHybridViewLifecycleProtocol> realLifeCycleDelegate;
@property (retain, nonatomic) NSMutableSet *bridgeHandlers;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *backNavigationGesture;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *forwardNavigationGesture;
@property (nonatomic) BOOL allowBackNavigationGesture;
@property (nonatomic) BOOL allowForwardNavigationGesture;
@property (nonatomic) BOOL enableBackGesture;
@property (copy, nonatomic) NSString *urlString;
@property (nonatomic) BOOL enableSecLink;
@property (copy, nonatomic) NSString *secLinkScene;
@property (nonatomic) BOOL hasInjectedGlobalProps;
@property (retain, nonatomic) NSDictionary *routerParams;
@property (nonatomic) double initTime;
@property (retain, nonatomic) NSDictionary *initialData;
@property (retain, nonatomic) id<IESLivePiperProtocol> liveBridge;
@property (retain, nonatomic) id<IESFalconMetaData> falconMeta;
@property (nonatomic) BOOL enableForestResourceLoader;
@property (retain, nonatomic) NSURL *requestURL;
@property (retain, nonatomic) NSMutableDictionary *storedUpdatedGlobalProps;
@property (nonatomic) double currentTime;
@property (retain, nonatomic) id<PuzzleRouterServiceProtocol> schemaRouter;
@property (nonatomic) BOOL gloabalPropertiesScriptInjectSucceeded;
@property (nonatomic) BOOL isCheckingGloabalPropertiesScriptInject;
@property (copy, nonatomic) NSString *containerMonitorID;
@property (retain, nonatomic) HybridIESWebView *hybridWebView;
@property (weak) PuzzleHybridFullLinkMonitor *hybridFullLinkMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=canGoBack) BOOL canGoBack;
@property (readonly, nonatomic, getter=canGoForward) BOOL canGoForward;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (readonly, nonatomic) UIView *rawView;
@property (retain, nonatomic) PuzzleContext *context;
@property (retain, nonatomic) id<PuzzleHybridStateCenterProtocol> stateCenter;
@property (readonly, nonatomic) unsigned long long kernalType;
@property (weak, nonatomic) id<IESHYHybridViewLifecycleProtocol> lifecycleDelegate;
@property (copy, nonatomic) NSString *liveBusiness;
@property (weak, nonatomic) id<IESLiveHybridContainerDelegate> liveHybridContainerDelegate;

- (void)sendEvent:(id)arg0 params:(id)arg1;
- (id)initialData;
- (void)setInitialData:(id)arg0;
- (id)rawView;
- (id)lifecycleDelegate;
- (void)setLifecycleDelegate:(id)arg0;
- (void)triggerLayout;
- (id)routerParams;
- (void)setRouterParams:(id)arg0;
- (id)currentRequestURL;
- (BOOL)enableSecLink;
- (void)setEnableSecLink:(BOOL)arg0;
- (id)ies_namespace;
- (void)addPiperHandler:(id)arg0;
- (id)hybridFullLinkMonitor;
- (id)liveHybridContainerDelegate;
- (void)setLiveBridge:(id)arg0;
- (id)liveBridge;
- (id)bridgeHandlers;
- (void)registerHandlerBlock:(id /* block */)arg0 forMethod:(id)arg1 authType:(unsigned long long)arg2;
- (void)setLiveHybridContainerDelegate:(id)arg0;
- (id)liveBusiness;
- (void)setStateCenter:(id)arg0;
- (unsigned long long)kernalType;
- (void)setLiveBusiness:(id)arg0;
- (void)secureGoBackWithReachEndBlock:(id /* block */)arg0;
- (void)addXBridgeMethods;
- (void)updateGlobalProps:(id)arg0 key:(id)arg1;
- (void)updateGlobalPropQueryItems:(id)arg0;
- (void)addPuzzleBridgeExecutor;
- (BOOL)isPrerenderConsume;
- (void)setIsPrerenderConsume:(BOOL)arg0;
- (void)setBridgeHandlers:(id)arg0;
- (id)generateJsSourceWithPramName:(id)arg0 dict:(id)arg1;
- (id)generateJsSourceWithFuncName:(id)arg0 str:(id)arg1;
- (id)containerMonitorID;
- (void)setSecLinkScene:(id)arg0;
- (id)secLinkScene;
- (void)didReceiveSecureLinkResponse:(id)arg0;
- (id)addCommonParamsForCDNMultiVersionURLString:(id)arg0;
- (void)setFalconMeta:(id)arg0;
- (id)globalPropertiesWithURL:(id)arg0;
- (id)falconMeta;
- (void)webViewEndReuse;
- (id)realLifeCycleDelegate;
- (void)setRealLifeCycleDelegate:(id)arg0;
- (void)setAllowForwardNavigationGesture:(BOOL)arg0;
- (void)panScreenEdgeLeft;
- (BOOL)hasInjectedGlobalProps;
- (void)setHasInjectedGlobalProps:(BOOL)arg0;
- (void)checkInjectGlobalPropertiesWithURL:(id)arg0;
- (void)setupDelegateWrapper:(id)arg0;
- (BOOL)enableBackGesture;
- (void)setBackNavigationGesture:(id)arg0;
- (id)backNavigationGesture;
- (void)setForwardNavigationGesture:(id)arg0;
- (id)forwardNavigationGesture;
- (void)setAllowBackNavigationGesture:(BOOL)arg0;
- (BOOL)allowBackNavigationGesture;
- (BOOL)allowForwardNavigationGesture;
- (void)setEnableBackGesture:(BOOL)arg0;
- (id)hybridWebView;
- (void)setContainerMonitorID:(id)arg0;
- (void)setHybridFullLinkMonitor:(id)arg0;
- (void)configHybridContext:(id)arg0;
- (void)setHybridWebView:(id)arg0;
- (BOOL)enableForestResourceLoader;
- (void)checkTurnOnWebResMonitor:(id)arg0;
- (void)configSeclinkWithParamDict:(id)arg0 context:(id)arg1;
- (id)storedUpdatedGlobalProps;
- (id)globalPropsScriptWithInjectExtraParams:(id)arg0 withKey:(id)arg1;
- (void)setStoredUpdatedGlobalProps:(id)arg0;
- (void)reportOffline:(id)arg0;
- (BOOL)enableURLIntercept;
- (id)schemaRouter;
- (BOOL)gloabalPropertiesScriptInjectSucceeded;
- (BOOL)isCheckingGloabalPropertiesScriptInject;
- (void)setIsCheckingGloabalPropertiesScriptInject:(BOOL)arg0;
- (void)setGloabalPropertiesScriptInjectSucceeded:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 url:(id)arg1 context:(id)arg2;
- (void)setEnableForestResourceLoader:(BOOL)arg0;
- (void)setSchemaRouter:(id)arg0;
- (id)puzzle_perfTracker;
- (void)setPuzzle_perfTracker:(id)arg0;
- (void)stopLoading;
- (id)urlString;
- (void)setInitTime:(double)arg0;
- (void)reload;
- (void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2;
- (BOOL)isLoading;
- (void)goForward;
- (void)goBack;
- (void).cxx_destruct;
- (void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id /* block */)arg2;
- (BOOL)canGoBack;
- (void)setCurrentTime:(double)arg0;
- (BOOL)canGoForward;
- (void)webView:(id)arg0 didFinishNavigation:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (id)containerID;
- (void)setContext:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2;
- (void)webView:(id)arg0 didReceiveServerRedirectForProvisionalNavigation:(id)arg1;
- (id)requestURL;
- (void)webView:(id)arg0 didCommitNavigation:(id)arg1;
- (id)context;
- (BOOL)isOffline;
- (void)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id /* block */)arg2;
- (double)currentTime;
- (void)setRequestURL:(id)arg0;
- (void)updateData:(id)arg0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setUrlString:(id)arg0;
- (void)dealloc;
- (id)scrollView;
- (void)addGestureRecognizer:(id)arg0;
- (void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg0;
- (double)initTime;
- (void)loadData;
- (void)evaluateJavaScript:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)loadWithURL:(id)arg0;
- (id)stateCenter;
- (void)scaleToFit;
- (void)loadURLRequest:(id)arg0;

@end
