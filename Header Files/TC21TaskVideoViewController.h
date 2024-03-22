//
//     Generated by private class-dump
//

@class UIView, TC21TaskVideoModel, NSString, UIImageView, UIButton, AWETC21VideoPlayerAdapter, UILabel, TC21TaskVideoSponsorCardView;

@interface TC21TaskVideoViewController : UIViewController <AWERouterViewControllerProtocol> {
    BOOL _isPlayGurdVideo;
    BOOL _isReplay;
    BOOL _shouldHandleReportTaskTip;
    BOOL _isShowingPause;
    BOOL _hasShowVideoLog;
    BOOL _isFinishPlayVideoTask;
    AWETC21VideoPlayerAdapter *_videoPlayer;
    UIImageView *_coverView;
    TC21TaskVideoModel *_videoModel;
    long long _playState;
    TC21TaskVideoSponsorCardView *_cardView;
    UIButton *_backButton;
    UILabel *_countDownLabel;
    UIImageView *_adMarkImageView;
    UIView *_loadingView;
    UIImageView *_stallView;
    UIImageView *_playImageView;
    long long _tickCount;
    long long _lastTimestamp;
}

@property (retain, nonatomic) AWETC21VideoPlayerAdapter *videoPlayer;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) TC21TaskVideoModel *videoModel;
@property (nonatomic) long long playState;
@property (retain, nonatomic) TC21TaskVideoSponsorCardView *cardView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) UIImageView *adMarkImageView;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIImageView *stallView;
@property (retain, nonatomic) UIImageView *playImageView;
@property (nonatomic) long long tickCount;
@property (nonatomic) long long lastTimestamp;
@property (nonatomic) BOOL isPlayGurdVideo;
@property (nonatomic) BOOL isReplay;
@property (nonatomic) BOOL shouldHandleReportTaskTip;
@property (nonatomic) BOOL isShowingPause;
@property (nonatomic) BOOL hasShowVideoLog;
@property (nonatomic) BOOL isFinishPlayVideoTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (void)updateCountDown:(id)arg0;
- (id)countDownLabel;
- (void)setCountDownLabel:(id)arg0;
- (void)changePlayState:(BOOL)arg0;
- (void)showSponsorCard;
- (void)playWithModel:(id)arg0;
- (BOOL)isShowingPause;
- (void)showStallView:(BOOL)arg0;
- (void)willResignActiveNotification;
- (void)didBecomeActiveNotification;
- (id)adMarkImageView;
- (id)stallView;
- (void)p_startLoadingAnimation;
- (BOOL)shouldShowSponsorCard;
- (void)hideSponsorCard;
- (BOOL)shouldHandleReportTaskTip;
- (BOOL)isFinishPlayVideoTask;
- (void)setShouldHandleReportTaskTip:(BOOL)arg0;
- (void)reportCommerceGQCompleted;
- (void)trackCommerceGQIfNeededWithEvent:(id)arg0;
- (void)playAnimationWithPaused:(BOOL)arg0;
- (void)setIsPlayGurdVideo:(BOOL)arg0;
- (void)tryShowSponsorCard;
- (BOOL)isPlayGurdVideo;
- (void)playOnlineTaskVideo;
- (void)addPlayFailedLog;
- (void)onPlayProgress:(long long)arg0;
- (void)playControlAction;
- (void)setIsShowingPause:(BOOL)arg0;
- (void)setIsFinishPlayVideoTask:(BOOL)arg0;
- (void)showToastWith:(id)arg0;
- (id)reportSuccessToast:(long long)arg0;
- (void)setAdMarkImageView:(id)arg0;
- (void)setStallView:(id)arg0;
- (BOOL)hasShowVideoLog;
- (void)setHasShowVideoLog:(BOOL)arg0;
- (void)setVideoPlayer:(id)arg0;
- (id)videoPlayer;
- (BOOL)isReplay;
- (void)setIsReplay:(BOOL)arg0;
- (void).cxx_destruct;
- (double)topMargin;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setLastTimestamp:(long long)arg0;
- (long long)lastTimestamp;
- (void)closeAction;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (id)cardView;
- (void)setCardView:(id)arg0;
- (void)setupViews;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (long long)playState;
- (void)setPlayState:(long long)arg0;
- (id)playImageView;
- (void)setPlayImageView:(id)arg0;
- (void)playVideo;
- (id)coverView;
- (void)setCoverView:(id)arg0;
- (long long)tickCount;
- (void)setTickCount:(long long)arg0;

@end
