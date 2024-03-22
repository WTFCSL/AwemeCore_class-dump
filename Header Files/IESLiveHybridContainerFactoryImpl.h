//
//     Generated by private class-dump
//

@class NSString, IESLivePuzzleHybridRouter;
@protocol IESLiveWebViewService, IESLiveMonitor, IESLiveLynxService;

@interface IESLiveHybridContainerFactoryImpl : NSObject <IESLiveHybridContainerFactory> {
    id<IESLiveWebViewService> _webViewService;
    id<IESLiveMonitor> _monitor;
    id<IESLiveLynxService> _lynxService;
    IESLivePuzzleHybridRouter *_hybridRouter;
}

@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveLynxService> lynxService;
@property (retain, nonatomic) IESLivePuzzleHybridRouter *hybridRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveHybirdContainerVCWithURL:(id)arg0;
- (id)hybridContainerWithSchema:(id)arg0 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 context:(id)arg2 lifeCycleDelegate:(id)arg3;
- (id)fullscreenWebVCWithURL:(id)arg0 kernalType:(unsigned long long)arg1 delegate:(id)arg2;
- (id)fullscreenWebVCWithURL:(id)arg0 kernalType:(unsigned long long)arg1 delegate:(id)arg2 style:(id)arg3;
- (id)PiperWebViewWithURL:(id)arg0;
- (id)PiperWebViewWithURL:(id)arg0 routerParam:(id)arg1;
- (void)prepareForUse:(id)arg0;
- (id)lynxViewWithURL:(id)arg0 initialData:(id)arg1 preferredSize:(struct CGSize { double x0; double x1; })arg2 fallbackURL:(id)arg3;
- (id)lynxViewWithURL:(id)arg0 routerParam:(id)arg1 initialData:(id)arg2 preferredSize:(struct CGSize { double x0; double x1; })arg3 fallbackURL:(id)arg4;
- (id)hybridContainerWithURL:(id)arg0 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 kernalType:(unsigned long long)arg2 context:(id)arg3 lifeCycleDelegate:(id)arg4;
- (id)injectedPiperHandlersForKernal:(unsigned long long)arg0;
- (id)hybridRouter;
- (void)setHybridRouter:(id)arg0;
- (id)webViewService;
- (void)setWebViewService:(id)arg0;
- (void)registerBridgeWithKitView:(id)arg0;
- (id)lynxService;
- (id)webcastPiperHandlers;
- (void)setLynxService:(id)arg0;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;

@end
