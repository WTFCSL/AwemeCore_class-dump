//
//     Generated by private class-dump
//

@class NSString, PuzzleContext, NSMutableSet, UIView;
@protocol PuzzleHybridStateCenterProtocol, AnnieLiveBizContainerProtocol, BDXKitViewProtocol, IESLivePiperProtocol, IESLiveHybridContainerDelegate, IESHYHybridViewLifecycleProtocol;

@interface AnnieLiveCardKitViewExtension : NSObject <IESHYHybridViewProtocol> {
    PuzzleContext *context;
    id<IESLiveHybridContainerDelegate> liveHybridContainerDelegate;
    UIView *rawView;
    NSString *liveBusiness;
    id<IESHYHybridViewLifecycleProtocol> lifecycleDelegate;
    NSString *containerID;
    UIView<BDXKitViewProtocol> *_bdxKitView;
    id<AnnieLiveBizContainerProtocol> _annieLiveContainer;
    id<IESLivePiperProtocol> _liveBridge;
    NSMutableSet *_bridgeHandlers;
    id<PuzzleHybridStateCenterProtocol> _cacheStateCenter;
}

@property (weak, nonatomic) UIView<BDXKitViewProtocol> *bdxKitView;
@property (weak, nonatomic) id<AnnieLiveBizContainerProtocol> annieLiveContainer;
@property (retain, nonatomic) id<IESLivePiperProtocol> liveBridge;
@property (retain, nonatomic) NSMutableSet *bridgeHandlers;
@property (retain, nonatomic) id<PuzzleHybridStateCenterProtocol> cacheStateCenter;
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

- (id)rawView;
- (id)lifecycleDelegate;
- (void)setLifecycleDelegate:(id)arg0;
- (id)currentRequestURL;
- (void)addPiperHandler:(id)arg0;
- (unsigned long long)currentKernal;
- (void)setupBridge:(id)arg0 withKitViewProxy:(id)arg1;
- (BOOL)isAnnieX;
- (id)getCustomPerformanceTiming;
- (id)liveHybridContainerDelegate;
- (id)bdxKitView;
- (void)setLiveBridge:(id)arg0;
- (id)liveBridge;
- (id)bridgeHandlers;
- (void)registerHandlerBlock:(id /* block */)arg0 forMethod:(id)arg1 authType:(unsigned long long)arg2;
- (void)setLiveHybridContainerDelegate:(id)arg0;
- (id)liveBusiness;
- (void)setStateCenter:(id)arg0;
- (unsigned long long)kernalType;
- (void)setLiveBusiness:(id)arg0;
- (void)addXBridgeMethods;
- (void)updateGlobalPropQueryItems:(id)arg0;
- (void)setBdxKitView:(id)arg0;
- (void)setBridgeHandlers:(id)arg0;
- (id)initWithKitView:(id)arg0 liveContainer:(id)arg1;
- (id)annieLiveContainer;
- (void)setAnnieLiveContainer:(id)arg0;
- (id)cacheStateCenter;
- (void)setCacheStateCenter:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg0;
- (id)containerID;
- (void)setContext:(id)arg0;
- (id)context;
- (void)updateData:(id)arg0;
- (id)scrollView;
- (id)stateCenter;

@end
