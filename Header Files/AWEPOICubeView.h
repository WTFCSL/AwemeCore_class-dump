//
//     Generated by private class-dump
//

@class UIView, NSString, BDXContext, BDXLynxKitParams, AWEPOICubeMonitor, NSMutableDictionary, AWEPOICubeModel, NSDictionary, LynxView, NSNumber, AWEPOICubeNativeModuleContext;
@protocol AWEPOICubeViewDelegate, BDXMonitorProtocol, BDXLynxViewProtocol;

@interface AWEPOICubeView : UIView <BDXKitViewLifecycleProtocol, AWEPOICubeMonitorDataSource, AWEPOICubeViewDataSource> {
    BOOL _isPreloadView;
    BOOL _isLoadSuccess;
    BOOL _isLoading;
    BOOL _isLoadFailed;
    BOOL _didUpdateData;
    BOOL _forceUpdateInThisSession;
    BOOL _disableGecko;
    BOOL _enableMemoryCache;
    BOOL _enableUIOperationQueue;
    NSDictionary *_extraParams;
    id<AWEPOICubeViewDelegate> _delegate;
    AWEPOICubeModel *_cubeModel;
    NSString *_uniqueTag;
    NSNumber *_geckoID;
    UIView<BDXLynxViewProtocol> *_lynxContainer;
    BDXLynxKitParams *_kitParams;
    BDXContext *_context;
    id<BDXMonitorProtocol> _monitor;
    double _initTimeStamp;
    NSMutableDictionary *_hasLoadedDict;
    AWEPOICubeNativeModuleContext *_nativeModuleContext;
    long long _dataSize;
    AWEPOICubeMonitor *_cubeMonitor;
    NSString *_bid;
    AWEPOICubeModel *_waitCubeModel;
    NSDictionary *_waitExtraParams;
}

@property (retain, nonatomic) UIView<BDXLynxViewProtocol> *lynxContainer;
@property (retain, nonatomic) NSNumber *geckoID;
@property (retain, nonatomic) BDXLynxKitParams *kitParams;
@property (retain, nonatomic) BDXContext *context;
@property (retain, nonatomic) id<BDXMonitorProtocol> monitor;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isLoadFailed;
@property (nonatomic) BOOL isLoadSuccess;
@property (nonatomic) double initTimeStamp;
@property (retain, nonatomic) NSMutableDictionary *hasLoadedDict;
@property (retain, nonatomic) AWEPOICubeNativeModuleContext *nativeModuleContext;
@property (readonly, nonatomic) NSString *loadStatus;
@property (nonatomic) long long dataSize;
@property (retain, nonatomic) AWEPOICubeMonitor *cubeMonitor;
@property (copy, nonatomic) NSString *bid;
@property (nonatomic) BOOL didUpdateData;
@property (nonatomic) BOOL forceUpdateInThisSession;
@property (nonatomic) BOOL disableGecko;
@property (nonatomic) BOOL enableMemoryCache;
@property (retain, nonatomic) AWEPOICubeModel *waitCubeModel;
@property (retain, nonatomic) NSDictionary *waitExtraParams;
@property (nonatomic) BOOL enableUIOperationQueue;
@property (weak, nonatomic) id<AWEPOICubeViewDelegate> delegate;
@property (readonly, nonatomic) LynxView *lynxView;
@property (readonly, nonatomic) NSString *containerID;
@property (retain, nonatomic) AWEPOICubeModel *cubeModel;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *uniqueTag;
@property (nonatomic) BOOL isPreloadView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheKeyWithLynxUrl:(id)arg0;

- (void)sendEvent:(id)arg0 params:(id)arg1;
- (void)registerBridgeHandle:(id /* block */)arg0 forMethod:(id)arg1;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (id)lynxView;
- (void)setBid:(id)arg0;
- (id)geckoID;
- (id)lynxGlobalProps;
- (void)viewWillStartLoading:(id)arg0;
- (void)view:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)viewDidStartLoading:(id)arg0;
- (void)view:(id)arg0 didStartFetchResourceWithURL:(id)arg1;
- (void)view:(id)arg0 didFetchedResource:(id)arg1 error:(id)arg2;
- (void)viewDidFirstScreen:(id)arg0;
- (void)view:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)view:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)viewDidUpdate:(id)arg0;
- (void)view:(id)arg0 didRecieveError:(id)arg1;
- (void)view:(id)arg0 didReceivePerformance:(id)arg1;
- (void)view:(id)arg0 didReceivePerformanceFirstLoad:(id)arg1;
- (void)viewDidPageUpdate:(id)arg0;
- (void)view:(id)arg0 onSetUp:(id)arg1;
- (void)view:(id)arg0 onUpdate:(id)arg1;
- (void)configMonitor;
- (id)lynxContainer;
- (id)bid;
- (void)setEnableMemoryCache:(BOOL)arg0;
- (BOOL)enableMemoryCache;
- (void)setInitTimeStamp:(double)arg0;
- (double)initTimeStamp;
- (void)setLynxContainer:(id)arg0;
- (void)setIsLoadFailed:(BOOL)arg0;
- (BOOL)isLoadFailed;
- (id)lynxInitialData;
- (void)resetLynxView;
- (void)setIsLoadSuccess:(BOOL)arg0;
- (BOOL)isLoadSuccess;
- (void)lynxViewWillShow;
- (void)lynxViewWillHide;
- (id)uniqueTag;
- (void)setUniqueTag:(id)arg0;
- (BOOL)enableUIOperationQueue;
- (void)setEnableUIOperationQueue:(BOOL)arg0;
- (void)setCubeModel:(id)arg0;
- (void)trackEvent:(id)arg0 metric:(id)arg1 category:(id)arg2;
- (id)cubeModel;
- (BOOL)isPredecodeWithCubeMonitor:(id)arg0;
- (void)triggerEventBus:(id)arg0 withParams:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 cubeModel:(id)arg1 extraParams:(id)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 cubeModel:(id)arg1 uniqueTag:(id)arg2 extraParams:(id)arg3 delegate:(id)arg4;
- (void)bindCubeModel:(id)arg0;
- (void)createCubeMonitor;
- (id)cubeMonitor;
- (void)setupCubeConfig;
- (void)setupBizBeforeCreateLynxView;
- (void)setupLynxView:(id *)arg0;
- (void)trackTimeLine;
- (void)appendParametersToCubeModel:(id)arg0;
- (BOOL)disableGecko;
- (BOOL)isPreloadView;
- (id)fetchInitialData;
- (void)configWithLynxViewBuilder:(id)arg0;
- (id)generateParamWithContext:(id)arg0 url:(id)arg1;
- (void)setKitParams:(id)arg0;
- (id)kitParams;
- (id)customElements;
- (id)nativeModuleClasses;
- (id)nativeModuleContext;
- (long long)threadStrategyFromTemplateUrl:(id)arg0;
- (BOOL)enableCubeParserUrlThreadStrategy;
- (long long)threadStrategyForBDX:(long long)arg0;
- (BOOL)enableCustomLynxComponent;
- (id)defaultCubeUIElementsConfigs;
- (id)bizCustomUIElementsConfigs;
- (id)customLynxElementWithRegisterName:(id)arg0 elementClass:(Class)arg1;
- (BOOL)shouldUpdate:(id)arg0 extraParams:(id)arg1;
- (void)updateViewWithCubeModel:(id)arg0 extraParams:(id)arg1 needUpdateGlobalProps:(BOOL)arg2;
- (void)updateViewWithCubeModel:(id)arg0 extraParams:(id)arg1 needUpdateGlobalProps:(BOOL)arg2 needResetData:(BOOL)arg3;
- (void)setWaitCubeModel:(id)arg0;
- (void)setWaitExtraParams:(id)arg0;
- (BOOL)didUpdateData;
- (void)setDidUpdateData:(BOOL)arg0;
- (void)setForceUpdateInThisSession:(BOOL)arg0;
- (void)updateViewWithCubeModel:(id)arg0 extraParams:(id)arg1;
- (BOOL)forceUpdateInThisSession;
- (void)invokeSchemaInterceptor:(BOOL)arg0;
- (void)setupFetchResourceConfig;
- (id)containerInitTimeStamp;
- (id)hasLoadedDict;
- (id)waitCubeModel;
- (id)waitExtraParams;
- (void)setDisableGecko:(BOOL)arg0;
- (double)getDurationForStartTime:(id)arg0 endTime:(id)arg1;
- (id)cubeSettings;
- (id)createBDXRenderConfig;
- (id)findLastLynxUIIn:(id)arg0 withResponseEvent:(id)arg1;
- (void)sendCustomLynxEvent:(id)arg0 lynxUI:(id)arg1;
- (id)initWithCubeModel:(id)arg0 extraParams:(id)arg1 delegate:(id)arg2;
- (void)reloadViewWithCubeModel:(id)arg0 extraParams:(id)arg1;
- (void)resetViewWithCubeModel:(id)arg0 extraParams:(id)arg1;
- (void)updateViewWithCubeModel:(id)arg0 extraParams:(id)arg1 waitFinish:(BOOL)arg2;
- (void)updateGlobalProsAndDataAtTheSameTimeWithCubeModel:(id)arg0 extraParams:(id)arg1;
- (void)forceUpdateViewWithCubeModel:(id)arg0;
- (void)registerBDXLocalMethod:(id)arg0;
- (double)calculatePreRenderHeight;
- (void)updateClipsToBounds:(BOOL)arg0;
- (void)componentViewSendLynxCustomEvent:(id)arg0 eventParams:(id)arg1 viewID:(id)arg2;
- (id)innerLynxView:(id)arg0;
- (void)setGeckoID:(id)arg0;
- (void)setIsPreloadView:(BOOL)arg0;
- (void)setHasLoadedDict:(id)arg0;
- (void)setNativeModuleContext:(id)arg0;
- (void)setCubeMonitor:(id)arg0;
- (BOOL)isLoading;
- (void).cxx_destruct;
- (id)monitor;
- (id)containerID;
- (id)loadStatus;
- (void)setContext:(id)arg0;
- (void)setMonitor:(id)arg0;
- (void)setDataSize:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (long long)dataSize;
- (id)context;
- (id)initWithCoder:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setIsLoading:(BOOL)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)resetAnimation;
- (void)restartAnimation;

@end
