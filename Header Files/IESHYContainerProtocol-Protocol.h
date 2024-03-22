//
//     Generated by private class-dump
//

@class PuzzleContext, IESHYHybridContainerConfig, UIView;
@protocol IESHYHybridViewProtocol, IESHYHybridViewLifecycleProtocol;

@protocol IESHYContainerProtocol <NSObject>

@property (readonly, nonatomic) UIView<IESHYHybridViewProtocol> *kitView;
@property (readonly, nonatomic) PuzzleContext *context;
@property (readonly, nonatomic) IESHYHybridContainerConfig *config;
@property (nonatomic) BOOL hybridInBackground;
@property (nonatomic) BOOL hybridVisiable;
@property (readonly, nonatomic) unsigned long long currentKernal;
@property (weak, nonatomic) id<IESHYHybridViewLifecycleProtocol> lifecycleDelegate;
@property (nonatomic) BOOL destroyedFlag;
@property (nonatomic) unsigned long long loadState;
@property (nonatomic) BOOL runtimeReady;
@property (nonatomic) unsigned long long containerCardType;

- (BOOL)hybridInBackground;
- (void)setHybridInBackground:(BOOL)arg0;
- (id)kitView;
- (id)lifecycleDelegate;
- (void)setLifecycleDelegate:(id)arg0;
- (BOOL)hybridVisiable;
- (void)setHybridVisiable:(BOOL)arg0;
- (unsigned long long)currentKernal;
- (BOOL)destroyedFlag;
- (void)setDestroyedFlag:(BOOL)arg0;
- (BOOL)runtimeReady;
- (void)setRuntimeReady:(BOOL)arg0;
- (unsigned long long)containerCardType;
- (void)setContainerCardType:(unsigned long long)arg0;
- (unsigned long long)loadState;
- (id)config;
- (void)load;
- (id)context;
- (void)setLoadState:(unsigned long long)arg0;

@optional

- (void)sendEvent:(id)arg0 params:(id)arg1;
- (void)startLoadingAnimation:(id)arg0;
- (void)registInstanceBridgeHandler:(id /* block */)arg0 forMethod:(id)arg1 authType:(unsigned long long)arg2;
- (void)handleViewVisiablityChange:(BOOL)arg0;
- (void)handleAppActiveStateChange:(BOOL)arg0;
- (void)handlePageVisiablityChange:(BOOL)arg0 source:(id)arg1;
- (void)destroyContent;
- (void)reCreateContent;
- (void)setDestroyCallback:(id /* block */)arg0;
- (void)setObject:(id)arg0 forHybridMonitorField:(id)arg1;
- (BOOL)useGradientBgColor;
- (void)stopLoadingAnimation;
- (void)loadURLRequest:(id)arg0;

@end