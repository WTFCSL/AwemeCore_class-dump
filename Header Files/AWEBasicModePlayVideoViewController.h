//
//     Generated by private class-dump
//

@class NSArray, UIImageView, AWEAwemeModel, UIView, NSString;
@protocol AWEBasicModeDisplayViewControllerDelegate, IESVideoPlayerProtocol;

@interface AWEBasicModePlayVideoViewController : UIViewController <AWEBasicModeDisplayViewControllerProtocol, IESVideoPlayerDelegate> {
    BOOL _isReady;
    BOOL _shouldPrepareForDisplay;
    BOOL _pauseBySingleClick;
    BOOL _isFullScreen;
    BOOL _isLandscape;
    BOOL _copyFromOtherVideoController;
    BOOL _previousKeepAlive;
    BOOL _isPlaybackFailed;
    BOOL _isPlayFailedShown;
    BOOL _hasShownDisconnectToast;
    id<IESVideoPlayerProtocol> _playerController;
    AWEAwemeModel *_model;
    long long _playState;
    id<AWEBasicModeDisplayViewControllerDelegate> _interactionDelegate;
    UIView *_loadingView;
    UIImageView *_coverImageView;
    UIImageView *_underImageView;
    NSArray *_playURLs;
    id /* block */ _playVideo;
    id /* block */ _didChangePlayBackAction;
}

@property (nonatomic) BOOL previousKeepAlive;
@property (nonatomic) BOOL isPlaybackFailed;
@property (nonatomic) BOOL isPlayFailedShown;
@property (nonatomic) BOOL hasShownDisconnectToast;
@property (copy, nonatomic) NSArray *playURLs;
@property (copy, nonatomic) id /* block */ playVideo;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *underImageView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long playState;
@property (weak, nonatomic) id<AWEBasicModeDisplayViewControllerDelegate> interactionDelegate;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL copyFromOtherVideoController;
@property (copy, nonatomic) id /* block */ didChangePlayBackAction;
@property (nonatomic) BOOL shouldPrepareForDisplay;
@property (nonatomic) BOOL pauseBySingleClick;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (nonatomic) BOOL isReady;
@property (nonatomic) BOOL isSeeking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)arg0 playbackFailedWithError:(id)arg1;
- (void)playerDidReadyForDisplay:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)player:(id)arg0 didChangeStallState:(long long)arg1 actionType:(long long)arg2 reason:(unsigned long long)arg3;
- (BOOL)shouldPrepareForDisplay;
- (void)setShouldPrepareForDisplay:(BOOL)arg0;
- (void)updatePlayerIfNeeded;
- (BOOL)pauseBySingleClick;
- (void)setPauseBySingleClick:(BOOL)arg0;
- (void)updateCoverImage;
- (BOOL)hasShownDisconnectToast;
- (void)setHasShownDisconnectToast:(BOOL)arg0;
- (id)playURLs;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)onApplicationWillEnterForeground;
- (void)onApplicationDidEnterBackground;
- (BOOL)p_play;
- (BOOL)p_pause;
- (id /* block */)didChangePlayBackAction;
- (void)setDidChangePlayBackAction:(id /* block */)arg0;
- (void)setCopyFromOtherVideoController:(BOOL)arg0;
- (void)setPreviousKeepAlive:(BOOL)arg0;
- (void)p_addVideoLoadingView;
- (void)p_addAVAudioSessionObservers;
- (void)p_dismissSystemVolumeViewForPoorDevice;
- (void)p_recreatePlayer;
- (void)p_prepareToPlay;
- (void)p_muteMusicIfNeeded;
- (long long)p_contentModeForDefaultVideoCover;
- (BOOL)copyFromOtherVideoController;
- (void)p_cancelPendingPlayTimeoutCheck;
- (void)stopLoadingAnimationAction;
- (unsigned long long)p_getEnablePrivacyDisagreeBasicMode;
- (BOOL)isPlayFailedShown;
- (void)setIsPlayFailedShown:(BOOL)arg0;
- (void)setIsPlaybackFailed:(BOOL)arg0;
- (void)playLoadingAnimationAction;
- (id)underImageView;
- (long long)p_scaleModeForVideo;
- (void)p_resumePlayVideo;
- (void)p_restartPlayVideo;
- (void)setPlayVideo:(id /* block */)arg0;
- (void)setUnderImageView:(id)arg0;
- (id)p_playURIString;
- (void)setPlayURLs:(id)arg0;
- (void)p_checkPlayTimeout;
- (BOOL)isPlaybackFailed;
- (BOOL)previousKeepAlive;
- (void)prepareForDisplay;
- (void)setModel:(id)arg0;
- (id)init;
- (BOOL)isFullScreen;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)playerController;
- (void)setInteractionDelegate:(id)arg0;
- (BOOL)isReady;
- (BOOL)stop;
- (id)interactionDelegate;
- (void)viewWillDisappear:(BOOL)arg0;
- (BOOL)play:(BOOL)arg0;
- (void)setIsLandscape:(BOOL)arg0;
- (void)setPlayerController:(id)arg0;
- (BOOL)isActive;
- (void)didReceiveMemoryWarning;
- (BOOL)isLandscape;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (BOOL)pause:(BOOL)arg0;
- (void)setIsReady:(BOOL)arg0;
- (void)setIsFullScreen:(BOOL)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (long long)playState;
- (void)setPlayState:(long long)arg0;
- (id /* block */)playVideo;

@end
