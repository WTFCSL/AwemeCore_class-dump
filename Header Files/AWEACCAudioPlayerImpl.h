//
//     Generated by private class-dump
//

@class AWEMusicModel, AWEAVPlayerWrapper, NSString;
@protocol ACCMusicModelProtocol, ACCPropRecommendMusicProtocol;

@interface AWEACCAudioPlayerImpl : NSObject <AWEAVPlayerWrapperDelegate, ACCAudioPlayerProtocol> {
    BOOL canBackgroundPlay;
    id<ACCPropRecommendMusicProtocol> delegate;
    AWEAVPlayerWrapper *_audioPlayer;
    unsigned long long _playerStatus;
    AWEMusicModel *_playingMusicModel;
    id<ACCMusicModelProtocol> _accPlayingMusic;
}

@property (retain, nonatomic) AWEAVPlayerWrapper *audioPlayer;
@property (nonatomic) unsigned long long playerStatus;
@property (retain, nonatomic) AWEMusicModel *playingMusicModel;
@property (retain, nonatomic) id<ACCMusicModelProtocol> accPlayingMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long playStatus;
@property (weak, nonatomic) id<ACCPropRecommendMusicProtocol> delegate;
@property (readonly, nonatomic) BOOL canBackgroundPlay;

+ (id)audioPlayerWrapperConfig;

- (double)currentPlayTime;
- (void)removeTimeObserver;
- (BOOL)canBackgroundPlay;
- (unsigned long long)playStatus;
- (void)continuePlay;
- (id)playingURL;
- (id)playingMusic;
- (void)pauseWithFadeOutDuration:(double)arg0 completion:(id /* block */)arg1;
- (void)playerWrapper:(id)arg0 didChangePlayStatus:(unsigned long long)arg1;
- (void)setAudioClipRangeWithStartTime:(double)arg0 endTime:(double)arg1 loopWay:(long long)arg2;
- (void)setupAudioPlayerWithPlayingBlock:(id /* block */)arg0;
- (void)setAccPlayingMusic:(id)arg0;
- (void)setPlayingMusicModel:(id)arg0;
- (id)playingMusicModel;
- (void)updateServiceWithMusicModel:(id)arg0 audioPlayerPlayingBlock:(id /* block */)arg1;
- (void)configWithPlayerStatus:(unsigned long long)arg0 animated:(BOOL)arg1;
- (id)accPlayingMusic;
- (void)setRepeatCount:(double)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)volume;
- (id)audioPlayer;
- (id)delegate;
- (void)setVolume:(double)arg0;
- (void)setAudioPlayer:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)addPeriodicTimeObserverForInterval:(double)arg0 queue:(id)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)playerStatus;
- (void)setPlayerStatus:(unsigned long long)arg0;
- (void)seekToTime:(double)arg0 completion:(id /* block */)arg1;

@end