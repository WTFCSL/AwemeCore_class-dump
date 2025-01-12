//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface BDXGurdSyncManager : NSObject {
    NSMutableArray *_waitingTasksQueue;
}

@property (retain, nonatomic) NSMutableArray *waitingTasksQueue;

+ (void)syncResourcesIfNeeded;
+ (void)enqueueSyncResourcesTask:(id)arg0;
+ (void)enableGurd;
+ (void)disableGurd;
+ (void)enableHighPrioritySync;
+ (void)cancelSyncResourceTask:(id)arg0;
+ (id)sharedManager;

- (void)setWaitingTasksQueue:(id)arg0;
- (id)_waitingTaskForTask:(id)arg0;
- (void)_cancelWaitingTask:(id)arg0;
- (BOOL)_enqueueSyncResourcesTask:(id)arg0;
- (void)_syncResourcesWithTask:(id)arg0;
- (id)waitingTasksQueue;
- (void)_syncResources;
- (void).cxx_destruct;

@end
