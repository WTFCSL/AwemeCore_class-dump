//
//     Generated by private class-dump
//

@class BDJTMMKVOptConfig, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BDJTMMKVCommonOpt : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _cacheRWLock;
    BOOL _isRunning;
    BOOL _addCacheInMMKVEnabled;
    BOOL _collectInMMKVEnabled;
    BOOL _isCollecting;
    BOOL _customEndPointEnabled;
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSObject<OS_dispatch_queue> *_collectQueue;
    BDJTMMKVOptConfig *_config;
    NSMutableDictionary *_mmkvInstanceDict;
    unsigned long long _curStagePriority;
    NSMutableDictionary *_collectMMKVDict;
    NSMutableArray *_lowPriorityPreloadArray;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *collectQueue;
@property (retain, nonatomic) BDJTMMKVOptConfig *config;
@property BOOL isRunning;
@property (nonatomic) BOOL addCacheInMMKVEnabled;
@property (nonatomic) BOOL collectInMMKVEnabled;
@property (retain, nonatomic) NSMutableDictionary *mmkvInstanceDict;
@property (nonatomic) BOOL isCollecting;
@property (nonatomic) BOOL customEndPointEnabled;
@property (nonatomic) unsigned long long curStagePriority;
@property (retain, nonatomic) NSMutableDictionary *collectMMKVDict;
@property (retain, nonatomic) NSMutableArray *lowPriorityPreloadArray;

+ (id)shared;

- (id)getMMKVWithID:(id)arg0 relativePath:(id)arg1;
- (void)collectMMKVInitialize:(id)arg0 relativePath:(id)arg1 cost:(float)arg2;
- (void)cacheMMKV:(id)arg0 mmapID:(id)arg1 relativePath:(id)arg2;
- (BOOL)isMMKVOptimizationEnabled;
- (void)setAddCacheInMMKVEnabled:(BOOL)arg0;
- (void)p_startCollectMMKVInitializeInfo;
- (void)setCollectInMMKVEnabled:(BOOL)arg0;
- (BOOL)p_isAppUpdated;
- (void)p_startPreloadMMKVsWithInfoArray:(id)arg0;
- (BOOL)addCacheInMMKVEnabled;
- (BOOL)collectInMMKVEnabled;
- (void)p_swizzleMMKVInitializeOnce;
- (BOOL)p_loadConfigFileFromLocal;
- (id)p_customMMKVMapKeyWithMmapID:(id)arg0 relativePath:(id)arg1;
- (id)mmkvInstanceDict;
- (id)collectQueue;
- (void)p_preloadMMKVsWithInfoArray:(id)arg0 lowPriorityCheck:(BOOL)arg1;
- (id)lowPriorityPreloadArray;
- (void)p_registerLowPriorityPreloadTask;
- (id)collectMMKVDict;
- (void)p_startPreloadLowPriorityMMKVs;
- (void)setIsCollecting:(BOOL)arg0;
- (BOOL)customEndPointEnabled;
- (void)p_setupAutoCollectEndPoint;
- (void)p_collectWillPreloadMMKVID:(id)arg0 relativePath:(id)arg1 cost:(float)arg2 isMainThread:(BOOL)arg3;
- (void)p_stopCollect;
- (unsigned long long)curStagePriority;
- (id)p_formatStoreDataWithID:(id)arg0 collectStagePriority:(unsigned long long)arg1 relativePath:(id)arg2 isMainThread:(BOOL)arg3 loadPriority:(long long)arg4 initCost:(float)arg5;
- (id)p_sortedCollectWithOriginArray:(id)arg0;
- (void)p_storeCollectMMKVInfoList:(id)arg0;
- (void)setCustomEndPointEnabled:(BOOL)arg0;
- (void)setCurStagePriority:(unsigned long long)arg0;
- (void)enableDefaultMMKVOptimization;
- (void)enableMainThreadMemoryWarningOptimization;
- (void)startMMKVOptimizationIfEnabled;
- (BOOL)enableMMKVPreloadForNextLaunch:(id)arg0;
- (void)enableCustomCollectFinish;
- (BOOL)customCollectFinisEnabled;
- (void)updateCustomCollectStage:(unsigned long long)arg0;
- (void)customCollectFinish;
- (void)setCollectQueue:(id)arg0;
- (void)setMmkvInstanceDict:(id)arg0;
- (void)setCollectMMKVDict:(id)arg0;
- (void)setLowPriorityPreloadArray:(id)arg0;
- (void)setIsRunning:(BOOL)arg0;
- (BOOL)isRunning;
- (id)init;
- (void)setOperationQueue:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)operationQueue;
- (BOOL)isCollecting;

@end
