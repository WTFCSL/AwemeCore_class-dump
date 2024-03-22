//
//     Generated by private class-dump
//

@class ACCImageAlbumAudioPlayer, NSMutableArray;

@interface ACCSequenceBGMPlayer : NSObject {
    BOOL _isPlaying;
    BOOL _timeObserving;
    ACCImageAlbumAudioPlayer *_audioPlayer;
    NSMutableArray *_timeObserveCallbackList;
}

@property (retain, nonatomic) ACCImageAlbumAudioPlayer *audioPlayer;
@property (retain, nonatomic) NSMutableArray *timeObserveCallbackList;
@property (nonatomic) BOOL timeObserving;
@property (readonly, nonatomic) BOOL isPlaying;

- (double)currentPlayTime;
- (void)removeTimeObserver;
- (double)bgmVolume;
- (void)setVolumeForAudio:(double)arg0;
- (void)pauseMusic;
- (id)addAudioPlayerTimeObserver:(id /* block */)arg0;
- (void)removeAudioPlayerTimeObserver:(id)arg0;
- (void)continuePlayMusic;
- (void)setAudioClipRange:(id)arg0;
- (void)replaceMusic:(id)arg0;
- (void)replayMusic;
- (void)p_logInfoWithLogMsg:(id)arg0;
- (void)setupAudioPlayerIfNeed;
- (id)timeObserveCallbackList;
- (void)addAudioPlayerTimeObserver;
- (BOOL)timeObserving;
- (void)setTimeObserving:(BOOL)arg0;
- (void)setTimeObserveCallbackList:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)audioPlayer;
- (BOOL)isPlaying;
- (void)setVolume:(double)arg0;
- (void)setAudioPlayer:(id)arg0;
- (void)seekToTime:(double)arg0 completion:(id /* block */)arg1;

@end
