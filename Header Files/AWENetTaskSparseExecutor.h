//
//     Generated by private class-dump
//

@class NSString, AWENetTaskTimer;
@protocol AWENetTaskExecutorDelegate;

@interface AWENetTaskSparseExecutor : AWENetTaskQueue <AWENetTaskExecutor> {
    BOOL _allTasksFinished;
    double _interval;
    double _minDuration;
    id<AWENetTaskExecutorDelegate> _delegate;
    AWENetTaskTimer *_timer;
    double _startTime;
}

@property (retain, nonatomic) AWENetTaskTimer *timer;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL allTasksFinished;
@property (nonatomic) double interval;
@property (nonatomic) double minDuration;
@property (weak, nonatomic) id<AWENetTaskExecutorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)executorWithDelegate:(id)arg0 interval:(double)arg1;

- (void)setMinDuration:(double)arg0;
- (BOOL)executorFinished;
- (BOOL)executeImmediately:(id)arg0;
- (void)startExecute;
- (void)setAllTasksFinished:(BOOL)arg0;
- (void)executeTopTask;
- (BOOL)allTasksFinished;
- (void)updateQueueStateIfNeeded;
- (id)timer;
- (id)init;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (void)runTask:(id)arg0;
- (double)interval;
- (void)setInterval:(double)arg0;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (void)enqueue:(id)arg0;
- (double)startTime;
- (void)setDelegate:(id)arg0;
- (double)minDuration;

@end
