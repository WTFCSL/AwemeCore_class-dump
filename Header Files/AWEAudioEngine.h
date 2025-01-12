//
//     Generated by private class-dump
//

@class NSString, TTVideoEngine, AWEAudioFadeWrapper, UIView;
@protocol AWEAudioEngineDelegate;

@interface AWEAudioEngine : NSObject <TTVideoEngineDelegate, TTVideoEngineDataSource> {
    BOOL _fadeInOutEnable;
    BOOL _isStalling;
    id<AWEAudioEngineDelegate> _delegate;
    TTVideoEngine *_engine;
    AWEAudioFadeWrapper *_audioWrapper;
}

@property (retain, nonatomic) TTVideoEngine *engine;
@property (retain, nonatomic) AWEAudioFadeWrapper *audioWrapper;
@property (nonatomic) BOOL isStalling;
@property (readonly, nonatomic) UIView *playerView;
@property (readonly, nonatomic) long long playBitrate;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double playbackTime;
@property (readonly, nonatomic) double playableDuration;
@property (readonly, nonatomic) double durationWatched;
@property (readonly, nonatomic) long long playbackState;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isLoadStatePlayable;
@property (nonatomic) BOOL looping;
@property (nonatomic) BOOL radioMode;
@property (nonatomic) BOOL fadeInOutEnable;
@property (weak, nonatomic) id<AWEAudioEngineDelegate> delegate;
@property (nonatomic) long long scaleMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)audioWrapper;
- (void)setAudioWrapper:(id)arg0;
- (void)setVid:(id)arg0;
- (void)setPlayUrl:(id)arg0;
- (void)setIsStalling:(BOOL)arg0;
- (BOOL)isStalling;
- (BOOL)radioMode;
- (void)setRadioMode:(BOOL)arg0;
- (long long)playBitrate;
- (void)setVideoModel:(id)arg0;
- (BOOL)fadeInOutEnable;
- (void)setFadeInOutEnable:(BOOL)arg0;
- (BOOL)isLoadStatePlayable;
- (void)setCustomHeaderValue:(id)arg0 forKey:(id)arg1;
- (void)videoEngine:(id)arg0 loadStateDidChanged:(unsigned long long)arg1;
- (void)videoEngineUserStopped:(id)arg0;
- (void)videoEngineDidFinish:(id)arg0 error:(id)arg1;
- (void)videoEngineDidFinish:(id)arg0 videoStatusException:(long long)arg1;
- (void)videoEngineCloseAysncFinish:(id)arg0;
- (void)videoEngine:(id)arg0 playbackStateDidChanged:(long long)arg1;
- (void)videoEngine:(id)arg0 loadStateDidChanged:(unsigned long long)arg1 extra:(id)arg2;
- (void)videoEngineReadyToDisPlay:(id)arg0;
- (void)videoEnginePrepared:(id)arg0;
- (void)videoEngineReadyToPlay:(id)arg0;
- (void)videoEngine:(id)arg0 mdlKey:(id)arg1 hitCacheSze:(long long)arg2;
- (void)setAudioEffectEnabled:(BOOL)arg0;
- (void)setAudioEffectType:(long long)arg0;
- (void)setAudioEffectSrcLoudness:(double)arg0;
- (void)setAudioEffectSrcPeak:(double)arg0;
- (id)apiForFetcher:(unsigned long long)arg0;
- (long long)getPlaybackState:(long long)arg0;
- (void)seekPlaybackTime:(double)arg0 completion:(id /* block */)arg1;
- (void)seekPlaybackTime:(double)arg0 completion:(id /* block */)arg1 renderComplete:(id /* block */)arg2;
- (void)setPlayUrl:(id)arg0 key:(id)arg1;
- (void)setPlayUrls:(id)arg0;
- (void)setPlayUrls:(id)arg0 key:(id)arg1;
- (void)setAudioEffectTargetLoudness:(double)arg0;
- (void)setAudioEffectForbidCompressor:(BOOL)arg0;
- (long long)playbackState;
- (void)setQuality:(unsigned long long)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (void)stop;
- (id)engine;
- (double)duration;
- (id)delegate;
- (BOOL)isPlaying;
- (double)playbackTime;
- (id)playerView;
- (void)setDelegate:(id)arg0;
- (void)setLooping:(BOOL)arg0;
- (void)play;
- (void)pause;
- (void)setEngine:(id)arg0;
- (BOOL)looping;
- (void)prepareToPlay;
- (double)durationWatched;
- (double)playableDuration;
- (void)setScaleMode:(long long)arg0;
- (long long)scaleMode;

@end
