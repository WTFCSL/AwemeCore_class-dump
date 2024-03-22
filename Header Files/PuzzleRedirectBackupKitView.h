//
//     Generated by private class-dump
//

@class NSString, NSArray, PuzzleContext, UIView, NSMutableArray;
@protocol PuzzleHybridStateCenterProtocol, IESLiveHybridContainerDelegate, IESLivePiperProtocol, IESHYHybridViewLifecycleProtocol;

@interface PuzzleRedirectBackupKitView : UIView <IESHYHybridViewProtocol> {
    id<IESLivePiperProtocol> _liveBridge;
    NSString *_containerID;
    UIView *_rawView;
    unsigned long long _kernalType;
    NSString *_liveBusiness;
    id<IESHYHybridViewLifecycleProtocol> _lifecycleDelegate;
    PuzzleContext *_context;
    id<PuzzleHybridStateCenterProtocol> _stateCenter;
    id<IESLiveHybridContainerDelegate> _liveHybridContainerDelegate;
    NSArray *_piperHandlers;
    NSArray *_handlerBlocks;
    NSString *_url;
    NSMutableArray *_handlerBlocksToRegister;
    NSMutableArray *_piperHandlersToAdd;
}

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSMutableArray *handlerBlocksToRegister;
@property (retain, nonatomic) NSMutableArray *piperHandlersToAdd;
@property (copy, nonatomic) NSArray *piperHandlers;
@property (copy, nonatomic) NSArray *handlerBlocks;
@property (readonly, nonatomic) id<IESLivePiperProtocol> liveBridge;
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

- (void)sendEvent:(id)arg0 params:(id)arg1;
- (id)rawView;
- (id)lifecycleDelegate;
- (void)setLifecycleDelegate:(id)arg0;
- (void)triggerLayout;
- (id)currentRequestURL;
- (void)addPiperHandler:(id)arg0;
- (id)liveHybridContainerDelegate;
- (id)liveBridge;
- (void)registerHandlerBlock:(id /* block */)arg0 forMethod:(id)arg1 authType:(unsigned long long)arg2;
- (void)setLiveHybridContainerDelegate:(id)arg0;
- (id)liveBusiness;
- (void)setStateCenter:(id)arg0;
- (unsigned long long)kernalType;
- (void)setLiveBusiness:(id)arg0;
- (void)secureGoBackWithReachEndBlock:(id /* block */)arg0;
- (void)addXBridgeMethods;
- (BOOL)refreshInitialPropsFlag;
- (void)setRefreshInitialPropsFlag:(BOOL)arg0;
- (id)piperHandlers;
- (id)handlerBlocks;
- (id)piperHandlersToAdd;
- (void)setPiperHandlersToAdd:(id)arg0;
- (id)handlerBlocksToRegister;
- (void)setHandlerBlocksToRegister:(id)arg0;
- (void)setPiperHandlers:(id)arg0;
- (void)setHandlerBlocks:(id)arg0;
- (void)stopLoading;
- (void).cxx_destruct;
- (BOOL)canGoBack;
- (id)containerID;
- (void)setContext:(id)arg0;
- (void)setUrl:(id)arg0;
- (id)initWithURL:(id)arg0;
- (id)context;
- (void)updateData:(id)arg0;
- (id)scrollView;
- (id)url;
- (void)loadData;
- (id)stateCenter;

@end