//
//     Generated by private class-dump
//

@class NSString, CachalotRunloopIdleObserver, CachalotLinkedTaskScheduler;
@protocol CachalotMainLoopIdleTaskManagerDelegate;

@interface CachalotMainLoopIdleTaskManager : NSObject <CachalotRunloopIdleHandler> {
    id<CachalotMainLoopIdleTaskManagerDelegate> _delegate;
    CachalotRunloopIdleObserver *_rlObserver;
    CachalotLinkedTaskScheduler *_taskScheduler;
}

@property (retain, nonatomic) CachalotRunloopIdleObserver *rlObserver;
@property (retain, nonatomic) CachalotLinkedTaskScheduler *taskScheduler;
@property (weak, nonatomic) id<CachalotMainLoopIdleTaskManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)taskExistsWithIdentifier:(id)arg0;
- (BOOL)addTask:(id /* block */)arg0 withIdentifier:(id)arg1;
- (id)rlObserver;
- (void)setRlObserver:(id)arg0;
- (void)idlePeriodBegin;
- (void)idlePeriodEnd;
- (BOOL)cancelTaskWithIdentifier:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (id)taskScheduler;
- (void)setDelegate:(id)arg0;
- (void)cancelAllTasks;
- (void)setTaskScheduler:(id)arg0;

@end