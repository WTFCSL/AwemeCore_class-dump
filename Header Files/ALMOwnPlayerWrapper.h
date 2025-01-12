//
//     Generated by private class-dump
//

@class TTVideoEngineModel, NSHTTPURLResponse, ALMOwnPlayerDelegateWrapper, NSDictionary, NSObject, NSMutableArray, UIView, NSString, NSTimer, NSMutableSet, AVURLAsset, NSArray, NSNumber, ALMOwnPlayerTTSInfoController, TTVideoEngine;
@protocol OS_dispatch_queue, IESVideoPlayerDelegate, ALMVideoIntePlayerDelegate;

@interface ALMOwnPlayerWrapper : NSObject <TTVideoEngineDataSource, ALMOwnPlayerDelegateWrapperDelegate, TTVideoEngineInternalDelegate, TTVideoEngineDelegate, TTVideoEngineVRDelegate, TTVideoEngineMaskDelegate, ALMVideoPlayerProtocol, TTPlayerViewDelegate> {
    ALMOwnPlayerTTSInfoController *_ttsInfoController;
    BOOL _playByRestored;
    BOOL enableVideoOutput;
    BOOL _ignoreAudioInterruption;
    BOOL _mute;
    BOOL _requestWithCookies;
    BOOL _playingWithCache;
    BOOL _repeated;
    BOOL _requestWithCookALM;
    BOOL _supportsReserveIfNeeded;
    BOOL _useCache;
    BOOL _ownPlayerPlayWithURLs;
    BOOL _truncateTailWhenRepeated;
    BOOL _bufferEnded;
    BOOL _changePlaybackSpeedEnabled;
    BOOL _bashVideoEnabled;
    BOOL _checkHijackEnabled;
    BOOL _isPaused;
    BOOL _isStalling;
    BOOL _shouldResetPlayer;
    BOOL _hasPlayedOnce;
    BOOL _isURLChanged;
    BOOL _isReserved;
    BOOL _hadStoped;
    BOOL _ALMOwnPlayerHoldStopValid;
    BOOL _isEnableMonitorNetwork;
    BOOL _enablePlayForOnlyDashModel;
    BOOL _playOnceWithURLs;
    unsigned long long _sessionId;
    long long cacheSize;
    unsigned long long _enhancementType;
    long long _imageLayoutType;
    long long _networkTime;
    unsigned long long _netWorkType;
    long long _rotateType;
    unsigned long long _renderType;
    long long _scalingMode;
    NSString *_urlKey;
    unsigned long long _imageScaleType;
    long long _preloadCachedSize;
    double _volume;
    id<ALMVideoIntePlayerDelegate> _delegate;
    id<IESVideoPlayerDelegate> _deleagte;
    NSString *_tag;
    id /* block */ _cacheSizeBlock;
    TTVideoEngine *_player;
    long long _playbackState;
    NSString *_videoID;
    NSString *_pToken;
    NSString *_playAuth;
    NSArray *_hosts;
    NSArray *_defaultHosts;
    long long _hostIndex;
    TTVideoEngineModel *_videoEngineModel;
    long long _videoProperBitrate;
    long long _videoDashV2Bitrate;
    long long _audioDashBitrate;
    unsigned long long _selectedDASHResolutionType;
    NSString *_fileCs;
    NSArray *_videoPlayURLs;
    NSString *_currPlayURL;
    long long _urlExpiredTime;
    NSDictionary *_metaformateDic;
    long long _actionState;
    NSString *_videoRequestUrl;
    NSMutableSet *_retainTaskSet;
    NSMutableSet *_observerSet;
    ALMOwnPlayerDelegateWrapper *_delegateWrapper;
    NSNumber *_consumedBytes;
    NSTimer *_playbackCheckTimer;
    NSMutableArray *_boundaryEvents;
    double _firstSetPlaybackTime;
    double _firstFrameExpectTime;
    double _prevTimerCallPlaybackTime;
    NSObject<OS_dispatch_queue> *_optimizeTimerCallbackQueue;
    double _playTimeBeforeReserved;
    struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *_audioWrapper;
    struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *_videoWrapper;
    unsigned long long _resolutionType;
    NSString *_localURL;
    NSHTTPURLResponse *_videoPlayResponse;
    id /* block */ _periodicTimeObserverBlock;
    NSMutableArray *_playerBelowExtraViews;
    NSMutableArray *_playerAboveExtraViews;
}

@property (retain, nonatomic) TTVideoEngine *player;
@property (nonatomic) long long playbackState;
@property (nonatomic) BOOL changePlaybackSpeedEnabled;
@property (nonatomic) BOOL bashVideoEnabled;
@property (nonatomic) BOOL checkHijackEnabled;
@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *pToken;
@property (copy, nonatomic) NSString *playAuth;
@property (copy, nonatomic) NSArray *hosts;
@property (copy, nonatomic) NSArray *defaultHosts;
@property (nonatomic) long long hostIndex;
@property (retain, nonatomic) TTVideoEngineModel *videoEngineModel;
@property (nonatomic) long long videoProperBitrate;
@property (nonatomic) long long videoDashV2Bitrate;
@property (nonatomic) long long audioDashBitrate;
@property (nonatomic) unsigned long long selectedDASHResolutionType;
@property (copy, nonatomic) NSString *fileCs;
@property (copy, nonatomic) NSArray *videoPlayURLs;
@property (copy, nonatomic) NSString *currPlayURL;
@property (nonatomic) long long urlExpiredTime;
@property (copy, nonatomic) NSDictionary *metaformateDic;
@property (nonatomic) long long actionState;
@property (copy, nonatomic) NSString *videoRequestUrl;
@property (retain, nonatomic) NSMutableSet *retainTaskSet;
@property (retain, nonatomic) NSMutableSet *observerSet;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) BOOL isStalling;
@property (nonatomic) BOOL shouldResetPlayer;
@property (nonatomic) BOOL hasPlayedOnce;
@property (nonatomic) BOOL isURLChanged;
@property (retain, nonatomic) ALMOwnPlayerDelegateWrapper *delegateWrapper;
@property (retain, nonatomic) NSNumber *consumedBytes;
@property (retain, nonatomic) NSTimer *playbackCheckTimer;
@property (retain, nonatomic) NSMutableArray *boundaryEvents;
@property (nonatomic) double firstSetPlaybackTime;
@property (nonatomic) double firstFrameExpectTime;
@property (nonatomic) double prevTimerCallPlaybackTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *optimizeTimerCallbackQueue;
@property (nonatomic) BOOL isReserved;
@property (nonatomic) double playTimeBeforeReserved;
@property (nonatomic) BOOL hadStoped;
@property (nonatomic) struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *audioWrapper;
@property (nonatomic) struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *videoWrapper;
@property (nonatomic) BOOL ALMOwnPlayerHoldStopValid;
@property (nonatomic) BOOL isEnableMonitorNetwork;
@property (nonatomic) BOOL enablePlayForOnlyDashModel;
@property (nonatomic) unsigned long long resolutionType;
@property (copy, nonatomic) NSString *localURL;
@property (nonatomic) BOOL playOnceWithURLs;
@property (retain, nonatomic) NSHTTPURLResponse *videoPlayResponse;
@property (copy, nonatomic) id /* block */ periodicTimeObserverBlock;
@property (retain, nonatomic) NSMutableArray *playerBelowExtraViews;
@property (retain, nonatomic) NSMutableArray *playerAboveExtraViews;
@property (weak, nonatomic) id<IESVideoPlayerDelegate> deleagte;
@property (nonatomic) BOOL bufferEnded;
@property (readonly, nonatomic) BOOL isDashSource;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) id /* block */ cacheSizeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;
@property (readonly, copy, nonatomic) AVURLAsset *currPlayAsset;
@property (readonly, nonatomic) double currTimeScale;
@property (readonly, nonatomic) BOOL isUsingHttpDNS;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } videoOriginSize;
@property (readonly, nonatomic) NSNumber *bitrate;
@property (copy, nonatomic) NSString *urlKey;
@property (nonatomic) BOOL enableVideoOutput;
@property (nonatomic) BOOL repeated;
@property (nonatomic) BOOL mute;
@property (nonatomic) double volume;
@property (nonatomic) long long networkTime;
@property (nonatomic) BOOL truncateTailWhenRepeated;
@property (weak, nonatomic) id<ALMVideoIntePlayerDelegate> delegate;
@property (nonatomic) BOOL useCache;
@property (nonatomic) BOOL playingWithCache;
@property (nonatomic) long long cacheSize;
@property (nonatomic) long long currCacheSize;
@property (nonatomic) long long videoMediaSize;
@property (readonly, copy, nonatomic) NSString *videoTraceId;
@property (nonatomic) long long preloadCachedSize;
@property (nonatomic) BOOL ignoreAudioInterruption;
@property (nonatomic) BOOL requestWithCookALM;
@property (nonatomic) double playbackRate;
@property (nonatomic) BOOL radioMode;
@property (nonatomic) BOOL enableHardDecode;
@property (nonatomic) BOOL enableH256Decode;
@property (nonatomic) BOOL ownPlayerPlayWithURLs;
@property (nonatomic) BOOL supportsReserveIfNeeded;
@property (nonatomic) BOOL playByRestored;
@property (nonatomic) unsigned long long sessionId;
@property (nonatomic) BOOL requestWithCookies;
@property (nonatomic) BOOL enableNNSR;
@property (nonatomic) BOOL enableVideo15SR;
@property (nonatomic) BOOL enable720pNNSR;
@property (nonatomic) BOOL enableBoundNNSR;
@property (nonatomic) long long scalingMode;
@property (nonatomic) long long rotateType;
@property (nonatomic) unsigned long long imageScaleType;
@property (nonatomic) long long imageLayoutType;
@property (nonatomic) unsigned long long enhancementType;
@property (nonatomic) unsigned long long netWorkType;
@property (readonly, nonatomic) unsigned long long currentResolution;
@property (nonatomic) unsigned long long renderType;
@property (nonatomic) BOOL enableBytevc1Decode;
@property (nonatomic) BOOL isEnableBmf;
@property (nonatomic) BOOL pictureInPictureSupported;

+ (void)setPostPrepareMsgEnable:(BOOL)arg0;
+ (BOOL)forcePlayWithHTTPS;
+ (void)setForcePlayWithHTTPS:(BOOL)arg0;
+ (void)setUpFirstDNSParseType:(long long)arg0 backup:(long long)arg1;
+ (void)setUpDNSTTL:(long long)arg0;
+ (void)setUpBackupDNSParserWaitTime:(double)arg0;
+ (void)setPlayerAudioEffectEnable:(BOOL)arg0;
+ (void)setAVStackEnable:(BOOL)arg0;
+ (void)setEnterBufferingDirectlyEnable:(BOOL)arg0;
+ (void)setDecreaseVtbStackSize:(long long)arg0;
+ (void)setAudioLatencyQueueByTimeEnable:(BOOL)arg0;
+ (void)setVideoEndIsAllEofEnable:(BOOL)arg0;
+ (void)setSkipBufferLimit:(long long)arg0;
+ (void)setPlayerAudioEffectPregain:(double)arg0;
+ (void)setPlayerAudioEffectThreshold:(double)arg0;
+ (void)setTTPlayerExtraViewEnable:(BOOL)arg0;
+ (void)setPlayerAudioEffectRatio:(double)arg0;
+ (void)setPlayerAudioEffectPredelay:(double)arg0;
+ (void)setPlayerAudioEffectType:(long long)arg0;
+ (void)setPlayerAudioEffectTargetLoudness:(double)arg0;
+ (void)setPlayerIdleTimerAuto:(BOOL)arg0;
+ (void)setVideoEngineLocalServerOptions:(id)arg0;
+ (void)updateVideoEngineLocalServerOptions:(id)arg0;
+ (void)setPlayerGlobalThreadPoolOptions:(id)arg0;
+ (void)updatePlayerGlobalThreadPoolOptions:(id)arg0;
+ (void)setPlayerStrategyOptions:(id)arg0;
+ (void)setPlayerEffectOptions:(id)arg0;
+ (void)setRenderEngine:(long long)arg0;
+ (long long)getDownloadCountByVid:(id)arg0;
+ (void)setWriteFileNotifyIntervalMS:(long long)arg0;
+ (void)setStackSizeOptimized:(double)arg0;
+ (void)setEnableFallbackSWDecode:(BOOL)arg0;
+ (void)setAudioEffectPostgain:(double)arg0;
+ (void)setLogFlag:(long long)arg0;
+ (id)cookieForURLs:(id)arg0;
+ (void)setApplicationDidBecomeActive;
+ (void)setApplicationWillResignActive;
+ (void)setPlayWithURLs:(BOOL)arg0;
+ (void)setPlayerNetworkTimeout:(long long)arg0;
+ (void)setAsyncPrepareEnable:(BOOL)arg0;
+ (void)setNotifyBufferBeforeFirstFrameEnable:(BOOL)arg0;
+ (void)setReportAllUpdateEnable:(BOOL)arg0;
+ (void)setPlayerLazySeekEnabled:(BOOL)arg0;
+ (void)setPlayerABREnabled:(BOOL)arg0;
+ (void)setPlayerVideoModelABREnabled:(BOOL)arg0;
+ (void)setPlayerABRAlgorithmType:(long long)arg0;
+ (void)setPlayerABRTimeInterval:(long long)arg0;
+ (void)setPlayerThreadWaitMilliSeconds:(long long)arg0;
+ (void)setAudioVideoSyncStartEnable:(BOOL)arg0;
+ (void)setPlayerAudioUnitPoolEnable:(BOOL)arg0;
+ (void)setPlayerVtbSizePicSizeBound:(long long)arg0;
+ (void)setPlayerTerminalAudioUnitPoolEnable:(BOOL)arg0;
+ (void)setPlayerStopSourceAsyncEnable:(BOOL)arg0;
+ (void)setPlayerSeekInterruptEnable:(BOOL)arg0;
+ (void)setPlayerHandleBackgroundInAVViewEnable:(BOOL)arg0;
+ (void)setPlayerLazyAudioUnitOpEnable:(BOOL)arg0;
+ (void)setPlayerAudioInterruptProtectionEnabled:(BOOL)arg0;
+ (void)setPlayerURLCheckHijackEnabled:(BOOL)arg0;
+ (void)setPlayerMaxAccumulatedErrCount:(long long)arg0;
+ (void)setPlayerBufferingTimeOut:(long long)arg0;
+ (void)setPlayerDualCoreRearEnable:(BOOL)arg0;
+ (void)setPlayerEnginePoolEnable:(BOOL)arg0;
+ (void)setPlayerSkipCDNBeforeExpireEnable:(BOOL)arg0;
+ (void)setAddThreadSuffixNameEnable:(BOOL)arg0;
+ (void)setPlayerEnginePoolLimit:(long long)arg0;
+ (void)setPlayerPrepareStartOpenGLEnable:(BOOL)arg0;
+ (void)setPlayerLocalServerAuthEnable:(BOOL)arg0;
+ (void)setPlayerDASHRangeInfo:(id)arg0;
+ (void)setPlayerDASHAdaptiveMp4Enable:(BOOL)arg0;
+ (void)setPlayerLocalServerInfo:(id)arg0;
+ (void)setUseEngineQueueEnable:(BOOL)arg0;
+ (void)setStopCallbakSuccessfullyEnable:(BOOL)arg0;
+ (void)setPlayerNativeMedialoaderEnable:(BOOL)arg0;
+ (void)setPlayerEffectHDRLutImageEnable:(BOOL)arg0;
+ (void)setEnableTimeObserverBoundaryCheck:(BOOL)arg0;
+ (void)setEnableOptimizedTimeObserver:(BOOL)arg0;
+ (void)setProbeIntervalMS:(long long)arg0;
+ (void)setEnableModernPreload:(BOOL)arg0;
+ (void)setPlayerMaxBufferEndTime:(long long)arg0;
+ (void)setPlayerDefaultBufferEndTime:(long long)arg0;
+ (void)setBufferEnableMilliSeconds:(BOOL)arg0;
+ (void)setPlayerMaxBufferEndTimeMS:(long long)arg0;
+ (void)setPlayerDefaultBufferEndTimeMS:(long long)arg0;
+ (void)setVideoPlayerAppType:(unsigned long long)arg0;
+ (unsigned long long)videoPlayerAppType;
+ (void)setPlayerAudioWrapperFixEnable:(BOOL)arg0;
+ (void)setUseHardwareDecode:(BOOL)arg0;
+ (void)setH265Enabled:(BOOL)arg0;
+ (void)setUpOutputFrameWaitNum:(long long)arg0;
+ (void)setAudioEffectEnable:(BOOL)arg0;
+ (void)setSkipFindStreamInfoEnable:(BOOL)arg0;
+ (void)setUpAudioDeviceType:(long long)arg0;
+ (void)setPlayerMediaVolume:(double)arg0;
+ (void)setPlayerMemoryOptimizeEnable:(BOOL)arg0;
+ (void)setUpThreadWaitMilliSeconds:(int)arg0;
+ (BOOL)IESVideoPlayerErrorIsVideoAuditWorkFlowError:(id)arg0;
+ (void)setPlayerOptions:(id)arg0;

- (long long)imageLayoutType;
- (void)setImageLayoutType:(long long)arg0;
- (void)holdStop;
- (void)holdStopAsync:(BOOL)arg0;
- (void)setTTVideoEngineResolutionType:(unsigned long long)arg0;
- (void)setPlayerAudioDevice:(unsigned long long)arg0;
- (void)setPlayerResolution:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (id)supportedResolutionTypes;
- (struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)audioWrapper;
- (void)setAudioWrapper:(struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)arg0;
- (struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)videoWrapper;
- (void)setVideoWrapper:(struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)arg0;
- (void)closeAsync;
- (void)setIsStalling:(BOOL)arg0;
- (BOOL)isStalling;
- (long long)rotateType;
- (void)setRotateType:(long long)arg0;
- (unsigned long long)imageScaleType;
- (void)setImageScaleType:(unsigned long long)arg0;
- (unsigned long long)enhancementType;
- (void)setEnhancementType:(unsigned long long)arg0;
- (unsigned long long)netWorkType;
- (id)videoPlayURLs;
- (BOOL)enableVideoOutput;
- (void)setEnableVideoOutput:(BOOL)arg0;
- (id)currPlayURL;
- (id)currPlayAsset;
- (double)currTimeScale;
- (id)metaformateDic;
- (void)setNetworkTime:(long long)arg0;
- (BOOL)truncateTailWhenRepeated;
- (id)deleagte;
- (BOOL)bufferEnded;
- (void)setBufferEnded:(BOOL)arg0;
- (BOOL)playingWithCache;
- (void)setPlayingWithCache:(BOOL)arg0;
- (long long)currCacheSize;
- (long long)videoMediaSize;
- (id)videoTraceId;
- (BOOL)ignoreAudioInterruption;
- (void)setIgnoreAudioInterruption:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })videoOriginSize;
- (unsigned long long)renderType;
- (BOOL)radioMode;
- (void)setRadioMode:(BOOL)arg0;
- (BOOL)ownPlayerPlayWithURLs;
- (void)setOwnPlayerPlayWithURLs:(BOOL)arg0;
- (BOOL)supportsReserveIfNeeded;
- (void)setSupportsReserveIfNeeded:(BOOL)arg0;
- (BOOL)playByRestored;
- (void)setPlayByRestored:(BOOL)arg0;
- (BOOL)enableNNSR;
- (void)setEnableNNSR:(BOOL)arg0;
- (BOOL)enableVideo15SR;
- (void)setEnableVideo15SR:(BOOL)arg0;
- (BOOL)enable720pNNSR;
- (void)setEnable720pNNSR:(BOOL)arg0;
- (BOOL)isEnableBmf;
- (BOOL)enableBoundNNSR;
- (void)setEnableBoundNNSR:(BOOL)arg0;
- (id /* block */)cacheSizeBlock;
- (void)setCacheSizeBlock:(id /* block */)arg0;
- (BOOL)isDashSource;
- (id)initWithVideoID:(id)arg0 andPlayURLs:(id)arg1;
- (id)initWithVideoID:(id)arg0 andPlayURLs:(id)arg1 andUrlKey:(id)arg2;
- (void)resetLocalVideoURLPath:(id)arg0;
- (void)resetVideoID:(id)arg0 andPlayURLs:(id)arg1 urlKey:(id)arg2;
- (void)resetVideoID:(id)arg0 andPlayURLs:(id)arg1 urlKey:(id)arg2 fileCs:(id)arg3;
- (void)addVideoPlayWithURL:(id)arg0 forTimes:(id)arg1;
- (void)removeTimeObserver;
- (double)playBitrate;
- (id)firstFrameTimestamp;
- (double)playFPS;
- (double)videoFPS;
- (double)currPlayableDuration;
- (void)holdPlayWithStartTime:(double)arg0;
- (void)setHoldStopStateValid:(BOOL)arg0;
- (BOOL)isHoldStopStateValid;
- (void)setCustomHeaderInfo:(id)arg0;
- (void)resetDecryptionKey:(id)arg0;
- (void)resetEncryptedDecryptionKey:(id)arg0;
- (id)playerConsumedBytes;
- (void)setLoopPlayerWithLoopState:(BOOL)arg0 loopWay:(long long)arg1 loopStartTime:(double)arg2 loopEndTime:(double)arg3;
- (void)setCacheDuration:(double)arg0;
- (void)setPlayerSubTag:(id)arg0;
- (void)setCustomLog:(id)arg0;
- (void)setFpsThresholdNNSR:(long long)arg0;
- (void)addTTPlayerExtraView:(id)arg0;
- (void)removeTTPlayerExtraView:(id)arg0;
- (void)setPlayerAudioEffectTargetLoudnessForPlayer:(double)arg0;
- (double)playerAudioEffectTargetLoudnessForPlayer;
- (void)setPlayerAudioEffectSrcLoudness:(double)arg0;
- (void)setPlayerAudioEffectSrcPeak:(double)arg0;
- (void)setPlayerDashVideoInfoV2:(id)arg0;
- (void)setPlayerDASHVideoProperBitrateV2:(long long)arg0;
- (void)setPlayerDASHAudioProperBitrate:(long long)arg0;
- (void)setPlayerDASHVideoProperBitrate:(long long)arg0;
- (void)setPlayerCDNUrlExpiredTime:(long long)arg0;
- (void)setPlayerChangePlaybackSpeedEnabled:(BOOL)arg0;
- (void)setPlayerPlaybackSpeed:(double)arg0;
- (void)setPlayerDashVideoHosts:(id)arg0;
- (void)setPlayerBashVideoEnabled:(BOOL)arg0;
- (void)setPlayerCheckHijackEnabled:(BOOL)arg0;
- (void)setPlayerSeekEndEnabled:(BOOL)arg0;
- (void)setTTVideoEngineRenderEngine:(unsigned long long)arg0;
- (long long)videoSRWidth;
- (long long)videoSRHeight;
- (void)setLoadControl:(id)arg0;
- (void)setTTVideoEngineNormalClockType:(long long)arg0;
- (void)setEnablePlayerRange:(BOOL)arg0 prepareMaxCacheMs:(long long)arg1 httpAutoRangeOffsetKB:(long long)arg2;
- (void)setResourceLoaderErrorStrategy:(unsigned long long)arg0;
- (void)setPlayerMDLCacheModel:(long long)arg0;
- (void)updatePlayerOptions:(id)arg0;
- (void)updatePlayerEffectOptions:(id)arg0;
- (void)updatePlayerCustomInfo:(id)arg0;
- (void)initEnablePlayerVREffectOptions:(id)arg0;
- (void)initPlayerVREffect:(BOOL)arg0 zoomValue:(id)arg1 headTracking:(id)arg2 scopicType:(long long)arg3 options:(id)arg4;
- (void)enablePlayerVREffect:(BOOL)arg0;
- (void)updatePlayerVREffectWithZoomValue:(id)arg0 headTracking:(id)arg1 scopicType:(long long)arg2 rotationPitch:(id)arg3 rotationYaw:(id)arg4 rotationRoll:(id)arg5 options:(id)arg6;
- (void)resetPlayerVRCenter;
- (void)initPlayerMask:(BOOL)arg0 maskURL:(id)arg1 maskHeadLen:(id)arg2 fileHash:(id)arg3;
- (void)enablePlayerMask:(BOOL)arg0;
- (BOOL)supportPlayerMask;
- (id)getPlayerOptionByKey:(long long)arg0;
- (void)setSRLongLower:(long long)arg0;
- (void)setSRLongUpper:(long long)arg0;
- (void)setSRShortLower:(long long)arg0;
- (void)setSRShortUpper:(long long)arg0;
- (void)setPreferSpdlForHDR:(BOOL)arg0;
- (void)setSetSpdlForHDR:(BOOL)arg0;
- (void)setVtbFlushKeepSesssion:(BOOL)arg0;
- (void)setPlayerEnableVtbDropRASL:(BOOL)arg0;
- (void)setPostPrepareMsgEnable:(BOOL)arg0;
- (void)setCurrentPlaybackTimeInterval:(long long)arg0;
- (void)setLutFilter:(id)arg0;
- (void)setLutFilter:(id)arg0 HDRLutImage:(id)arg1;
- (void)setLutFilterStrength:(double)arg0;
- (void)setVideoDynamicGaussianBlurWithGradientLength:(double)arg0 filterStrength:(double)arg1 offsetY:(double)arg2 texMaxLength:(long long)arg3 frameControlNum:(long long)arg4;
- (void)updateVideoDynamicGaussianBlurWhenEnginePoolWithOffsetY:(double)arg0;
- (void)resetVideoDynamicGaussianBlur;
- (void)resetVideoDynamicGaussianBlurViewSize;
- (void)switchToAudioWithInfoID:(unsigned long long)arg0;
- (void)suspendSocketCheck;
- (void)resumeSocketCheck;
- (void)setEnableMonitorPlayNetwork:(BOOL)arg0;
- (id)getAppSessionID;
- (void)setEnablePlayOnlyCheckDash:(BOOL)arg0;
- (void)setVideoDurationOptionValue:(id)arg0;
- (long long)getKeyVideoAreaFrame;
- (id)get3DForegroundView;
- (void)activePeriodicTimeObserver;
- (void)removePeriodicTimeObserver;
- (void)setOnePlayMergeEnable;
- (void)setPlayerDashVideoInfo:(id)arg0;
- (void)resetVideoID:(id)arg0 andPlayURLs:(id)arg1;
- (void)setStartPlayTime:(double)arg0;
- (void)setTruncateTailWhenRepeated:(BOOL)arg0;
- (void)setPlayerTag:(id)arg0;
- (void)setDeleagte:(id)arg0;
- (void)setNetWorkType:(unsigned long long)arg0;
- (BOOL)enableHardDecode;
- (void)setEnableHardDecode:(BOOL)arg0;
- (BOOL)enableH256Decode;
- (void)setEnableH256Decode:(BOOL)arg0;
- (void)setUpMemoryOptimize:(BOOL)arg0;
- (double)currPlaybackTime;
- (id)playURLs;
- (id)fileCs;
- (struct __CVBuffer { } *)copyPixelBufferForCurrentTime;
- (id)videoEngineModel;
- (void)setVideoEngineModel:(id)arg0;
- (void)setVideoPlayURLs:(id)arg0;
- (id)defaultHosts;
- (long long)urlExpiredTime;
- (void)setUrlExpiredTime:(long long)arg0;
- (void)videoEngine:(id)arg0 loadStateDidChanged:(unsigned long long)arg1;
- (void)videoEngineUserStopped:(id)arg0;
- (void)videoEngineDidFinish:(id)arg0 error:(id)arg1;
- (void)videoEngineDidFinish:(id)arg0 videoStatusException:(long long)arg1;
- (void)videoEngineCloseAysncFinish:(id)arg0;
- (void)videoEngine:(id)arg0 playbackStateDidChanged:(long long)arg1;
- (void)videoEngine:(id)arg0 loadStateDidChanged:(unsigned long long)arg1 extra:(id)arg2;
- (void)videoEngine:(id)arg0 fetchedVideoModel:(id)arg1;
- (void)videoEngineReadyToDisPlay:(id)arg0;
- (void)videoEnginePrepared:(id)arg0;
- (void)videoEngineReadyToPlay:(id)arg0;
- (void)videoEngine:(id)arg0 mdlKey:(id)arg1 hitCacheSze:(long long)arg2;
- (void)videoEngineDeviceOpened:(id)arg0 streamType:(long long)arg1;
- (void)videoEngine:(id)arg0 avOutsyncStateDidChanged:(unsigned long long)arg1 extraInfo:(id)arg2;
- (void)videoEngine:(id)arg0 switchMediaInfoCompleted:(long long)arg1;
- (void)ttplayerViewWillRelease:(id)arg0;
- (void)ttplayerViewDidCreateRenderViewForPlayerView:(id)arg0;
- (void)ttplayerViewLayoutSubviewsRenderViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 playerViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)noVideoDataToDownloadForKey:(id)arg0;
- (void)didFinishVideoDataDownloadForKey:(id)arg0;
- (void)setVREffectParamter:(id)arg0;
- (void)didUpdateVRHeadPoseWithYaw:(double)arg0 pitch:(double)arg1 roll:(double)arg2;
- (BOOL)configResolution:(unsigned long long)arg0;
- (id)apiForFetcher:(unsigned long long)arg0;
- (id)apiForFetcher;
- (void)videoEngine:(id)arg0 didFinishedWithEvent:(id)arg1;
- (void)videoEngine:(id)arg0 onMaskInfoCallBack:(id)arg1 pts:(unsigned long long)arg2;
- (id)playerAboveExtraViews;
- (id)playerBelowExtraViews;
- (id)initWithVideoID:(id)arg0 andPlayURLs:(id)arg1 videoWrapper:(struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)arg2 audioWrapper:(struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)arg3;
- (id)initWithVideoID:(id)arg0 andPlayURLs:(id)arg1 videoWrapper:(struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)arg2 audioWrapper:(struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)arg3 audioWrapperV2:(id)arg4;
- (void)videoEngineCacheLoadProgressNotification:(id)arg0;
- (void)setIsURLChanged:(BOOL)arg0;
- (void)setCurrPlayURL:(id)arg0;
- (void)setVideoRequestUrl:(id)arg0;
- (void)setPlayOnceWithURLs:(BOOL)arg0;
- (void)setFileCs:(id)arg0;
- (void)setPeriodicTimeObserverBlock:(id /* block */)arg0;
- (id /* block */)periodicTimeObserverBlock;
- (id)playbackCheckTimer;
- (double)firstFrameExpectTime;
- (double)prevTimerCallPlaybackTime;
- (void)setPrevTimerCallPlaybackTime:(double)arg0;
- (id)boundaryEvents;
- (BOOL)videoIsReallyPlaying;
- (BOOL)shouldCallBoundaryBlock:(double)arg0;
- (id)optimizeTimerCallbackQueue;
- (BOOL)shouldEnumerateTimesInCurrent:(double)arg0 withPrevious:(double)arg1;
- (BOOL)shouldCallBlockOfTime:(double)arg0 inCurrent:(double)arg1 withPrevious:(double)arg2;
- (void)postVideoSessionDeallocNoti;
- (BOOL)hadStoped;
- (void)optimizedCheckBoundaryEvent:(id)arg0;
- (void)checkBoundaryEvent:(id)arg0;
- (BOOL)shouldResetPlayer;
- (void)setHasPlayedOnce:(BOOL)arg0;
- (void)setFirstSetPlaybackTime:(double)arg0;
- (void)setFirstFrameExpectTime:(double)arg0;
- (void)setPToken:(id)arg0;
- (void)setPlayAuth:(id)arg0;
- (void)setHostIndex:(long long)arg0;
- (void)setVideoProperBitrate:(long long)arg0;
- (void)setVideoDashV2Bitrate:(long long)arg0;
- (void)setAudioDashBitrate:(long long)arg0;
- (void)setSelectedDASHResolutionType:(unsigned long long)arg0;
- (void)setBashVideoEnabled:(BOOL)arg0;
- (void)setCheckHijackEnabled:(BOOL)arg0;
- (void)setALMOwnPlayerHoldStopValid:(BOOL)arg0;
- (id)retainTaskSet;
- (BOOL)playWithURLs;
- (id)videoRequestUrl;
- (void)setDefaultHosts:(id)arg0;
- (void)setShouldResetPlayer:(BOOL)arg0;
- (BOOL)isURLChanged;
- (BOOL)enablePlayForOnlyDashModel;
- (void)setPreloadCachedSize:(long long)arg0;
- (BOOL)requestWithCookies;
- (BOOL)checkHijackEnabled;
- (void)setPlayerDASHRangeDetail;
- (long long)videoProperBitrate;
- (void)setPlayerDASHVideoResolutionWithProperBitrate:(long long)arg0;
- (long long)videoDashV2Bitrate;
- (long long)audioDashBitrate;
- (void)setPlayerDASHVideoResolutionWithProperBitrateV2:(long long)arg0;
- (void)setPlayerDASHAudioBitrate:(long long)arg0;
- (unsigned long long)selectedDASHResolutionType;
- (id)pToken;
- (id)playAuth;
- (BOOL)bashVideoEnabled;
- (BOOL)isLocalPlayURL;
- (BOOL)isCacheDownloadcompleteByKey:(id)arg0;
- (double)playTimeBeforeReserved;
- (void)setIsReserved:(BOOL)arg0;
- (void)setPlayTimeBeforeReserved:(double)arg0;
- (void)setRequestWithCookies:(BOOL)arg0;
- (void)setConsumedBytes:(id)arg0;
- (long long)preloadCachedSize;
- (id)consumedBytes;
- (BOOL)ALMOwnPlayerHoldStopValid;
- (double)firstSetPlaybackTime;
- (long long)hostIndex;
- (id)ttPlayerExtraViewWithView:(id)arg0;
- (void)updateTTPlayerExtraViewFrame:(id)arg0 renderViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 playerViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2;
- (BOOL)hasPlayedOnce;
- (void)setMetaformateDic:(id)arg0;
- (void)resetPlayerIfNeeded;
- (void)setHadStoped:(BOOL)arg0;
- (id)errorWithStatusCode:(long long)arg0;
- (BOOL)playOnceWithURLs;
- (void)videoEngine:(id)arg0 playFailWithURL:(id)arg1 error:(id)arg2;
- (void)videoEngine:(id)arg0 playFailWithURL:(id)arg1 statusException:(long long)arg2;
- (void)setTTSInfoConfig:(id)arg0;
- (id)initWithVideoID:(id)arg0 andPlayURLs:(id)arg1 enablePixsBuffer:(BOOL)arg2;
- (BOOL)isUsingHttpDNS;
- (id)videoPlayResponse;
- (BOOL)requestWithCookALM;
- (void)setRequestWithCookALM:(BOOL)arg0;
- (id)initWithVideoID:(id)arg0 andPlayURLs:(id)arg1 videoWrapper:(struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)arg2 audioWrapperV2:(id)arg3;
- (float)currPlaybackRate;
- (BOOL)changePlaybackSpeedEnabled;
- (void)setChangePlaybackSpeedEnabled:(BOOL)arg0;
- (void)setRetainTaskSet:(id)arg0;
- (void)setObserverSet:(id)arg0;
- (void)setPlaybackCheckTimer:(id)arg0;
- (void)setBoundaryEvents:(id)arg0;
- (void)setOptimizeTimerCallbackQueue:(id)arg0;
- (BOOL)isEnableMonitorNetwork;
- (void)setIsEnableMonitorNetwork:(BOOL)arg0;
- (void)setEnablePlayForOnlyDashModel:(BOOL)arg0;
- (void)setVideoPlayResponse:(id)arg0;
- (void)setPlayerBelowExtraViews:(id)arg0;
- (void)setPlayerAboveExtraViews:(id)arg0;
- (void)setPlaybackRate:(double)arg0;
- (BOOL)mute;
- (long long)playbackState;
- (long long)cacheSize;
- (void)setSessionId:(unsigned long long)arg0;
- (void).cxx_destruct;
- (double)playbackRate;
- (id)observerSet;
- (double)volume;
- (unsigned long long)sessionId;
- (void)stop;
- (void)setCacheSize:(long long)arg0;
- (id)bitrate;
- (void)setPlayer:(id)arg0;
- (void)setTag:(id)arg0;
- (void)setItemID:(id)arg0;
- (id)tag;
- (id)delegate;
- (id)delegateWrapper;
- (long long)videoHeight;
- (id)hosts;
- (void)setPictureInPictureSupported:(BOOL)arg0;
- (BOOL)isPaused;
- (void)setVolume:(double)arg0;
- (long long)videoWidth;
- (void)setDelegateWrapper:(id)arg0;
- (double)videoDuration;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)setRenderType:(unsigned long long)arg0;
- (void)setHosts:(id)arg0;
- (void)pause:(BOOL)arg0;
- (id)view;
- (void)setIsPaused:(BOOL)arg0;
- (void)setMute:(BOOL)arg0;
- (void)setPlaybackState:(long long)arg0;
- (void)reserve;
- (id)player;
- (BOOL)useCache;
- (void)setUseCache:(BOOL)arg0;
- (BOOL)repeated;
- (void)setRepeated:(BOOL)arg0;
- (void)prepareToPlay;
- (id)localURL;
- (unsigned long long)playerType;
- (long long)actionState;
- (void)setActionState:(long long)arg0;
- (void)setLocalURL:(id)arg0;
- (long long)scalingMode;
- (void)setScalingMode:(long long)arg0;
- (void)addPeriodicTimeObserverForInterval:(double)arg0 queue:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)addBoundaryTimeObserverForTimes:(id)arg0 queue:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)accessLog;
- (long long)qualityType;
- (id)videoID;
- (void)setVideoID:(id)arg0;
- (unsigned long long)resolutionType;
- (void)setResolutionType:(unsigned long long)arg0;
- (struct __CVBuffer { } *)currentPixelBuffer;
- (BOOL)pictureInPictureSupported;
- (id)urlKey;
- (void)setUrlKey:(id)arg0;
- (BOOL)isReserved;
- (unsigned long long)currentResolution;
- (long long)networkTime;
- (void)seekToTime:(double)arg0 completion:(id /* block */)arg1;

@end
