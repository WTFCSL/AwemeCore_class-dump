//
//     Generated by private class-dump
//

@class NSTimer, UIView, UITapGestureRecognizer, AWEAwemeModel, NSString, UIImageView, UIViewController, AFDPlayRemoteFeedStreamCellContext, NSNumber;
@protocol AWERTVFeedContentControllers, AWEAwemeBizPlayVideoProtocol, AFDPlayRemoteFeedStreamCellDelegate, AWEPlayInteractionViewControllerProtocol, AWEAwemePlayVideoViewControllerProtocol, AWEPlayInteractionViewControllerNewProtocol;

@interface AFDPlayRemoteFeedCell : UITableViewCell <AWEPlayVideoViewControllerDelegate, AWEPlayVideoDelegate, AWEAwemePlayVideoBaseContainer, AFDPlayRemoteFeedStreamCellProtocol> {
    BOOL _hadPrepareToDisplay;
    BOOL _isHost;
    BOOL _hasCellPlayed;
    BOOL _hadReusePlayer;
    BOOL _hasCellLoaded;
    struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *_audioWrapper;
    UIViewController *_parentViewController;
    id<AFDPlayRemoteFeedStreamCellDelegate> _delegate;
    id<AWERTVFeedContentControllers> _rtvFeedContentControllers;
    long long _pureMode;
    UIViewController<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoViewControllerProtocol> *_videoController;
    UIViewController<AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionViewControllerNewProtocol> *_interactionController;
    long long _indexPath;
    double _controlYOffset;
    AWEAwemeModel *_model;
    AFDPlayRemoteFeedStreamCellContext *_context;
    UITapGestureRecognizer *_singleTapGesture;
    UITapGestureRecognizer *_doubleTapGesture;
    NSNumber *_videoScaleModeValue;
    double _lastClickTimestamp;
    NSTimer *_singleClickTimer;
    UIImageView *_miniBottomImageView;
    UIImageView *_miniLockedImageView;
    UIView *_miniLockedMaskView;
    UIView *_fakeView;
    double _currentSpeed;
}

@property (readonly, nonatomic) AFDPlayRemoteFeedStreamCellContext *context;
@property (retain, nonatomic) UITapGestureRecognizer *singleTapGesture;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGesture;
@property (nonatomic) BOOL hasCellLoaded;
@property (nonatomic) BOOL hasCellPlayed;
@property (retain, nonatomic) NSNumber *videoScaleModeValue;
@property (nonatomic) double lastClickTimestamp;
@property (retain, nonatomic) NSTimer *singleClickTimer;
@property (retain, nonatomic) UIImageView *miniBottomImageView;
@property (retain, nonatomic) UIImageView *miniLockedImageView;
@property (retain, nonatomic) UIView *miniLockedMaskView;
@property (nonatomic) BOOL hadReusePlayer;
@property (retain, nonatomic) UIView *fakeView;
@property (nonatomic) double currentSpeed;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (weak, nonatomic) id<AFDPlayRemoteFeedStreamCellDelegate> delegate;
@property (retain, nonatomic) id<AWERTVFeedContentControllers> rtvFeedContentControllers;
@property (nonatomic) long long pureMode;
@property (retain, nonatomic) UIViewController<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoViewControllerProtocol> *videoController;
@property (retain, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionViewControllerNewProtocol> *interactionController;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (nonatomic) BOOL isHost;
@property (nonatomic) long long indexPath;
@property (nonatomic) double controlYOffset;
@property (readonly, nonatomic) AWEAwemeModel *model;
@property (readonly, nonatomic) long long playState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *audioWrapper;

- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (void)setPureMode:(long long)arg0;
- (void)player:(id)arg0 updatePlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)playerWillStartNextLoop:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackToAction:(long long)arg1;
- (BOOL)pauseBySingleClick;
- (struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)audioWrapper;
- (void)setAudioWrapper:(struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)arg0;
- (void)videoController:(id)arg0 playerPlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (long long)pureMode;
- (double)controlYOffset;
- (void)setControlYOffset:(double)arg0;
- (BOOL)shouldNotifyAudioListenersWhenStartPlay;
- (BOOL)shouldPauseWhenPlayerStartPlay:(id)arg0;
- (BOOL)hadPrepareToDisplay;
- (void)setHadPrepareToDisplay:(BOOL)arg0;
- (double)lastClickTimestamp;
- (void)setLastClickTimestamp:(double)arg0;
- (void)initInteractController;
- (void)seekToProgress:(long long)arg0;
- (void)initVideoController;
- (void)configWithAwemeModel:(id)arg0 context:(id)arg1;
- (void)setIsHost:(BOOL)arg0;
- (void)_silentUpdate;
- (void)__log:(id)arg0;
- (void)setHasCellLoaded:(BOOL)arg0;
- (void)initMiniContainer;
- (void)didReceivePlayletCurrentSpeedChangeNotification:(id)arg0;
- (id)miniLockedMaskView;
- (id)miniBottomImageView;
- (id)miniLockedImageView;
- (id)__audioWrapperV2;
- (void)setHasCellPlayed:(BOOL)arg0;
- (void)setHadReusePlayer:(BOOL)arg0;
- (BOOL)hasCellLoaded;
- (void)__configInteractionController;
- (void)p_updateUIWithPureMode:(long long)arg0 canPlay:(BOOL)arg1;
- (BOOL)__useAudioWrapperV2;
- (BOOL)playerUseAudioMix;
- (void)__refreshLongPressPanelMultiSpeedContext;
- (id)rtvFeedContentControllers;
- (void)p_hideInteractionElementIfNeeded;
- (BOOL)hadReusePlayer;
- (void)updatePureMode:(long long)arg0;
- (void)updatePlaySpeed:(id)arg0;
- (void)__updateScalingMode;
- (BOOL)__isLandscapeOrientationLayout;
- (double)__speedFromNumber:(id)arg0;
- (void)__notifyChangeSpeedTo:(double)arg0;
- (id)p_cellOperator;
- (long long)playingProgress;
- (void)setFakeView:(id)arg0;
- (id)fakeView;
- (id)singleClickTimer;
- (void)setSingleClickTimer:(id)arg0;
- (void)onTapGeature:(id)arg0;
- (id)videoScaleModeValue;
- (void)setVideoScaleModeValue:(id)arg0;
- (void)seekToAwemeProgress:(id)arg0;
- (id)awemePlayingProgress;
- (void)setRtvFeedContentControllers:(id)arg0;
- (void)hidePauseView:(BOOL)arg0;
- (void)pauseWithIcon:(BOOL)arg0;
- (void)updateMultiSpeedEnable:(BOOL)arg0;
- (id)requestReusePlayer;
- (BOOL)hasCellPlayed;
- (void)setSingleTapGesture:(id)arg0;
- (void)setDoubleTapGesture:(id)arg0;
- (void)setMiniBottomImageView:(id)arg0;
- (void)setMiniLockedImageView:(id)arg0;
- (void)setMiniLockedMaskView:(id)arg0;
- (void)prepareForDisplay;
- (double)currentPlaybackTime;
- (double)totalTime;
- (void)resume;
- (void).cxx_destruct;
- (id)model;
- (void)setInteractionController:(id)arg0;
- (void)setIndexPath:(long long)arg0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (id)doubleTapGesture;
- (void)stop;
- (long long)mediaType;
- (void)handleDoubleTap:(id)arg0;
- (long long)indexPath;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)interactionController;
- (id)context;
- (void)prepareForReuse;
- (BOOL)isPlaying;
- (void)setVolume:(float)arg0;
- (double)videoDuration;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)reset;
- (void)setMute:(BOOL)arg0;
- (id)parentViewController;
- (void)setParentViewController:(id)arg0;
- (id)singleTapGesture;
- (void)setupUI;
- (BOOL)isHost;
- (double)currentSpeed;
- (id)videoController;
- (void)setVideoController:(id)arg0;
- (long long)playState;
- (void)setCurrentSpeed:(double)arg0;
- (void)handleSingleTap;
- (void)willDisplay;
- (void)seekToTime:(double)arg0 completion:(id /* block */)arg1;

@end
