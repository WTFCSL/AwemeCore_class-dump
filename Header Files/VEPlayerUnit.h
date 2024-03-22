//
//     Generated by private class-dump
//

@class VEPlayerUnitConfig, NSString, NSMutableDictionary, VEMoviePlayer, VEVideoReaderUnit, NSObject, VEAudioReaderUnit, NSMutableArray, HTSMediaMixPlayer, IESMMAudioFilter;
@protocol OS_dispatch_queue, IESMMAudioProcessorExProtocol;

@interface VEPlayerUnit : VEUnitObject <HTSMediaMixPlayerDelegate, HTSMoviePlayerDelegate, VEAppStatusProtocol, IVEPlayerUnitProtocol> {
    BOOL _pauseAndStillRender;
    BOOL _forceNotStillRender;
    BOOL _needCurrentFrame;
    BOOL _needFrameRenderNotify;
    BOOL _textStickerNeedPreivew;
    BOOL _autoPlayWhenAppBecomeActive;
    BOOL _autoRepeatPlay;
    BOOL _isRetainOriginalSound;
    BOOL _playerPlayed;
    BOOL _noAvplayer;
    BOOL _needAudioSeekBeforePlay;
    BOOL _needSeekCompleteNotify;
    BOOL _needAccurateFrame;
    NSString *_route;
    id /* block */ _statusBlk;
    id /* block */ _frameTimeBlk;
    id /* block */ _displaylinkTimeBlk;
    id /* block */ _canvasFramUpdateCallback;
    long long _status;
    id /* block */ _mixPlayerCompleteBlock;
    id /* block */ _failedToPlayBlk;
    double videoStreamStartTime;
    long long _editModeStatus;
    VEMoviePlayer *_moviePlayer;
    HTSMediaMixPlayer *_mixPlayer;
    NSMutableArray *_observerArray;
    double _startTime;
    id /* block */ _completeBlock;
    id /* block */ _updateVideoDataCompleteBlock;
    IESMMAudioFilter *_audioFilter;
    id<IESMMAudioProcessorExProtocol> _audioProcess;
    VEPlayerUnitConfig *_config;
    double _lastAudioTime;
    id /* block */ _audioVolumnCallBack;
    VEAudioReaderUnit *_soundsPlayUnitOC;
    VEVideoReaderUnit *_videoReaderUnit;
    VEAudioReaderUnit *_audioReaderUnit;
    NSObject<OS_dispatch_queue> *_renderQueue;
    long long _processCount;
    long long _processFrames;
    double _playStartTS;
    double _lastPlayFrameRate;
    NSMutableDictionary *_audioTimeMachineConvertAssetsDict;
    NSMutableDictionary *_videoTimeMachineConvertAssetsDict;
    double _lastPlayPts;
    id /* block */ _seekCompleteBlock;
    double _updateVideoStartTs;
    double _updateVideoEndTs;
    struct CGSize { double width; double height; } _videoSize;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _playerCMTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastRenderTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastClicPlayCMTime;
}

@property (retain, nonatomic) HTSMediaMixPlayer *mixPlayer;
@property (retain, nonatomic) NSMutableArray *observerArray;
@property (nonatomic) double startTime;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (copy, nonatomic) id /* block */ updateVideoDataCompleteBlock;
@property (retain, nonatomic) IESMMAudioFilter *audioFilter;
@property (retain, nonatomic) id<IESMMAudioProcessorExProtocol> audioProcess;
@property (retain, nonatomic) VEPlayerUnitConfig *config;
@property (nonatomic) BOOL isRetainOriginalSound;
@property (nonatomic) BOOL playerPlayed;
@property (nonatomic) double lastAudioTime;
@property (copy, nonatomic) id /* block */ audioVolumnCallBack;
@property (retain, nonatomic) VEAudioReaderUnit *soundsPlayUnitOC;
@property (retain, nonatomic) VEVideoReaderUnit *videoReaderUnit;
@property (retain, nonatomic) VEAudioReaderUnit *audioReaderUnit;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } playerCMTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderQueue;
@property (nonatomic) long long processCount;
@property (nonatomic) BOOL noAvplayer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastRenderTime;
@property (nonatomic) long long processFrames;
@property (nonatomic) double playStartTS;
@property (nonatomic) double lastPlayFrameRate;
@property (retain, nonatomic) NSMutableDictionary *audioTimeMachineConvertAssetsDict;
@property (retain, nonatomic) NSMutableDictionary *videoTimeMachineConvertAssetsDict;
@property (nonatomic) double lastPlayPts;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastClicPlayCMTime;
@property (nonatomic) BOOL needAudioSeekBeforePlay;
@property (nonatomic) BOOL needSeekCompleteNotify;
@property (copy, nonatomic) id /* block */ seekCompleteBlock;
@property (nonatomic) BOOL needAccurateFrame;
@property (nonatomic) double updateVideoStartTs;
@property (nonatomic) double updateVideoEndTs;
@property (retain, nonatomic) VEMoviePlayer *moviePlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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
@property (retain, nonatomic) NSString *route;

+ (void)setCustomPlayerAudioCategory:(id)arg0;

- (void)playerItemFailedToPlayToEndTimeListener:(id)arg0;
- (void)setPlayStartTS:(double)arg0;
- (double)playStartTS;
- (id)audioFilter;
- (void)setPlayerVolume:(float)arg0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 seekMode:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setMixPlayerCompleteBlock:(id /* block */)arg0;
- (void)setAudioFilter:(id)arg0;
- (id /* block */)failedToPlayBlk;
- (void)setFailedToPlayBlk:(id /* block */)arg0;
- (void)setAutoRepeatPlay:(BOOL)arg0;
- (void)pauseAsync;
- (BOOL)autoRepeatPlay;
- (id /* block */)mixPlayerCompleteBlock;
- (struct CGSize { double x0; double x1; })getVideoSize;
- (double)getLastPlayFramRate;
- (void)stopEffectwithTime:(double)arg0;
- (void)setAutoPlayWhenAppBecomeActive:(BOOL)arg0;
- (BOOL)autoPlayWhenAppBecomeActive;
- (void)updateVideoData:(id)arg0 completeBlock:(id /* block */)arg1;
- (double)getaudioVolumeKeyFrameAtPts:(unsigned long long)arg0 withAVAsset:(id)arg1;
- (void)hotAppendAudioAsset:(id)arg0 withRange:(id)arg1;
- (void)setAutoFillFrame:(id)arg0 forAsset:(id)arg1;
- (void)updateAudioData:(id)arg0;
- (id)audioReaderUnit;
- (void)setAudioReaderUnit:(id)arg0;
- (double)removeLastOperation;
- (void)mediaMixPlayer:(id)arg0 willResetItem:(id)arg1;
- (void)mediaMixPlayer:(id)arg0 didResetItem:(id)arg1;
- (id)addAudioWithUrl:(id)arg0;
- (void)setIsRetainOriginalSound:(BOOL)arg0;
- (BOOL)isRetainOriginalSound;
- (void)setRetainOriginalSound:(BOOL)arg0;
- (BOOL)needCurrentFrame;
- (void)setNeedCurrentFrame:(BOOL)arg0;
- (void)setPlayerCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setFrameTimeBlk:(id /* block */)arg0;
- (void)setStatusBlk:(id /* block */)arg0;
- (id /* block */)updateVideoDataCompleteBlock;
- (void)setCanvasFramUpdateCallback:(id /* block */)arg0;
- (void)setAudioKeyFrameCallBack:(id /* block */)arg0;
- (BOOL)startMattingDetectWithAVAsset:(id)arg0 resourceFinder:(void /* function */ *)arg1 detectResult:(id)arg2 resultBlock:(id /* block */)arg3;
- (void)pauseMattingDetectWithAVAsset:(id)arg0;
- (void)cancelMattingDetectWithAVAsset:(id)arg0;
- (id)mixPlayer;
- (void)setUpdateVideoDataCompleteBlock:(id /* block */)arg0;
- (id /* block */)canvasFramUpdateCallback;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })playerCMTime;
- (void)setAudioProcess:(id)arg0;
- (id)audioProcess;
- (void)setCompleteBlock:(id /* block */)arg0;
- (BOOL)pauseAndStillRender;
- (id /* block */)completeBlock;
- (void)setPauseAndStillRender:(BOOL)arg0;
- (id)observerArray;
- (void)setObserverArray:(id)arg0;
- (id)renderQueue;
- (void)setRenderQueue:(id)arg0;
- (void)hotRemoveAudioAssets:(id)arg0;
- (void)addDownStream:(id)arg0;
- (id /* block */)frameTimeBlk;
- (void)p_play;
- (BOOL)noAvplayer;
- (void)moviePlayerNeedReset;
- (void)processLastPixelBuffer;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getLastPixelbufferTime;
- (void)setNoAvplayer:(BOOL)arg0;
- (void)setAudioTimeMachineConvertAssetsDict:(id)arg0;
- (void)setVideoTimeMachineConvertAssetsDict:(id)arg0;
- (void)p_checkAudioSessionAsync:(BOOL)arg0;
- (void)caculateVideoSizeWithfinishBlock:(id /* block */)arg0;
- (void)p_initMixPlayer;
- (void)p_initMoviePlayer;
- (void)p_addAllObserver;
- (void)p_resetPlayerWithError:(id)arg0;
- (void)p_addPlayerStatusObserver;
- (void)setMixPlayer:(id)arg0;
- (void)resetPlayerAutoRepreatBlock;
- (void)resetPlayerCompleteBlock;
- (void)p_seekAudioProcessorIfNeeded:(double)arg0;
- (void)setMoviePlayer:(id)arg0;
- (void)processReadSampleData:(id)arg0;
- (void)playMixPlayer;
- (void)stopMoviePlayer;
- (void)resetRefer;
- (double)lastAudioTime;
- (id)soundsPlayUnitOC;
- (void)setLastAudioTime:(double)arg0;
- (void)processAudioPlayer:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)p_multiProcessSampleData:(id)arg0;
- (long long)processFrames;
- (void)setProcessFrames:(long long)arg0;
- (void)setLastPlayFrameRate:(double)arg0;
- (double)lastPlayFrameRate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastClicPlayCMTime;
- (double)lastPlayPts;
- (void)setLastPlayPts:(double)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })p_transToFps:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)p_playerComplete;
- (BOOL)needSeekCompleteNotify;
- (long long)processCount;
- (void)setLastRenderTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setProcessCount:(long long)arg0;
- (void)processVESamples:(id)arg0;
- (BOOL)textStickerNeedPreivew;
- (long long)editModeStatus;
- (id)videoTimeMachineConvertAssetsDict;
- (BOOL)needAccurateFrame;
- (void)notifyFrameRender;
- (BOOL)canStopStillRender;
- (BOOL)needFrameRenderNotify;
- (void)setNeedFrameRenderNotify:(BOOL)arg0;
- (double)updateVideoEndTs;
- (void)setNeedSeekCompleteNotify:(BOOL)arg0;
- (id /* block */)seekCompleteBlock;
- (void)setSeekCompleteBlock:(id /* block */)arg0;
- (void)startMoviePlayer;
- (void)setLastClicPlayCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setNeedAccurateFrame:(BOOL)arg0;
- (BOOL)needAudioSeekBeforePlay;
- (void)setNeedAudioSeekBeforePlay:(BOOL)arg0;
- (BOOL)playerPlayed;
- (void)setPlayerPlayed:(BOOL)arg0;
- (void)p_playFromTime2:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)p_seekToTimeAndRender2:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 seekMode:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)pauseMixPlayer;
- (void)p_updateAudioReaderUnit:(id)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })p_currenTime;
- (id)audioTimeMachineConvertAssetsDict;
- (void)setUpdateVideoStartTs:(double)arg0;
- (void)setUpdateVideoEndTs:(double)arg0;
- (double)updateVideoStartTs;
- (id /* block */)statusBlk;
- (BOOL)preProcessAudio:(id)arg0 inChunkParam:(id)arg1 withInfo:(id)arg2;
- (void)readytoProcessEffect:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)exitProcessEffect;
- (void)startEffectWithTime:(double)arg0;
- (void)hotReloadFilterForAssets:(id)arg0 usingFilterMap:(id)arg1;
- (void)hotReloadClipRangeForAssets:(id)arg0 usingClipRangeMap:(id)arg1;
- (void)changeAudioEffect:(id)arg0 inVideoData:(id)arg1 inChunkParam:(id)arg2 completeBlock:(id /* block */)arg3;
- (id)getPlayerAsset;
- (id)getPlayerVideoCompostion;
- (void)resetMixPlayerItem;
- (void)reloadDataWithCompleteBlock:(id /* block */)arg0;
- (long long)getPlayerItemStatus;
- (void)addHeaderToVideo:(id)arg0;
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
- (void)pinProcessSampleData:(id)arg0;
- (id /* block */)audioVolumnCallBack;
- (void)setAudioVolumnCallBack:(id /* block */)arg0;
- (void)setSoundsPlayUnitOC:(id)arg0;
- (void)p_countingFrames;
- (void)seekAudioReaderUnit:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)videoReaderUnit;
- (void)setVideoReaderUnit:(id)arg0;
- (void)setVideoStreamStartTime:(double)arg0;
- (double)videoStreamStartTime;
- (void)becomeActive;
- (void)refresh;
- (void)setConfig:(id)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (id)route;
- (long long)status;
- (void)resignActive;
- (id)config;
- (void)stop;
- (void)enterBackground;
- (void)setRoute:(id)arg0;
- (void)destroy;
- (void)setStatus:(long long)arg0;
- (double)startTime;
- (double)getDuration;
- (void)enterForeground;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)pause:(BOOL)arg0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 completionHandler:(id /* block */)arg1;
- (id)moviePlayer;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastRenderTime;
- (void)reloadData:(BOOL)arg0;
- (void)playFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (struct CGSize { double x0; double x1; })videoSize;
- (void)setVideoSize:(struct CGSize { double x0; double x1; })arg0;
- (void)memoryWarning;

@end