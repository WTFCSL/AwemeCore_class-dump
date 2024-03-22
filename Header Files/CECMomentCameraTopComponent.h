//
//     Generated by private class-dump
//

@class NSString, CECMomentCameraCountDownNewView, UIImageView, CECMomentCameraRecordTimeViewModel, CECMomentCameraTextViewModel, CECMomentCameraTopViewModel, UIButton, NSObject, CECMomentCameraDeleteViewModel;
@protocol AFDMomentCameraPerformanceTrackService, CECMomentCameraSwitchTabService, CECMomentCameraFlowService, OS_dispatch_source;

@interface CECMomentCameraTopComponent : AFDMomentCameraBaseComponent <CECMomentCameraFlowServiceSubscriber> {
    BOOL _isImpactEnable;
    BOOL _isFirstAppear;
    BOOL _newIsFirstAppear;
    BOOL _isResetingTimer;
    BOOL _shouldTrackWarningTime;
    BOOL _isJumpToFeed;
    BOOL _lastHidden;
    BOOL _isCountViewLastHidden;
    BOOL _isMomentlogoLastHidden;
    CECMomentCameraTopViewModel *_viewModel;
    CECMomentCameraDeleteViewModel *_deleteViewModel;
    CECMomentCameraRecordTimeViewModel *_recordTimeViewModel;
    CECMomentCameraTextViewModel *_textViewModel;
    UIButton *_closeButton;
    UIButton *_retakeButton;
    CECMomentCameraCountDownNewView *_countDownView;
    UIImageView *_titleImageView;
    UIImageView *_momentLogoView;
    NSObject<OS_dispatch_source> *_countdownTimer;
    double _currentTime;
    long long _blinkCount;
    id<CECMomentCameraFlowService> _flowService;
    id<CECMomentCameraSwitchTabService> _switchTabService;
    id<AFDMomentCameraPerformanceTrackService> _trackService;
}

@property (retain, nonatomic) CECMomentCameraTopViewModel *viewModel;
@property (retain, nonatomic) CECMomentCameraDeleteViewModel *deleteViewModel;
@property (retain, nonatomic) CECMomentCameraRecordTimeViewModel *recordTimeViewModel;
@property (retain, nonatomic) CECMomentCameraTextViewModel *textViewModel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *retakeButton;
@property (retain, nonatomic) CECMomentCameraCountDownNewView *countDownView;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UIImageView *momentLogoView;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *countdownTimer;
@property (nonatomic) double currentTime;
@property (nonatomic) long long blinkCount;
@property (nonatomic) BOOL isImpactEnable;
@property (weak, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL newIsFirstAppear;
@property (nonatomic) BOOL isResetingTimer;
@property (nonatomic) BOOL shouldTrackWarningTime;
@property (nonatomic) BOOL isJumpToFeed;
@property (nonatomic) BOOL lastHidden;
@property (nonatomic) BOOL isCountViewLastHidden;
@property (nonatomic) BOOL isMomentlogoLastHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObserver;
- (void)setIsFirstAppear:(BOOL)arg0;
- (id)countDownView;
- (void)setCountDownView:(id)arg0;
- (void)p_addNotifications;
- (void)componentDidLoad;
- (id)countdownTimer;
- (void)setCountdownTimer:(id)arg0;
- (void)addAnimation;
- (id)flowService;
- (id)trackService;
- (void)setFlowService:(id)arg0;
- (void)setTrackService:(id)arg0;
- (id)textViewModel;
- (id)deleteViewModel;
- (void)setTextViewModel:(id)arg0;
- (void)setDeleteViewModel:(id)arg0;
- (id)switchTabService;
- (void)setSwitchTabService:(id)arg0;
- (void)flowServiceDidChangeToState:(long long)arg0 fromState:(long long)arg1;
- (void)componentWillAppear:(BOOL)arg0;
- (void)componentDidAppear:(BOOL)arg0;
- (void)cancelCountDownTimer;
- (void)componentWillDisappear:(BOOL)arg0;
- (id)initWithViewModelFactory:(id)arg0 layoutManager:(id)arg1;
- (void)setMomentLogoView:(id)arg0;
- (id)momentLogoView;
- (id)recordTimeViewModel;
- (BOOL)newIsFirstAppear;
- (void)setNewIsFirstAppear:(BOOL)arg0;
- (BOOL)isJumpToFeed;
- (void)setIsJumpToFeed:(BOOL)arg0;
- (BOOL)lastHidden;
- (void)configCountDownTimer;
- (void)setIsCountViewLastHidden:(BOOL)arg0;
- (void)setIsMomentlogoLastHidden:(BOOL)arg0;
- (void)changeTopViewHiddenStatus:(BOOL)arg0;
- (BOOL)isCountViewLastHidden;
- (BOOL)isMomentlogoLastHidden;
- (void)p_pauseCountDownTimer;
- (void)p_pauseCountDownTimerBySecondTake;
- (void)jumpToFeed;
- (void)setLastHidden:(BOOL)arg0;
- (void)setIsResetingTimer:(BOOL)arg0;
- (void)closeCurrentEverCamera;
- (BOOL)isResetingTimer;
- (void)checkCountDownTime;
- (void)handleCountDownOver;
- (BOOL)shouldTrackWarningTime;
- (void)waringTimeForTrack;
- (void)setShouldTrackWarningTime:(BOOL)arg0;
- (BOOL)isImpactEnable;
- (id)generateAnimationWithDelayTime:(double)arg0 withFromValue:(double)arg1 withToValue:(double)arg2;
- (void)setIsImpactEnable:(BOOL)arg0;
- (void)p_resetCountDownTimer;
- (void)setRecordTimeViewModel:(id)arg0;
- (void)setRetakeButton:(id)arg0;
- (long long)blinkCount;
- (void)setBlinkCount:(long long)arg0;
- (void).cxx_destruct;
- (void)handleNotification:(id)arg0;
- (void)setCurrentTime:(double)arg0;
- (void)setViewModel:(id)arg0;
- (id)titleImageView;
- (id)viewModel;
- (double)currentTime;
- (void)dealloc;
- (void)impactOccurred;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (BOOL)isFirstAppear;
- (id)retakeButton;
- (void)setTitleImageView:(id)arg0;

@end