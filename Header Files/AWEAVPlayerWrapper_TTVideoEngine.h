//
//     Generated by private class-dump
//

@class NSString, TTVideoEngine, NSURL, NSError, AWEAudioFile;
@protocol AWEAVPlayerWrapperTTVideoEngineDelegate;

@interface AWEAVPlayerWrapper_TTVideoEngine : NSObject <TTVideoEngineDelegate, TTVideoEngineInternalDelegate, AWEAVPlayerWrapper> {
    BOOL _needCookie;
    BOOL _hasEnableAsyncOptimize;
    unsigned long long _playStatus;
    id<AWEAVPlayerWrapperTTVideoEngineDelegate> _delegate;
    TTVideoEngine *_playerController;
    NSError *_error;
    AWEAudioFile *_audioFile;
}

@property (nonatomic) unsigned long long playStatus;
@property (retain, nonatomic) TTVideoEngine *playerController;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AWEAudioFile *audioFile;
@property (nonatomic) BOOL hasEnableAsyncOptimize;
@property (weak, nonatomic) id<AWEAVPlayerWrapperTTVideoEngineDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) double currentPlayTime;
@property (nonatomic) BOOL needCookie;

+ (id)allCookieString;

- (double)currentPlayTime;
- (void)removeTimeObserver;
- (unsigned long long)playStatus;
- (void)setPlayStatus:(unsigned long long)arg0;
- (void)videoEngine:(id)arg0 loadStateDidChanged:(unsigned long long)arg1;
- (void)videoEngineUserStopped:(id)arg0;
- (void)videoEngineDidFinish:(id)arg0 error:(id)arg1;
- (void)videoEngineDidFinish:(id)arg0 videoStatusException:(long long)arg1;
- (void)videoEngineCloseAysncFinish:(id)arg0;
- (void)videoEngine:(id)arg0 playbackStateDidChanged:(long long)arg1;
- (void)setNeedCookie:(BOOL)arg0;
- (void)replaceCurrentItemWith:(id)arg0;
- (void)enableAsyncOptimize;
- (void)clearCurrentPlayer;
- (BOOL)needCookie;
- (void)pauseWithFadeOutDuration:(double)arg0 completion:(id /* block */)arg1;
- (void)setAudioClipRangeWithStartTime:(double)arg0 endTime:(double)arg1 loopWay:(long long)arg2;
- (BOOL)hasEnableAsyncOptimize;
- (void)setHasEnableAsyncOptimize:(BOOL)arg0;
- (id)init;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)volume;
- (id)playerController;
- (void)setPlayerController:(id)arg0;
- (double)duration;
- (id)delegate;
- (void)setError:(id)arg0;
- (void)setVolume:(double)arg0;
- (void)setDelegate:(id)arg0;
- (void)play;
- (void)pause;
- (void)seekToTime:(double)arg0;
- (id)url;
- (id)error;
- (id)audioFile;
- (void)setAudioFile:(id)arg0;
- (void)addPeriodicTimeObserverForInterval:(double)arg0 queue:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)seekToTime:(double)arg0 completion:(id /* block */)arg1;

@end
