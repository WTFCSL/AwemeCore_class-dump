//
//     Generated by private class-dump
//

@class NSDictionary, AWEGPlayerInteractionView, AWEGPlayerConfig, AWEAwemeModel, NSString, AWEGPlayerVideoModel, UIViewController;
@protocol AWEGPlayerDelegate, AWEGPlayerInteractionDelegate, AWEPlayVideoViewControllerProtocol, IESVideoPlayerProtocol;

@interface AWEGPlayerViewController : UIViewController <AWEPlayVideoDelegate, AWEGPlayerViewControllerProtocol, IESVideoPlayerDelegate, AWEGPlayerProtocol> {
    UIViewController<AWEPlayVideoViewControllerProtocol> *_playerViewController;
    id<AWEGPlayerInteractionDelegate> _interactionDelegate;
    id<AWEGPlayerDelegate> _playerDelegate;
    long long _playerState;
    NSDictionary *_logExtraDict;
    AWEAwemeModel *_model;
    id<IESVideoPlayerProtocol> _playerController;
    AWEGPlayerInteractionView *_interactionView;
    AWEGPlayerConfig *_config;
    NSString *_playURL;
    AWEGPlayerVideoModel *_playModel;
    double _eachPlayTime;
    unsigned long long _totalStallCount;
    double _totalStallTotalDuration;
    double _stallStartTimestamp;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> *playerViewController;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (retain, nonatomic) AWEGPlayerInteractionView *interactionView;
@property (retain, nonatomic) AWEGPlayerConfig *config;
@property (copy, nonatomic) NSString *playURL;
@property (retain, nonatomic) AWEGPlayerVideoModel *playModel;
@property (nonatomic) double eachPlayTime;
@property (nonatomic) unsigned long long totalStallCount;
@property (nonatomic) double totalStallTotalDuration;
@property (nonatomic) double stallStartTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (weak, nonatomic) id<AWEGPlayerDelegate> playerDelegate;
@property (weak, nonatomic) id<AWEGPlayerInteractionDelegate> interactionDelegate;
@property (nonatomic) long long playerState;

- (void)player:(id)arg0 playbackFailedWithError:(id)arg1;
- (void)playerDidReadyForDisplay:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)player:(id)arg0 didChangeStallState:(long long)arg1;
- (void)player:(id)arg0 deviceOpenedWithStreamType:(long long)arg1;
- (void)player:(id)arg0 avOutsyncStateDidChangedWithType:(unsigned long long)arg1 extraInfo:(id)arg2;
- (void)player:(id)arg0 switchAudioInfoCompleted:(unsigned long long)arg1;
- (void)player:(id)arg0 downloadProgressWithKey:(id)arg1 videoId:(id)arg2 cacheSize:(long long)arg3 mediaSize:(long long)arg4;
- (void)playerWillLoopPlaying:(id)arg0;
- (void)player:(id)arg0 playbackFailedForURL:(id)arg1 error:(id)arg2;
- (void)player:(id)arg0 didChangeStallState:(long long)arg1 actionType:(long long)arg2 reason:(unsigned long long)arg3;
- (void)player:(id)arg0 didFinishVideoDataDownloadForURL:(id)arg1;
- (void)player:(id)arg0 noVideoDataToDownloadForURL:(id)arg1;
- (void)player:(id)arg0 didFetchVideoModel:(id)arg1;
- (void)player:(id)arg0 didChangePlaybackRate:(double)arg1;
- (void)player:(id)arg0 didUpdateVRHeadPoseWithYaw:(double)arg1 pitch:(double)arg2 roll:(double)arg3;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (double)customTimerPeriodic:(id)arg0;
- (void)player:(id)arg0 updatePlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)setPlayerDelegate:(id)arg0;
- (void)player:(id)arg0 updatePlayProgressWithTime:(double)arg1 totalDuration:(double)arg2;
- (void)player:(id)arg0 updateTotalPlayDuration:(double)arg1;
- (void)player:(id)arg0 didUpdateFromPlayViewController:(id)arg1;
- (void)playerVideoController:(id)arg0 didRecreatePlayerController:(id)arg1;
- (void)playerWillStartNextLoop:(id)arg0;
- (void)playerWillStartNextLoopFinished:(id)arg0;
- (void)player:(id)arg0 bufferingUpdate:(double)arg1;
- (void)playerDidStopped:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackToAction:(long long)arg1;
- (void)videoResourceDidRecallInPlayer:(id)arg0;
- (void)player:(id)arg0 maskInfoCallBackWithSVG:(id)arg1 pts:(unsigned long long)arg2;
- (id)playerDelegate;
- (id)objectsByProtocol:(id)arg0;
- (id)objectsBySelector:(SEL)arg0;
- (id)objectByProtocol:(id)arg0;
- (id)initWithConfig:(id)arg0 logExtraDict:(id)arg1;
- (void)setEachPlayTime:(double)arg0;
- (void)addPeriodicTimeObserver;
- (void)setStallStartTimestamp:(double)arg0;
- (double)eachPlayTime;
- (double)stallStartTimestamp;
- (void)setupPlayerController;
- (void)setPlayModel:(id)arg0;
- (void)updatePlayerViewLayout;
- (BOOL)isPlayerUnplayedStatus;
- (void)updateVideoScalingMode;
- (void)prepareToPlayForSimplePlayer;
- (void)resetStallStatisticsState;
- (id)prfCommonParams;
- (double)totalStallTotalDuration;
- (void)setTotalStallTotalDuration:(double)arg0;
- (id)playModel;
- (id)_getRadioAccess;
- (void)setupPlayerViewController;
- (void)updateWithUrl:(id)arg0;
- (void)updateWithPlayerModel:(id)arg0;
- (void)setModel:(id)arg0;
- (id)playerViewController;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setInteractionView:(id)arg0;
- (id)model;
- (id)playerController;
- (id)config;
- (void)setInteractionDelegate:(id)arg0;
- (void)stop;
- (id)interactionDelegate;
- (void)setPlayerController:(id)arg0;
- (void)setPlayerState:(long long)arg0;
- (id)context;
- (long long)playerState;
- (id)interactionView;
- (void)play;
- (void)pause;
- (void)reset;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)setupUI;
- (void)prepareToPlay;
- (void)setPlayerViewController:(id)arg0;
- (unsigned long long)totalStallCount;
- (void)setTotalStallCount:(unsigned long long)arg0;
- (id)playURL;
- (void)setPlayURL:(id)arg0;
- (void)updateWithModel:(id)arg0;

@end