//
//     Generated by private class-dump
//

@protocol IESVSVideoPlayerRouter <NSObject>

@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic, getter=isPause) BOOL pause;
@property (nonatomic, getter=getPlaybackSpeed, setter=setPlaybackSpeed:) double playbackSpeed;
@property (nonatomic, getter=getVolume, setter=setVolume:) double volume;
@property (nonatomic, getter=getHardwareDecode, setter=setHardwareDecode:) BOOL hardwareDecode;
@property (nonatomic, getter=isMuted, setter=setMute:) BOOL muted;
@property (nonatomic, getter=isLooping, setter=setLoop:) BOOL looping;
@property (readonly, nonatomic, getter=getCurrentPlaybackTime) double currentPlaybackTime;
@property (readonly, nonatomic, getter=getDuration) double duration;
@property (readonly, nonatomic, getter=getPlayableDuration) double playableDuration;
@property (readonly, nonatomic, getter=getDurationWatched) double durationWatched;
@property (readonly, nonatomic, getter=getCurrentResolution) unsigned long long currentResolution;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } playerFrame;
@property (nonatomic, getter=getBarrageMaskEnabled, setter=setBarrageMaskEnabled:) BOOL barrageMaskEnabled;
@property (readonly, nonatomic, getter=isSupportBarrageMask) BOOL supportBarrageMask;
@property (nonatomic, getter=getAIBarrageEnabled, setter=setAIBarrageEnabled:) BOOL aiBarrageEnabled;
@property (readonly, nonatomic, getter=getTransform) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (readonly, nonatomic) BOOL hasBarrageMaskUrl;
@property (readonly, nonatomic) BOOL hasAiBarrageInfo;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentViewFrame;
@property (nonatomic) double startLocation;
@property (readonly, nonatomic, getter=getStartWatchTime) long long startWatchTime;
@property (readonly, nonatomic) BOOL isVerticalStream;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } mediaSize;
@property (nonatomic) BOOL renderedFirstFrame;

- (id)supportedResolutionTypes;
- (void)setHardwareDecode:(BOOL)arg0;
- (void)closeAsync;
- (double)getCurrentPlaybackTime;
- (void)setLongPressType:(id)arg0;
- (BOOL)isPause;
- (id)supportedQualityInfos;
- (void)configResolution:(unsigned long long)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrame;
- (BOOL)isVerticalStream;
- (void)pauseByUser;
- (void)startPlayWithEpisode:(id)arg0;
- (void)startLocalPlay:(id)arg0 withVideoModel:(id)arg1;
- (void)replaceWithEpisode:(id)arg0;
- (void)replaceWithEpisode:(id)arg0 startLocation:(double)arg1 resolution:(unsigned long long)arg2;
- (void)replaceWithLoaclEpisode:(id)arg0 startLocation:(double)arg1 videoModel:(id)arg2 resolution:(unsigned long long)arg3;
- (id)getEpisodeID;
- (void)preloadWithEpisode:(id)arg0;
- (void)retryPlayWithEpisode:(id)arg0;
- (void)seekVideoWithProgress:(double)arg0 complete:(id /* block */)arg1;
- (void)seekVideo:(double)arg0 complete:(id /* block */)arg1 renderComplete:(id /* block */)arg2;
- (id)getThumbInfo;
- (double)bottomOffsetForPlayer;
- (void)attachOnSmallWindow:(id)arg0;
- (void)detachWindow;
- (BOOL)isPlayerViewAspectFill;
- (BOOL)isVaildEpisode:(id)arg0;
- (void)changeContentFrame;
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
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })getTransform;
- (BOOL)hasBarrageMaskUrl;
- (BOOL)hasAiBarrageInfo;
- (long long)getStartWatchTime;
- (BOOL)renderedFirstFrame;
- (void)setRenderedFirstFrame:(BOOL)arg0;
- (void)close;
- (void)stop;
- (double)getDuration;
- (BOOL)isPlaying;
- (void)setVolume:(double)arg0;
- (id)playerView;
- (BOOL)isLooping;
- (void)play;
- (void)pause;
- (void)pause:(BOOL)arg0;
- (void)setMute:(BOOL)arg0;
- (BOOL)isMuted;
- (void)replay;
- (double)startLocation;
- (void)setStartLocation:(double)arg0;
- (void)setPlaybackSpeed:(double)arg0;
- (double)getVolume;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentViewFrame;
- (struct CGSize { double x0; double x1; })mediaSize;
- (void)setLoop:(BOOL)arg0;

@optional

- (void)scaleInPlayerViewInShortenWidth:(double)arg0;
- (void)scaleOutPlayerView;
- (BOOL)isScaleIn;

@end
