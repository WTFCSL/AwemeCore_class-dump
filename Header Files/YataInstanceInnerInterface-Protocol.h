//
//     Generated by private class-dump
//

@class YataRenderDispatcher, YataStore, NSArray, NSString, NSDictionary, YataExpressionWrapper, YataExchangeTransaction, YataMonitor, YataEventCenter, YataStoreManager;
@protocol YataTrackService, YataRouterService, YataScrollViewDelegate, YataState, YataCallbackInterface, YataPopupContainerDelegate, YataAfterRenderDelegate, YataInterceptorCenterInterface, YataConfirmDelegate, YataToastService, YataNetConfigDelegate;

@protocol YataInstanceInnerInterface <YataInstanceInterface>

@property (readonly, weak, nonatomic) id<YataTrackService> tracker;
@property (readonly, weak, nonatomic) id<YataToastService> toaster;
@property (readonly, weak, nonatomic) id<YataRouterService> router;
@property (readonly, nonatomic) NSDictionary *renderEngineDict;
@property (readonly, nonatomic) NSArray *extentFieldsNameList;
@property (readonly, weak, nonatomic) id bizEventDelegate;
@property (readonly, weak, nonatomic) id<YataScrollViewDelegate> scrollDelegate;
@property (readonly, weak, nonatomic) id<YataNetConfigDelegate> netConfigDelegate;
@property (readonly, weak, nonatomic) id<YataCallbackInterface> callbackDelegate;
@property (readonly, weak, nonatomic) id<YataConfirmDelegate> confirmDelegate;
@property (readonly, weak, nonatomic) id<YataAfterRenderDelegate> afterRenderDelegate;
@property (readonly, weak, nonatomic) id<YataPopupContainerDelegate> popupContainerDelegate;
@property (readonly, nonatomic) YataStoreManager *storeManager;
@property (readonly, nonatomic) YataExpressionWrapper *expressionWrapper;
@property (readonly, nonatomic) YataStore *store;
@property (readonly, nonatomic) id<YataState> state;
@property (readonly, nonatomic) YataEventCenter *eventCenter;
@property (readonly, nonatomic) id<YataInterceptorCenterInterface> interceptorCenter;
@property (readonly, nonatomic) YataExchangeTransaction *exchangeTransaction;
@property (readonly, nonatomic) YataRenderDispatcher *renderDispatcher;
@property (readonly, nonatomic) YataMonitor *monitor;
@property (readonly, copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSString *logID;
@property (copy, nonatomic) NSString *preLogID;
@property (nonatomic) unsigned long long renderTriggerSource;
@property (nonatomic) BOOL refreshWithInvalidProtocolModel;
@property (readonly, nonatomic) double bodyCollectionViewWidth;
@property (readonly, nonatomic) BOOL afterRenderTimeChangeToDispatchAsync;

- (id)bizCode;
- (id)eventCenter;
- (double)bodyCollectionViewWidth;
- (id)renderDispatcher;
- (id)expressionWrapper;
- (id)bizEventDelegate;
- (id)netConfigDelegate;
- (id)preLogID;
- (id)renderViewWithRenderObject:(id)arg0;
- (void)setRefreshWithInvalidProtocolModel:(BOOL)arg0;
- (void)setPreLogID:(id)arg0;
- (id)toaster;
- (unsigned long long)renderTriggerSource;
- (void)setRenderTriggerSource:(unsigned long long)arg0;
- (id)confirmDelegate;
- (id)exchangeTransaction;
- (id)interceptorCenter;
- (BOOL)refreshWithInvalidProtocolModel;
- (void)performRenderCompletion:(BOOL)arg0 isUpdated:(BOOL)arg1 metricsID:(id)arg2;
- (id)renderEngineDict;
- (id)extentFieldsNameList;
- (id)afterRenderDelegate;
- (id)popupContainerDelegate;
- (BOOL)afterRenderTimeChangeToDispatchAsync;
- (id)tracker;
- (void)handleError:(id)arg0;
- (id)monitor;
- (id)state;
- (id)store;
- (id)scrollDelegate;
- (id)storeManager;
- (id)logID;
- (id)router;
- (void)setLogID:(id)arg0;
- (id)callbackDelegate;

@end
