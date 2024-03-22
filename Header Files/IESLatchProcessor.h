//
//     Generated by private class-dump
//

@class NSString, NSArray, IESLatchAttachState, IESLatchPromiseDataHandler, IESLatchWorker, NSDictionary, NSMutableDictionary, NSMutableArray, IESLatchFullLinkMonitor;
@protocol IESLatchProcessorDelegate, IESLatchHybridContainerProtocol;

@interface IESLatchProcessor : NSObject <IESLatchWorkerDelegate, IESLatchFullLinkMonitorProtocol, IESLatchProcessorProtocol, IESLatchModuleDelegate, IESLatchLynxModuleWrapperDelegate> {
    BOOL _attached;
    id<IESLatchHybridContainerProtocol> _container;
    NSString *_business;
    id<IESLatchProcessorDelegate> _delegate;
    NSString *_channel;
    IESLatchWorker *_worker;
    NSDictionary *_returnValue;
    IESLatchPromiseDataHandler *_promiseHandler;
    NSArray *_promiseNodes;
    NSArray *_promisePaths;
    NSMutableArray *_injectCallbackIDs;
    id /* block */ _attachHandler;
    IESLatchAttachState *_attachState;
    NSMutableDictionary *_callbackHandlerMap;
    NSMutableDictionary *_callbackResultMap;
    double _startProcessorTime;
    double _startAttachTime;
    double _initjsFinishTime;
    IESLatchFullLinkMonitor *_fullLinkMonitor;
    NSString *_transferType;
    long long _attachTimeout;
    NSDictionary *_cachedPrefMetric;
    NSString *_prefetchVertion;
    NSString *_templateVertion;
}

@property (retain, nonatomic) id<IESLatchHybridContainerProtocol> container;
@property (retain, nonatomic) NSString *business;
@property (weak, nonatomic) id<IESLatchProcessorDelegate> delegate;
@property (nonatomic) BOOL attached;
@property (copy, nonatomic) NSString *channel;
@property (retain, nonatomic) IESLatchWorker *worker;
@property (copy, nonatomic) NSDictionary *returnValue;
@property (retain, nonatomic) IESLatchPromiseDataHandler *promiseHandler;
@property (copy, nonatomic) NSArray *promiseNodes;
@property (copy, nonatomic) NSArray *promisePaths;
@property (retain, nonatomic) NSMutableArray *injectCallbackIDs;
@property (copy, nonatomic) id /* block */ attachHandler;
@property (retain, nonatomic) IESLatchAttachState *attachState;
@property (retain, nonatomic) NSMutableDictionary *callbackHandlerMap;
@property (retain, nonatomic) NSMutableDictionary *callbackResultMap;
@property (nonatomic) double startProcessorTime;
@property (nonatomic) double startAttachTime;
@property (nonatomic) double initjsFinishTime;
@property (retain, nonatomic) IESLatchFullLinkMonitor *fullLinkMonitor;
@property (retain, nonatomic) NSString *transferType;
@property (nonatomic) long long attachTimeout;
@property (retain, nonatomic) NSDictionary *cachedPrefMetric;
@property (retain, nonatomic) NSString *prefetchVertion;
@property (retain, nonatomic) NSString *templateVertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attachWithCompletion:(id /* block */)arg0;
- (void)stopProcess;
- (BOOL)checkPageVersion:(id)arg0 url:(id)arg1;
- (void)reportWithPerfMetric:(id)arg0;
- (void)reportWithResult:(id)arg0;
- (void)reportJsbPromiseResult:(id)arg0;
- (id)initWithContainer:(id)arg0 business:(id)arg1 delegate:(id)arg2;
- (BOOL)evaluateUrlJSData:(id)arg0;
- (void)recordIODuration:(double)arg0;
- (void)p_generateAttachStateIfNeededWithCode:(long long)arg0;
- (id)fullLinkMonitor;
- (id)p_getAttachSuccessResult;
- (id)attachState;
- (void)setStartAttachTime:(double)arg0;
- (void)p_monitorPrefetchCallbackIfNeeded;
- (void)p_checkIfDone;
- (void)setAttachHandler:(id /* block */)arg0;
- (id)promiseHandler;
- (void)setPromisePaths:(id)arg0;
- (void)setPromiseNodes:(id)arg0;
- (void)p_generateAttachStateIfNeededWithCode:(long long)arg0 message:(id)arg1;
- (void)p_generateAttachStateIfNeededWithCode:(long long)arg0 message:(id)arg1 extra:(id)arg2;
- (void)setAttachState:(id)arg0;
- (long long)attachTimeout;
- (id)cachedPrefMetric;
- (id)promisePaths;
- (id)promiseNodes;
- (id)injectCallbackIDs;
- (id)callbackResultMap;
- (id)callbackHandlerMap;
- (double)startAttachTime;
- (double)startProcessorTime;
- (void)setAttachTimeout:(long long)arg0;
- (void)setCachedPrefMetric:(id)arg0;
- (void)p_monitorPrefetchDuration;
- (void)p_generatePromiseNodesAndPathsWithValue:(id)arg0;
- (id /* block */)attachHandler;
- (BOOL)p_injectForPromiseNodesIfNeeded;
- (id)getGlobalProps;
- (void)onLatchMonitorFinish:(id)arg0;
- (id)getInitialPropsWithKey:(id)arg0;
- (void)module:(id)arg0 onReturn:(id)arg1;
- (void)module:(id)arg0 onErrorWithOccasion:(long long)arg1 message:(id)arg2 extra:(id)arg3;
- (void)module:(id)arg0 onLogWithOccasion:(long long)arg1 message:(id)arg2;
- (void)module:(id)arg0 onInitJsFinishWithStartTime:(double)arg1;
- (void)module:(id)arg0 onAttach:(id)arg1;
- (id)latchContainer;
- (void)lynxModule:(id)arg0 startCall:(id)arg1 forCallbackID:(id)arg2;
- (void)lynxModule:(id)arg0 didCatchData:(id)arg1 forCallbackID:(id)arg2;
- (void)lynxModule:(id)arg0 didRegisterXbridgeWithCost:(double)arg1;
- (void)setPromiseHandler:(id)arg0;
- (void)setInjectCallbackIDs:(id)arg0;
- (void)setCallbackHandlerMap:(id)arg0;
- (void)setCallbackResultMap:(id)arg0;
- (void)setStartProcessorTime:(double)arg0;
- (double)initjsFinishTime;
- (void)setInitjsFinishTime:(double)arg0;
- (void)setFullLinkMonitor:(id)arg0;
- (void)setTemplateVertion:(id)arg0;
- (BOOL)checkPageVersionInternal;
- (id)templateVertion;
- (id)prefetchVertion;
- (void)setPrefetchVertion:(id)arg0;
- (void)onWorker:(id)arg0 receiveMessage:(id)arg1;
- (void)onWorker:(id)arg0 receiveError:(id)arg1;
- (void)onWorker:(id)arg0 readyToEvaluateWithTimeStamp:(double)arg1;
- (id)container;
- (id)channel;
- (id)returnValue;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (id)containerID;
- (BOOL)attached;
- (void)setContainer:(id)arg0;
- (id)delegate;
- (void)setAttached:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)setReturnValue:(id)arg0;
- (id)business;
- (void)setBusiness:(id)arg0;
- (id)transferType;
- (id)worker;
- (void)setWorker:(id)arg0;
- (void)setTransferType:(id)arg0;

@end
