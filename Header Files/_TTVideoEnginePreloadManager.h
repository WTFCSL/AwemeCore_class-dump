//
//     Generated by private class-dump
//

@class NSTimer, NSHashTable, HLSLoaderManager, NSLock, _TTVideoEngineTaskQueue, AVMDLDataLoader, NSObject, TTVideoEnginePreloadQueue;
@protocol OS_dispatch_queue, TTVideoEnginePreloadDelegate;

@interface _TTVideoEnginePreloadManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _runStateLock;
    BOOL _running;
    float _netspeed;
    id<TTVideoEnginePreloadDelegate> _preloadDelegate;
    id /* block */ _speedInfoBlock;
    NSHashTable *_listeners;
    _TTVideoEngineTaskQueue *_preloadTasks;
    _TTVideoEngineTaskQueue *_executeTasks;
    _TTVideoEngineTaskQueue *_allPlayTasks;
    _TTVideoEngineTaskQueue *_allPreloadTasks;
    TTVideoEnginePreloadQueue *_observes;
    TTVideoEnginePreloadQueue *_progressObjects;
    AVMDLDataLoader *_preloader;
    HLSLoaderManager *_playlistLoaderManager;
    long long _heartBeatInterval;
    NSTimer *_heartBeatTimer;
    NSObject<OS_dispatch_queue> *_heartBeatQueue;
    NSLock *_speedInfoBlockLock;
    NSLock *_listenersLock;
    long long _mMDLDownloadTime;
    long long _mMDLDownloadSize;
}

@property (weak, nonatomic) id<TTVideoEnginePreloadDelegate> preloadDelegate;
@property (copy, nonatomic) id /* block */ speedInfoBlock;
@property (retain, nonatomic) NSHashTable *listeners;
@property (retain, nonatomic) _TTVideoEngineTaskQueue *preloadTasks;
@property (retain, nonatomic) _TTVideoEngineTaskQueue *executeTasks;
@property (retain, nonatomic) _TTVideoEngineTaskQueue *allPlayTasks;
@property (retain, nonatomic) _TTVideoEngineTaskQueue *allPreloadTasks;
@property (retain, nonatomic) TTVideoEnginePreloadQueue *observes;
@property (retain, nonatomic) TTVideoEnginePreloadQueue *progressObjects;
@property (retain, nonatomic) AVMDLDataLoader *preloader;
@property (retain, nonatomic) HLSLoaderManager *playlistLoaderManager;
@property (nonatomic, getter=isRunning) BOOL running;
@property (nonatomic) long long heartBeatInterval;
@property (retain, nonatomic) NSTimer *heartBeatTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *heartBeatQueue;
@property (retain, nonatomic) NSLock *speedInfoBlockLock;
@property (retain, nonatomic) NSLock *listenersLock;
@property (nonatomic) float netspeed;
@property (nonatomic) long long mMDLDownloadTime;
@property (nonatomic) long long mMDLDownloadSize;

+ (id)shareLoader;

- (void)suspendSocketCheck;
- (void)resumeSocketCheck;
- (void)disableAutoTrimForKey:(id)arg0;
- (void)enableAutoTrimForKey:(id)arg0;
- (void)setHeartBeatTimer:(id)arg0;
- (id)heartBeatTimer;
- (id)getStringBykey:(id)arg0 code:(long long)arg1 type:(long long)arg2;
- (id)getCustomHttpHeader:(id)arg0 taskType:(long long)arg1;
- (void)testSpeedInfo:(long long)arg0 size:(long long)arg1;
- (void)taskStateChange:(id)arg0 taskType:(long long)arg1 state:(long long)arg2;
- (void)dataloader:(id)arg0 downloadProgress:(id)arg1;
- (void)taskProgress:(id)arg0 taskType:(long long)arg1 flag:(long long)arg2;
- (void)preloadEnd:(id)arg0;
- (void)onCDNLog:(id)arg0;
- (void)taskOpened:(id)arg0 taskType:(long long)arg1 info:(id)arg2;
- (void)taskFailed:(id)arg0 taskType:(long long)arg1 error:(id)arg2;
- (void)preloadTaskCanceled:(id)arg0;
- (void)dataloader:(id)arg0 downloadSuspend:(id)arg1;
- (void)reportDownloadStatus:(long long)arg0;
- (void)testSpeedInfoByTime:(long long)arg0 sizeByte:(long long)arg1 type:(id)arg2 key:(id)arg3 extraInfoDic:(id)arg4 info:(id)arg5;
- (void)onMultiNetworkSwitch:(id)arg0 currentNetwork:(id)arg1;
- (void)logUpdate:(id)arg0;
- (id)generateUrlByTaskSpec:(id)arg0;
- (void)cancelTaskByKey:(id)arg0;
- (long long)getClearSizeByClearAll;
- (id)getIoStatInfo;
- (BOOL)switchToDefaultNetwork;
- (BOOL)switchToCellularNetwork;
- (int)getIoWriteError:(id)arg0;
- (void)removeFileCacheByKey:(id)arg0;
- (long long)getAllCacheSize;
- (long long)getCacheSizeByKey:(id)arg0;
- (long long)tryQuickGetCacheSizeByKey:(id)arg0;
- (void)_configureSetting;
- (void)_configureMdlAlog;
- (void)_traceConfig;
- (void)_vodStrategyConfig;
- (void)_addTask:(id)arg0 vid:(id)arg1 preSize:(long long)arg2 urlItem:(id)arg3 vidItem:(id)arg4 videoModeltem:(id)arg5;
- (id)preloadTasks;
- (id)executeTasks;
- (id)allPreloadTasks;
- (void)_startExecuteTask;
- (void)_exectTask:(id)arg0;
- (void)_cancelAllIdlePreloadTasks;
- (id)observes;
- (id)__selectAutoResolutionIfNeeded:(id)arg0;
- (BOOL)isMDLPrecisePreloadEnable;
- (void)_prepareUrlInfo:(id)arg0 task:(id)arg1 track:(id)arg2;
- (void)_startMDLPreloadTask:(id)arg0 track:(id)arg1;
- (id)_headerString:(id)arg0;
- (id)_processTaskInfo:(id)arg0 isPreload:(BOOL)arg1 flag:(long long)arg2;
- (void)dataloader:(id)arg0 downloadFail:(id)arg1 error:(id)arg2;
- (id)progressObjects;
- (id /* block */)speedInfoBlock;
- (id)allPlayTasks;
- (void)_playTaskEndNotify:(id)arg0 flag:(long long)arg1;
- (void)setPreloadDelegate:(id)arg0;
- (void)addPreloadListener:(id)arg0;
- (void)removePreloadListener:(id)arg0;
- (float)getNetSpeed;
- (void)addTask:(id)arg0 vidItem:(id)arg1;
- (void)addTaskWithURLItem:(id)arg0;
- (void)cancelTaskByVideoId:(id)arg0;
- (void)cancelAllIdlePreloadTasks;
- (long long)tryQuickQueryCacheSizeByKey:(id)arg0;
- (void)cleanSpecifiedCacheDir:(id)arg0 force:(long long)arg1;
- (long long)getCacheSizeByFilePath:(id)arg0;
- (id)getCacheInfoByKey:(id)arg0;
- (id)getCacheInfoByFilePath:(id)arg0;
- (void)getCacheSizeByKey:(id)arg0 result:(id /* block */)arg1;
- (void)getCacheSizeByFilePath:(id)arg0 result:(id /* block */)arg1;
- (void *)getNativeMedialoaderHandle;
- (void)setSpeedInfoBlock:(id /* block */)arg0;
- (void)_preConnectUrl:(id)arg0;
- (void)_copyCache:(id)arg0;
- (void)didFinishTask:(id)arg0 error:(id)arg1;
- (id)preloadDelegate;
- (void)setPreloadTasks:(id)arg0;
- (void)setExecuteTasks:(id)arg0;
- (void)setAllPlayTasks:(id)arg0;
- (void)setAllPreloadTasks:(id)arg0;
- (void)setObserves:(id)arg0;
- (void)setProgressObjects:(id)arg0;
- (id)playlistLoaderManager;
- (void)setPlaylistLoaderManager:(id)arg0;
- (id)heartBeatQueue;
- (void)setHeartBeatQueue:(id)arg0;
- (id)speedInfoBlockLock;
- (void)setSpeedInfoBlockLock:(id)arg0;
- (id)listenersLock;
- (void)setListenersLock:(id)arg0;
- (float)netspeed;
- (void)setNetspeed:(float)arg0;
- (long long)mMDLDownloadTime;
- (void)setMMDLDownloadTime:(long long)arg0;
- (long long)mMDLDownloadSize;
- (void)setMMDLDownloadSize:(long long)arg0;
- (void)setRunning:(BOOL)arg0;
- (BOOL)isRunning;
- (id)init;
- (void)updateTimer;
- (void).cxx_destruct;
- (void)close;
- (id)listeners;
- (void)addTask:(id)arg0;
- (void)addObserver:(id)arg0;
- (void)setListeners:(id)arg0;
- (void)clearAllCaches;
- (void)start;
- (void)dealloc;
- (void)removeObserver:(id)arg0;
- (id)preloader;
- (void)setPreloader:(id)arg0;
- (long long)heartBeatInterval;
- (void)cancelAllTasks;
- (void)taskFinished:(id)arg0;
- (void)_notifyCanceled:(id)arg0;
- (void)_cancelAllTasks;
- (void)setHeartBeatInterval:(long long)arg0;

@end
