//
//     Generated by private class-dump
//

@class NSDictionary, BDPVideoSideBar, BDPVideoGestureRecognizer, BDPVideoTopBar, BDPVideoBottomView, BDPVideoErrorView, NSMutableArray, NSString, BDPVideoValueView, BDPScreenCastManager, BDPVideoPortraitAlertView, UIButton, UIView, BDPUniqueID, BDPVideoSliderView, UIImageView, BDPVideoMonitor, BDPVideoChangeTimeView, BDPVideoLoadingView, BDPVideoPlayerModel, UITapGestureRecognizer, NSNumber;
@protocol BDPVideoContainerProtocol, BDPPageContextProtocol, BDPVideoPlayerProtocol;

@interface BDPVideoContainer : UIView <BDPVideoPlayerStateDelegate, BDPComponentViewProtocol, BDPScreenCastManagerDelegate, UIGestureRecognizerDelegate, BDPFeedbackSnapshotMessage> {
    BOOL _underInterruption;
    BOOL _initialState;
    BOOL _smallMode;
    BOOL _screenLock;
    BOOL _isUpdateResolution;
    BOOL _enablePicture;
    BOOL _enableStuck;
    BOOL _enableCasting;
    BOOL _originPlayingState;
    BOOL _gestureDisable;
    BOOL _seekTimeGestureActive;
    BOOL _inBackground;
    BOOL _needDarkWaterMark;
    long long _componentID;
    id<BDPPageContextProtocol> _pageContext;
    id<BDPVideoContainerProtocol> _delegate;
    BDPVideoPlayerModel *_model;
    id<BDPVideoPlayerProtocol> _player;
    UIView *_transitionView;
    BDPUniqueID *_uniqueID;
    id /* block */ _videoFullscreenBlock;
    BDPVideoMonitor *_videoMonitor;
    UIView *_containerView;
    UIView *_controlView;
    UIView *_normalModeView;
    UIView *_smallModeView;
    UIImageView *_posterView;
    UIButton *_preparePlayBtn;
    BDPVideoLoadingView *_loadingView;
    BDPVideoTopBar *_topBar;
    UIButton *_screenLockBtn;
    BDPVideoSliderView *_sliderView;
    BDPVideoBottomView *_bottomNewBar;
    BDPVideoErrorView *_errorView;
    UIButton *_centerPlayBtn;
    BDPVideoChangeTimeView *_timeView;
    BDPVideoSideBar *_speedSideView;
    BDPVideoSideBar *_definitionSideView;
    BDPVideoPortraitAlertView *_menuAlertView;
    BDPVideoPortraitAlertView *_speedAlertView;
    BDPVideoPortraitAlertView *_definitionAlertView;
    BDPVideoValueView *_valueChangeView;
    UITapGestureRecognizer *_singleTap;
    UITapGestureRecognizer *_doubleTap;
    BDPVideoGestureRecognizer *_brightAndVolPan;
    BDPVideoGestureRecognizer *_progressPan;
    NSString *_originDefinition;
    long long _initialStartTime;
    long long _seekStartTime;
    NSDictionary *_trackExtra;
    NSString *_initialScene;
    double _originTime;
    unsigned long long _screenState;
    unsigned long long _propertyName;
    unsigned long long _playBtnState;
    double _delaySeekTime;
    double _startSeekTime;
    id /* block */ _seekBlock;
    long long _renderMode;
    NSNumber *_enableAudioMixedSettings;
    BDPScreenCastManager *_screenCastManager;
    NSMutableArray *_rePublishEvents;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originFrame;
}

@property (retain, nonatomic) BDPVideoPlayerModel *model;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *controlView;
@property (retain, nonatomic) UIView *normalModeView;
@property (retain, nonatomic) UIView *smallModeView;
@property (retain, nonatomic) UIImageView *posterView;
@property (retain, nonatomic) UIButton *preparePlayBtn;
@property (retain, nonatomic) BDPVideoLoadingView *loadingView;
@property (retain, nonatomic) BDPVideoTopBar *topBar;
@property (retain, nonatomic) UIButton *screenLockBtn;
@property (retain, nonatomic) BDPVideoSliderView *sliderView;
@property (retain, nonatomic) id<BDPVideoPlayerProtocol> player;
@property (retain, nonatomic) BDPVideoBottomView *bottomNewBar;
@property (retain, nonatomic) BDPVideoErrorView *errorView;
@property (retain, nonatomic) UIButton *centerPlayBtn;
@property (weak, nonatomic) BDPVideoChangeTimeView *timeView;
@property (weak, nonatomic) BDPVideoSideBar *speedSideView;
@property (weak, nonatomic) BDPVideoSideBar *definitionSideView;
@property (weak, nonatomic) BDPVideoPortraitAlertView *menuAlertView;
@property (weak, nonatomic) BDPVideoPortraitAlertView *speedAlertView;
@property (weak, nonatomic) BDPVideoPortraitAlertView *definitionAlertView;
@property (weak, nonatomic) BDPVideoValueView *valueChangeView;
@property (retain, nonatomic) UITapGestureRecognizer *singleTap;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTap;
@property (retain, nonatomic) BDPVideoGestureRecognizer *brightAndVolPan;
@property (retain, nonatomic) BDPVideoGestureRecognizer *progressPan;
@property (nonatomic) BOOL smallMode;
@property (nonatomic) BOOL screenLock;
@property (nonatomic) BOOL isUpdateResolution;
@property (retain, nonatomic) NSString *originDefinition;
@property (nonatomic) BOOL initialState;
@property (nonatomic) BOOL enablePicture;
@property (nonatomic) BOOL enableStuck;
@property (nonatomic) BOOL enableCasting;
@property (nonatomic) long long initialStartTime;
@property (nonatomic) long long seekStartTime;
@property (retain, nonatomic) NSDictionary *trackExtra;
@property (retain, nonatomic) NSString *initialScene;
@property (nonatomic) double originTime;
@property (nonatomic) BOOL originPlayingState;
@property (nonatomic) BOOL gestureDisable;
@property (nonatomic) unsigned long long screenState;
@property (nonatomic) BOOL seekTimeGestureActive;
@property (nonatomic) unsigned long long propertyName;
@property (nonatomic) unsigned long long playBtnState;
@property (nonatomic) double delaySeekTime;
@property (nonatomic) double startSeekTime;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (nonatomic) BOOL inBackground;
@property (nonatomic) BOOL needDarkWaterMark;
@property (copy, nonatomic) id /* block */ seekBlock;
@property (nonatomic) long long renderMode;
@property (retain, nonatomic) NSNumber *enableAudioMixedSettings;
@property (retain, nonatomic) BDPScreenCastManager *screenCastManager;
@property (retain, nonatomic) NSMutableArray *rePublishEvents;
@property (weak, nonatomic) id<BDPVideoContainerProtocol> delegate;
@property (retain, nonatomic) UIView *transitionView;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL underInterruption;
@property (copy, nonatomic) id /* block */ videoFullscreenBlock;
@property (retain, nonatomic) BDPVideoMonitor *videoMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long componentID;
@property (retain, nonatomic) id<BDPPageContextProtocol> pageContext;

+ (void)bootstrapLaunch;
+ (void)initialize;

- (void)dismissLoadingView;
- (void)setInitialScene:(id)arg0;
- (void)seek:(long long)arg0 completion:(id /* block */)arg1;
- (void)singleTapAction:(id)arg0;
- (void)setSingleTap:(id)arg0;
- (void)doubleTapAction:(id)arg0;
- (void)setDoubleTap:(id)arg0;
- (void)setOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originFrame;
- (id)trackExtra;
- (void)setTrackExtra:(id)arg0;
- (id)videoMonitor;
- (void)setVideoMonitor:(id)arg0;
- (void)callbackWithError:(id)arg0;
- (id)getUniqueID;
- (void)addGestures;
- (void)setupSettings;
- (void)seekTime:(long long)arg0 completion:(id /* block */)arg1;
- (void)updatePlayProgress:(BOOL)arg0;
- (void)setSmallMode:(BOOL)arg0;
- (id)initialScene;
- (void)setInitialStartTime:(long long)arg0;
- (long long)initialStartTime;
- (void)setPosterView:(id)arg0;
- (id)posterView;
- (double)startSeekTime;
- (void)setStartSeekTime:(double)arg0;
- (void)updatePlaybackRate:(double)arg0;
- (void)setScreenLock:(BOOL)arg0;
- (BOOL)screenLock;
- (BOOL)smallMode;
- (void)handleAudioInterruption:(id)arg0;
- (void)pauseByInterrupt;
- (void)enableUserScreenRecord;
- (void)disableUserScreenRecord;
- (void)beforeFeedbackSnapshot;
- (id)screenCastManager;
- (BOOL)enableScreenCast;
- (void)bdp_screenCastManager:(id)arg0 onError:(id)arg1;
- (void)bdp_screenCastManager:(id)arg0 playStateChanged:(unsigned long long)arg1;
- (void)bdp_screenCastManagerWillShowControlView:(id)arg0;
- (void)bdp_screenCastManager:(id)arg0 didExitScreenCastWithState:(unsigned long long)arg1 currentTime:(double)arg2;
- (void)bdp_screenCastManager:(id)arg0 screenModeDidChange:(BOOL)arg1;
- (void)bdp_screenCastManager:(id)arg0 didSeekTo:(double)arg1;
- (void)bdp_screenCastManager:(id)arg0 progressUpdated:(double)arg1;
- (void)bdp_screenCastManagerDidStartPlay:(id)arg0;
- (void)bdp_screenCastManager:(id)arg0 controlTap:(unsigned long long)arg1;
- (void)setScreenCastManager:(id)arg0;
- (id)initWithModel:(id)arg0 renderMode:(long long)arg1 uniqueID:(id)arg2;
- (void)bdp_videoPlayerStateChange:(long long)arg0 videoPlayer:(id)arg1 extra:(id)arg2;
- (void)setVideoFullscreenBlock:(id /* block */)arg0;
- (void)requestFullscreen:(id)arg0;
- (float)getMediaVolume;
- (void)bdp_trackVideoEventWithState:(long long)arg0 videoPlayer:(id)arg1 extra:(id)arg2;
- (void)changeVideoPlayerViewWhenPipEnd;
- (void)trackEventWithState:(long long)arg0 extra:(id)arg1;
- (void)trackVideoTimelineEvent;
- (void)setRePublishEvents:(id)arg0;
- (void)setNormalModeView:(id)arg0;
- (id)normalModeView;
- (void)setSmallModeView:(id)arg0;
- (id)smallModeView;
- (unsigned long long)getTopBarTypeWithModel:(id)arg0;
- (void)changeScreenLayout;
- (void)sendControlTapEvent:(long long)arg0;
- (void)trackControlEventWithType:(unsigned long long)arg0 andExtraInfo:(id)arg1;
- (void)startScreenCastActionWithFullScreen:(BOOL)arg0;
- (void)screenLockAction;
- (void)showMorePanelMenuView;
- (void)userPlayAction;
- (void)showSpeedSideView;
- (void)setSeekTimeGestureActive:(BOOL)arg0;
- (void)dismissViewWhenPlay;
- (void)showTimeView;
- (void)tryToShowTimeView;
- (void)updateTimeView:(double)arg0;
- (void)dismissTimeView;
- (void)setBottomNewBar:(id)arg0;
- (id)bottomNewBar;
- (void)showDefinitionSideView;
- (void)setScreenLockBtn:(id)arg0;
- (id)screenLockBtn;
- (void)adjustScreenLockView:(BOOL)arg0;
- (void)setCenterPlayBtn:(id)arg0;
- (id)centerPlayBtn;
- (void)showCenterViewIfNeed;
- (void)setPreparePlayBtn:(id)arg0;
- (id)preparePlayBtn;
- (void)prePlayAction;
- (void)retryPlayAction;
- (void)changePlayBtnImage:(unsigned long long)arg0;
- (void)adjustWhenContainerSizeChanged;
- (void)setDelaySeekTime:(double)arg0;
- (void)handleComponentInterruption:(id)arg0;
- (void)setUnderInterruption:(BOOL)arg0;
- (id)dictionaryWithVideoSource;
- (id)getCurrentResolutionDescWithSrc:(id)arg0;
- (id)consoleMessageWithDictionary:(id)arg0;
- (id)consoleMessageWithArray:(id)arg0;
- (id)consoleMessageWithOriginValue:(id)arg0;
- (void)adjustWhenLandScapeScreen:(BOOL)arg0;
- (unsigned long long)playBtnState;
- (void)layoutValueChangeView;
- (void)adjustPlayingControlUIIfNeed:(BOOL)arg0;
- (void)setGestureDisable:(BOOL)arg0;
- (id)valueChangeView;
- (void)dismissValueChangeView;
- (id)speedSideView;
- (void)dismissSpeedSideView:(BOOL)arg0;
- (id)definitionSideView;
- (void)dismissDefinitionSideView:(BOOL)arg0;
- (void)removePortraitAlertViews;
- (void)setPlayBtnState:(unsigned long long)arg0;
- (void)adjustPlayBtnImage;
- (BOOL)isUpdateResolution;
- (void)setIsUpdateResolution:(BOOL)arg0;
- (BOOL)originPlayingState;
- (void)unLockScreenOperation;
- (void)changeBrightOrVolumeAction:(id)arg0;
- (void)setBrightAndVolPan:(id)arg0;
- (id)brightAndVolPan;
- (void)changePlayProgressAction:(id)arg0;
- (void)setProgressPan:(id)arg0;
- (id)progressPan;
- (void)showValueChangeView;
- (void)changePropertyWithValue:(double)arg0;
- (BOOL)gestureDisable;
- (BOOL)isVideoSeekDisabled;
- (id /* block */)seekBlock;
- (void)setSeekBlock:(id /* block */)arg0;
- (double)delaySeekTime;
- (void)setValueChangeView:(id)arg0;
- (void)afterTimeSeekViewDismiss;
- (void)setOriginDefinition:(id)arg0;
- (void)setOriginTime:(double)arg0;
- (void)setOriginPlayingState:(BOOL)arg0;
- (id)getSrcWithSrcType:(long long)arg0 definition:(id)arg1;
- (unsigned long long)getUserPlayActionAccordingToBtnState;
- (void)changeUIWhenPrePlayAction:(BOOL)arg0;
- (void)tryToShowloadingView;
- (void)changeUIWhenChangeSrc;
- (void)setSpeedSideView:(id)arg0;
- (long long)getSourcePositionWithResolutionArr:(id *)arg0;
- (long long)getSourcePositionWithDefinitionArr:(id *)arg0;
- (void)setDefinitionSideView:(id)arg0;
- (void)updatePlayDefinition:(id)arg0;
- (void)lockScreenOperation;
- (void)setMenuAlertView:(id)arg0;
- (id)menuAlertView;
- (void)showMorePanelScreenCastView;
- (void)showMorePanelSpeedView;
- (void)showMorePanelDefinitionView;
- (void)setSpeedAlertView:(id)arg0;
- (void)setDefinitionAlertView:(id)arg0;
- (long long)targetOrientationWithNum:(id)arg0;
- (void)enterFullScreenWithOrientation:(long long)arg0;
- (void)webEnterFullScreenWithOrientationWithOrientation:(long long)arg0;
- (void)adjustWhenFullScreenChanged:(id)arg0;
- (id /* block */)videoFullscreenBlock;
- (void)webExitFullScreen;
- (void)removeFullScreenSuperViews:(id)arg0;
- (id)speedAlertView;
- (id)definitionAlertView;
- (void)rollBackDefiniton;
- (id)originDefinition;
- (id)rePublishEvents;
- (void)rePublishPreRenderEvent;
- (void)updateDarkMark;
- (void)setNeedDarkWaterMark:(BOOL)arg0;
- (void)updatePosterSize:(id)arg0 Mode:(id)arg1;
- (void)displayPauseUI;
- (void)displayPlayingUI;
- (void)delaySeekAction;
- (void)displayPlayEndUI;
- (void)subscribeProgressEventWithVideoPlayer:(id)arg0;
- (BOOL)seekTimeGestureActive;
- (void)showErrorViewWithDict:(id)arg0;
- (void)updateDateWhenSrcChange;
- (BOOL)underInterruption;
- (BOOL)enableBackgroundInterruption;
- (id)enableAudioMixedSettings;
- (void)setEnableAudioMixedSettings:(id)arg0;
- (void)setEnableCasting:(BOOL)arg0;
- (void)prefetchBackgroundImage;
- (BOOL)enableCasting;
- (id)getTrackControlEventNameFromEventType:(unsigned long long)arg0;
- (id)formatControlEventDic:(unsigned long long)arg0 andExtraInfo:(id)arg1;
- (void)setEnablePicture:(BOOL)arg0;
- (void)setEnableStuck:(BOOL)arg0;
- (void)setSeekStartTime:(long long)arg0;
- (long long)seekStartTime;
- (BOOL)enableStuck;
- (BOOL)enablePicture;
- (id)videoFormatDesc;
- (void)exitFullScreenWhenDestroy;
- (double)originTime;
- (BOOL)needDarkWaterMark;
- (id)timeView;
- (id)sliderView;
- (void)setModel:(id)arg0;
- (BOOL)initialState;
- (id)init;
- (void)setInitialState:(BOOL)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)model;
- (long long)renderMode;
- (void)stop;
- (unsigned long long)propertyName;
- (id)topBar;
- (void)setContainerView:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)setup;
- (void)setMediaVolume:(double)arg0;
- (void)setPlayer:(id)arg0;
- (void)setTimeView:(id)arg0;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setSliderView:(id)arg0;
- (void)setRenderMode:(long long)arg0;
- (id)containerView;
- (void)getSnapshotWithCompletion:(id /* block */)arg0;
- (id)controlView;
- (BOOL)isPlaying;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)setTopBar:(id)arg0;
- (id)player;
- (id)transitionView;
- (long long)componentID;
- (void)setComponentID:(long long)arg0;
- (void)setupUI;
- (BOOL)inBackground;
- (void)setPropertyName:(unsigned long long)arg0;
- (void)setTransitionView:(id)arg0;
- (void)exitFullScreen;
- (void)playAction;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)updateWithModel:(id)arg0;
- (void)addObservers;
- (void)setControlView:(id)arg0;
- (id)errorView;
- (void)setErrorView:(id)arg0;
- (void)setupLayout;
- (void)setInBackground:(BOOL)arg0;
- (id)singleTap;
- (unsigned long long)screenState;
- (void)setScreenState:(unsigned long long)arg0;
- (id)doubleTap;

@end
