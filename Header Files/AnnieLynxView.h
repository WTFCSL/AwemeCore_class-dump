//
//     Generated by private class-dump
//

@class PuzzleContext, NSString, NSDictionary, NSMutableSet, UIView, PuzzleLynxResourceProvider, IESLynxMonitor;
@protocol PuzzleHybridStateCenterProtocol, LynxTemplateProvider, IESLiveHybridContainerDelegate, IESLivePiperProtocol, LynxViewProtocol, IESHYHybridViewLifecycleProtocol;

@interface AnnieLynxView : UIView <BDLynxClientViewDelegate, PuzzleForestUser, LynxImageFetcher, LynxResourceFetcher, HybridKitViewLifecycleProtocol, LynxTemplateProvider, IESHYHybridViewProtocol> {
    BOOL _enableFontScale;
    BOOL _templateLoaded;
    BOOL _screenSizeAdaptation;
    NSString *_liveBusiness;
    id<IESHYHybridViewLifecycleProtocol> _lifecycleDelegate;
    PuzzleContext *_context;
    id<PuzzleHybridStateCenterProtocol> _stateCenter;
    id<IESLiveHybridContainerDelegate> liveHybridContainerDelegate;
    NSString *_url;
    NSDictionary *_initialData;
    NSMutableSet *_bridgeHandlers;
    IESLynxMonitor *_lynxMonitor;
    UIView<LynxViewProtocol> *_hybridLynxView;
    NSDictionary *_releaseLog;
    long long _showTime;
    NSString *_scrollViewName;
    NSString *_elementViewName;
    double _initTime;
    NSDictionary *_routerParams;
    id<IESLivePiperProtocol> _liveBridge;
    PuzzleLynxResourceProvider *_resourceProvider;
    id<LynxTemplateProvider> _templateProvider;
    NSString *_latchID;
    unsigned long long _prefetchType;
    double _beforePrefetchTime;
}

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSDictionary *initialData;
@property (retain, nonatomic) NSMutableSet *bridgeHandlers;
@property (retain, nonatomic) IESLynxMonitor *lynxMonitor;
@property (retain, nonatomic) UIView<LynxViewProtocol> *hybridLynxView;
@property (copy, nonatomic) NSDictionary *releaseLog;
@property (nonatomic) long long showTime;
@property (nonatomic) BOOL enableFontScale;
@property (copy, nonatomic) NSString *scrollViewName;
@property (copy, nonatomic) NSString *elementViewName;
@property (nonatomic) double initTime;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) id<IESLivePiperProtocol> liveBridge;
@property (retain, nonatomic) PuzzleLynxResourceProvider *resourceProvider;
@property (retain, nonatomic) id<LynxTemplateProvider> templateProvider;
@property (copy, nonatomic) NSString *latchID;
@property (nonatomic) unsigned long long prefetchType;
@property (nonatomic) double beforePrefetchTime;
@property (nonatomic) BOOL templateLoaded;
@property (nonatomic) BOOL screenSizeAdaptation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (readonly, nonatomic) UIView *rawView;
@property (retain, nonatomic) PuzzleContext *context;
@property (retain, nonatomic) id<PuzzleHybridStateCenterProtocol> stateCenter;
@property (readonly, nonatomic) unsigned long long kernalType;
@property (weak, nonatomic) id<IESHYHybridViewLifecycleProtocol> lifecycleDelegate;
@property (copy, nonatomic) NSString *liveBusiness;
@property (weak, nonatomic) id<IESLiveHybridContainerDelegate> liveHybridContainerDelegate;

+ (void)toastErrorMessage:(id)arg0 forDuration:(long long)arg1;

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
- (long long)showTime;
- (void)setShowTime:(long long)arg0;
- (void)view:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)viewDidStartLoading:(id)arg0;
- (void)viewDidFirstScreen:(id)arg0;
- (void)view:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)viewDidUpdate:(id)arg0;
- (void)view:(id)arg0 didRecieveError:(id)arg1;
- (void)viewDidPageUpdate:(id)arg0;
- (void)viewDidConstructJSRuntime:(id)arg0;
- (void)loadTemplateWithUrl:(id)arg0 onComplete:(id /* block */)arg1;
- (id /* block */)loadImageWithURL:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 contextInfo:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)loadCanvasImageWithURL:(id)arg0 contextInfo:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)loadResourceWithURL:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (id)latchID;
- (void)setLatchID:(id)arg0;
- (id)releaseLog;
- (void)addPiperHandler:(id)arg0;
- (id)liveHybridContainerDelegate;
- (void)setLiveBridge:(id)arg0;
- (id)liveBridge;
- (id)bridgeHandlers;
- (void)registerHandlerBlock:(id /* block */)arg0 forMethod:(id)arg1 authType:(unsigned long long)arg2;
- (void)setLiveHybridContainerDelegate:(id)arg0;
- (id)liveBusiness;
- (void)saveReleaseSendLog:(id)arg0;
- (void)setStateCenter:(id)arg0;
- (unsigned long long)kernalType;
- (void)setLiveBusiness:(id)arg0;
- (void)secureGoBackWithReachEndBlock:(id /* block */)arg0;
- (void)addXBridgeMethods;
- (BOOL)refreshInitialPropsFlag;
- (void)setRefreshInitialPropsFlag:(BOOL)arg0;
- (void)addPuzzleBridgeExecutor;
- (id)getCurrentData;
- (id)getPageDataByKeys:(id)arg0;
- (BOOL)isPrerenderConsume;
- (void)setIsPrerenderConsume:(BOOL)arg0;
- (void)setBridgeHandlers:(id)arg0;
- (BOOL)enableFontScale;
- (void)setEnableFontScale:(BOOL)arg0;
- (id)forestRequestParams;
- (BOOL)screenSizeAdaptation;
- (void)setScreenSizeAdaptation:(BOOL)arg0;
- (id)lynxMonitor;
- (void)setLynxMonitor:(id)arg0;
- (id)globalPropertiesWithURL:(id)arg0;
- (void)resetPreferredFrame;
- (void)trackFallback:(id)arg0 error:(id)arg1;
- (id)absouteResourceURL:(id)arg0 error:(id *)arg1;
- (BOOL)isAbsoluteURL:(id)arg0;
- (void)setReleaseLog:(id)arg0;
- (void)setPrefetchType:(unsigned long long)arg0;
- (unsigned long long)prefetchType;
- (void)addLynxViewWithURL:(id)arg0 globalProps:(id)arg1;
- (void)setScrollViewName:(id)arg0;
- (void)setElementViewName:(id)arg0;
- (id)hybridLynxView;
- (void)configHybridContext:(id)arg0 url:(id)arg1;
- (void)setHybridLynxView:(id)arg0;
- (void)registerCustomView;
- (double)beforePrefetchTime;
- (void)setBeforePrefetchTime:(double)arg0;
- (void)refreshInitialProps;
- (id)scrollViewName;
- (id)elementViewName;
- (void)lynxViewloadTemplateWithUrl:(id)arg0 onComplete:(id /* block */)arg1;
- (BOOL)templateLoaded;
- (void)setTemplateLoaded:(BOOL)arg0;
- (BOOL)enableForestForLatch:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 URL:(id)arg1 context:(id)arg2;
- (void)setInitTime:(double)arg0;
- (void)removeFromSuperview;
- (void).cxx_destruct;
- (BOOL)canGoBack;
- (id)containerID;
- (void)setContext:(id)arg0;
- (void)setUrl:(id)arg0;
- (id)resourceProvider;
- (id)context;
- (void)updateData:(id)arg0;
- (void)layoutSubviews;
- (void)dealloc;
- (id)scrollView;
- (id)url;
- (double)initTime;
- (void)loadData;
- (void)loadWithURL:(id)arg0;
- (id)stateCenter;
- (id)templateProvider;
- (void)setTemplateProvider:(id)arg0;
- (void)setResourceProvider:(id)arg0;

@end
