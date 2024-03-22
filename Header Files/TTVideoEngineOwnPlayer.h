//
//     Generated by private class-dump
//

@class TTAVTraitObjectManager, NSString, UIView, NSURL, UIImage, NSMutableDictionary, TTVideoEngineAVPlayerItemAccessLog, NSDictionary, NSMutableArray, NSObject;
@protocol TTAVPlayerProtocol, TTVideoPlayerStateProtocol, TTAVPlayerMaskInfoInterface, TTAVPlayerItemProtocol, TTVideoEngineDualCore, TTPlayerViewProtocol, TTAVPlayerSubInfoInterface, TTVideoPlayerEngineInfoProtocol, TTAVPlayerLoadControlInterface, AVAssetResourceLoaderDelegate;

@interface TTVideoEngineOwnPlayer : NSObject <TTVideoEnginePlayer> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    NSURL *_playURL;
    NSDictionary *_header;
    id<TTVideoEngineDualCore> _dualCore;
    NSObject<TTAVPlayerItemProtocol> *_playerItem;
    NSObject<TTAVPlayerProtocol> *_player;
    UIView<TTPlayerViewProtocol> *_view;
    void *audioWrapper;
    void *videoWrapper;
    void *_medialoaderProtocolHandle;
    BOOL _medialoaderProtocolRegistered;
    void *_hlsProxyProtocolHandle;
    unsigned long long _enhancementType;
    unsigned long long _imageScaleType;
    unsigned long long _imageLayoutType;
    unsigned long long _renderType;
    unsigned long long _hijackDummyVoice;
    long long _audioDeviceType;
    BOOL _looping;
    BOOL _seekEndEnabled;
    long long _smoothDelayedSeconds;
    long long _defaultVideoBitrate;
    long long _embellishTime;
    long long _loopStartTime;
    long long _loopEndTime;
    long long _reuseSocket;
    long long _disableAccurateStart;
    BOOL _isPrerolling;
    double _seekingTime;
    BOOL _isSeeking;
    BOOL _isError;
    BOOL _isCompleted;
    BOOL _isShutdown;
    BOOL _isMuted;
    BOOL _playedToEnd;
    BOOL _ignoreAudioInterruption;
    BOOL _isPaused;
    BOOL _useCloseAsync;
    double _playbackSpeed;
    NSMutableArray *_registeredNotifications;
    NSMutableDictionary *_intOptions;
    NSMutableDictionary *_floatOptions;
    BOOL _didStop;
    void *_precisePausePts;
    BOOL _isPauseWhenNotReady;
    BOOL _muted;
    BOOL _asyncInit;
    BOOL _asyncPrepare;
    BOOL _hardwareDecode;
    BOOL _ksyByteVC1Decode;
    BOOL _hijackExit;
    BOOL _reportRequestHeaders;
    BOOL _reportResponseHeaders;
    BOOL _enableDashAbr;
    BOOL _enableIndexCache;
    BOOL _enableFragRange;
    BOOL _enableAsync;
    BOOL _enableOpenTimeout;
    BOOL _handleAudioExtradata;
    BOOL _optimizeMemoryUsage;
    BOOL _barrageMaskEnable;
    BOOL _aiBarrageEnable;
    BOOL _subEnable;
    BOOL _enableRemoveTaskQueue;
    BOOL _isPreparedToPlay;
    BOOL _enableTimerBarPercentage;
    BOOL _enableTTHlsDrm;
    BOOL _enableEnterBufferingDirectly;
    BOOL _audioEffectEnabled;
    BOOL _audioUnitPoolEnabled;
    BOOL _avSyncStartEnable;
    BOOL _codecDropSkippedFrame;
    BOOL _enableRadioMode;
    BOOL _playerLazySeek;
    BOOL _dummyAudioSleep;
    BOOL _isPreparedAsync;
    BOOL _isPlayedinPreparedAsync;
    BOOL _enableNNSR;
    BOOL _enableRange;
    BOOL _enableAllResolutionVideoSR;
    BOOL _terminalAudioUnitPool;
    BOOL _audioLatencyQueueByTime;
    BOOL _videoEndIsAllEof;
    BOOL _enableBufferingMilliSeconds;
    BOOL _enableKeepFormatThreadAlive;
    BOOL _enable720pSR;
    BOOL _enableFFCodecerHeaacV2Compat;
    BOOL _isEnablePostPrepareMsg;
    BOOL _disableShortSeek;
    BOOL _IsPreferNearestSample;
    BOOL _enableHDR10;
    BOOL _preferSpdl4HDR;
    BOOL _stopSourceAsync;
    BOOL _enableSeekInterrupt;
    BOOL _enableRangeCacheDuration;
    BOOL _enableVoiceSplitHeaacV2;
    BOOL _enableAudioHardwareDecode;
    BOOL _delayBufferingUpdate;
    BOOL _noBufferingUpdate;
    BOOL _enableHookVoice;
    BOOL _keepVoiceDuration;
    BOOL _enableSRBound;
    BOOL _filePlayNoBuffering;
    BOOL _enableMasterM3u8Optimize;
    BOOL _enablePostStart;
    BOOL _enablePlayerPreloadGear;
    BOOL _enablePlaySpeedExtend;
    int _cacheFileMode;
    int _testSpeedMode;
    id<TTVideoPlayerStateProtocol> _delegate;
    double _currentPlaybackTime;
    double _duration;
    double _playableDuration;
    long long _bufferingProgress;
    long long _playbackState;
    unsigned long long _loadState;
    long long _scalingMode;
    double _volume;
    id<AVAssetResourceLoaderDelegate> _resourceLoaderDelegate;
    TTVideoEngineAVPlayerItemAccessLog *_accesslog;
    unsigned long long _renderEngine;
    NSString *_filePath;
    NSString *_fileKey;
    NSString *_decryptionKey;
    NSString *_spadea;
    long long _openTimeOut;
    double _startTime;
    void /* function */ *_drmCreater;
    NSString *_vid;
    unsigned long long _drmType;
    long long _drmDowngrade;
    NSString *_tokenUrlTemplate;
    long long _rotateType;
    long long _loopWay;
    NSString *_playUrl;
    NSString *_barrageMaskUrl;
    NSString *_videoCheckInfo;
    NSString *_audioCheckInfo;
    unsigned long long _rangeMode;
    unsigned long long _readMode;
    long long _videoRangeSize;
    long long _audioRangeSize;
    long long _videoRangeTime;
    long long _audioRangeTime;
    long long _skipFindStreamInfo;
    unsigned long long _updateTimestampMode;
    long long _mirrorType;
    id<TTVideoPlayerEngineInfoProtocol> _engine;
    id<TTAVPlayerLoadControlInterface> _loadControl;
    id<TTAVPlayerMaskInfoInterface> _maskInfo;
    long long _enableReportAllBufferUpdate;
    id<TTAVPlayerSubInfoInterface> _subInfo;
    NSString *_subTitleUrlInfo;
    long long _subLanguageId;
    NSString *_defaultCacheFileDir;
    long long _cacheMaxSeconds;
    long long _bufferingTimeOut;
    long long _maxBufferEndTime;
    long long _currentAudioCategory;
    NSString *_ttHlsDrmToken;
    long long _outputFramesWaitNum;
    long long _startPlayAudioBufferThreshold;
    unsigned long long _audioChannelType;
    double _audioEffectPregain;
    double _audioEffectThreshold;
    double _audioEffectRatio;
    double _audioEffectPredelay;
    double _audioEffectPostgain;
    long long _audioEffectType;
    double _audioEffectSrcLoudness;
    double _audioEffectSrcPeak;
    double _audioEffectTarLoudness;
    double _audioEffectReleaseTime;
    double _audioEffectLookAheadTime;
    double _audioEffectLuRange;
    double _audioEffectLuStart;
    double _audioEffectLuEnd;
    double _audioEffectMaxMomLu;
    double _audioEffectMaxShortermLu;
    long long _audioEffectVolumInfoVer;
    long long _audioEffectDevicePlayAbility;
    NSString *_audioEffectConfigJson;
    NSString *_audioEffectVolumeInfoJson;
    NSString *_audioEffectGraphConfig;
    long long _threadWaitTimeMS;
    NSString *_aiBarrageUrl;
    long long _defaultBufferEndTime;
    long long _decoderOutputType;
    long long _prepareMaxCachesMs;
    long long _mdlCacheMode;
    long long _httpAutoRangeOffset;
    id<TTAVPlayerMaskInfoInterface> _aiBarrageInfo;
    long long _nnsrFPSThreshold;
    long long _normalClockType;
    long long _skipBufferLimit;
    long long _enableAVStack;
    long long _defaultBufferingEndMilliSeconds;
    long long _maxBufferEndMilliSeconds;
    long long _decreaseVtbStackSize;
    long long _preferNearestMaxPosOffset;
    long long _findStreamInfoProbeSize;
    long long _findStreamInfoProbeDuration;
    long long _isEnableRefreshByTime;
    long long _liveStartIndex;
    long long _enableFallbackSWDecode;
    long long _changeVtbSizePicSizeBound;
    long long _voiceBlockDuration;
    long long _srLongDimensionLowerBound;
    long long _srLongDimensionUpperBound;
    long long _srShortDimensionLowerBound;
    long long _srShortDimensionUpperBound;
    NSString *_mediaId;
    NSMutableArray *_effectParamArray;
    NSString *_userAgent;
    long long _isEnableVsyncHelper;
    long long _customizedVideoRenderingFrameRate;
    TTAVTraitObjectManager *_traitObjects;
}

@property (nonatomic) double playableDuration;
@property (nonatomic) double duration;
@property (retain, nonatomic) UIView<TTPlayerViewProtocol> *view;
@property (nonatomic) long long bufferingProgress;
@property (nonatomic) BOOL isPreparedToPlay;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *fileKey;
@property (copy, nonatomic) NSString *decryptionKey;
@property (copy, nonatomic) NSString *spadea;
@property (copy, nonatomic) NSString *defaultCacheFileDir;
@property (copy, nonatomic) NSString *vid;
@property (nonatomic) void /* function */ *drmCreater;
@property (nonatomic) unsigned long long drmType;
@property (nonatomic) long long drmDowngrade;
@property (copy, nonatomic) NSString *tokenUrlTemplate;
@property (nonatomic) long long cacheMaxSeconds;
@property (nonatomic) long long bufferingTimeOut;
@property (nonatomic) long long maxBufferEndTime;
@property (copy, nonatomic) NSString *playUrl;
@property (copy, nonatomic) NSString *videoCheckInfo;
@property (copy, nonatomic) NSString *audioCheckInfo;
@property (nonatomic) BOOL hijackExit;
@property (nonatomic) BOOL reportRequestHeaders;
@property (nonatomic) BOOL reportResponseHeaders;
@property (nonatomic) long long currentAudioCategory;
@property (nonatomic) BOOL enableTimerBarPercentage;
@property (nonatomic) BOOL enableDashAbr;
@property (nonatomic) BOOL enableIndexCache;
@property (nonatomic) BOOL enableFragRange;
@property (nonatomic) BOOL enableAsync;
@property (nonatomic) unsigned long long rangeMode;
@property (nonatomic) unsigned long long readMode;
@property (nonatomic) long long videoRangeSize;
@property (nonatomic) long long audioRangeSize;
@property (nonatomic) long long videoRangeTime;
@property (nonatomic) long long audioRangeTime;
@property (nonatomic) long long skipFindStreamInfo;
@property (nonatomic) unsigned long long updateTimestampMode;
@property (nonatomic) BOOL enableOpenTimeout;
@property (nonatomic) BOOL handleAudioExtradata;
@property (nonatomic) BOOL enableTTHlsDrm;
@property (copy, nonatomic) NSString *ttHlsDrmToken;
@property (nonatomic) BOOL enableEnterBufferingDirectly;
@property (nonatomic) long long outputFramesWaitNum;
@property (nonatomic) long long startPlayAudioBufferThreshold;
@property (nonatomic) unsigned long long audioChannelType;
@property (nonatomic) BOOL audioEffectEnabled;
@property (nonatomic) double audioEffectPregain;
@property (nonatomic) double audioEffectThreshold;
@property (nonatomic) double audioEffectRatio;
@property (nonatomic) double audioEffectPredelay;
@property (nonatomic) double audioEffectPostgain;
@property (nonatomic) long long audioEffectType;
@property (nonatomic) double audioEffectSrcLoudness;
@property (nonatomic) double audioEffectSrcPeak;
@property (nonatomic) double audioEffectTarLoudness;
@property (nonatomic) double audioEffectReleaseTime;
@property (nonatomic) double audioEffectLookAheadTime;
@property (nonatomic) double audioEffectLuRange;
@property (nonatomic) double audioEffectLuStart;
@property (nonatomic) double audioEffectLuEnd;
@property (nonatomic) double audioEffectMaxMomLu;
@property (nonatomic) double audioEffectMaxShortermLu;
@property (nonatomic) long long audioEffectVolumInfoVer;
@property (nonatomic) long long audioEffectDevicePlayAbility;
@property (copy, nonatomic) NSString *audioEffectConfigJson;
@property (copy, nonatomic) NSString *audioEffectVolumeInfoJson;
@property (copy, nonatomic) NSString *audioEffectGraphConfig;
@property (nonatomic) BOOL audioUnitPoolEnabled;
@property (nonatomic) BOOL avSyncStartEnable;
@property (nonatomic) BOOL codecDropSkippedFrame;
@property (nonatomic) long long threadWaitTimeMS;
@property (nonatomic) BOOL enableRadioMode;
@property (nonatomic) BOOL playerLazySeek;
@property (nonatomic) BOOL dummyAudioSleep;
@property (copy, nonatomic) NSString *barrageMaskUrl;
@property (copy, nonatomic) NSString *aiBarrageUrl;
@property (nonatomic) BOOL isPreparedAsync;
@property (nonatomic) BOOL isPlayedinPreparedAsync;
@property (nonatomic) long long defaultBufferEndTime;
@property (nonatomic) long long decoderOutputType;
@property (nonatomic) long long prepareMaxCachesMs;
@property (nonatomic) long long mdlCacheMode;
@property (nonatomic) long long httpAutoRangeOffset;
@property (nonatomic) id<TTAVPlayerLoadControlInterface> loadControl;
@property (weak, nonatomic) id<TTAVPlayerMaskInfoInterface> maskInfo;
@property (weak, nonatomic) id<TTAVPlayerMaskInfoInterface> aiBarrageInfo;
@property (nonatomic) BOOL enableNNSR;
@property (nonatomic) long long nnsrFPSThreshold;
@property (nonatomic) BOOL enableRange;
@property (nonatomic) long long normalClockType;
@property (nonatomic) BOOL enableAllResolutionVideoSR;
@property (nonatomic) long long skipBufferLimit;
@property (nonatomic) long long enableAVStack;
@property (nonatomic) BOOL terminalAudioUnitPool;
@property (nonatomic) BOOL audioLatencyQueueByTime;
@property (nonatomic) BOOL videoEndIsAllEof;
@property (nonatomic) BOOL enableBufferingMilliSeconds;
@property (nonatomic) BOOL enableKeepFormatThreadAlive;
@property (nonatomic) BOOL enable720pSR;
@property (nonatomic) BOOL enableFFCodecerHeaacV2Compat;
@property (nonatomic) long long defaultBufferingEndMilliSeconds;
@property (nonatomic) long long maxBufferEndMilliSeconds;
@property (nonatomic) long long decreaseVtbStackSize;
@property (nonatomic) BOOL isEnablePostPrepareMsg;
@property (nonatomic) BOOL disableShortSeek;
@property (nonatomic) BOOL IsPreferNearestSample;
@property (nonatomic) long long preferNearestMaxPosOffset;
@property (nonatomic) long long findStreamInfoProbeSize;
@property (nonatomic) long long findStreamInfoProbeDuration;
@property (nonatomic) long long isEnableRefreshByTime;
@property (nonatomic) long long liveStartIndex;
@property (nonatomic) long long enableFallbackSWDecode;
@property (nonatomic) BOOL enableHDR10;
@property (nonatomic) BOOL preferSpdl4HDR;
@property (nonatomic) BOOL stopSourceAsync;
@property (nonatomic) BOOL enableSeekInterrupt;
@property (nonatomic) long long changeVtbSizePicSizeBound;
@property (nonatomic) BOOL enableRangeCacheDuration;
@property (nonatomic) BOOL enableVoiceSplitHeaacV2;
@property (nonatomic) BOOL enableAudioHardwareDecode;
@property (nonatomic) BOOL delayBufferingUpdate;
@property (nonatomic) BOOL noBufferingUpdate;
@property (nonatomic) BOOL enableHookVoice;
@property (nonatomic) BOOL keepVoiceDuration;
@property (nonatomic) long long voiceBlockDuration;
@property (nonatomic) BOOL enableSRBound;
@property (nonatomic) long long srLongDimensionLowerBound;
@property (nonatomic) long long srLongDimensionUpperBound;
@property (nonatomic) long long srShortDimensionLowerBound;
@property (nonatomic) long long srShortDimensionUpperBound;
@property (nonatomic) BOOL filePlayNoBuffering;
@property (copy, nonatomic) NSString *mediaId;
@property (retain, nonatomic) NSMutableArray *effectParamArray;
@property (copy, nonatomic) NSString *userAgent;
@property (nonatomic) BOOL enableMasterM3u8Optimize;
@property (nonatomic) BOOL enablePostStart;
@property (nonatomic) BOOL enablePlayerPreloadGear;
@property (nonatomic) long long isEnableVsyncHelper;
@property (nonatomic) long long customizedVideoRenderingFrameRate;
@property (nonatomic) BOOL enablePlaySpeedExtend;
@property (retain, nonatomic) id<TTVideoEngineDualCore> dualCore;
@property (retain, nonatomic) TTAVTraitObjectManager *traitObjects;
@property (weak, nonatomic) id<TTVideoPlayerStateProtocol> delegate;
@property (weak, nonatomic) id<TTVideoPlayerEngineInfoProtocol> engine;
@property (weak, nonatomic) id<TTAVPlayerSubInfoInterface> subInfo;
@property (copy, nonatomic) NSURL *contentURL;
@property (nonatomic) int cacheFileMode;
@property (nonatomic) int testSpeedMode;
@property (nonatomic) double currentPlaybackTime;
@property (readonly, nonatomic) long long mediaSize;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setEffect:(id)arg0;

- (unsigned long long)imageLayoutType;
- (void)setImageLayoutType:(unsigned long long)arg0;
- (void)setPlayerAudioDevice:(unsigned long long)arg0;
- (id)vid;
- (void)setVid:(id)arg0;
- (void)setFloatValue:(float)arg0 forKey:(int)arg1;
- (void)setHardwareDecode:(BOOL)arg0;
- (double)getFloatValueForKey:(int)arg0;
- (id)getStringValueForKey:(int)arg0;
- (BOOL)hardwareDecode;
- (struct __CVBuffer { } *)copyPixelBuffer;
- (void)setPlayUrl:(id)arg0;
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
- (BOOL)enableNNSR;
- (void)setEnableNNSR:(BOOL)arg0;
- (void)setPlayerPlaybackSpeed:(double)arg0;
- (void)setLoadControl:(id)arg0;
- (void)setDecreaseVtbStackSize:(long long)arg0;
- (void)setSkipBufferLimit:(long long)arg0;
- (void)setNormalClockType:(long long)arg0;
- (void)setIntValue:(int)arg0 forKey:(int)arg1;
- (void)setIsPreparedToPlay:(BOOL)arg0;
- (void)setBufferingProgress:(long long)arg0;
- (long long)bufferingProgress;
- (void)setRenderEngine:(unsigned long long)arg0;
- (unsigned long long)renderEngine;
- (BOOL)asyncInit;
- (void)setAsyncInit:(BOOL)arg0;
- (long long)openTimeOut;
- (void)setOpenTimeOut:(long long)arg0;
- (id)fileKey;
- (void)setFileKey:(id)arg0;
- (void)setAlignMode:(long long)arg0;
- (id)attachedPic;
- (long long)getInt64Value:(long long)arg0 forKey:(int)arg1;
- (void)setValueVoidPTR:(void *)arg0 forKey:(int)arg1;
- (void)setValueString:(id)arg0 forKey:(int)arg1;
- (float)getFloatValueForKeyType:(int)arg0 forType:(int)arg1;
- (id)getStringValueForKeyType:(int)arg0 forType:(int)arg1;
- (int)getIntValueForKeyType:(int)arg0 forType:(int)arg1;
- (void)setCacheFile:(id)arg0 mode:(int)arg1;
- (void)setDrmCreater:(void /* function */ *)arg0;
- (id)getSubtitleContent:(long long)arg0 Params:(id)arg1;
- (void)resetPlayerVideoProcessor;
- (id)getStreamInfo;
- (id)effectParamArray;
- (void)setEffectParamArray:(id)arg0;
- (int)getIntValue:(int)arg0 forKey:(int)arg1;
- (void)setNormalizeCropArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)getExtraViewForViewType:(long long)arg0;
- (void)setAlignRatio:(double)arg0;
- (void)resetWhenGivebackToPool;
- (void)setPlayerStartTime:(double)arg0;
- (id)barrageMaskUrl;
- (void)setBarrageMaskUrl:(id)arg0;
- (id)aiBarrageUrl;
- (void)setAiBarrageUrl:(id)arg0;
- (id)initWithType:(unsigned long long)arg0 async:(BOOL)arg1;
- (void)audioRenderStart:(id)arg0;
- (void)videoSizeChange:(id)arg0;
- (void)videoBitrateChange:(id)arg0;
- (void)deviceOpened:(id)arg0;
- (void)preBufferingStart:(id)arg0;
- (void)outleterPaused:(id)arg0;
- (void)barrageMaskInfoNotificate:(id)arg0;
- (void)avOutsyncStart:(id)arg0;
- (void)avOutsyncEnd:(id)arg0;
- (void)noVARenderStart:(id)arg0;
- (void)noVARenderEnd:(id)arg0;
- (void)startTimeNoVideoFrame:(id)arg0;
- (void)mediaInfoDidChanged:(id)arg0;
- (void)showedFirstAVSyncFrame:(id)arg0;
- (void)videoAbnormalOccur:(id)arg0;
- (void)setPlayerImageScaleType:(unsigned long long)arg0;
- (void)setPlayerEnhancementType:(unsigned long long)arg0;
- (void)setPlayerLayoutType:(unsigned long long)arg0;
- (void)setPlayerRenderType:(unsigned long long)arg0;
- (void)setPlayerViewRenderEngine:(unsigned long long)arg0;
- (void)setPlayerLooping:(BOOL)arg0;
- (void)setPlayerOpenTimeOut:(long long)arg0;
- (void)setPlayerSmoothDelayedSeconds:(long long)arg0;
- (void)setPlayerKsyByteVC1Decode:(BOOL)arg0;
- (id)_getTaskQueue;
- (void)didPrepareToPlayUrl:(id)arg0;
- (void)setCacheMaxSeconds:(long long)arg0;
- (void)setBufferingTimeOut:(long long)arg0;
- (void)setMaxBufferEndTime:(long long)arg0;
- (void)setOutputFramesWaitNum:(long long)arg0;
- (void)setStartPlayAudioBufferThreshold:(long long)arg0;
- (void)setAudioChannelType:(unsigned long long)arg0;
- (void)setAudioEffectEnabled:(BOOL)arg0;
- (void)setAudioUnitPoolEnabled:(BOOL)arg0;
- (void)setAvSyncStartEnable:(BOOL)arg0;
- (void)setThreadWaitTimeMS:(long long)arg0;
- (void)setCodecDropSkippedFrame:(BOOL)arg0;
- (void)setEnableRadioMode:(BOOL)arg0;
- (void)setPlayerLazySeek:(BOOL)arg0;
- (void)setDummyAudioSleep:(BOOL)arg0;
- (void)setDefaultBufferEndTime:(long long)arg0;
- (void)setDecoderOutputType:(long long)arg0;
- (void)setPrepareMaxCachesMs:(long long)arg0;
- (void)setMdlCacheMode:(long long)arg0;
- (void)setHttpAutoRangeOffset:(long long)arg0;
- (void)setNnsrFPSThreshold:(long long)arg0;
- (void)setEnableRange:(BOOL)arg0;
- (void)setAudioEffectType:(long long)arg0;
- (void)setAudioEffectVolumInfoVer:(long long)arg0;
- (void)setAudioEffectDevicePlayAbility:(long long)arg0;
- (void)setEnableAllResolutionVideoSR:(BOOL)arg0;
- (void)setEnableAVStack:(long long)arg0;
- (void)setTerminalAudioUnitPool:(BOOL)arg0;
- (void)setAudioLatencyQueueByTime:(BOOL)arg0;
- (void)setVideoEndIsAllEof:(BOOL)arg0;
- (void)setEnableBufferingMilliSeconds:(BOOL)arg0;
- (void)setDefaultBufferingEndMilliSeconds:(long long)arg0;
- (void)setMaxBufferEndMilliSeconds:(long long)arg0;
- (void)setIsEnablePostPrepareMsg:(BOOL)arg0;
- (void)setDisableShortSeek:(BOOL)arg0;
- (void)setIsPreferNearestSample:(BOOL)arg0;
- (void)setPreferNearestMaxPosOffset:(long long)arg0;
- (void)setEnable720pSR:(BOOL)arg0;
- (void)setEnableKeepFormatThreadAlive:(BOOL)arg0;
- (void)setEnableHDR10:(BOOL)arg0;
- (void)setFindStreamInfoProbeSize:(long long)arg0;
- (void)setFindStreamInfoProbeDuration:(long long)arg0;
- (void)setIsEnableRefreshByTime:(long long)arg0;
- (void)setLiveStartIndex:(long long)arg0;
- (void)setEnableFallbackSWDecode:(long long)arg0;
- (void)setEnableFFCodecerHeaacV2Compat:(BOOL)arg0;
- (void)setPreferSpdl4HDR:(BOOL)arg0;
- (void)setStopSourceAsync:(BOOL)arg0;
- (void)setEnableSeekInterrupt:(BOOL)arg0;
- (void)setChangeVtbSizePicSizeBound:(long long)arg0;
- (void)setEnableRangeCacheDuration:(BOOL)arg0;
- (void)setEnableVoiceSplitHeaacV2:(BOOL)arg0;
- (void)setEnableAudioHardwareDecode:(BOOL)arg0;
- (void)setDelayBufferingUpdate:(BOOL)arg0;
- (void)setNoBufferingUpdate:(BOOL)arg0;
- (void)setKeepVoiceDuration:(BOOL)arg0;
- (void)setVoiceBlockDuration:(long long)arg0;
- (void)setEnableSRBound:(BOOL)arg0;
- (void)setSrLongDimensionLowerBound:(long long)arg0;
- (void)setSrLongDimensionUpperBound:(long long)arg0;
- (void)setSrShortDimensionLowerBound:(long long)arg0;
- (void)setSrShortDimensionUpperBound:(long long)arg0;
- (void)setFilePlayNoBuffering:(BOOL)arg0;
- (void)setEnableHookVoice:(BOOL)arg0;
- (void)setEnableMasterM3u8Optimize:(BOOL)arg0;
- (void)setEnablePostStart:(BOOL)arg0;
- (void)setEnablePlayerPreloadGear:(BOOL)arg0;
- (void)setIsEnableVsyncHelper:(long long)arg0;
- (void)setCustomizedVideoRenderingFrameRate:(long long)arg0;
- (void)setEnablePlaySpeedExtend:(BOOL)arg0;
- (void)setAudioEffectPregain:(double)arg0;
- (void)setAudioEffectThreshold:(double)arg0;
- (void)setAudioEffectRatio:(double)arg0;
- (void)setAudioEffectPredelay:(double)arg0;
- (void)setAudioEffectPostgain:(double)arg0;
- (void)setAudioEffectSrcLoudness:(double)arg0;
- (void)setAudioEffectTarLoudness:(double)arg0;
- (void)setAudioEffectSrcPeak:(double)arg0;
- (void)setAudioEffectReleaseTime:(double)arg0;
- (void)setAudioEffectLookAheadTime:(double)arg0;
- (void)setAudioEffectLuRange:(double)arg0;
- (void)setAudioEffectLuStart:(double)arg0;
- (void)setAudioEffectLuEnd:(double)arg0;
- (void)setAudioEffectMaxMomLu:(double)arg0;
- (void)setAudioEffectMaxShortermLu:(double)arg0;
- (long long)decoderOutputType;
- (void)prepareToPlaySetPlayer;
- (unsigned long long)resonFromPlayerCore:(unsigned long long)arg0;
- (void)didPlaybackStateChange;
- (void)didLoadStateChange;
- (void)setEnableEnterBufferingDirectly:(BOOL)arg0;
- (void)assetFailedToPrepareForPlayback:(id)arg0;
- (void)playerItemDidReachEnd;
- (void)item:(id)arg0 statusChanged:(long long)arg1;
- (void)beginToPlayWithPlayerItem:(id)arg0;
- (id)dualCore;
- (void)setEnableTimerBarPercentage:(BOOL)arg0;
- (void)setEnableTTHlsDrm:(BOOL)arg0;
- (void)setTtHlsDrmToken:(id)arg0;
- (id)getIpAddress;
- (BOOL)getMedialoaderProtocolRegistered;
- (BOOL)getHLSProxyProtocolRegistered;
- (id)spadea;
- (void)setSpadea:(id)arg0;
- (void /* function */ *)drmCreater;
- (unsigned long long)drmType;
- (void)setDrmType:(unsigned long long)arg0;
- (long long)drmDowngrade;
- (void)setDrmDowngrade:(long long)arg0;
- (id)tokenUrlTemplate;
- (void)setTokenUrlTemplate:(id)arg0;
- (id)playUrl;
- (id)videoCheckInfo;
- (void)setVideoCheckInfo:(id)arg0;
- (id)audioCheckInfo;
- (void)setAudioCheckInfo:(id)arg0;
- (BOOL)hijackExit;
- (void)setHijackExit:(BOOL)arg0;
- (BOOL)reportRequestHeaders;
- (void)setReportRequestHeaders:(BOOL)arg0;
- (BOOL)reportResponseHeaders;
- (void)setReportResponseHeaders:(BOOL)arg0;
- (BOOL)enableDashAbr;
- (void)setEnableDashAbr:(BOOL)arg0;
- (BOOL)enableIndexCache;
- (void)setEnableIndexCache:(BOOL)arg0;
- (BOOL)enableFragRange;
- (void)setEnableFragRange:(BOOL)arg0;
- (BOOL)enableAsync;
- (void)setEnableAsync:(BOOL)arg0;
- (void)setRangeMode:(unsigned long long)arg0;
- (unsigned long long)readMode;
- (void)setReadMode:(unsigned long long)arg0;
- (long long)videoRangeSize;
- (void)setVideoRangeSize:(long long)arg0;
- (long long)audioRangeSize;
- (void)setAudioRangeSize:(long long)arg0;
- (long long)videoRangeTime;
- (void)setVideoRangeTime:(long long)arg0;
- (long long)audioRangeTime;
- (void)setAudioRangeTime:(long long)arg0;
- (long long)skipFindStreamInfo;
- (void)setSkipFindStreamInfo:(long long)arg0;
- (unsigned long long)updateTimestampMode;
- (void)setUpdateTimestampMode:(unsigned long long)arg0;
- (BOOL)enableOpenTimeout;
- (void)setEnableOpenTimeout:(BOOL)arg0;
- (BOOL)handleAudioExtradata;
- (void)setHandleAudioExtradata:(BOOL)arg0;
- (id)loadControl;
- (id)defaultCacheFileDir;
- (void)setDefaultCacheFileDir:(id)arg0;
- (long long)cacheMaxSeconds;
- (long long)bufferingTimeOut;
- (long long)maxBufferEndTime;
- (BOOL)enableTimerBarPercentage;
- (BOOL)enableTTHlsDrm;
- (id)ttHlsDrmToken;
- (BOOL)enableEnterBufferingDirectly;
- (long long)outputFramesWaitNum;
- (long long)startPlayAudioBufferThreshold;
- (unsigned long long)audioChannelType;
- (BOOL)audioEffectEnabled;
- (double)audioEffectPregain;
- (double)audioEffectThreshold;
- (double)audioEffectRatio;
- (double)audioEffectPredelay;
- (double)audioEffectPostgain;
- (long long)audioEffectType;
- (double)audioEffectSrcLoudness;
- (double)audioEffectSrcPeak;
- (double)audioEffectTarLoudness;
- (double)audioEffectReleaseTime;
- (double)audioEffectLookAheadTime;
- (double)audioEffectLuRange;
- (double)audioEffectLuStart;
- (double)audioEffectLuEnd;
- (double)audioEffectMaxMomLu;
- (double)audioEffectMaxShortermLu;
- (long long)audioEffectVolumInfoVer;
- (long long)audioEffectDevicePlayAbility;
- (id)audioEffectConfigJson;
- (void)setAudioEffectConfigJson:(id)arg0;
- (id)audioEffectVolumeInfoJson;
- (void)setAudioEffectVolumeInfoJson:(id)arg0;
- (id)audioEffectGraphConfig;
- (void)setAudioEffectGraphConfig:(id)arg0;
- (BOOL)audioUnitPoolEnabled;
- (BOOL)avSyncStartEnable;
- (BOOL)codecDropSkippedFrame;
- (long long)threadWaitTimeMS;
- (BOOL)enableRadioMode;
- (BOOL)playerLazySeek;
- (BOOL)dummyAudioSleep;
- (BOOL)isPreparedAsync;
- (void)setIsPreparedAsync:(BOOL)arg0;
- (BOOL)isPlayedinPreparedAsync;
- (void)setIsPlayedinPreparedAsync:(BOOL)arg0;
- (long long)defaultBufferEndTime;
- (long long)prepareMaxCachesMs;
- (long long)mdlCacheMode;
- (long long)httpAutoRangeOffset;
- (id)aiBarrageInfo;
- (void)setAiBarrageInfo:(id)arg0;
- (long long)nnsrFPSThreshold;
- (BOOL)enableRange;
- (long long)normalClockType;
- (BOOL)enableAllResolutionVideoSR;
- (long long)skipBufferLimit;
- (long long)enableAVStack;
- (BOOL)terminalAudioUnitPool;
- (BOOL)audioLatencyQueueByTime;
- (BOOL)videoEndIsAllEof;
- (BOOL)enableBufferingMilliSeconds;
- (BOOL)enableKeepFormatThreadAlive;
- (BOOL)enable720pSR;
- (BOOL)enableFFCodecerHeaacV2Compat;
- (long long)defaultBufferingEndMilliSeconds;
- (long long)maxBufferEndMilliSeconds;
- (long long)decreaseVtbStackSize;
- (BOOL)isEnablePostPrepareMsg;
- (BOOL)disableShortSeek;
- (BOOL)IsPreferNearestSample;
- (long long)preferNearestMaxPosOffset;
- (long long)findStreamInfoProbeSize;
- (long long)findStreamInfoProbeDuration;
- (long long)isEnableRefreshByTime;
- (long long)liveStartIndex;
- (long long)enableFallbackSWDecode;
- (BOOL)enableHDR10;
- (BOOL)preferSpdl4HDR;
- (BOOL)stopSourceAsync;
- (BOOL)enableSeekInterrupt;
- (long long)changeVtbSizePicSizeBound;
- (BOOL)enableRangeCacheDuration;
- (BOOL)enableVoiceSplitHeaacV2;
- (BOOL)enableAudioHardwareDecode;
- (BOOL)delayBufferingUpdate;
- (BOOL)noBufferingUpdate;
- (BOOL)enableHookVoice;
- (BOOL)keepVoiceDuration;
- (long long)voiceBlockDuration;
- (BOOL)enableSRBound;
- (long long)srLongDimensionLowerBound;
- (long long)srLongDimensionUpperBound;
- (long long)srShortDimensionLowerBound;
- (long long)srShortDimensionUpperBound;
- (BOOL)filePlayNoBuffering;
- (BOOL)enableMasterM3u8Optimize;
- (BOOL)enablePostStart;
- (BOOL)enablePlayerPreloadGear;
- (long long)isEnableVsyncHelper;
- (long long)customizedVideoRenderingFrameRate;
- (BOOL)enablePlaySpeedExtend;
- (void)setDualCore:(id)arg0;
- (id)traitObjects;
- (void)setTraitObjects:(id)arg0;
- (id)resourceLoaderDelegate;
- (void)playerPlay;
- (void)removePlayerObservers;
- (void)setCurrentPlaybackTime:(double)arg0 complete:(id /* block */)arg1 renderComplete:(id /* block */)arg2;
- (void)setCurrentPlaybackTime:(double)arg0 complete:(id /* block */)arg1;
- (void)addPlayerObservers;
- (id)createErrorWithCode:(long long)arg0 description:(id)arg1 reason:(id)arg2;
- (void)didPlayableDurationUpdate;
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
- (id)currentCDNHost;
- (long long)playbackState;
- (id)userAgent;
- (double)currentPlaybackTime;
- (id)init;
- (void)setUserAgent:(id)arg0;
- (void)_pause;
- (void)setStartTime:(double)arg0;
- (id)filePath;
- (void).cxx_destruct;
- (BOOL)muted;
- (void)setCurrentAudioCategory:(long long)arg0;
- (unsigned long long)loadState;
- (void)setEffect:(id)arg0;
- (double)volume;
- (void)setFilePath:(id)arg0;
- (void)setMuted:(BOOL)arg0;
- (void)shutdown;
- (id)contentURL;
- (void)close;
- (void)stop;
- (id)engine;
- (double)duration;
- (void)setView:(id)arg0;
- (id)getVersion;
- (id)delegate;
- (double)startTime;
- (id)decryptionKey;
- (id)metadata;
- (BOOL)isPlaying;
- (void)setVolume:(double)arg0;
- (float)currentRate;
- (void)setCurrentPlaybackTime:(double)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setLooping:(BOOL)arg0;
- (void)play;
- (void)pause;
- (void)setRenderType:(unsigned long long)arg0;
- (void)setEngine:(id)arg0;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (void)pause:(BOOL)arg0;
- (id)view;
- (void)setDecryptionKey:(id)arg0;
- (BOOL)isMuted;
- (long long)currentAudioCategory;
- (void)setDuration:(double)arg0;
- (BOOL)looping;
- (void)onError:(id)arg0;
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
- (BOOL)isPreparedToPlay;
- (double)playableDuration;
- (void)addPlayerItemObservers:(id)arg0;
- (void)removePlayerItemObservers:(id)arg0;
- (long long)downloadSpeed;
- (void)_play;
- (long long)mediaSize;
- (id)mediaId;
- (void)setMediaId:(id)arg0;
- (void)resetPlayer;
- (void)_pause:(BOOL)arg0;
- (unsigned long long)rangeMode;
- (id)maskInfo;
- (void)setMaskInfo:(id)arg0;
- (void)setPlayableDuration:(double)arg0;

@end
