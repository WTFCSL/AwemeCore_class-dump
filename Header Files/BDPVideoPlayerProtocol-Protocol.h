//
//     Generated by private class-dump
//

@class BDPVideoPlayerModel, UIView;
@protocol BDPVideoPlayerStateDelegate;

@protocol BDPVideoPlayerProtocol <BDPContentPlayerProtocol>

@property (readonly, nonatomic) UIView *playerView;
@property (readonly, nonatomic) BDPVideoPlayerModel *playerModel;
@property (readonly, weak, nonatomic) id<BDPVideoPlayerStateDelegate> stateDelegate;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isPlayable;
@property (readonly, nonatomic) BOOL isPaused;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double realDuration;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double playableDuration;
@property (readonly, nonatomic) double playbackSpeed;
@property (readonly, nonatomic) long long cacheSize;
@property (readonly, nonatomic) BOOL muted;
@property (readonly, nonatomic) long long srcType;

- (void)seek:(double)arg0 completion:(id /* block */)arg1;
- (id)playerModel;
- (double)realDuration;
- (long long)srcType;
- (void)updateVideoPlaybackSpeed:(double)arg0;
- (struct CGSize { double x0; double x1; })playerTargetSize;
- (BOOL)isPlayable;
- (long long)cacheSize;
- (void)resume;
- (BOOL)muted;
- (double)height;
- (void)stop;
- (double)duration;
- (double)currentTime;
- (BOOL)isPaused;
- (BOOL)isPlaying;
- (id)playerView;
- (double)width;
- (void)play;
- (void)pause;
- (double)playbackSpeed;
- (double)playableDuration;
- (void)updateWithModel:(id)arg0;
- (id)stateDelegate;

@optional

- (id)getCurrentResolution;
- (void)requestFullScreenStateChange:(BOOL)arg0 direction:(long long)arg1 result:(BOOL)arg2;
- (id)getCurrentResolutionSrc;
- (id)consoleState;
- (void)setVideoResolution:(id)arg0 completion:(id /* block */)arg1;
- (void)changeVideoSrc:(id)arg0 seekTime:(double)arg1;
- (void)getPlayerSnapshotCallback:(id /* block */)arg0;
- (id)getVideoResolutions;
- (void)updateVideoVolume:(double)arg0;
- (double)getVideoVolume;
- (long long)playbackState;
- (id)videoCodec;

@end
