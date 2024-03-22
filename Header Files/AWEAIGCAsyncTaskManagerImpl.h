//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, AWEAIPropTaskMessenger, NSMutableArray;

@interface AWEAIGCAsyncTaskManagerImpl : NSObject <AWEPublishTaskMessage, AWEAIPropTaskMessengerProtocol, AWEAIGCAsyncTaskManagerProtocol> {
    NSMutableArray *_taskIds;
    NSMutableDictionary *_taskDict;
    AWEAIPropTaskMessenger *_messenger;
    double _lastQueryTime;
    double _lastGeneratingPushShowTime;
    unsigned long long _queryScene;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwLock;
@property (retain, nonatomic) NSMutableArray *taskIds;
@property (retain, nonatomic) NSMutableDictionary *taskDict;
@property (retain, nonatomic) AWEAIPropTaskMessenger *messenger;
@property (nonatomic) double lastQueryTime;
@property (nonatomic) double lastGeneratingPushShowTime;
@property (nonatomic) unsigned long long queryScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)setTaskDict:(id)arg0;
- (void)handleWillEnterForegroundNotification:(id)arg0;
- (void)setRwLock:(struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })arg0;
- (struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })rwLock;
- (unsigned long long)getTaskStatusWithDraftId:(id)arg0;
- (void)getLocalTaskProcessWithDraftId:(id)arg0 completion:(id /* block */)arg1;
- (void)handleNoticeRouterWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)queryTaskStatesIfNeededInLaunched;
- (unsigned long long)queryScene;
- (void)restoreTasks;
- (void)startListeningMessage;
- (void)storeTasks;
- (void)handleEnterDraftBoxNotification:(id)arg0;
- (void)handleDraftDeleteNotification:(id)arg0;
- (void)setQueryScene:(unsigned long long)arg0;
- (void)queryTaskStatesWhenLaunched;
- (id)getTaskWithDraftId:(id)arg0;
- (void)cancelTasksWithIds:(id)arg0;
- (void)queryTaskStatesIfNeeded;
- (id)getTaskWithTaskId:(id)arg0;
- (void)saveTask:(id)arg0 taskId:(id)arg1;
- (id)taskIds;
- (void)setLastGeneratingPushShowTime:(double)arg0;
- (double)lastGeneratingPushShowTime;
- (void)queryStateTasksState;
- (void)p_handleUpdateTasks:(id)arg0;
- (void)storeTasksWithThreshold;
- (void)setTaskIds:(id)arg0;
- (void)aiTaskDidUpdateStatusMessenger:(id)arg0;
- (BOOL)createTaskWithTaskId:(id)arg0 propId:(id)arg1 propName:(id)arg2 image:(id)arg3 originalImageId:(id)arg4 msgToEffectStart:(double)arg5 estimatedDuration:(double)arg6 publishModel:(id)arg7;
- (void)showAIGCGeneratingNotificationWithTaskId:(id)arg0;
- (BOOL)isAIGCGeneratingNotificationShowing;
- (void)monitorAIGCImageDownloadWithDraftId:(id)arg0 downloadDuration:(double)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3;
- (double)getTaskEstimationDurationWithDraftId:(id)arg0;
- (void)removeTaskWithTaskId:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)messenger;
- (void)setLastQueryTime:(double)arg0;
- (double)lastQueryTime;
- (void)dealloc;
- (void)setMessenger:(id)arg0;
- (id)taskDict;

@end
