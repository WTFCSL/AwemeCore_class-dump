//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSMapTable, UIResponder, BTMTimeCalculator, NSObject, BTMExceptionProcessor, BTMSettingsConfig, NSMutableArray, NSString, BTMViewAttachManager, BTMEvokeInfoModel, NSArray, BTMFetcher, NSCache;
@protocol OS_dispatch_queue;

@interface BTMInnerManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _nodeStorageLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _managerLock;
    BOOL _validate;
    BOOL _optimizedV2;
    BOOL _optimizedLog;
    BOOL _enableFixParentToChild;
    BOOL _optimizedNode;
    BOOL _optimizedDequeueNode;
    BOOL _realStepValidate;
    BOOL _pageShowWillEndHandlerEnable;
    BOOL _enableLogUpload;
    BOOL _enableSetPageIdFromBtm;
    BOOL _enableAppearTooEarlyFix;
    BOOL _exceptionReportIsEnable;
    BOOL _initialNodeEnabled;
    BOOL _feFreeDevelopmentEnabled;
    BOOL _hookSetupFinish;
    NSMutableArray *_nodeBindeHandlers;
    NSMutableArray *_pageShowHandlers;
    NSMutableArray *_forwardInContainerHandlers;
    BTMFetcher *_fetcher;
    long long _btmListLength;
    NSString *_updateVersionCode;
    id /* block */ _trackHandler;
    id /* block */ _serviceMonitorHandler;
    id /* block */ _logUploadHandler;
    id /* block */ _nodePassHandler;
    id /* block */ _clearUnitParamsHandler;
    NSMutableArray *_pageItemArray;
    BTMViewAttachManager *_viewAttachManager;
    BTMSettingsConfig *_settings;
    NSMapTable *_nodeStorage;
    NSMapTable *_nodeIndexV2;
    NSMutableArray *_nodeStorageKeys;
    NSMutableArray *_logHandlers;
    id /* block */ _schemaFetchHandler;
    NSMutableArray *_jumpQueue;
    NSMutableArray *_sourceBtmTokenStorage;
    NSArray *_settingsSchemaMaps;
    NSMutableDictionary *_services;
    long long _maxNodeStorage;
    BTMTimeCalculator *_calculator;
    NSString *_launchId;
    id /* block */ _currentPageChangedHandler;
    NSCache *_matchedSchemaCache;
    NSCache *_misMatchedSchemaCache;
    BTMEvokeInfoModel *_coldModel;
    BTMEvokeInfoModel *_hotModel;
    BTMExceptionProcessor *_exceptionProcessor;
    NSObject<OS_dispatch_queue> *_serailQueue;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

@property (class, readonly) BTMInnerManager *shared;

@property BOOL hookSetupFinish;
@property (retain, nonatomic) NSMapTable *nodeStorage;
@property (retain, nonatomic) NSMapTable *nodeIndexV2;
@property (retain, nonatomic) NSMutableArray *nodeStorageKeys;
@property (retain, nonatomic) NSMutableArray *logHandlers;
@property (copy) id /* block */ serviceMonitorHandler;
@property (copy) id /* block */ trackHandler;
@property (copy, nonatomic) id /* block */ schemaFetchHandler;
@property (retain, nonatomic) NSMutableArray *jumpQueue;
@property (retain, nonatomic) NSMutableArray *sourceBtmTokenStorage;
@property (retain, nonatomic) NSArray *settingsSchemaMaps;
@property (retain, nonatomic) NSMutableDictionary *services;
@property (nonatomic) long long maxNodeStorage;
@property (retain, nonatomic) BTMTimeCalculator *calculator;
@property (retain, nonatomic) NSString *launchId;
@property (copy, nonatomic) id /* block */ currentPageChangedHandler;
@property (readonly, nonatomic) NSMutableArray *nodeBindeHandlers;
@property (readonly, nonatomic) NSMutableArray *pageShowHandlers;
@property (readonly, nonatomic) NSMutableArray *forwardInContainerHandlers;
@property (retain, nonatomic) NSCache *matchedSchemaCache;
@property (retain, nonatomic) NSCache *misMatchedSchemaCache;
@property (retain, nonatomic) BTMEvokeInfoModel *coldModel;
@property (retain, nonatomic) BTMEvokeInfoModel *hotModel;
@property (retain, nonatomic) BTMExceptionProcessor *exceptionProcessor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serailQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property BOOL validate;
@property BOOL optimizedV2;
@property BOOL optimizedLog;
@property BOOL enableFixParentToChild;
@property BOOL optimizedNode;
@property BOOL optimizedDequeueNode;
@property long long btmListLength;
@property BOOL realStepValidate;
@property BOOL pageShowWillEndHandlerEnable;
@property BOOL enableLogUpload;
@property BOOL enableSetPageIdFromBtm;
@property BOOL enableAppearTooEarlyFix;
@property (copy, nonatomic) NSString *updateVersionCode;
@property (weak, nonatomic) UIResponder *currentPage;
@property (readonly, nonatomic) UIResponder *topPageWithPageId;
@property (readonly, nonatomic) UIResponder *firstBtmPage;
@property (copy, nonatomic) id /* block */ logUploadHandler;
@property (copy) id /* block */ nodePassHandler;
@property (copy) id /* block */ clearUnitParamsHandler;
@property BOOL exceptionReportIsEnable;
@property BOOL initialNodeEnabled;
@property BOOL feFreeDevelopmentEnabled;
@property (retain, nonatomic) NSMutableArray *pageItemArray;
@property (readonly, nonatomic) BTMFetcher *fetcher;
@property (retain, nonatomic) BTMViewAttachManager *viewAttachManager;
@property (retain) BTMSettingsConfig *settings;

+ (void)asyncPerformOnMainThreadAction:(id /* block */)arg0;
+ (void)syncPerformOnMainThreadAction:(id /* block */)arg0;
+ (void)asyncPerformOnSerialQueueAction:(id /* block */)arg0;
+ (void)asyncPerformOnConcurrentQueueAction:(id /* block */)arg0;
+ (id)shared;

- (void)setUpdateVersionCode:(id)arg0;
- (void)appWillTerminate;
- (id)createJumpSourceBtmTokenWithBtm:(id)arg0 host:(id)arg1 bcm:(id)arg2;
- (void)forwardToCustomPage:(id)arg0;
- (void)returnFromCustomPage:(id)arg0;
- (BOOL)registerPageShowWillEndHandler:(id /* block */)arg0 forPage:(id)arg1;
- (BOOL)registerPageDidAppearHandler:(id /* block */)arg0 forPage:(id)arg1;
- (id)getBTMPageInfo:(id)arg0;
- (id)btmIdOfCurrentJumpNode;
- (void)reenqueueJumpNodeWithBtmId:(id)arg0;
- (void)dequeueJumpNodeWithBtmId:(id)arg0;
- (void)markResponderAsBtmPage:(id)arg0;
- (BOOL)registerBtmPage:(id)arg0 params:(id /* block */)arg1;
- (void)appendBcmChainForTrackerEvent:(id)arg0 params:(id)arg1;
- (void)appendBtmForTrackerEvent:(id)arg0 params:(id)arg1;
- (id /* block */)trackHandler;
- (void)setTrackHandler:(id /* block */)arg0;
- (void)registerTrackHandler:(id /* block */)arg0;
- (void)registerLogUploadHandler:(id /* block */)arg0;
- (void)registerNodeBindHandler:(id /* block */)arg0;
- (void)registerPageShowParamHandler:(id /* block */)arg0;
- (void)registerForwardInContainerHandler:(id /* block */)arg0;
- (void)registerCurrentPageChanged:(id /* block */)arg0;
- (void)setNodePassHandler:(id /* block */)arg0;
- (void)setClearUnitParamsHandler:(id /* block */)arg0;
- (BOOL)isPageWillJumpOrNotInDisplay:(id)arg0;
- (id)pageItemArray;
- (id)nodeWithBtmId:(id)arg0;
- (id)firstBtmPage;
- (long long)btmListLength;
- (id)btmIdFromNode:(id)arg0;
- (Class)getServiceWithProtocol:(id)arg0;
- (id)getCurrentBTMPage:(id)arg0;
- (void)getPageIdWithSchema:(id)arg0 handler:(id /* block */)arg1;
- (id)viewAttachManager;
- (void)setValidate:(BOOL)arg0;
- (void)setInitialNodeEnabled:(BOOL)arg0;
- (void)setMaxNodeStorage:(long long)arg0;
- (void)setNodeStorage:(id)arg0;
- (void)setNodeIndexV2:(id)arg0;
- (void)setLogHandlers:(id)arg0;
- (void)setJumpQueue:(id)arg0;
- (void)setSourceBtmTokenStorage:(id)arg0;
- (long long)maxNodeStorage;
- (void)setNodeStorageKeys:(id)arg0;
- (void)setCalculator:(id)arg0;
- (void)appDidEnterForeground;
- (void)setExceptionProcessor:(id)arg0;
- (void)setViewAttachManager:(id)arg0;
- (void)setExceptionReportIsEnable:(BOOL)arg0;
- (void)setMatchedSchemaCache:(id)arg0;
- (void)setMisMatchedSchemaCache:(id)arg0;
- (id)matchedSchemaCache;
- (id)misMatchedSchemaCache;
- (void)setPageItemArray:(id)arg0;
- (void)setOptimizedV2:(BOOL)arg0;
- (void)setOptimizedLog:(BOOL)arg0;
- (void)setOptimizedNode:(BOOL)arg0;
- (void)setOptimizedDequeueNode:(BOOL)arg0;
- (void)setBtmListLength:(long long)arg0;
- (void)setFeFreeDevelopmentEnabled:(BOOL)arg0;
- (void)setRealStepValidate:(BOOL)arg0;
- (void)setPageShowWillEndHandlerEnable:(BOOL)arg0;
- (void)setEnableLogUpload:(BOOL)arg0;
- (void)setEnableFixParentToChild:(BOOL)arg0;
- (void)setSerailQueue:(id)arg0;
- (id)exceptionProcessor;
- (BOOL)hookSetupFinish;
- (void)setHookSetupFinish:(BOOL)arg0;
- (id)logHandlers;
- (void)setLogUploadHandler:(id /* block */)arg0;
- (void)setServiceMonitorHandler:(id /* block */)arg0;
- (void)setSchemaFetchHandler:(id /* block */)arg0;
- (BOOL)feFreeDevelopmentEnabled;
- (id /* block */)schemaFetchHandler;
- (id)settingsSchemaMaps;
- (void)setSettingsSchemaMaps:(id)arg0;
- (BOOL)optimizedV2;
- (id)nodeIndexV2;
- (id)nodeStorage;
- (id)jumpQueue;
- (id)preBtmNodeFromResponderRecursive:(id)arg0;
- (void)clearNodeStorage;
- (id)nodeStorageKeys;
- (BOOL)enableSetPageIdFromBtm;
- (id)getPreNodeWithResponderWhenReportOrJump:(id)arg0;
- (id)createNodeWithBtmInfo:(id)arg0 previousNode:(id)arg1 invokePage:(id)arg2;
- (void)enqueueNativeJumpNode:(id)arg0;
- (id /* block */)nodePassHandler;
- (id)nodeBindeHandlers;
- (BOOL)optimizedDequeueNode;
- (id)nativeJumpNodeWithPage:(id)arg0;
- (id)dequeueNativeJumpNode;
- (BOOL)checkNode:(id)arg0 page:(id)arg1;
- (BOOL)enableFixParentToChild;
- (id)topPageWithPageId;
- (id)createNodeWithPage:(id)arg0;
- (void)setPage:(id)arg0 withPreviousNode:(id)arg1;
- (void)addNodeToSourceBtmTokenStorage:(id)arg0;
- (id)sourceBtmTokenStorage;
- (void)squeezeJumpQueue;
- (BOOL)exceptionReportIsEnable;
- (BOOL)initialNodeEnabled;
- (void)reportEnterPage:(id)arg0;
- (BOOL)pageShowWillEndHandlerEnable;
- (void)checkParamsWithHost:(id)arg0;
- (id)getPageShowLogPage:(id)arg0 isBack:(BOOL)arg1;
- (id)calculator;
- (id)pageShowHandlers;
- (void)passParamsToJumpingNodesInPage:(id)arg0;
- (id /* block */)clearUnitParamsHandler;
- (void)reportPageViewWithPage:(id)arg0 isBack:(BOOL)arg1;
- (void)setPageId:(id)arg0 withPage:(id)arg1;
- (void)findPreviousNodeForPage:(id)arg0;
- (void)willShowPage:(id)arg0;
- (id)forwardInContainerHandlers;
- (id /* block */)currentPageChangedHandler;
- (void)generateFromUnknownBackInfo:(id)arg0;
- (void)createPageItemForPage:(id)arg0;
- (void)setPreBtmNode:(id)arg0 forPage:(id)arg1;
- (BOOL)parentVCIsReturn:(id)arg0;
- (void)updateStepOfPage:(id)arg0;
- (BOOL)enableAppearTooEarlyFix;
- (void)getEvokeModelWithPage:(id)arg0;
- (void)controllerDidDisappear:(id)arg0;
- (void)popPage:(id)arg0;
- (void)controllerDidAppear:(id)arg0;
- (id)topPageHolder;
- (void)currentTopPageDisplayEndWithCurrentTopPageItem:(id)arg0;
- (void)checkAndRemoveChildPagesFromPageHolder:(id)arg0;
- (void)checkIfChildPagesReturnedFromPage:(id)arg0 pageHolder:(id)arg1;
- (id)serailQueue;
- (void)reportEnterPage:(id)arg0 type:(unsigned long long)arg1;
- (id)getEnterPageLogPage:(id)arg0;
- (id)coldModel;
- (id)setEvokeSource:(id)arg0 node:(id)arg1;
- (void)setColdModel:(id)arg0;
- (BOOL)isFromUnknown:(id)arg0;
- (BOOL)realStepValidate;
- (id)btmChainWithNode:(id)arg0;
- (void)appendBcmChainIfNeededWithParams:(id)arg0 responder:(id)arg1 btm:(id)arg2;
- (id)getUnknowPages:(id)arg0;
- (id)removeJumpWithTokenParams:(id)arg0;
- (void)setHotModel:(id)arg0;
- (id)hotModel;
- (id)obtainExceptionProcessor;
- (void)setupHooks;
- (void)setupContainerImp;
- (void)registerServiceProtocol:(id)arg0 withImpl:(Class)arg1;
- (void)registerLogHandler:(id /* block */)arg0;
- (void)registerServiceMonitorHandler:(id /* block */)arg0;
- (void)setSchemaMapFetchHandler:(id /* block */)arg0;
- (id)createBtmWithBtmInfo:(id)arg0 clickedView:(id)arg1 enterNewPage:(BOOL)arg2 targetPageIdentifiers:(id)arg3;
- (id)btmChainWithNode:(id)arg0 chainLength:(long long)arg1;
- (void)sendLogHandler:(id)arg0 level:(unsigned long long)arg1 message:(id)arg2;
- (void)markControllerDisplayEnd:(id)arg0;
- (void)markWillPushController:(id)arg0;
- (BOOL)updatePageHolderStatusOfController:(id)arg0;
- (void)markControllerAsPageHolder:(id)arg0;
- (void)denoteBtmPageId:(id)arg0 withResponder:(id)arg1;
- (void)setSourceBtmToken:(id)arg0 forResponderInPage:(id)arg1;
- (void)dismissNavigationController:(id)arg0;
- (void)resetJumpStatusOfController:(id)arg0;
- (void)updateJumpStatusOfController:(id)arg0;
- (void)updateWithEvokeInfo:(id)arg0;
- (BOOL)optimizedLog;
- (BOOL)optimizedNode;
- (BOOL)enableLogUpload;
- (void)setEnableSetPageIdFromBtm:(BOOL)arg0;
- (void)setEnableAppearTooEarlyFix:(BOOL)arg0;
- (id)updateVersionCode;
- (id /* block */)serviceMonitorHandler;
- (id /* block */)logUploadHandler;
- (void)setCurrentPageChangedHandler:(id /* block */)arg0;
- (BOOL)validate;
- (id)concurrentQueue;
- (void)setServices:(id)arg0;
- (id)init;
- (id)services;
- (id)launchId;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (void)setLaunchId:(id)arg0;
- (void)setCurrentPage:(id)arg0;
- (id)settings;
- (long long)pageIndex:(id)arg0;
- (void)setConcurrentQueue:(id)arg0;
- (id)currentPage;
- (void)dealloc;
- (id)fetcher;
- (void)appDidEnterBackground;

@end
