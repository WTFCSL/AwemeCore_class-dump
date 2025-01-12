//
//     Generated by private class-dump
//

@class AWECampaignWatchTaskModel, NSArray, NSString, NSNumber;
@protocol AWEUGSceneServiceProtocol, AWEUGCampaignTaskTimerProtocol;

@interface AWEUGTimeMeterTask : NSObject <AWEUGTimeMeterTaskStateProtocol, AWEUGTaskTriggerDelegate, AWEUGSceneServiceDelegate, AWEUGCampaignTaskTimerStateDelegate, AWEUGTimeMeterTaskProtocol> {
    BOOL _hasLogUpdateAfterBecomeActivity;
    unsigned long long _currentState;
    AWECampaignWatchTaskModel *_watchTaskModel;
    NSArray *_triggers;
    id<AWEUGSceneServiceProtocol> _sceneService;
    id<AWEUGCampaignTaskTimerProtocol> _timerHelper;
    NSArray *_outputers;
    NSNumber *_currentProgress;
    NSString *_currentUID;
}

@property (nonatomic) BOOL hasLogUpdateAfterBecomeActivity;
@property (retain, nonatomic) AWECampaignWatchTaskModel *watchTaskModel;
@property (copy, nonatomic) NSArray *triggers;
@property (retain, nonatomic) id<AWEUGSceneServiceProtocol> sceneService;
@property (retain, nonatomic) id<AWEUGCampaignTaskTimerProtocol> timerHelper;
@property (copy, nonatomic) NSArray *outputers;
@property (copy, nonatomic) NSNumber *currentProgress;
@property (copy, nonatomic) NSString *currentUID;
@property (nonatomic) unsigned long long currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)taskToken;
- (id)currentUID;
- (id)commonParam;
- (void)taskDidEnterScene:(id)arg0;
- (void)setCurrentUID:(id)arg0;
- (double)firstInitTime;
- (void)taskReportFinish;
- (id)watchTaskModel;
- (void)didTaskUpdateWithProgress:(double)arg0 task:(id)arg1;
- (void)didTaskStatusChanged:(long long)arg0 task:(id)arg1;
- (void)setWatchTaskModel:(id)arg0;
- (void)startCountDownForTaskTrigger:(id)arg0 withReason:(id)arg1;
- (void)pauseCountDownForTaskTrigger:(id)arg0 withReason:(id)arg1;
- (void)taskDidLeaveScene:(id)arg0;
- (id)outputers;
- (void)awe_ugOutputersTaskDidStart;
- (void)awe_ugOutputersTaskWillStartTiming;
- (void)awe_ugOutputersTaskDidFinishTask;
- (void)awe_ugOutputersTaskDidPauseForReason:(id)arg0;
- (void)awe_ugOutputersTaskDidEnterScene:(id)arg0;
- (void)awe_ugOutputersTaskDidLeaveScene:(id)arg0;
- (void)awe_ugOutputersTaskUpdateProgress:(id)arg0 withTotalTime:(id)arg1;
- (void)awe_ugOutputersTaskDidFinishReportWithModel:(id)arg0;
- (void)setupTask;
- (void)setTimerHelper:(id)arg0;
- (void)setOutputers:(id)arg0;
- (void)setSceneService:(id)arg0;
- (id)sceneService;
- (void)setupActiveObserver;
- (id)timerHelper;
- (void)setHasLogUpdateAfterBecomeActivity:(BOOL)arg0;
- (void)taskStartTiming;
- (void)triggerTaskIfNeededForTrigger:(id)arg0 withReason:(id)arg1;
- (void)taskPauseForReason:(id)arg0;
- (BOOL)hasLogUpdateAfterBecomeActivity;
- (void)taskDidFinish;
- (void)taskInitWithJSON:(id)arg0;
- (void)setTriggers:(id)arg0;
- (id)triggers;
- (void)setCurrentState:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)currentState;
- (id)taskID;
- (void)dealloc;
- (void)applicationDidBecomeActive;
- (id)currentProgress;
- (void)setCurrentProgress:(id)arg0;
- (void)taskStart;

@end
