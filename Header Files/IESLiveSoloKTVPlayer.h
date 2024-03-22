//
//     Generated by private class-dump
//

@class AVPlayer, AVPlayerItem, IESLiveGCDTimer;
@protocol IESLiveSoloKTVPlayerDelegate;

@interface IESLiveSoloKTVPlayer : NSObject {
    BOOL _needLoop;
    BOOL _needAutoPlay;
    BOOL _isLoadingOrPlaying;
    int _seekDelay;
    id<IESLiveSoloKTVPlayerDelegate> _delegate;
    AVPlayer *_player;
    double _timeInterval;
    id /* block */ _playFinishCallBack;
    id _timeObserver;
    AVPlayerItem *_playerItem;
    IESLiveGCDTimer *_playPauseTimer;
    double _lastActionTime;
}

@property (weak, nonatomic) id timeObserver;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) IESLiveGCDTimer *playPauseTimer;
@property (nonatomic) double lastActionTime;
@property (nonatomic) int seekDelay;
@property (nonatomic) BOOL isLoadingOrPlaying;
@property (weak, nonatomic) id<IESLiveSoloKTVPlayerDelegate> delegate;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) double timeInterval;
@property (nonatomic) BOOL needLoop;
@property (nonatomic) BOOL needAutoPlay;
@property (copy, nonatomic) id /* block */ playFinishCallBack;

- (double)playerDuration;
- (BOOL)needLoop;
- (void)mute:(BOOL)arg0;
- (void)clearPlayer;
- (BOOL)needAutoPlay;
- (double)lastActionTime;
- (void)setLastActionTime:(double)arg0;
- (void)didPlayerPlayFinish;
- (void)loadPlayerWithPlayerItem:(id)arg0;
- (BOOL)isLoadingOrPlaying;
- (void)loadPlayerWithURL:(id)arg0;
- (void)setSeekDelay:(int)arg0;
- (void)locateToOrigin;
- (id /* block */)playFinishCallBack;
- (id)playPauseTimer;
- (void)setPlayPauseTimer:(id)arg0;
- (void)setupTimeObserverWithInterval:(double)arg0;
- (void)setIsLoadingOrPlaying:(BOOL)arg0;
- (void)stopPlayPauseTimer;
- (int)seekDelay;
- (id)initPlayerWithURL:(id)arg0 needAutoPlay:(BOOL)arg1;
- (id)initPlayerWithPlayerItem:(id)arg0 needAutoPlay:(BOOL)arg1;
- (BOOL)changePlayPauseState;
- (void)setNeedLoop:(BOOL)arg0;
- (void)setNeedAutoPlay:(BOOL)arg0;
- (void)setPlayFinishCallBack:(id /* block */)arg0;
- (id)init;
- (double)timeInterval;
- (id)playerLayer;
- (void).cxx_destruct;
- (void)setTimeInterval:(double)arg0;
- (void)setPlayer:(id)arg0;
- (id)delegate;
- (BOOL)isPlaying;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (BOOL)isMuted;
- (id)player;
- (id)playerItem;
- (void)setPlayerItem:(id)arg0;
- (void)seek:(double)arg0;
- (long long)playerStatus;
- (void)setTimeObserver:(id)arg0;
- (id)timeObserver;

@end