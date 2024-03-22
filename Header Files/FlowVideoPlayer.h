//
//     Generated by private class-dump
//

@class NSString, TTVideoEngine;
@protocol FlowVideoPlayerDelegate;

@interface FlowVideoPlayer : NSObject <TTVideoEngineDelegate> {
    long long _playbackState;
    id<FlowVideoPlayerDelegate> _delegate;
    TTVideoEngine *_engine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TTVideoEngine *engine;
@property (nonatomic) long long playbackState;
@property (readonly, nonatomic) BOOL isPlaying;
@property (weak, nonatomic) id<FlowVideoPlayerDelegate> delegate;

+ (void)preloadVideoModelString:(id)arg0;

- (void)setVideoModelString:(id)arg0;
- (void)setPlayerViewContentMode:(long long)arg0;
- (void)initEngine;
- (void)videoEngineUserStopped:(id)arg0;
- (void)videoEngineDidFinish:(id)arg0 error:(id)arg1;
- (void)videoEngineDidFinish:(id)arg0 videoStatusException:(long long)arg1;
- (void)videoEngineCloseAysncFinish:(id)arg0;
- (void)videoEngine:(id)arg0 playbackStateDidChanged:(long long)arg1;
- (long long)playbackState;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)stop;
- (id)engine;
- (id)delegate;
- (double)progress;
- (BOOL)isPlaying;
- (id)playerView;
- (void)setDelegate:(id)arg0;
- (void)play;
- (void)pause;
- (void)setEngine:(id)arg0;
- (void)setPlaybackState:(long long)arg0;
- (void)prepareToPlay;

@end
