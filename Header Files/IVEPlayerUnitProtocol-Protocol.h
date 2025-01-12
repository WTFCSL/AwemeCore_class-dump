//
//     Generated by private class-dump
//

@class HTSMediaMixPlayer;

@protocol IVEPlayerUnitProtocol <IVEUnitObject, VEProcessSampleDelegate, VEPlayerEffectOperationUnitProtocol, VEPlayerAudioUnitProtocol, IVEMediaMixPlayerProtocol>

@property (readonly, nonatomic) HTSMediaMixPlayer *mixPlayer;
@property (copy, nonatomic) id /* block */ mixPlayerCompleteBlock;
@property (readonly, nonatomic) long long status;
@property (copy, nonatomic) id /* block */ failedToPlayBlk;
@property (copy, nonatomic) id /* block */ frameTimeBlk;
@property (copy, nonatomic) id /* block */ displaylinkTimeBlk;
@property (copy, nonatomic) id /* block */ statusBlk;
@property (nonatomic) BOOL pauseAndStillRender;
@property (nonatomic) BOOL forceNotStillRender;
@property (nonatomic) BOOL needCurrentFrame;
@property (nonatomic) long long editModeStatus;
@property (nonatomic) BOOL needFrameRenderNotify;
@property (copy, nonatomic) id /* block */ canvasFramUpdateCallback;
@property (nonatomic) BOOL textStickerNeedPreivew;
@property (nonatomic) BOOL autoPlayWhenAppBecomeActive;
@property (nonatomic) BOOL autoRepeatPlay;
@property (nonatomic) double videoStreamStartTime;

- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 seekMode:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setMixPlayerCompleteBlock:(id /* block */)arg0;
- (id /* block */)failedToPlayBlk;
- (void)setFailedToPlayBlk:(id /* block */)arg0;
- (void)setAutoRepeatPlay:(BOOL)arg0;
- (void)pauseAsync;
- (BOOL)autoRepeatPlay;
- (id /* block */)mixPlayerCompleteBlock;
- (struct CGSize { double x0; double x1; })getVideoSize;
- (double)getLastPlayFramRate;
- (void)setAutoPlayWhenAppBecomeActive:(BOOL)arg0;
- (BOOL)autoPlayWhenAppBecomeActive;
- (void)updateVideoData:(id)arg0 completeBlock:(id /* block */)arg1;
- (BOOL)needCurrentFrame;
- (void)setNeedCurrentFrame:(BOOL)arg0;
- (void)setFrameTimeBlk:(id /* block */)arg0;
- (void)setStatusBlk:(id /* block */)arg0;
- (void)setCanvasFramUpdateCallback:(id /* block */)arg0;
- (id)mixPlayer;
- (id /* block */)canvasFramUpdateCallback;
- (BOOL)pauseAndStillRender;
- (void)setPauseAndStillRender:(BOOL)arg0;
- (id /* block */)frameTimeBlk;
- (BOOL)textStickerNeedPreivew;
- (long long)editModeStatus;
- (BOOL)needFrameRenderNotify;
- (void)setNeedFrameRenderNotify:(BOOL)arg0;
- (id /* block */)statusBlk;
- (id)initWithConfig:(id)arg0 finishBlock:(id /* block */)arg1;
- (void)enableStillRender:(BOOL)arg0;
- (void)enableHighFrameRateRender:(BOOL)arg0;
- (id)getVideoReader;
- (id /* block */)displaylinkTimeBlk;
- (void)setDisplaylinkTimeBlk:(id /* block */)arg0;
- (BOOL)forceNotStillRender;
- (void)setForceNotStillRender:(BOOL)arg0;
- (void)setEditModeStatus:(long long)arg0;
- (void)setTextStickerNeedPreivew:(BOOL)arg0;
- (void)setVideoStreamStartTime:(double)arg0;
- (double)videoStreamStartTime;
- (void)refresh;
- (long long)status;
- (id)config;
- (void)stop;
- (void)destroy;
- (double)getDuration;
- (void)play;
- (void)pause;
- (void)playFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;

@optional

- (void)processLastPixelBuffer;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getLastPixelbufferTime;
- (void)pinProcessSampleData:(id)arg0;
- (void)setPlayerFillMode:(unsigned long long)arg0;
- (void)setVideoMediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;

@end
