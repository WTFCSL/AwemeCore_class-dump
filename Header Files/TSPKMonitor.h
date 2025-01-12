//
//     Generated by private class-dump
//

@class NSMutableArray;
@protocol TSPKLock;

@interface TSPKMonitor : NSObject {
    BOOL _canMonitorHook;
    unsigned long long _loadTaskStatus;
    NSMutableArray *_pipelines;
    id<TSPKLock> _pipelineLock;
    NSMutableArray *_enabledPipelineList;
    NSMutableArray *_disabledPipelineList;
    unsigned long long _apiTotalNum;
    NSMutableArray *_hasPerformedHookPipelines;
}

@property (retain, nonatomic) NSMutableArray *pipelines;
@property (retain, nonatomic) id<TSPKLock> pipelineLock;
@property (nonatomic) BOOL canMonitorHook;
@property (retain) NSMutableArray *enabledPipelineList;
@property (retain) NSMutableArray *disabledPipelineList;
@property unsigned long long apiTotalNum;
@property (retain) NSMutableArray *hasPerformedHookPipelines;
@property (nonatomic) unsigned long long loadTaskStatus;

+ (void)setMonitorConfig:(id)arg0;
+ (void)setupCache;
+ (void)registerSubsciber:(id)arg0 onEventType:(unsigned long long)arg1;
+ (void)registerDetectPipeline:(id)arg0;
+ (void)setContextBlock:(id /* block */)arg0 forApiType:(id)arg1;
+ (void)markCameraStartWithCaseId:(id)arg0 description:(id)arg1;
+ (void)markCameraStopWithCaseId:(id)arg0 description:(id)arg1;
+ (void)markAudioStartWithCaseId:(id)arg0 description:(id)arg1;
+ (void)markAudioStopWithCaseId:(id)arg0 description:(id)arg1;
+ (void)saveCustomCallBacktraceWithPipelineType:(id)arg0;
+ (void)recordPipelinesHasHooked:(id)arg0;
+ (BOOL)canMonitorHook;
+ (void)unregisterSubsciber:(id)arg0 onEventType:(unsigned long long)arg1;
+ (id)__pipelineNameArray;
+ (id)enabledPipelineTypes;
+ (id)enabledPipelineList;
+ (id)disabledPipelineList;
+ (id)pipelinesHasHooked;
+ (void)startWithBuilder:(id)arg0;
+ (void)setupDefaultSubscribers;
+ (void)setCanMonitorHook:(BOOL)arg0;
+ (unsigned long long)apiTotalNum;
+ (id)sharedMonitor;
+ (void)start;

- (void)preloadTask;
- (void)registerDetectPipeline:(id)arg0;
- (void)recordPipelinesHasHooked:(id)arg0;
- (BOOL)canMonitorHook;
- (void)recordEnabledPipeline:(id)arg0;
- (void)recordDisbaledPipeline:(id)arg0;
- (id)enabledPipelineTypes;
- (id)enabledPipelineList;
- (id)disabledPipelineList;
- (id)hasPerformedHookPipelines;
- (id)pipelinesHasHooked;
- (void)startWithBuilder:(id)arg0;
- (void)setupPipelines;
- (void)setupPipeline:(id)arg0;
- (void)delayLoadTask;
- (void)setLoadTaskStatus:(unsigned long long)arg0;
- (void)recordAPITotalNum;
- (void)setCanMonitorHook:(BOOL)arg0;
- (unsigned long long)apiTotalNum;
- (void)setApiTotalNum:(unsigned long long)arg0;
- (unsigned long long)loadTaskStatus;
- (id)pipelineLock;
- (void)setPipelineLock:(id)arg0;
- (void)setEnabledPipelineList:(id)arg0;
- (void)setDisabledPipelineList:(id)arg0;
- (void)setHasPerformedHookPipelines:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setPipelines:(id)arg0;
- (id)pipelines;

@end
