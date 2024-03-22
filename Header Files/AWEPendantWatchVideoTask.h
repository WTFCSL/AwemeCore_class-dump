//
//     Generated by private class-dump
//

@class NSDate, AWEAwemeModel, CADisplayLink, NSTimer, AWEFCoinTaskData, NSArray, AWEUGCountDownConfigModel, NSString, NSMutableArray, AWEUGTaskProgressCoefficientConfigModel, AWEFCoinTaskModel, NSDictionary;
@protocol AWEUGPendantTaskStatusProtocol;

@interface AWEPendantWatchVideoTask : NSObject {
    BOOL _displayLandscape;
    BOOL _displayProgressView;
    BOOL _inProgress;
    BOOL _inTimerProgress;
    BOOL _isPaused;
    BOOL _needAvoidBackground;
    BOOL _isPlayingAnimation;
    BOOL _enableMultiScene;
    AWEFCoinTaskModel *_dataModel;
    AWEAwemeModel *_currentAwemeModel;
    unsigned long long _currentPlayStatus;
    id<AWEUGPendantTaskStatusProtocol> _taskStatusHandler;
    NSMutableArray *_hasWatchedVideoIdArray;
    CADisplayLink *_displayLink;
    NSTimer *_timer;
    AWEFCoinTaskData *_model;
    long long _startTimerInterval;
    NSDate *_pauseStart;
    NSDate *_previousFireDate;
    long long _progressTimeInterval;
    long long _realProgressTimeInterval;
    long long _virtualProgressTimeInterval;
    NSArray *_avoidSecondPageVCArray;
    AWEUGCountDownConfigModel *_countDownConfig;
    NSString *_fcoinShowScene;
    AWEUGTaskProgressCoefficientConfigModel *_taskCoefficientConfigModel;
    NSDictionary *_referStringSceneMap;
    unsigned long long _pendantSceneCheckStatus;
    unsigned long long _pendantFeedCheckStatus;
}

@property (retain, nonatomic) AWEFCoinTaskModel *dataModel;
@property (nonatomic) BOOL displayLandscape;
@property (nonatomic) BOOL displayProgressView;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (nonatomic) unsigned long long currentPlayStatus;
@property (weak, nonatomic) id<AWEUGPendantTaskStatusProtocol> taskStatusHandler;
@property (retain, nonatomic) NSMutableArray *hasWatchedVideoIdArray;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) AWEFCoinTaskData *model;
@property (nonatomic) long long startTimerInterval;
@property (nonatomic) BOOL inProgress;
@property (nonatomic) BOOL inTimerProgress;
@property (retain, nonatomic) NSDate *pauseStart;
@property (retain, nonatomic) NSDate *previousFireDate;
@property (nonatomic) long long progressTimeInterval;
@property (nonatomic) long long realProgressTimeInterval;
@property (nonatomic) long long virtualProgressTimeInterval;
@property (nonatomic) BOOL isPaused;
@property (copy, nonatomic) NSArray *avoidSecondPageVCArray;
@property (nonatomic) BOOL needAvoidBackground;
@property (retain, nonatomic) AWEUGCountDownConfigModel *countDownConfig;
@property (copy, nonatomic) NSString *fcoinShowScene;
@property (retain, nonatomic) AWEUGTaskProgressCoefficientConfigModel *taskCoefficientConfigModel;
@property (retain, nonatomic) NSDictionary *referStringSceneMap;
@property (nonatomic) BOOL isPlayingAnimation;
@property (nonatomic) unsigned long long pendantSceneCheckStatus;
@property (nonatomic) unsigned long long pendantFeedCheckStatus;
@property (nonatomic) BOOL enableMultiScene;

- (id)currentAwemeModel;
- (void)setTaskModel:(id)arg0;
- (BOOL)isFirstLevelPage;
- (void)setupNotification;
- (void)startTask;
- (void)pauseTask;
- (void)resumeTask;
- (void)handleDisplayLink;
- (void)clearTask;
- (void)setPauseStart:(id)arg0;
- (void)setPreviousFireDate:(id)arg0;
- (id)pauseStart;
- (id)previousFireDate;
- (void)setCurrentAwemeModel:(id)arg0;
- (void)sceneDidAppeared:(id)arg0;
- (void)beforeEnterToLandscapeFeedNotification:(id)arg0;
- (void)afterQuitFromLandscapeFeedNotification:(id)arg0;
- (void)trackLogWithKey:(id)arg0 message:(id)arg1;
- (void)feedPublishProgressViewDidShow:(id)arg0;
- (void)feedPublishProgressViewDidHide:(id)arg0;
- (void)feedLongPressViewDidShow:(id)arg0;
- (void)feedLongPressViewDidHide:(id)arg0;
- (void)feedTableViewControllerWillPlayAweme:(id)arg0;
- (BOOL)displayProgressView;
- (void)setDisplayProgressView:(BOOL)arg0;
- (id)countDownConfig;
- (void)setCountDownConfig:(id)arg0;
- (unsigned long long)pendantSceneCheckStatus;
- (void)setPendantSceneCheckStatus:(unsigned long long)arg0;
- (unsigned long long)pendantFeedCheckStatus;
- (void)setPendantFeedCheckStatus:(unsigned long long)arg0;
- (void)bindTaskStatusTarget:(id)arg0;
- (void)setCurrentPlayStatus:(unsigned long long)arg0;
- (unsigned long long)currentPlayStatus;
- (void)invalidTimer;
- (id)hasWatchedVideoIdArray;
- (void)addHasWatchVideoId:(id)arg0;
- (BOOL)checkIfCanStartTaskWithVideoId:(id)arg0;
- (void)setHasWatchedVideoIdArray:(id)arg0;
- (void)sceneDidDisappeared:(id)arg0;
- (id)referStringSceneMap;
- (void)setReferStringSceneMap:(id)arg0;
- (void)startTaskTimerWithAweme:(id)arg0;
- (void)pauseTaskTimerWithAweme:(id)arg0;
- (void)checkTaskStatus;
- (BOOL)isInTaskProgress;
- (BOOL)displayLandscape;
- (id)fcoinShowScene;
- (BOOL)checkTaskStatusWithScene:(id)arg0;
- (BOOL)checkTaskStatusWithAweme:(id)arg0;
- (BOOL)checkIfCanRunTaskForGeneralTaskRule;
- (BOOL)needAvoidBackground;
- (void)setIsPlayingAnimation:(BOOL)arg0;
- (id)avoidSecondPageVCArray;
- (id)taskCoefficientConfigModel;
- (void)clearProgress;
- (id)taskStatusHandler;
- (void)setInTimerProgress:(BOOL)arg0;
- (void)setStartTimerInterval:(long long)arg0;
- (BOOL)enableMultiScene;
- (BOOL)inTimerProgress;
- (double)getVideoCoefficient:(id)arg0;
- (double)getSceneCoefficient;
- (long long)startTimerInterval;
- (long long)realProgressTimeInterval;
- (double)getCoefficient;
- (void)setRealProgressTimeInterval:(long long)arg0;
- (long long)virtualProgressTimeInterval;
- (void)setVirtualProgressTimeInterval:(long long)arg0;
- (void)setProgressTimeInterval:(long long)arg0;
- (void)setTaskStatusHandler:(id)arg0;
- (BOOL)isPlayingAnimation;
- (long long)progressTimeInterval;
- (void)startTaskTimerWithAweme:(id)arg0 playStatus:(unsigned long long)arg1 playScene:(id)arg2;
- (void)pauseTaskTimerWithAweme:(id)arg0 playStatus:(unsigned long long)arg1;
- (void)setDisplayLandscape:(BOOL)arg0;
- (void)setFcoinShowScene:(id)arg0;
- (id)initWithConfig:(id)arg0 scene:(id)arg1;
- (void)taskHasComplete;
- (void)notifyAnimationStatus:(BOOL)arg0;
- (id)currentTaskModel;
- (void)setAvoidSecondPageVCArray:(id)arg0;
- (void)setNeedAvoidBackground:(BOOL)arg0;
- (void)setTaskCoefficientConfigModel:(id)arg0;
- (void)setEnableMultiScene:(BOOL)arg0;
- (id)timer;
- (void)setModel:(id)arg0;
- (void)setDisplayLink:(id)arg0;
- (id)init;
- (void)startTimer;
- (void).cxx_destruct;
- (id)model;
- (void)setInProgress:(BOOL)arg0;
- (void)setup;
- (void)finishTask;
- (void)setTimer:(id)arg0;
- (id)displayLink;
- (BOOL)isPaused;
- (void)dealloc;
- (BOOL)inProgress;
- (void)setIsPaused:(BOOL)arg0;
- (id)dataModel;
- (void)setDataModel:(id)arg0;
- (void)cancelTask;
- (void)updateProgress:(long long)arg0;

@end