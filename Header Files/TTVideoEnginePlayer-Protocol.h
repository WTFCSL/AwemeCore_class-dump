//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSURL, UIView, UIImage, TTVideoEngineAVPlayerItemAccessLog;
@protocol TTVideoPlayerEngineInfoProtocol, TTVideoPlayerStateProtocol, TTAVPlayerSubInfoInterface, AVAssetResourceLoaderDelegate;

@protocol TTVideoEnginePlayer <NSObject>

@property (weak, nonatomic) id<TTVideoPlayerStateProtocol> delegate;
@property (weak, nonatomic) id<TTVideoPlayerEngineInfoProtocol> engine;
@property (weak, nonatomic) id<TTAVPlayerSubInfoInterface> subInfo;
@property (readonly, nonatomic) UIView *view;
@property (copy, nonatomic) NSURL *contentURL;
@property (nonatomic) int cacheFileMode;
@property (nonatomic) int testSpeedMode;
@property (nonatomic) double currentPlaybackTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double playableDuration;
@property (readonly, nonatomic) long long mediaSize;
@property (readonly, nonatomic) long long bufferingProgress;
@property (readonly, nonatomic) long long playbackState;
@property (readonly, nonatomic) unsigned long long loadState;
@property (nonatomic) long long scalingMode;
@property (nonatomic) long long alignMode;
@property (nonatomic) double alignRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizeCropArea;
@property (nonatomic) BOOL muted;
@property (nonatomic) double playbackSpeed;
@property (readonly, nonatomic) TTVideoEngineAVPlayerItemAccessLog *accessLog;
@property (nonatomic) unsigned long long imageScaleType;
@property (nonatomic) unsigned long long enhancementType;
@property (nonatomic) unsigned long long imageLayoutType;
@property (nonatomic) unsigned long long renderType;
@property (nonatomic) unsigned long long renderEngine;
@property (nonatomic) unsigned long long finalRenderEngine;
@property (nonatomic) long long rotateType;
@property (nonatomic) long long mirrorType;
@property (nonatomic) BOOL optimizeMemoryUsage;
@property (nonatomic) BOOL looping;
@property (nonatomic) long long loopWay;
@property (nonatomic) BOOL asyncInit;
@property (nonatomic) BOOL asyncPrepare;
@property (nonatomic) BOOL hardwareDecode;
@property (nonatomic) BOOL ksyByteVC1Decode;
@property (nonatomic) BOOL barrageMaskEnable;
@property (nonatomic) BOOL aiBarrageEnable;
@property (nonatomic) long long openTimeOut;
@property (nonatomic) long long smoothDelayedSeconds;
@property (nonatomic) double startTime;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (weak, nonatomic) id<AVAssetResourceLoaderDelegate> resourceLoaderDelegate;
@property (nonatomic) BOOL isPauseWhenNotReady;
@property (nonatomic) double volume;
@property (readonly, nonatomic) UIImage *attachedPic;
@property (nonatomic) long long enableReportAllBufferUpdate;
@property (nonatomic) BOOL subEnable;
@property (retain, nonatomic) NSString *subTitleUrlInfo;
@property (nonatomic) long long subLanguageId;
@property (nonatomic) BOOL enableRemoveTaskQueue;

- (unsigned long long)imageLayoutType;
- (void)setImageLayoutType:(unsigned long long)arg0;
- (void)setFloatValue:(float)arg0 forKey:(int)arg1;
- (void)setHardwareDecode:(BOOL)arg0;
- (double)getFloatValueForKey:(int)arg0;
- (id)getStringValueForKey:(int)arg0;
- (BOOL)hardwareDecode;
- (struct __CVBuffer { } *)copyPixelBuffer;
- (void)closeAsync;
- (int)getIntValueForKey:(int)arg0;
- (long long)rotateType;
- (void)setRotateType:(long long)arg0;
- (unsigned long long)imageScaleType;
- (void)setImageScaleType:(unsigned long long)arg0;
- (unsigned long long)enhancementType;
- (void)setEnhancementType:(unsigned long long)arg0;
- (void)setIgnoreAudioInterruption:(BOOL)arg0;
- (unsigned long long)renderType;
- (void)setLoadControl:(id)arg0;
- (void)setIntValue:(int)arg0 forKey:(int)arg1;
- (long long)bufferingProgress;
- (void)setRenderEngine:(unsigned long long)arg0;
- (unsigned long long)renderEngine;
- (BOOL)asyncInit;
- (void)setAsyncInit:(BOOL)arg0;
- (long long)openTimeOut;
- (void)setOpenTimeOut:(long long)arg0;
- (long long)alignMode;
- (void)setAlignMode:(long long)arg0;
- (id)attachedPic;
- (long long)getInt64Value:(long long)arg0 forKey:(int)arg1;
- (void)setValueVoidPTR:(void *)arg0 forKey:(int)arg1;
- (float)getFloatValueForKeyType:(int)arg0 forType:(int)arg1;
- (id)getStringValueForKeyType:(int)arg0 forType:(int)arg1;
- (int)getIntValueForKeyType:(int)arg0 forType:(int)arg1;
- (void)setDrmCreater:(void /* function */ *)arg0;
- (id)getSubtitleContent:(long long)arg0 Params:(id)arg1;
- (void)resetPlayerVideoProcessor;
- (id)getStreamInfo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizeCropArea;
- (int)getIntValue:(int)arg0 forKey:(int)arg1;
- (void)setNormalizeCropArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)getExtraViewForViewType:(long long)arg0;
- (double)alignRatio;
- (void)setAlignRatio:(double)arg0;
- (void)resetWhenGivebackToPool;
- (id)resourceLoaderDelegate;
- (void)setCurrentPlaybackTime:(double)arg0 complete:(id /* block */)arg1 renderComplete:(id /* block */)arg2;
- (void)setCurrentPlaybackTime:(double)arg0 complete:(id /* block */)arg1;
- (BOOL)isPrerolling;
- (BOOL)isCustomPlayer;
- (void)switchStreamBitrate:(long long)arg0 ofType:(long long)arg1 completion:(id /* block */)arg2;
- (long long)numberOfBytesPlayed;
- (long long)videoBufferLength;
- (long long)audioBufferLength;
- (void)setPrepareFlag:(BOOL)arg0;
- (void)setTraitObjectValue:(id)arg0 forKey:(long long)arg1;
- (long long)getInt64ValueForKey:(int)arg0;
- (void)setAIBarrageInfo:(id)arg0;
- (void)setEnableReportAllBufferUpdate:(long long)arg0;
- (void)setUpPlayerViewWrapper:(id)arg0;
- (void)dynamicGaussianBlurResetViewSize:(int)arg0;
- (id)subInfo;
- (void)setSubInfo:(id)arg0;
- (int)cacheFileMode;
- (void)setCacheFileMode:(int)arg0;
- (int)testSpeedMode;
- (void)setTestSpeedMode:(int)arg0;
- (unsigned long long)finalRenderEngine;
- (long long)mirrorType;
- (void)setMirrorType:(long long)arg0;
- (BOOL)optimizeMemoryUsage;
- (void)setOptimizeMemoryUsage:(BOOL)arg0;
- (long long)loopWay;
- (void)setLoopWay:(long long)arg0;
- (BOOL)asyncPrepare;
- (void)setAsyncPrepare:(BOOL)arg0;
- (BOOL)ksyByteVC1Decode;
- (void)setKsyByteVC1Decode:(BOOL)arg0;
- (BOOL)barrageMaskEnable;
- (void)setBarrageMaskEnable:(BOOL)arg0;
- (BOOL)aiBarrageEnable;
- (void)setAiBarrageEnable:(BOOL)arg0;
- (long long)smoothDelayedSeconds;
- (void)setSmoothDelayedSeconds:(long long)arg0;
- (void)setResourceLoaderDelegate:(id)arg0;
- (BOOL)isPauseWhenNotReady;
- (void)setIsPauseWhenNotReady:(BOOL)arg0;
- (long long)enableReportAllBufferUpdate;
- (BOOL)subEnable;
- (void)setSubEnable:(BOOL)arg0;
- (id)subTitleUrlInfo;
- (void)setSubTitleUrlInfo:(id)arg0;
- (long long)subLanguageId;
- (void)setSubLanguageId:(long long)arg0;
- (BOOL)enableRemoveTaskQueue;
- (void)setEnableRemoveTaskQueue:(BOOL)arg0;
- (long long)playbackState;
- (double)currentPlaybackTime;
- (void)setStartTime:(double)arg0;
- (BOOL)muted;
- (unsigned long long)loadState;
- (void)setEffect:(id)arg0;
- (double)volume;
- (void)setMuted:(BOOL)arg0;
- (id)contentURL;
- (void)close;
- (void)stop;
- (id)engine;
- (double)duration;
- (id)getVersion;
- (id)delegate;
- (double)startTime;
- (id)metadata;
- (BOOL)isPlaying;
- (void)setVolume:(double)arg0;
- (float)currentRate;
- (void)setCurrentPlaybackTime:(double)arg0;
- (void)setDelegate:(id)arg0;
- (void)setLooping:(BOOL)arg0;
- (void)play;
- (void)pause;
- (void)setRenderType:(unsigned long long)arg0;
- (void)setEngine:(id)arg0;
- (void)pause:(BOOL)arg0;
- (id)view;
- (BOOL)looping;
- (double)playbackSpeed;
- (void)setPlaybackSpeed:(double)arg0;
- (void)setContentURL:(id)arg0;
- (void)setCustomHeader:(id)arg0;
- (void)prepareToPlay;
- (void)setAVPlayerItem:(id)arg0;
- (long long)scalingMode;
- (void)setScalingMode:(long long)arg0;
- (id)accessLog;
- (long long)numberOfBytesTransferred;
- (double)playableDuration;
- (long long)downloadSpeed;
- (long long)mediaSize;
- (void)setMaskInfo:(id)arg0;
- (void)setFinalRenderEngine:(unsigned long long)arg0;

@end