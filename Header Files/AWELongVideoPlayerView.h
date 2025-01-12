//
//     Generated by private class-dump
//

@class NSTimer, AWEAwemeModel, UIView, NSString, UIImageView, NSDictionary, NSObject, LOTAnimationView, UIViewController, UILabel, NSNumber;
@protocol AWEAwemePlayVideoViewControllerProtocol, AWELongVideoPlayerViewDelegate;

@interface AWELongVideoPlayerView : UIView <AWEPlayVideoDelegate, AWEPlayVideoViewControllerStatusDelegate, AWELongVideoPlayerViewProtocol> {
    BOOL _mute;
    BOOL _repeat;
    BOOL _needInheritedGlobalProgress;
    BOOL _isDisplaying;
    BOOL _isShowingScreenBlockToast;
    UIViewController<AWEAwemePlayVideoViewControllerProtocol> *_playerViewController;
    id<AWELongVideoPlayerViewDelegate> _delegate;
    NSString *_enterFrom;
    NSDictionary *_logExtra;
    NSNumber *_defaultStartPlayTime;
    double _stopTime;
    double _currentPlayTime;
    AWEAwemeModel *_awemeModel;
    double _volume;
    long long _scaleMode;
    NSObject *_screenCaptureBlocker;
    UIView *_loadingView;
    UIImageView *_loadingImageView;
    UIImageView *_videoCoverImageView;
    LOTAnimationView *_lottieView;
    UILabel *_loadingLabel;
    NSTimer *_loadingNetTimer;
    UIImageView *_loadingLogoImageView;
    UIView *_errorView;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSObject *screenCaptureBlocker;
@property (nonatomic) BOOL needInheritedGlobalProgress;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) UIImageView *videoCoverImageView;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) NSTimer *loadingNetTimer;
@property (retain, nonatomic) UIImageView *loadingLogoImageView;
@property (retain, nonatomic) UIView *errorView;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) BOOL isShowingScreenBlockToast;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol> *playerViewController;
@property (weak, nonatomic) id<AWELongVideoPlayerViewDelegate> delegate;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) NSNumber *defaultStartPlayTime;
@property (nonatomic) double stopTime;
@property (nonatomic) double currentPlayTime;
@property (nonatomic, getter=isMute) BOOL mute;
@property (nonatomic) double volume;
@property (nonatomic) BOOL repeat;
@property (nonatomic) long long scaleMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setEnterFrom:(id)arg0;
- (void)player:(id)arg0 didChangeStallState:(long long)arg1;
- (void)player:(id)arg0 playbackFailedForURL:(id)arg1 error:(id)arg2;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setAwemeModel:(id)arg0;
- (id)enterFrom;
- (void)player:(id)arg0 updatePlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)playerWillStartNextLoop:(id)arg0;
- (void)playerDidStopped:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackToAction:(long long)arg1;
- (void)videoResourceDidRecallInPlayer:(id)arg0;
- (void)videoFinishUpdate:(id)arg0 videoController:(id)arg1;
- (double)currentPlayTime;
- (id)loadingImageView;
- (void)setLoadingImageView:(id)arg0;
- (double)currPlaybackTime;
- (void)setIsDisplaying:(BOOL)arg0;
- (BOOL)shouldRVDTransitionUpdatePlayerControllerWithFromContext:(id)arg0;
- (void)bindObserver;
- (void)setCurrentPlayTime:(double)arg0;
- (id)realDuration;
- (id)lottieView;
- (void)setLottieView:(id)arg0;
- (id)videoCoverImageView;
- (void)setVideoCoverImageView:(id)arg0;
- (void)updateWithAwemeModel:(id)arg0;
- (void)addVideoLoadingView;
- (BOOL)isPlayerUnplayedStatus;
- (void)updateLoadingViewLayout;
- (void)setLoadingViewHidden:(BOOL)arg0 videoCoverHidden:(BOOL)arg1;
- (id)loadingLogoImageView;
- (id)netSpeedString;
- (void)setLoadingLogoImageView:(id)arg0;
- (void)startNetSpeedTimer;
- (void)stopNetSpeedTimer;
- (void)setLoadingNetTimer:(id)arg0;
- (id)loadingNetTimer;
- (long long)getScaleModelWithAwemodel:(id)arg0;
- (BOOL)isShowingScreenBlockToast;
- (void)setIsShowingScreenBlockToast:(BOOL)arg0;
- (void)setScreenCaptureBlocker:(id)arg0;
- (id)screenCaptureBlocker;
- (void)notifyChangeEpisode;
- (void)setDefaultStartPlayTime:(id)arg0;
- (long long)videoActionState;
- (id)defaultStartPlayTime;
- (void)seekVideoStartToDefault;
- (unsigned long long)currentResolutionType:(id)arg0;
- (void)updatePlayerResolutionBeforeStartPlay;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 loadingView:(id)arg1 errorView:(id)arg2;
- (void)setNeedInheritedGlobalProgress:(BOOL)arg0;
- (BOOL)needInheritedGlobalProgress;
- (BOOL)isPlayerCompleted;
- (void)addVideoErrorView;
- (BOOL)awemeAddLynxOnView;
- (BOOL)enableDisplayingStatusControl;
- (BOOL)isLoadingViewHidden;
- (void)prepareForDisplay;
- (id)playerViewController;
- (void).cxx_destruct;
- (double)volume;
- (BOOL)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (double)stopTime;
- (void)setVolume:(double)arg0;
- (double)videoDuration;
- (void)setDelegate:(id)arg0;
- (BOOL)play;
- (BOOL)pause;
- (void)reset;
- (void)setMute:(BOOL)arg0;
- (void)replay;
- (void)setStopTime:(double)arg0;
- (BOOL)isDisplaying;
- (void)setupSubviews;
- (void)setPlayerViewController:(id)arg0;
- (id)loadingLabel;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (long long)playState;
- (void)setLoadingLabel:(id)arg0;
- (BOOL)repeat;
- (id)errorView;
- (void)setErrorView:(id)arg0;
- (void)setScaleMode:(long long)arg0;
- (long long)scaleMode;
- (BOOL)isMute;
- (void)setRepeat:(BOOL)arg0;
- (void)seekToTime:(double)arg0 completion:(id /* block */)arg1;

@end
