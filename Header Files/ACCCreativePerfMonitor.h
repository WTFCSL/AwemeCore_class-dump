//
//     Generated by private class-dump
//

@class RACDisposable, NSString, ACCCameraSubscription, ACCCreativePerfBasePlugin, NSMutableDictionary, NSMutableSet, NSObject, NSMutableArray, ACCPerfBizInfo;
@protocol OS_dispatch_queue;

@interface ACCCreativePerfMonitor : NSObject <ACCPerfReportDelegate, ACCPerfMonitorProtocol> {
    unsigned int _perfType;
    id /* block */ _contextParams;
    ACCPerfBizInfo *_perfBizInfo;
    NSObject<OS_dispatch_queue> *_sampleQueue;
    unsigned long long _currentMonitorPage;
    RACDisposable *_pageDisposable;
    NSMutableDictionary *_currentMonitorEventHash;
    ACCCreativePerfBasePlugin *_basePlugin;
    ACCCameraSubscription *_subscription;
    NSMutableSet *_currentActions;
    NSMutableArray *_sceneQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sampleQueue;
@property (nonatomic) unsigned long long currentMonitorPage;
@property (nonatomic) unsigned int perfType;
@property (retain, nonatomic) RACDisposable *pageDisposable;
@property (retain, nonatomic) NSMutableDictionary *currentMonitorEventHash;
@property (retain, nonatomic) ACCCreativePerfBasePlugin *basePlugin;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) NSMutableSet *currentActions;
@property (retain, nonatomic) NSMutableArray *sceneQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ contextParams;
@property (retain, nonatomic) ACCPerfBizInfo *perfBizInfo;

- (void)setSampleQueue:(id)arg0;
- (id)sampleQueue;
- (void)setContextParams:(id /* block */)arg0;
- (id /* block */)contextParams;
- (void)onTriggerDegradeWithPerfType:(unsigned int)arg0 degradeType:(unsigned long long)arg1 degradeLevel:(unsigned long long)arg2;
- (void)trackBaseInfoOnceImmediatelyWithScene:(id)arg0;
- (unsigned long long)currentMonitorPage;
- (void)setCurrentMonitorPage:(unsigned long long)arg0;
- (void)p_clearMonitor;
- (void)setCurrentActions:(id)arg0;
- (void)setSceneQueue:(id)arg0;
- (void)p_startBasePerfMonitor;
- (id)basePlugin;
- (void)p_startPageMonitorWithPage:(unsigned long long)arg0;
- (void)setPageDisposable:(id)arg0;
- (void)stopPerfMonitorWithScene:(id)arg0;
- (id)sceneQueue;
- (void)updateLastScene;
- (id)p_loadFpsPlugin;
- (void)p_preparePluginEnv:(id)arg0;
- (id)currentMonitorEventHash;
- (void)startPerfMonitorWithScene:(id)arg0 perfType:(unsigned int)arg1 params:(id)arg2;
- (void)updateAllPluginActionName;
- (id)generateCurrentActionName;
- (void)setBasePlugin:(id)arg0;
- (void)takeFluencyMonitorWithScene:(id)arg0 params:(id)arg1;
- (void)startFluencyMonitorWithScene:(id)arg0 params:(id)arg1;
- (void)setCurrentMonitorEventHash:(id)arg0;
- (id)pageDisposable;
- (void)onReportMonitorDataWithKey:(id)arg0 data:(id)arg1;
- (void)onPluginCleard:(id)arg0;
- (void)startCreativePathPerfMonitor;
- (void)endCreativePathMonitor;
- (void)startPerfMoniorWithScene:(id)arg0 params:(id)arg1;
- (void)addDegradeSubscriber:(id)arg0;
- (void)addActionTag:(id)arg0;
- (void)removeActionTag:(id)arg0;
- (id)getCreativeCurrentPerfContextParams;
- (void)trackCreativeInitializeBaseInfo;
- (id)perfBizInfo;
- (void)setPerfBizInfo:(id)arg0;
- (unsigned int)perfType;
- (void)setPerfType:(unsigned int)arg0;
- (id)currentActions;
- (id)init;
- (void).cxx_destruct;
- (void)setSubscription:(id)arg0;
- (void)dealloc;
- (id)subscription;

@end
