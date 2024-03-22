//
//     Generated by private class-dump
//

@class UIView;
@protocol AWEVideoTryWatchViewProtocol;

@interface AWELandscapeRewardCountDownController : AWELandscapeInteractionBaseController {
    BOOL _isAnimating;
    BOOL _hasReportTry;
    BOOL _hasReportTryEnd;
    UIView<AWEVideoTryWatchViewProtocol> *_countDownView;
    long long _currentState;
    double _clickTimeStamp;
}

@property (retain, nonatomic) UIView<AWEVideoTryWatchViewProtocol> *countDownView;
@property (nonatomic) long long currentState;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL hasReportTry;
@property (nonatomic) BOOL hasReportTryEnd;
@property (nonatomic) double clickTimeStamp;

- (void)setAppear:(BOOL)arg0;
- (void)player:(id)arg0 updatePlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)didEnterLandscape;
- (void)afterSetData:(id)arg0;
- (void)willExitLandscape;
- (void)updateControllerWithAnimationOffset:(double)arg0 positon:(long long)arg1;
- (id)countDownView;
- (void)setCountDownView:(id)arg0;
- (id)trackCommonParams;
- (void)bindEvents;
- (void)updateAppearStatusWithAnimation:(BOOL)arg0;
- (void)setClickTimeStamp:(double)arg0;
- (BOOL)shouldShowRewardedAdvertisingTryWatchView;
- (void)addCountDownViewIfNeeded;
- (void)setupCountDownView:(id)arg0;
- (void)setHasReportTry:(BOOL)arg0;
- (void)setHasReportTryEnd:(BOOL)arg0;
- (void)updateRewardedAdvertisingTryWatchView:(double)arg0;
- (BOOL)hasReportTry;
- (double)clickTimeStamp;
- (void)didClickUnlockButton;
- (BOOL)hasReportTryEnd;
- (void)updateState:(long long)arg0;
- (BOOL)isAnimating;
- (void)setCurrentState:(long long)arg0;
- (void).cxx_destruct;
- (long long)currentState;
- (void)reset;
- (void)viewDidLoad;
- (void)setIsAnimating:(BOOL)arg0;

@end
