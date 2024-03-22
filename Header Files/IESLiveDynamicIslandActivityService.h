//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSTimer, NSString, IESLiveDynamicIslandActivityModel;
@protocol IESLiveDynamicIslandOuterService;

@interface IESLiveDynamicIslandActivityService : IESLiveGeneralBaseService <IESLiveDynamicIslandActivityService> {
    BOOL dynamicActivityShowing;
    BOOL _isFirstEnter;
    id<IESLiveDynamicIslandOuterService> _activityService;
    IESLiveDynamicIslandActivityModel *_activityModel;
    unsigned long long _backgroundTask;
    NSTimer *_timer;
    NSTimer *_countDownTimer;
    double _startTime;
    double _watchDuration;
    double _watchTotalDuration;
    NSMutableDictionary *_businessDict;
    NSString *_roomID;
    NSString *_anchorID;
    NSString *_enterFromMerge;
    NSString *_enterMethod;
    NSString *_actionType;
}

@property (nonatomic) BOOL isFirstEnter;
@property (retain, nonatomic) id<IESLiveDynamicIslandOuterService> activityService;
@property (retain, nonatomic) IESLiveDynamicIslandActivityModel *activityModel;
@property (nonatomic) unsigned long long backgroundTask;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSTimer *countDownTimer;
@property (nonatomic) double startTime;
@property (nonatomic) double watchDuration;
@property (nonatomic) double watchTotalDuration;
@property (retain, nonatomic) NSMutableDictionary *businessDict;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *actionType;
@property (nonatomic) BOOL dynamicActivityShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)arg0;
+ (id)serviceProtocolsWithParam:(id)arg0;
+ (unsigned long long)serviceImmediateLoadTypes;
+ (id)serviceActionsWithParam:(id)arg0;

- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (id)anchorID;
- (id)enterFromMerge;
- (void)setEnterFromMerge:(id)arg0;
- (void)setAnchorID:(id)arg0;
- (void)initParams;
- (id)activityModel;
- (void)setActivityModel:(id)arg0;
- (BOOL)isFirstEnter;
- (void)setIsFirstEnter:(BOOL)arg0;
- (id)businessDict;
- (void)setBusinessDict:(id)arg0;
- (double)watchDuration;
- (void)setWatchDuration:(double)arg0;
- (void)liveWillEndWithReason:(unsigned long long)arg0;
- (BOOL)isEcomLiveRoom;
- (void)p_didEnterBackground;
- (void)startDynamicActivity;
- (void)updateDynamicActivity;
- (void)updateDynamicRealtimeActivityStyle:(id)arg0;
- (void)startDynamicRealtimeWithActivityType:(long long)arg0 activityDuration:(id)arg1;
- (void)endDynamicRealtimeWithActivityType:(long long)arg0;
- (void)endDynamicActivityAll;
- (BOOL)dynamicActivityShowing;
- (void)setDynamicActivityShowing:(BOOL)arg0;
- (void)setWatchTotalDuration:(double)arg0;
- (void)p_afterIslandDurationTracker;
- (void)p_applicationWillTerminate;
- (void)p_didBecomeActiveNotification;
- (void)invalidateCountDownTimer;
- (double)watchTotalDuration;
- (void)p_enterTracker;
- (void)p_durationTracker;
- (void)updateDynamicRealtimeActivityIfNeed;
- (long long)fetchCurrentActivityType;
- (void)updateDynamicRealtimeActivityWithDuration:(id)arg0 activityType:(long long)arg1;
- (void)cleanDynamicRealtimeActivity;
- (id)activityService;
- (id)activityModelParamsDictionary;
- (id)roomSchemaWithParams;
- (void)p_activityAuthorizationTracker:(BOOL)arg0;
- (void)endDynamicActivity;
- (long long)getPriorityWithType:(long long)arg0;
- (id)fetchSortedKeyArray;
- (void)setActivityService:(id)arg0;
- (id)timer;
- (void)setActionType:(id)arg0;
- (void)invalidateTimer;
- (void)setStartTime:(double)arg0;
- (id)actionType;
- (void).cxx_destruct;
- (void)removeObserver;
- (void)setTimer:(id)arg0;
- (double)startTime;
- (void)addObserver;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (void)setCountDownTimer:(id)arg0;
- (id)countDownTimer;
- (unsigned long long)backgroundTask;
- (void)setBackgroundTask:(unsigned long long)arg0;

@end
