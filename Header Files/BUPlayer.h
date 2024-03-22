//
//     Generated by private class-dump
//

@class NSString, BU_ZFPlayerView, NSURL, UIView, BUPlayerItem;
@protocol BUVideoPlayerDelegate, BUVideoPlayerTimeDelegate, BUPlayerControlViewProtocol;

@interface BUPlayer : NSObject <BU_ZFPlayerDelegate, BU_ZFPlayerTimeDelegate, BUPlayerSettingsProtocol> {
    BOOL _isJSBPauseVideo;
    id<BUVideoPlayerDelegate> _delegate;
    id<BUVideoPlayerTimeDelegate> _timeDelegate;
    long long _state;
    unsigned long long _decodeMode;
    BUPlayerItem *_currentPlayerItem;
    UIView *_controlView;
    UIView *_view;
    BU_ZFPlayerView *_playerView;
}

@property (retain, nonatomic) NSString *startTimestamp;
@property (retain, nonatomic) NSString *endTimestamp;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) BUPlayerItem *currentPlayerItem;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long decodeMode;
@property (retain, nonatomic) BU_ZFPlayerView *playerView;
@property (weak, nonatomic) id<BUVideoPlayerDelegate> delegate;
@property (weak, nonatomic) id<BUVideoPlayerTimeDelegate> timeDelegate;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double playableDuration;
@property (readonly, nonatomic) double watchedDuration;
@property (readonly, nonatomic) double currentPlayTime;
@property (readonly, nonatomic) NSURL *currentPlayURL;
@property (readonly, nonatomic) UIView<BUPlayerControlViewProtocol> *controlContainer;
@property (nonatomic) long long playerLayerGravity;
@property (nonatomic) long long option;
@property (nonatomic) BOOL mute;
@property (readonly, nonatomic) BOOL isFullScreen;
@property (retain, nonatomic) UIView *controlView;
@property (nonatomic) BOOL shouldAutoRotate;
@property (nonatomic) BOOL isJSBPauseVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoCachePath;
+ (id)playerResourceBundle;
+ (id)playerControlViewImages;
+ (id)playerControlLocalizedString;
+ (void)audioSessionSetting;
+ (id)playerWithPlayerItem:(id)arg0;

- (double)currentPlayTime;
- (id)currentPlayURL;
- (void)bindObserver;
- (id)playerModelWithItem:(id)arg0;
- (void)removePlayerBoundaryTime;
- (void)zf_playerView:(id)arg0 second:(double)arg1;
- (void)zf_playerViewReadyToPlay:(id)arg0;
- (void)zf_playerViewDidPlayFinish:(id)arg0 error:(id)arg1;
- (void)zf_playerViewReadyToPlayWhenApplicationEnterBackground:(id)arg0;
- (void)zf_playerView:(id)arg0 recognizeTapGesture:(id)arg1;
- (void)zf_playerView:(id)arg0 stateDidChanged:(long long)arg1;
- (void)zf_playerBackAction;
- (void)zf_playerControlViewWillShow:(id)arg0 isFullscreen:(BOOL)arg1;
- (void)zf_playerControlViewWillHidden:(id)arg0 isFullscreen:(BOOL)arg1;
- (void)zf_playerViewTouchesBegan:(id)arg0;
- (void)zf_playerBoundaryTimeReached:(id)arg0;
- (void)zf_playerView:(id)arg0 videoDidReachProgressTime:(double)arg1 duration:(double)arg2;
- (void)insertGaosiMohuWithLayer:(id)arg0;
- (void)changeOrientationScreen;
- (void)setPlayerBoundaryTime:(long long)arg0;
- (long long)playerLayerGravity;
- (BOOL)hasAudioSessionInterruption;
- (id)controlContainer;
- (void)setIsJSBPauseVideo:(BOOL)arg0;
- (void)showCoverImage:(BOOL)arg0;
- (double)watchedDuration;
- (BOOL)canPlaying;
- (BOOL)isJSBPauseVideo;
- (void)seekToTime:(double)arg0 autoPlay:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)isEnterBackground;
- (BOOL)shouldAutoRotate;
- (void)setShouldAutoRotate:(BOOL)arg0;
- (void)setPlayerLayerGravity:(long long)arg0;
- (void)insertGaosiMohuWithView:(id)arg0;
- (id)startTimestamp;
- (BOOL)mute;
- (id)endTimestamp;
- (id)init;
- (BOOL)isFullScreen;
- (void)setStartTimestamp:(id)arg0;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (void)stop;
- (double)duration;
- (void)setView:(id)arg0;
- (id)initWithPlayerItem:(id)arg0;
- (id)delegate;
- (void)setEndTimestamp:(id)arg0;
- (id)controlView;
- (id)playerView;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)setPlayerView:(id)arg0;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (void)setOption:(long long)arg0;
- (id)view;
- (void)setupConstraints;
- (void)setMute:(BOOL)arg0;
- (void)replay;
- (void)replaceCurrentItemWithPlayerItem:(id)arg0;
- (id)addPeriodicTimeObserverForInterval:(double)arg0 queue:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)removeTimeObserver:(id)arg0;
- (double)playableDuration;
- (long long)option;
- (id)currentPlayerItem;
- (void)setCurrentPlayerItem:(id)arg0;
- (void)setControlView:(id)arg0;
- (void)resetPlayer;
- (id)timeDelegate;
- (void)setTimeDelegate:(id)arg0;
- (void)setupContent;
- (void)seekToTime:(double)arg0 completion:(id /* block */)arg1;
- (unsigned long long)decodeMode;
- (void)setDecodeMode:(unsigned long long)arg0;

@end