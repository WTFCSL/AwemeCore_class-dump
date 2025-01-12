//
//     Generated by private class-dump
//

@class HMGlobalConfig, NSMutableDictionary, NSDictionary, NSObject;
@protocol OS_dispatch_queue, HMExternalSearchDataSource;

@interface HMEngine : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _moduleStateDicLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _containerLock;
    BOOL _isDebug;
    HMGlobalConfig *_globalConfig;
    id<HMExternalSearchDataSource> _searchDataSource;
    id /* block */ _getFreeDiskSpace;
    NSMutableDictionary *_moduleStateDic;
    NSMutableDictionary *_container;
    long long _flowControlStrategy;
    NSDictionary *_config;
    NSObject<OS_dispatch_queue> *_searchQueue;
    NSMutableDictionary *_pendingCloudCommand;
    NSDictionary *_maxUploadSizeWeights;
}

@property (retain, nonatomic) NSMutableDictionary *moduleStateDic;
@property (retain, nonatomic) NSMutableDictionary *container;
@property (nonatomic) long long flowControlStrategy;
@property (retain, nonatomic) NSDictionary *config;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *searchQueue;
@property (retain, nonatomic) NSMutableDictionary *pendingCloudCommand;
@property (retain, nonatomic) NSDictionary *maxUploadSizeWeights;
@property (retain, nonatomic) HMGlobalConfig *globalConfig;
@property (nonatomic) BOOL isDebug;
@property (weak, nonatomic) id<HMExternalSearchDataSource> searchDataSource;
@property (copy, nonatomic) id /* block */ getFreeDiskSpace;

+ (void)setEnableHermasRefactorFromSDK:(BOOL)arg0;
+ (void)setEnableHermasRefactor:(BOOL)arg0;
+ (BOOL)enableHermasRefactor;
+ (void)initialize;
+ (BOOL)isEnabled;
+ (id)sharedEngine;
+ (void)setEnabled:(BOOL)arg0;

- (void)setupContainer;
- (id)instanceWithModuleId:(id)arg0 aid:(id)arg1;
- (void)searchWithParam:(id)arg0 callback:(id /* block */)arg1;
- (void)cleanRollbackMigrateMark:(id)arg0;
- (void)migrateDataWithModuleId:(id)arg0;
- (void)registerNetworkManager:(id)arg0;
- (void)setSearchDataSource:(id)arg0;
- (void)updateGlobalConfig:(id)arg0;
- (void)setGlobalConfig:(id)arg0;
- (void)setupGlobalConfig:(id)arg0;
- (id)globalConfig;
- (id)instanceWithConfig:(id)arg0;
- (void)updateReportDegradeState:(BOOL)arg0 moduleId:(id)arg1;
- (void)addModuleWithConfig:(id)arg0;
- (void)updateModuleConfig:(id)arg0;
- (void)cleanAllCacheManuallyBeforeTime:(int)arg0;
- (void)triggerFlushAndUploadManuallyWithModuleId:(id)arg0;
- (void)cleanAllCacheManuallyWithModuleId:(id)arg0;
- (void)updateMaxReportSizeWeights:(id)arg0;
- (id)getUpdateMaxReportSizeWeights;
- (void)updateHeimdallrInitCompleted:(BOOL)arg0;
- (void)updateSessionRecordWith:(id)arg0;
- (id)getLatestSession:(id)arg0;
- (void)updateReportHeader:(id)arg0;
- (void)uploadLocalDataWithModuleId:(id)arg0;
- (void)stopCache;
- (void)startUploadTimerWithModuleId:(id)arg0;
- (void)stopUploadTimerWithModuleId:(id)arg0;
- (void)triggerUploadManuallyWithModuleId:(id)arg0;
- (void)updateFlowControlStrategy:(long long)arg0;
- (id)searchDataSource;
- (void)processLaunchLogic:(struct shared_ptr<hermas::ModuleEnv> { struct ModuleEnv *x0; struct __shared_weak_count *x1; })arg0;
- (void)setFlowControlStrategy:(long long)arg0;
- (void)heimdallrInitDidCompleted;
- (id)pendingCloudCommand;
- (void)setMaxUploadSizeWeights:(id)arg0;
- (id)maxUploadSizeWeights;
- (void)launchUploadWithModuleId:(id)arg0;
- (void)setGetFreeDiskSpace:(id /* block */)arg0;
- (id)moduleStateDic;
- (void)setModuleStateDic:(id)arg0;
- (long long)flowControlStrategy;
- (void)setPendingCloudCommand:(id)arg0;
- (id)container;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setContainer:(id)arg0;
- (id /* block */)getFreeDiskSpace;
- (id)searchQueue;
- (void)setSearchQueue:(id)arg0;
- (BOOL)isDebug;
- (void)setIsDebug:(BOOL)arg0;

@end
