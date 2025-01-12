//
//     Generated by private class-dump
//

@class NSArray;

@interface AWENetTaskConfig : NSObject {
    BOOL _dispatchEnabled;
    double _maxDurationForWaitngFeed;
    double _sparseDelayTime;
    double _feedReadyTaskInterval;
    double _sparseTaskInterval;
    double _idleTaskInterval;
    NSArray *_droppedTasks;
    NSArray *_immediatelyTasks;
    NSArray *_feedReadyTasks;
    NSArray *_sparseTasks;
    NSArray *_idleTasks;
    NSArray *_allowAfterFeedReadyTasks;
}

@property (nonatomic) BOOL dispatchEnabled;
@property (nonatomic) double maxDurationForWaitngFeed;
@property (nonatomic) double sparseDelayTime;
@property (nonatomic) double feedReadyTaskInterval;
@property (nonatomic) double sparseTaskInterval;
@property (nonatomic) double idleTaskInterval;
@property (retain, nonatomic) NSArray *droppedTasks;
@property (retain, nonatomic) NSArray *immediatelyTasks;
@property (retain, nonatomic) NSArray *feedReadyTasks;
@property (retain, nonatomic) NSArray *sparseTasks;
@property (retain, nonatomic) NSArray *idleTasks;
@property (retain, nonatomic) NSArray *allowAfterFeedReadyTasks;

+ (id)config;

- (void)setSparseDelayTime:(double)arg0;
- (void)setImmediatelyTasks:(id)arg0;
- (void)setFeedReadyTasks:(id)arg0;
- (void)setSparseTasks:(id)arg0;
- (void)setIdleTasks:(id)arg0;
- (void)setAllowAfterFeedReadyTasks:(id)arg0;
- (double)sparseDelayTime;
- (id)immediatelyTasks;
- (id)feedReadyTasks;
- (id)sparseTasks;
- (id)idleTasks;
- (id)allowAfterFeedReadyTasks;
- (void)setDispatchEnabled:(BOOL)arg0;
- (void)setMaxDurationForWaitngFeed:(double)arg0;
- (void)setFeedReadyTaskInterval:(double)arg0;
- (void)setSparseTaskInterval:(double)arg0;
- (void)setIdleTaskInterval:(double)arg0;
- (void)setDroppedTasks:(id)arg0;
- (BOOL)dispatchEnabled;
- (double)maxDurationForWaitngFeed;
- (double)feedReadyTaskInterval;
- (double)sparseTaskInterval;
- (double)idleTaskInterval;
- (id)droppedTasks;
- (id)init;
- (void).cxx_destruct;

@end
