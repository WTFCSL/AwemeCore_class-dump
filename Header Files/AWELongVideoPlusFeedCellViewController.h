//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEBinding, UIView, NSObject;

@interface AWELongVideoPlusFeedCellViewController : AWEFeedCellViewController <AWEPadUIAdaptionViewTransitionObserver> {
    BOOL _isFirst;
    BOOL _isShowingScreenBlockToast;
    BOOL _isShowDefaultBackground;
    BOOL _isSkipBind;
    BOOL _isChangeBoundsValue;
    BOOL _isPlayFinished;
    double _playerStartTime;
    NSObject *_screenCaptureBlocker;
    UIImageView *_upImageView;
    UIImageView *_bottomImageView;
    UIView *_backgroundBlurView;
    UIImageView *_backgroundImageView;
    UIView *_playerView;
    id _bindPlayerController;
    id _bindVideoController;
    AWEBinding *_videoBind;
    AWEBinding *_playerBind;
    AWEBinding *_frameBind;
}

@property (nonatomic) double playerStartTime;
@property (nonatomic) BOOL isFirst;
@property (retain, nonatomic) NSObject *screenCaptureBlocker;
@property (nonatomic) BOOL isShowingScreenBlockToast;
@property (retain, nonatomic) UIImageView *upImageView;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) BOOL isShowDefaultBackground;
@property (weak, nonatomic) UIView *playerView;
@property (nonatomic) BOOL isSkipBind;
@property (weak, nonatomic) id bindPlayerController;
@property (weak, nonatomic) id bindVideoController;
@property (nonatomic) BOOL isChangeBoundsValue;
@property (nonatomic) BOOL isPlayFinished;
@property (retain, nonatomic) AWEBinding *videoBind;
@property (retain, nonatomic) AWEBinding *playerBind;
@property (retain, nonatomic) AWEBinding *frameBind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_viewController:(id)arg0 willTransitionToSize:(struct CGSize { double x0; double x1; })arg1 transitionCoordinator:(id)arg2;
- (void)player:(id)arg0 updatePlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)playerWillStartNextLoop:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackToAction:(long long)arg1;
- (void)didDisplay;
- (void)setIsFirst:(BOOL)arg0;
- (void)setPlayerStartTime:(double)arg0;
- (double)playerStartTime;
- (void)postVideoNotificationForAutoPlay;
- (void)setupBindings;
- (id)playerBind;
- (void)setPlayerBind:(id)arg0;
- (id)bindPlayerController;
- (id)frameBind;
- (void)setBindPlayerController:(id)arg0;
- (void)setFrameBind:(id)arg0;
- (void)updateImageViewLayout;
- (void)configBasicLogic;
- (void)setIsPlayFinished:(BOOL)arg0;
- (void)disableDefaultVideoPlayFinishTrack;
- (void)setIsChangeBoundsValue:(BOOL)arg0;
- (void)setIsShowDefaultBackground:(BOOL)arg0;
- (void)setBindVideoController:(id)arg0;
- (id)videoBind;
- (void)setVideoBind:(id)arg0;
- (id)bindVideoController;
- (void)setupBindVideoController;
- (void)setupBindPlayerController;
- (void)adjustViewLayer;
- (void)adaptPad;
- (void)disableScreenCapture;
- (void)updateDefaultSeekToTime:(id)arg0;
- (BOOL)isShowingScreenBlockToast;
- (void)setIsShowingScreenBlockToast:(BOOL)arg0;
- (void)setScreenCaptureBlocker:(id)arg0;
- (void)trackSelectionButtonWithModel:(id)arg0 show:(long long)arg1;
- (void)submitLongVideoHistory;
- (BOOL)isChangeBoundsValue;
- (void)traceVideoPlayFinished;
- (BOOL)isPlayFinished;
- (BOOL)isShowDefaultBackground;
- (id)screenCaptureBlocker;
- (void)trackHighLightPlay;
- (void)showPaymentUseCouponTipsIfNeeded;
- (void)setIsSkipBind:(BOOL)arg0;
- (BOOL)isSkipBind;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)playerView;
- (void)viewWillAppear:(BOOL)arg0;
- (id)backgroundBlurView;
- (void)setPlayerView:(id)arg0;
- (void)reset;
- (void)viewDidLoad;
- (void)setBackgroundBlurView:(id)arg0;
- (BOOL)isFirst;
- (void)configureWithModel:(id)arg0;
- (void)setBackgroundImageView:(id)arg0;
- (id)bottomImageView;
- (void)setBottomImageView:(id)arg0;
- (id)upImageView;
- (void)setUpImageView:(id)arg0;

@end