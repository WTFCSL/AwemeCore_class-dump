//
//     Generated by private class-dump
//

@class PuzzleContext, NSString, NSMutableSet, UIView, UIViewController;
@protocol PuzzleHybridStateCenterProtocol, BDXViewContainerProtocol, BDXKitViewProtocol, IESLivePiperProtocol, IESLiveHybridContainerDelegate, IESHYHybridViewLifecycleProtocol;

@interface AnnieKitViewExtensionBasedOnBDX : NSObject <IESHYHybridViewProtocol> {
    id<IESLiveHybridContainerDelegate> _liveHybridContainerDelegate;
    id<IESHYHybridViewLifecycleProtocol> _lifecycleDelegate;
    id<PuzzleHybridStateCenterProtocol> stateCenter;
    UIView<BDXViewContainerProtocol> *_bdxViewContainer;
    UIView<BDXKitViewProtocol> *_bdxKitView;
    id<IESLivePiperProtocol> _liveBridge;
    PuzzleContext *_puzzleContext;
    UIViewController *_currentVC;
    NSMutableSet *_bridgeHandlers;
}

@property (weak, nonatomic) UIView<BDXViewContainerProtocol> *bdxViewContainer;
@property (weak, nonatomic) UIView<BDXKitViewProtocol> *bdxKitView;
@property (retain, nonatomic) id<IESLivePiperProtocol> liveBridge;
@property (retain, nonatomic) PuzzleContext *puzzleContext;
@property (weak, nonatomic) UIViewController *currentVC;
@property (retain, nonatomic) NSMutableSet *bridgeHandlers;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (readonly, nonatomic) UIView *rawView;
@property (retain, nonatomic) PuzzleContext *context;
@property (retain, nonatomic) id<PuzzleHybridStateCenterProtocol> stateCenter;
@property (readonly, nonatomic) unsigned long long kernalType;
@property (weak, nonatomic) id<IESHYHybridViewLifecycleProtocol> lifecycleDelegate;
@property (copy, nonatomic) NSString *liveBusiness;
@property (weak, nonatomic) id<IESLiveHybridContainerDelegate> liveHybridContainerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyForBDXViewContainer:(id)arg0 bdxKitView:(id)arg1;

- (void)sendEvent:(id)arg0 params:(id)arg1;
- (id)lifecycleDelegate;
- (void)setLifecycleDelegate:(id)arg0;
- (void)triggerLayout;
- (id)currentVC;
- (void)setCurrentVC:(id)arg0;
- (id)currentRequestURL;
- (void)addPiperHandler:(id)arg0;
- (void)setupBridge:(id)arg0 withKitViewProxy:(id)arg1;
- (BOOL)isAnnieX;
- (id)getCustomPerformanceTiming;
- (id)liveHybridContainerDelegate;
- (id)initWithBDXViewContainer:(id)arg0 bdxKitView:(id)arg1;
- (id)bdxViewContainer;
- (id)bdxKitView;
- (void)setLiveBridge:(id)arg0;
- (id)puzzleContext;
- (id)liveBridge;
- (id)bridgeHandlers;
- (void)registerHandlerBlock:(id /* block */)arg0 forMethod:(id)arg1 authType:(unsigned long long)arg2;
- (void)setLiveHybridContainerDelegate:(id)arg0;
- (id)liveBusiness;
- (void)setStateCenter:(id)arg0;
- (unsigned long long)kernalType;
- (void)secureGoBackWithReachEndBlock:(id /* block */)arg0;
- (void)addXBridgeMethods;
- (void)iesLiveHybridContainerClose:(id)arg0 keepOffline:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setBdxViewContainer:(id)arg0;
- (void)setBdxKitView:(id)arg0;
- (void)setPuzzleContext:(id)arg0;
- (void)setBridgeHandlers:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg0;
- (BOOL)canGoBack;
- (id)context;
- (void)updateData:(id)arg0;
- (void)loadData;
- (void)_setupViewController;
- (id)stateCenter;

@end
