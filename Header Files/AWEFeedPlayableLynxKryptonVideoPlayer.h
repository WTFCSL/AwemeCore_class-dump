//
//     Generated by private class-dump
//

@class NSThread, TTVideoEngine, NSString, AWEAwemeModel;
@protocol KryptonVideoPlayerDelegate;

@interface AWEFeedPlayableLynxKryptonVideoPlayer : NSObject <TTVideoEngineDelegate, TTVideoEngineDataSource, KryptonVideoPlayer> {
    BOOL _destroyed;
    AWEAwemeModel *_aweme;
    TTVideoEngine *_videoEngine;
    id<KryptonVideoPlayerDelegate> _playerDelegate;
    NSThread *_lynxJSThread;
    unsigned long long _width;
    unsigned long long _height;
    NSString *_playToken;
}

@property (retain, nonatomic) TTVideoEngine *videoEngine;
@property (retain, nonatomic) id<KryptonVideoPlayerDelegate> playerDelegate;
@property (retain, nonatomic) NSThread *lynxJSThread;
@property (nonatomic) BOOL destroyed;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (copy, nonatomic) NSString *playToken;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)resolutionWithValue:(long long)arg0;
+ (id)apiWithToken:(id)arg0;

- (void)setPlayerDelegate:(id)arg0;
- (id)playerDelegate;
- (struct __CVBuffer { } *)copyPixelBuffer;
- (id)aweme;
- (void)setAweme:(id)arg0;
- (int)getVideoWidth;
- (int)getVideoHeight;
- (long long)getVideoRotation;
- (void)videoEngine:(id)arg0 loadStateDidChanged:(unsigned long long)arg1;
- (void)videoEngineUserStopped:(id)arg0;
- (void)videoEngineDidFinish:(id)arg0 error:(id)arg1;
- (void)videoEngineDidFinish:(id)arg0 videoStatusException:(long long)arg1;
- (void)videoEngineCloseAysncFinish:(id)arg0;
- (void)videoEngine:(id)arg0 playbackStateDidChanged:(long long)arg1;
- (void)videoEngineReadyToDisPlay:(id)arg0;
- (void)videoEngineReadyToPlay:(id)arg0;
- (void)videoEngine:(id)arg0 mdlKey:(id)arg1 hitCacheSze:(long long)arg2;
- (id)apiForFetcher:(unsigned long long)arg0;
- (id)videoEngine;
- (void)setVideoEngine:(id)arg0;
- (void)setLynxJSThread:(id)arg0;
- (void)configVideoPlayer;
- (id)lynxJSThread;
- (void)_notifyPlayerState:(id)arg0;
- (void)notifyPlayerState:(long long)arg0;
- (void)setPlayToken:(id)arg0;
- (id)playToken;
- (BOOL)getLooping;
- (void)dispose;
- (id)init;
- (void)resume;
- (void).cxx_destruct;
- (unsigned long long)height;
- (void)setCurrentTime:(double)arg0;
- (BOOL)destroyed;
- (double)getDuration;
- (void)setWidth:(unsigned long long)arg0;
- (void)setVolume:(double)arg0;
- (void)setSource:(id)arg0;
- (void)setHeight:(unsigned long long)arg0;
- (void)setDelegate:(id)arg0;
- (unsigned long long)width;
- (void)setLooping:(BOOL)arg0;
- (void)play;
- (void)pause;
- (double)getCurrentTime;
- (void)_loadWithURL:(id)arg0;
- (void)setDestroyed:(BOOL)arg0;

@end
