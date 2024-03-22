//
//     Generated by private class-dump
//

@class NSString, NSTimer, TTVideoEngine, NSURL, AVPlayer;
@protocol AWEConcernAudioPlayerDelegate;

@interface AWEConcernAudioPlayer : NSObject <TTVideoEngineDelegate> {
    BOOL _isPlaying;
    BOOL _isLocalFile;
    NSURL *_localUrl;
    NSString *_videoModel;
    id<AWEConcernAudioPlayerDelegate> _delegate;
    NSTimer *_updateTimer;
    TTVideoEngine *_engine;
    AVPlayer *_player;
}

@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isLocalFile;
@property (retain, nonatomic) NSTimer *updateTimer;
@property (retain, nonatomic) TTVideoEngine *engine;
@property (retain, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (retain, nonatomic) NSURL *localUrl;
@property (retain, nonatomic) NSString *videoModel;
@property (weak, nonatomic) id<AWEConcernAudioPlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (void)startPlay;
- (void)setLocalUrl:(id)arg0;
- (id)localUrl;
- (void)stopPlay;
- (void)videoEngineUserStopped:(id)arg0;
- (void)videoEngineDidFinish:(id)arg0 error:(id)arg1;
- (void)videoEngineDidFinish:(id)arg0 videoStatusException:(long long)arg1;
- (void)videoEngineCloseAysncFinish:(id)arg0;
- (void)videoEngine:(id)arg0 playbackStateDidChanged:(long long)arg1;
- (void)videoEnginePrepared:(id)arg0;
- (BOOL)isLocalFile;
- (void)setIsLocalFile:(BOOL)arg0;
- (void)endPlay;
- (void)updateRecordProcess;
- (id)init;
- (id)updateTimer;
- (void)setUpdateTimer:(id)arg0;
- (void).cxx_destruct;
- (id)engine;
- (void)setPlayer:(id)arg0;
- (void)applicationWillResignActive;
- (double)duration;
- (id)delegate;
- (double)currentTime;
- (BOOL)isPlaying;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)setIsPlaying:(BOOL)arg0;
- (void)setEngine:(id)arg0;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (id)player;
- (void)setupEngine;

@end