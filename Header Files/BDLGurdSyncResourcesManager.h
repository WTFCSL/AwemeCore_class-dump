//
//     Generated by private class-dump
//

@class BDLGurdSyncResourcesTasksQueue;

@interface BDLGurdSyncResourcesManager : NSObject {
    BDLGurdSyncResourcesTasksQueue *_waitingTasksQueue;
    BDLGurdSyncResourcesTasksQueue *_executedTasksQueue;
}

@property (retain, nonatomic) BDLGurdSyncResourcesTasksQueue *waitingTasksQueue;
@property (retain, nonatomic) BDLGurdSyncResourcesTasksQueue *executedTasksQueue;

+ (void)syncResourcesIfNeeded;
+ (void)enqueueSyncResourcesTask:(id)arg0;
+ (void)enableGurd;
+ (id)sharedManager;

- (void)setWaitingTasksQueue:(id)arg0;
- (void)_cancelWaitingTask:(id)arg0;
- (BOOL)_enqueueSyncResourcesTask:(id)arg0;
- (void)_syncResourcesWithTask:(id)arg0;
- (void)_syncResourcesIfNeeded;
- (id)waitingTasksQueue;
- (void)_syncResources;
- (BOOL)_shouldExecuteWithTask:(id)arg0;
- (id)_waitingTaskForIdentifier:(id)arg0;
- (id)executedTasksQueue;
- (void)setExecutedTasksQueue:(id)arg0;
- (void).cxx_destruct;

@end