//
//     Generated by private class-dump
//

@class NSString, TTVideoEngine, UIView, TTVideoEngineThumbInfo;
@protocol IESLiveVideoPlayerControllerDelegate;

@interface IESLiveVideoPlayerController : NSObject <TTVideoEngineAIBarrageDelegate, TTVideoEngineDataSource, TTVideoEngineDelegate, TTVideoEngineResolutionDelegate, TTVideoEngineMaskDelegate> {
    BOOL _pauseOnResignActive;
    BOOL _hardwareDecode;
    BOOL _shouldInitEyesProtect;
    BOOL _enableEyesProtect;
    BOOL _needPlayWithoutSettingAudioSession;
    BOOL _playFinish;
    BOOL _isPauseByUser;
    BOOL _needResumePlay;
    BOOL _isStalling;
    NSString *_videoId;
    NSString *_businessToken;
    TTVideoEngine *_playerEngine;
    id<IESLiveVideoPlayerControllerDelegate> _delegate;
    TTVideoEngineThumbInfo *_thumbInfo;
    id /* block */ _eyesProtectLutImageBlock;
    double _eyesProtectFilterValue;
    NSString *_playerTag;
    NSString *_playerSubTag;
    NSString *_videoToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *businessToken;
@property (retain, nonatomic) TTVideoEngine *playerEngine;
@property (retain, nonatomic) TTVideoEngineThumbInfo *thumbInfo;
@property (nonatomic) BOOL playFinish;
@property (nonatomic) BOOL isPauseByUser;
@property (nonatomic) BOOL needResumePlay;
@property (nonatomic) BOOL isStalling;
@property (copy, nonatomic) NSString *videoToken;
@property (weak, nonatomic) id<IESLiveVideoPlayerControllerDelegate> delegate;
@property (readonly, nonatomic) UIView *view;
@property (nonatomic) BOOL pauseOnResignActive;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic, getter=isPause) BOOL pause;
@property (nonatomic, getter=getPlaybackSpeed, setter=setPlaybackSpeed:) double playbackSpeed;
@property (nonatomic, getter=getVolume, setter=setVolume:) double volume;
@property (nonatomic, getter=getHardwareDecode, setter=setHardwareDecode:) BOOL hardwareDecode;
@property (nonatomic, getter=isMuted, setter=setMute:) BOOL mute;
@property (nonatomic, getter=isLooping, setter=setLoop:) BOOL loop;
@property (readonly, nonatomic, getter=getCurrentPlaybackTime) double currentPlaybackTime;
@property (readonly, nonatomic, getter=getDuration) double duration;
@property (readonly, nonatomic, getter=getPlayableDuration) double playableDuration;
@property (readonly, nonatomic, getter=getDurationWatched) double durationWatched;
@property (readonly, nonatomic, getter=getCurrentResolution) unsigned long long currentResolution;
@property (nonatomic, getter=getBarrageMaskEnabled, setter=setBarrageMaskEnabled:) BOOL barrageMaskEnabled;
@property (readonly, nonatomic, getter=isSupportBarrageMask) BOOL supportBarrageMask;
@property (nonatomic, getter=getAIBarrageEnabled, setter=setAIBarrageEnabled:) BOOL aiBarrageEnabled;
@property (copy, nonatomic) id /* block */ eyesProtectLutImageBlock;
@property (nonatomic) BOOL shouldInitEyesProtect;
@property (nonatomic) BOOL enableEyesProtect;
@property (nonatomic) double eyesProtectFilterValue;
@property (nonatomic) BOOL needPlayWithoutSettingAudioSession;
@property (copy, nonatomic) NSString *playerTag;
@property (copy, nonatomic) NSString *playerSubTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)supportedResolutionTypes;
- (void)setVideoWrapper:(void *)arg0;
- (void)setHardwareDecode:(BOOL)arg0;
- (void)closeAsync;
- (void)setIsStalling:(BOOL)arg0;
- (BOOL)isStalling;
- (void)setPlayerSubTag:(id)arg0;
- (void)setPlayerTag:(id)arg0;
- (void)setVideoModel:(id)arg0;
- (double)getCurrentPlaybackTime;
- (void)setIsPauseByUser:(BOOL)arg0;
- (BOOL)isPauseByUser;
- (double)_durationTime;
- (BOOL)isPause;
- (long long)getVideoWidth;
- (long long)getVideoHeight;
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
- (id)supportedQualityInfos;
- (void)videoEngine:(id)arg0 onBarrageInfoCallBack:(id)arg1 pts:(unsigned long long)arg2;
- (void)setPlayAPIVersion:(unsigned long long)arg0 auth:(id)arg1;
- (void)setCurrentPlaybackTime:(double)arg0 complete:(id /* block */)arg1 renderComplete:(id /* block */)arg2;
- (id)apiForFetcher:(unsigned long long)arg0;
- (id)apiForFetcher;
- (void)suggestReduceResolution:(id)arg0;
- (void)videoBitrateDidChange:(id)arg0 resolution:(unsigned long long)arg1 bitrate:(long long)arg2;
- (void)videoEngine:(id)arg0 onMaskInfoCallBack:(id)arg1 pts:(unsigned long long)arg2;
- (void)configResolution:(unsigned long long)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (id)playerTag;
- (id)playerSubTag;
- (void)seekToProgress:(double)arg0;
- (id /* block */)eyesProtectLutImageBlock;
- (void)setEyesProtectLutImageBlock:(id /* block */)arg0;
- (double)_playerProgress;
- (void)pauseByUser;
- (double)getPlaybackSpeed;
- (BOOL)getHardwareDecode;
- (double)getPlayableDuration;
- (double)getDurationWatched;
- (unsigned long long)getCurrentResolution;
- (BOOL)getBarrageMaskEnabled;
- (void)setBarrageMaskEnabled:(BOOL)arg0;
- (BOOL)isSupportBarrageMask;
- (BOOL)getAIBarrageEnabled;
- (void)setAIBarrageEnabled:(BOOL)arg0;
- (id)playerEngine;
- (void)addVideoProgressUpdateObserver;
- (void)setAIBarrageThreadEnabled:(BOOL)arg0;
- (void)setBarrageMaskDelayEnabled:(BOOL)arg0;
- (id)initWithVideoId:(id)arg0;
- (void)addTimeObserver;
- (void)reloadVideoURL:(id)arg0;
- (void)reloadVideoId:(id)arg0;
- (void)reloadLocalURL:(id)arg0;
- (void)setNeedResumePlay:(BOOL)arg0;
- (BOOL)needResumePlay;
- (void)setPauseOnResignActive:(BOOL)arg0;
- (void)setPlayFinish:(BOOL)arg0;
- (BOOL)pauseOnResignActive;
- (void)setPlayerEngine:(id)arg0;
- (id)thumbInfo;
- (void)setThumbInfo:(id)arg0;
- (BOOL)playFinish;
- (void)reloadVideoURL:(id)arg0 cacheKey:(id)arg1;
- (void)reloadVideoId:(id)arg0 playAuthToken:(id)arg1 changeAudioSession:(BOOL)arg2;
- (void)setMediaLoaderEnabled:(BOOL)arg0;
- (void)setProxyServerEnabled:(BOOL)arg0;
- (void)setCatchVideoInfoEnabled:(BOOL)arg0;
- (void)setVideoLoopOptimize:(BOOL)arg0;
- (void)setDummyVoice:(BOOL)arg0;
- (void)setScalingModeFillOption:(long long)arg0;
- (void)setVideoModel:(id)arg0 withConfigResolution:(unsigned long long)arg1;
- (BOOL)enableEyesProtect;
- (void)setEnableEyesProtect:(BOOL)arg0;
- (double)eyesProtectFilterValue;
- (void)setEyesProtectFilterValue:(double)arg0;
- (BOOL)shouldInitEyesProtect;
- (void)resetEyesProtectLutImage;
- (void)adjustFilterStrength:(float)arg0;
- (void)enableEyesProtect:(BOOL)arg0;
- (void)setShouldInitEyesProtect:(BOOL)arg0;
- (void)setAiBarrageInfoDelegate;
- (void)setInternalAIBarrageEnabled:(BOOL)arg0;
- (void)setInternalBarrageMaskDelayEnabled:(BOOL)arg0;
- (BOOL)getInternalAIBarrageEnabled;
- (void)setInternalAIBarrageThreadEnabled:(BOOL)arg0;
- (void)updateVideoPlayerEyesProtectState:(BOOL)arg0 intensityValue:(double)arg1;
- (void)_registerObserve;
- (void)_updateMulitiProgress;
- (void)reloadVideoId:(id)arg0 changeAudioSession:(BOOL)arg1;
- (void)playWithoutSettingAudioSession;
- (void)updateEyesProtectState:(BOOL)arg0 intensityValue:(double)arg1;
- (BOOL)needPlayWithoutSettingAudioSession;
- (void)_updateVideoCurrentTime;
- (void)refreshMaskInfoDelegate;
- (void)_handlePlaybackStateChange:(long long)arg0;
- (void)_handleLoadStateChange:(unsigned long long)arg0 extra:(id)arg1;
- (void)_handleDidFinish:(id)arg0;
- (unsigned long long)_getPlayerLoadState:(unsigned long long)arg0;
- (unsigned long long)_getPlayerPlaybackState:(long long)arg0;
- (void)reloadVideoURLs:(id)arg0 cacheKey:(id)arg1;
- (void)setBusinessToken:(id)arg0;
- (id)businessToken;
- (void)setNeedPlayWithoutSettingAudioSession:(BOOL)arg0;
- (id)init;
- (void)setVideoId:(id)arg0;
- (void).cxx_destruct;
- (void)close;
- (void)stop;
- (double)_currentTime;
- (id)videoId;
- (id)delegate;
- (double)getDuration;
- (BOOL)isPlaying;
- (void)setVolume:(double)arg0;
- (BOOL)isLooping;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)pause:(BOOL)arg0;
- (id)view;
- (void)setMute:(BOOL)arg0;
- (BOOL)isMuted;
- (void)_didBecomeActive:(id)arg0;
- (void)_willResignActive:(id)arg0;
- (void)setPlaybackSpeed:(double)arg0;
- (void)prepareToPlay;
- (double)getVolume;
- (void)setLoop:(BOOL)arg0;
- (void)setVideoToken:(id)arg0;
- (id)videoToken;
- (void)addTimeObserver:(double)arg0;

@end
