//
//     Generated by private class-dump
//

@class AWEDemaciaLoadingAndVolumeView, NSMutableDictionary, NSDictionary, UITapGestureRecognizer, AWEDemaciaPlayerControlView, UIView, AWEDemaciaPlayerVideoModel, NSString, AWEDemaciaVideoBSModel, NSTimer, AWEDemaciaPlayerInitModel, NSNumber, CADisplayLink, UIImageView;
@protocol AWEDemaciaPlayerViewDelegate, IESCommonVideoPlayerProtocol;

@interface AWEDemaciaPlayerView : UIView <AWEStudioDemaciaPlayerViewProtocol, AWEDemaciaPlayerControlViewDelegate, AWEDemaciaPlayerView> {
    BOOL _isQuiet;
    BOOL _notPlayWhenAppear;
    BOOL _usingForLongVideoNewStyle;
    BOOL _isTTPlayer;
    BOOL _isQuietModedisabled;
    BOOL _notStop;
    BOOL _needsRespondingToVideoResourceRecall;
    BOOL _slidingSeekTime;
    BOOL _slidingSeekTimeSucceed;
    BOOL _firstFramePlay;
    BOOL _finishedLog;
    BOOL _isResourceRecallEnabled;
    id<AWEDemaciaPlayerViewDelegate> _delegate;
    UITapGestureRecognizer *_tap;
    double _fullScreenWidth;
    double _fullScreenHeight;
    AWEDemaciaPlayerControlView *_controlView;
    id<IESCommonVideoPlayerProtocol> _playerController;
    long long _currentPlayState;
    NSNumber *_realStartPlayTime;
    NSNumber *_realEndPlayTime;
    NSString *_enterFrom;
    UIView *_loadingView;
    AWEDemaciaLoadingAndVolumeView *_volumeLoadingView;
    UIImageView *_coverImageView;
    CADisplayLink *_displayLink;
    double _playTime;
    double _originHeight;
    double _originWidth;
    AWEDemaciaVideoBSModel *_bsModel;
    AWEDemaciaPlayerVideoModel *_videoModel;
    AWEDemaciaPlayerInitModel *_infoModel;
    NSDictionary *_paramDic;
    long long _trategyType;
    NSTimer *_quietModeTimer;
    double _eachPlayTime;
    double _stallStartTimestamp;
    unsigned long long _stallCount;
    double _stallTotalDuration;
    NSMutableDictionary *_trackContext;
}

@property (readonly, nonatomic) long long acc_currentPlayState;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESCommonVideoPlayerProtocol> playerController;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) AWEDemaciaLoadingAndVolumeView *volumeLoadingView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double playTime;
@property (nonatomic) double originHeight;
@property (nonatomic) double originWidth;
@property (retain, nonatomic) AWEDemaciaVideoBSModel *bsModel;
@property (retain, nonatomic) AWEDemaciaPlayerVideoModel *videoModel;
@property (retain, nonatomic) AWEDemaciaPlayerInitModel *infoModel;
@property (copy, nonatomic) NSDictionary *paramDic;
@property (nonatomic) long long currentPlayState;
@property (nonatomic) long long trategyType;
@property (retain, nonatomic) NSTimer *quietModeTimer;
@property (nonatomic) BOOL slidingSeekTime;
@property (nonatomic) BOOL slidingSeekTimeSucceed;
@property (nonatomic) double eachPlayTime;
@property (nonatomic) double stallStartTimestamp;
@property (nonatomic) unsigned long long stallCount;
@property (nonatomic) double stallTotalDuration;
@property (nonatomic) BOOL firstFramePlay;
@property (nonatomic) BOOL finishedLog;
@property (retain, nonatomic) NSMutableDictionary *trackContext;
@property (nonatomic) BOOL isResourceRecallEnabled;
@property (weak, nonatomic) id<AWEDemaciaPlayerViewDelegate> delegate;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) double fullScreenWidth;
@property (nonatomic) double fullScreenHeight;
@property (nonatomic) BOOL isQuiet;
@property (nonatomic) BOOL notPlayWhenAppear;
@property (retain, nonatomic) AWEDemaciaPlayerControlView *controlView;
@property (nonatomic) BOOL usingForLongVideoNewStyle;
@property (nonatomic) BOOL isTTPlayer;
@property (nonatomic) BOOL isQuietModedisabled;
@property (retain, nonatomic) NSNumber *realStartPlayTime;
@property (retain, nonatomic) NSNumber *realEndPlayTime;
@property (nonatomic) BOOL notStop;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL needsRespondingToVideoResourceRecall;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStallCount:(unsigned long long)arg0;
- (void)setEnterFrom:(id)arg0;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)enterFrom;
- (void)updatePlayerIfNeeded;
- (unsigned long long)stallCount;
- (void)setStartPlayTime:(double)arg0;
- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (id)infoModel;
- (void)updateCoverImage;
- (id)bsModel;
- (void)setBsModel:(id)arg0;
- (BOOL)needsRespondingToVideoResourceRecall;
- (void)setNeedsRespondingToVideoResourceRecall:(BOOL)arg0;
- (BOOL)alertIfNotValid;
- (long long)contentModeForDefaultVideoCover;
- (long long)scaleModeForVideo;
- (void)setInfoModel:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)setPlayTime:(double)arg0;
- (void)onVolumeChangeNotification:(id)arg0;
- (void)setOriginWidth:(double)arg0;
- (void)setOriginHeight:(double)arg0;
- (double)originWidth;
- (double)originHeight;
- (long long)currentPlayState;
- (void)refreshDemaciaVideoModel:(id)arg0 paramDic:(id)arg1;
- (void)demaciaPlayerSliderTouchBegan:(id)arg0;
- (void)demaciaPlayerSliderValueChanged:(id)arg0;
- (void)demaciaPlayerSliderTouchEnded:(id)arg0;
- (void)demaciaPlayerFullScreenButtonClicked:(long long)arg0;
- (void)demaciaPlayButtonClicked:(BOOL)arg0;
- (void)demaciaPlayerBackButtonClicked;
- (void)demaciaPlayerReplayButtonClicked;
- (void)demaciaPlayerHideFullScreenBtn:(BOOL)arg0;
- (BOOL)isResourceRecallEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 initModel:(id)arg1;
- (id)acc_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 initModel:(id)arg1;
- (void)acc_refreshDemaciaVideoModel:(id)arg0 paramDic:(id)arg1;
- (long long)acc_currentPlayState;
- (void)realPlay;
- (void)setFullScreenWidth:(double)arg0;
- (void)setFullScreenHeight:(double)arg0;
- (void)setSlidingSeekTimeSucceed:(BOOL)arg0;
- (void)setCurrentPlayState:(long long)arg0;
- (void)addVideoLoadingView;
- (void)addControlView;
- (void)screenTap:(id)arg0;
- (void)addIESVideoPlayer;
- (void)addVolumeLoadingView;
- (void)stopAllPlayerNotice:(id)arg0;
- (void)setIsResourceRecallEnabled:(BOOL)arg0;
- (BOOL)_isResourceRecalledForRecallMessage:(id)arg0;
- (double)fullScreenHeight;
- (double)fullScreenWidth;
- (id)volumeLoadingView;
- (void)setParamDic:(id)arg0;
- (void)initCommonTrack;
- (void)resetToBeginTime;
- (void)enterQuietMode:(BOOL)arg0;
- (BOOL)firstFramePlay;
- (double)videoStartPlayTime;
- (id)realStartPlayTime;
- (long long)trategyType;
- (id)_isCurrentVideoH265;
- (id)monitorSeekStateKey;
- (void)setEachPlayTime:(double)arg0;
- (void)setFirstFramePlay:(BOOL)arg0;
- (BOOL)isQuietModedisabled;
- (id)quietModeTimer;
- (void)setQuietModeTimer:(id)arg0;
- (BOOL)usingForLongVideoNewStyle;
- (BOOL)slidingSeekTime;
- (void)addPeriodicTimeObserver;
- (void)registerWillLoopBlock;
- (void)registerVideoDownloadBlock;
- (void)registerNoVideoDownloadBlock;
- (void)registerPlaybackFailedBlock;
- (void)registerStallStateChangeBlock;
- (void)registerDidReadyForDisplayBlock;
- (void)registerPlaybackStateChangeBlock;
- (void)registerSingleUrlPlaybackFailedBlock;
- (BOOL)slidingSeekTimeSucceed;
- (id)realEndPlayTime;
- (BOOL)notStop;
- (void)setVolumeLoadingView:(id)arg0;
- (id)longAndShortVideoModel;
- (void)setFinishedLog:(BOOL)arg0;
- (void)setTrategyType:(long long)arg0;
- (id)playURIString;
- (void)checkVideoSize:(struct CGSize { double x0; double x1; })arg0 fromPlayer:(BOOL)arg1;
- (void)setNotPlayWhenAppear:(BOOL)arg0;
- (void)setSlidingSeekTime:(BOOL)arg0;
- (id)monitorFirstFrameKey;
- (id)monitorFirstFrameLogKey;
- (id)monitorpPlayErrorKey;
- (void)playResumeDisplayLink;
- (id)__qualityType;
- (void)resetDisplayLink;
- (void)setStallStartTimestamp:(double)arg0;
- (double)eachPlayTime;
- (BOOL)finishedLog;
- (void)commitMonitor;
- (double)stallStartTimestamp;
- (double)stallTotalDuration;
- (void)setStallTotalDuration:(double)arg0;
- (id)monitorpPlayBlockKey;
- (id)paramDic;
- (void)doActionIfNotValid;
- (void)doActionIfNotValidWithText:(id)arg0;
- (void)setControlViewMode:(long long)arg0;
- (void)setControlRotateMode:(long long)arg0;
- (void)rotateAnimation:(long long)arg0 complete:(id /* block */)arg1;
- (BOOL)notPlayWhenAppear;
- (void)setUsingForLongVideoNewStyle:(BOOL)arg0;
- (BOOL)isTTPlayer;
- (void)setIsTTPlayer:(BOOL)arg0;
- (void)setIsQuietModedisabled:(BOOL)arg0;
- (void)setRealStartPlayTime:(id)arg0;
- (void)setRealEndPlayTime:(id)arg0;
- (void)setNotStop:(BOOL)arg0;
- (void)setDisplayLink:(id)arg0;
- (void).cxx_destruct;
- (void)setAlpha:(double)arg0;
- (id)playerController;
- (double)playTime;
- (BOOL)stop;
- (void)setPlayerController:(id)arg0;
- (id)delegate;
- (void)stopDisplayLink;
- (id)displayLink;
- (id)controlView;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setHidden:(BOOL)arg0;
- (BOOL)play;
- (BOOL)pause;
- (void)reset;
- (id)loginUser;
- (void)replay;
- (id)tap;
- (void)setTap:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setControlView:(id)arg0;
- (BOOL)isQuiet;
- (void)setIsQuiet:(BOOL)arg0;
- (void)seekToTime:(double)arg0 completion:(id /* block */)arg1;

@end