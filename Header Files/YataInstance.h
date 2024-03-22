//
//     Generated by private class-dump
//

@class YataRenderDispatcher, NSString, NSArray, YataErrorManager, YataStore, YataExpressionWrapper, NSDictionary, YataExchangeTransaction, YataMonitor, YataEventCenter, YataStoreManager;
@protocol YataTrackService, YataRouterService, YataScrollViewDelegate, YataState, YataCallbackInterface, YataPopupContainerDelegate, YataAfterRenderDelegate, YataInterceptorCenterInterface, YataConfirmDelegate, YataToastService, YataNetConfigDelegate;

@interface YataInstance : NSObject <YataInstanceInnerInterface> {
    BOOL refreshWithInvalidProtocolModel;
    BOOL _storeLockOpen;
    BOOL _afterRenderTimeChangeToDispatchAsync;
    YataEventCenter *_eventCenter;
    id<YataState> _state;
    id<YataInterceptorCenterInterface> _interceptorCenter;
    NSString *_logID;
    NSString *_preLogID;
    long long _renderCountWhenHitCDN;
    unsigned long long renderTriggerSource;
    double _bodyCollectionViewWidth;
    NSString *_bizCode;
    YataExchangeTransaction *_exchangeTransaction;
    YataStoreManager *_storeManager;
    YataExpressionWrapper *_expressionWrapper;
    id<YataTrackService> _tracker;
    NSDictionary *_renderEngineDict;
    NSArray *_extentFieldsNameList;
    id<YataToastService> _toaster;
    id<YataRouterService> _router;
    id _bizEventDelegate;
    id<YataScrollViewDelegate> _scrollDelegate;
    id<YataNetConfigDelegate> _netConfigDelegate;
    id<YataCallbackInterface> _callbackDelegate;
    id<YataConfirmDelegate> _confirmDelegate;
    id<YataAfterRenderDelegate> _afterRenderDelegate;
    id<YataPopupContainerDelegate> _popupContainerDelegate;
    YataRenderDispatcher *_renderDispatcher;
    YataErrorManager *_errorManager;
    YataMonitor *_monitor;
    id /* block */ _viewRenderCompletionBlock;
}

@property (retain, nonatomic) YataEventCenter *eventCenter;
@property (copy, nonatomic) NSString *bizCode;
@property (retain, nonatomic) YataExchangeTransaction *exchangeTransaction;
@property (retain, nonatomic) YataStoreManager *storeManager;
@property (retain, nonatomic) YataExpressionWrapper *expressionWrapper;
@property (weak, nonatomic) id<YataTrackService> tracker;
@property (retain, nonatomic) NSDictionary *renderEngineDict;
@property (retain, nonatomic) NSArray *extentFieldsNameList;
@property (weak, nonatomic) id<YataToastService> toaster;
@property (weak, nonatomic) id<YataRouterService> router;
@property (weak, nonatomic) id bizEventDelegate;
@property (weak, nonatomic) id<YataScrollViewDelegate> scrollDelegate;
@property (weak, nonatomic) id<YataNetConfigDelegate> netConfigDelegate;
@property (weak, nonatomic) id<YataCallbackInterface> callbackDelegate;
@property (weak, nonatomic) id<YataConfirmDelegate> confirmDelegate;
@property (weak, nonatomic) id<YataAfterRenderDelegate> afterRenderDelegate;
@property (weak, nonatomic) id<YataPopupContainerDelegate> popupContainerDelegate;
@property (retain, nonatomic) YataRenderDispatcher *renderDispatcher;
@property (retain, nonatomic) YataErrorManager *errorManager;
@property (retain, nonatomic) YataMonitor *monitor;
@property (copy, nonatomic) id /* block */ viewRenderCompletionBlock;
@property (readonly, nonatomic) YataStore *store;
@property (readonly, nonatomic) id<YataState> state;
@property (readonly, nonatomic) id<YataInterceptorCenterInterface> interceptorCenter;
@property (copy, nonatomic) NSString *logID;
@property (copy, nonatomic) NSString *preLogID;
@property (nonatomic) unsigned long long renderTriggerSource;
@property (nonatomic) BOOL refreshWithInvalidProtocolModel;
@property (readonly, nonatomic) double bodyCollectionViewWidth;
@property (readonly, nonatomic) BOOL afterRenderTimeChangeToDispatchAsync;
@property (nonatomic) long long renderCountWhenHitCDN;
@property (nonatomic) BOOL storeLockOpen;
@property (readonly, weak, nonatomic) id /* block */ renderConfig;
@property (readonly, weak, nonatomic) id /* block */ trackerService;
@property (readonly, weak, nonatomic) id /* block */ toastService;
@property (readonly, weak, nonatomic) id /* block */ routerService;
@property (readonly, weak, nonatomic) id /* block */ extendFieldsNameArray;
@property (readonly, weak, nonatomic) id /* block */ bizEvent;
@property (readonly, weak, nonatomic) id /* block */ viewModel;
@property (readonly, weak, nonatomic) id /* block */ scrollForwardDelegate;
@property (readonly, weak, nonatomic) id /* block */ netBizConfigDelegate;
@property (readonly, weak, nonatomic) id /* block */ popupContainerConfigDelegate;
@property (readonly, weak, nonatomic) id /* block */ callbackInterface;
@property (readonly, weak, nonatomic) id /* block */ confirmConfigDelegate;
@property (readonly, weak, nonatomic) id /* block */ afterRenderConfigDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)SDKStaticParams;
+ (void)initialize;

- (id)bizCode;
- (id)eventCenter;
- (void)setBizCode:(id)arg0;
- (void)setEventCenter:(id)arg0;
- (id /* block */)trackerService;
- (id /* block */)toastService;
- (id)yataGlobalFields;
- (id)renderNodesWithNodeName:(id)arg0;
- (id)getNodeListFilterFields:(id /* block */)arg0;
- (id)activeViewWithRenderNodeInterface:(id)arg0;
- (id)renderEngineInstance:(id)arg0;
- (void)triggerEventWithEventType:(id)arg0 renderObject:(id)arg1 extraInfo:(id)arg2 activeView:(id)arg3;
- (void)handleNetPerfMetrics:(id)arg0 metricsID:(id)arg1;
- (id)yataParamsWithOperatorKey:(id)arg0 eventName:(id)arg1 extraFields:(id)arg2;
- (id)gzipYataParamsStringWithOperatorKey:(id)arg0 eventName:(id)arg1 extraFields:(id)arg2;
- (void)registerPerfMetricsID:(id)arg0 scene:(id)arg1;
- (void)handlePerfMetricsDict:(id)arg0;
- (void)refreshProtocol:(id)arg0 completion:(id /* block */)arg1;
- (void)registerLinearContainerWithPosition:(id)arg0 view:(id)arg1;
- (id /* block */)scrollForwardDelegate;
- (id /* block */)netBizConfigDelegate;
- (id /* block */)callbackInterface;
- (id /* block */)confirmConfigDelegate;
- (id /* block */)popupContainerConfigDelegate;
- (id /* block */)bizEvent;
- (id)composeYataParamsWithoutOperator;
- (id)mergeProtocol:(id)arg0 withSnapshotProtocol:(id)arg1;
- (void)registerYataIntercepter:(id)arg0;
- (id /* block */)extendFieldsNameArray;
- (void)reloadSectionObject:(id)arg0 isBodyError:(BOOL)arg1;
- (id)getCurrentSnapshotProtocol;
- (void)setRenderCountWhenHitCDN:(long long)arg0;
- (id)getNodeListFilterNode:(id /* block */)arg0;
- (void)getNodeFrameWithRenderObject:(id)arg0 fitSize:(struct CGSize { double x0; double x1; })arg1 completion:(id /* block */)arg2;
- (double)bodyCollectionViewWidth;
- (id)renderDispatcher;
- (id)expressionWrapper;
- (id)bizEventDelegate;
- (long long)renderCountWhenHitCDN;
- (id)netConfigDelegate;
- (id)preLogID;
- (id)renderViewWithRenderObject:(id)arg0;
- (void)setRefreshWithInvalidProtocolModel:(BOOL)arg0;
- (void)setPreLogID:(id)arg0;
- (id)toaster;
- (BOOL)storeLockOpen;
- (unsigned long long)renderTriggerSource;
- (void)setRenderTriggerSource:(unsigned long long)arg0;
- (id)confirmDelegate;
- (id)exchangeTransaction;
- (id)interceptorCenter;
- (void)setToaster:(id)arg0;
- (void)setBizEventDelegate:(id)arg0;
- (void)setRenderEngineDict:(id)arg0;
- (void)setExtentFieldsNameList:(id)arg0;
- (void)setNetConfigDelegate:(id)arg0;
- (void)setPopupContainerDelegate:(id)arg0;
- (void)setConfirmDelegate:(id)arg0;
- (void)setAfterRenderDelegate:(id)arg0;
- (id)nodesDictWithNodeNameArray:(id)arg0;
- (void)setViewRenderCompletionBlock:(id /* block */)arg0;
- (BOOL)refreshWithInvalidProtocolModel;
- (id /* block */)viewRenderCompletionBlock;
- (id)errorManager;
- (void)setStoreLockOpen:(BOOL)arg0;
- (id /* block */)afterRenderConfigDelegate;
- (void)performRenderCompletion:(BOOL)arg0 isUpdated:(BOOL)arg1 metricsID:(id)arg2;
- (id)renderEngineDict;
- (id)extentFieldsNameList;
- (id)afterRenderDelegate;
- (id)popupContainerDelegate;
- (BOOL)afterRenderTimeChangeToDispatchAsync;
- (id)initWithBizCode:(id)arg0 body:(id)arg1 header:(id)arg2 footer:(id)arg3;
- (void)setExchangeTransaction:(id)arg0;
- (void)setExpressionWrapper:(id)arg0;
- (void)setRenderDispatcher:(id)arg0;
- (void)setErrorManager:(id)arg0;
- (id)tracker;
- (void)handleError:(id)arg0;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (id)monitor;
- (id)state;
- (id /* block */)renderConfig;
- (id)store;
- (void)setScrollDelegate:(id)arg0;
- (void)setMonitor:(id)arg0;
- (id)scrollDelegate;
- (id)queryParams;
- (id /* block */)viewModel;
- (id)sectionControllerForSection:(long long)arg0;
- (id)storeManager;
- (void)setStoreManager:(id)arg0;
- (id)logID;
- (id)router;
- (void)setRouter:(id)arg0;
- (void)setLogID:(id)arg0;
- (id /* block */)routerService;
- (id)callbackDelegate;
- (void)setCallbackDelegate:(id)arg0;

@end
