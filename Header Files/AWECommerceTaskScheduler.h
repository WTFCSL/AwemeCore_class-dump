//
//     Generated by private class-dump
//

@class NSString, AWECommerceTaskQueue;

@interface AWECommerceTaskScheduler : HTSService <AWEGokuPluginTargetProtocol, AWECommerceTaskScheduler> {
    AWECommerceTaskQueue *_taskQueue;
    unsigned long long _executeNumber;
}

@property (retain, nonatomic) AWECommerceTaskQueue *taskQueue;
@property (nonatomic) unsigned long long executeNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)vc_viewDidAppearWith:(id)arg0;
- (void)executeAvoidFeedTasks;
- (void)executeRunloopBeforeWaitingTasks;
- (void)executeAvoidPrefetchTasks;
- (void)setExecuteNumber:(unsigned long long)arg0;
- (void)executeTasks:(id)arg0;
- (unsigned long long)executeNumber;
- (BOOL)removeTask:(id)arg0;
- (void).cxx_destruct;
- (void)setTaskQueue:(id)arg0;
- (id)taskQueue;
- (void)addTask:(id)arg0;
- (unsigned long long)moduleNames;

@end
