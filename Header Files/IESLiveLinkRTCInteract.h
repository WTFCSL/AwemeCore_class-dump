//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESLiveLinkRTCInteractTranscodeAVParams, IESLiveLinkRTCInteractClient, IESLiveLinkRTCInteractLiveLinkMixConfig, NSDictionary, NSObject, IESLiveLinkMultiChorusManager, IESLiveLinkRTCVideoSink, IESLiveLinkLiveTranscoder, LiveStreamRenderSink, NSString, IESLiveLinkAudioDiagnosis, IESLiveLinkRTCInteractConfiguration, IESLiveLinkRTCInteractVideoCompositingLayout, IESLiveLinkRTCAudioSink, NSLock, IESLiveLinkVideoMixer;
@protocol OS_dispatch_queue, ILiveCoreForInteract, IESLiveLinkRTCInteractDelegate;

@interface IESLiveLinkRTCInteract : NSObject <IESLiveLinkRTCInteractClientDelegate, ILiveCoreForInteractDelegate, ILiveTranscoderEventDelegate, ILiveTranscoderAVDataSink, LSGLPictureOutputDelegate, IESLiveLinkRTCInteractVideoSinkDelegate, IMultiChorusDelegate, IESLiveLinkLiveCoreForInteractReportDelegate> {
    struct __CVBuffer { } *_darkFrameImageBuffer;
    BOOL _remoteSessionNeedRender;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _sei_mutex;
    BOOL _needResetPerformanceProfile;
    struct RingBuffer { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; int x4; char *x5; } *_mixedAudioRingBuf;
    BOOL _startProcessAudio;
    unsigned long long _singleChorusMode;
    BOOL _enableElapseStatistics;
    BOOL _enableExternalAU;
    BOOL _interactLogEnabled;
    BOOL _releaseRTCEngineManually;
    BOOL _shouldUseLCAudioUnit;
    BOOL _useSwitchMixType;
    BOOL _useLiveEnableBFrame;
    BOOL _isCurMuteLocalAudio;
    BOOL _isAppInBackground;
    BOOL _isLiveLinkMixerFirstVideoFrame;
    id<IESLiveLinkRTCInteractDelegate> _interactDelegate;
    long long _mixPriority;
    id /* block */ _interactLogCallback;
    id /* block */ _inputRtcFrameCallback;
    id /* block */ _remoteRtcFrameCallback;
    NSObject<OS_dispatch_queue> *_queue;
    NSLock *_pushDarkLock;
    NSMutableDictionary *_propertyRTCDict;
    IESLiveLinkRTCInteractClient *_client;
    IESLiveLinkRTCInteractConfiguration *_config;
    IESLiveLinkRTCAudioSink *_audioSink;
    IESLiveLinkRTCVideoSink *_videoSink;
    id<ILiveCoreForInteract> _liveCoreClient;
    long long _interactState;
    NSMutableDictionary *_interactSeiDic;
    IESLiveLinkLiveTranscoder *_liveTranscoder;
    IESLiveLinkRTCInteractTranscodeAVParams *_transcodeAvParams;
    IESLiveLinkMultiChorusManager *_multiChorusManager;
    unsigned long long _multiChorusRole;
    NSLock *_interactStateLock;
    long long _inputFrameCount;
    NSLock *_frameCountLock;
    long long _videoFrameTime;
    NSMutableDictionary *_waterMarksDict;
    long long _preMixType;
    IESLiveLinkVideoMixer *_mixer;
    IESLiveLinkRTCInteractLiveLinkMixConfig *_mixerConfig;
    NSObject<OS_dispatch_queue> *_mixerQueue;
    NSObject<OS_dispatch_queue> *_smallWindowRenderQueue;
    IESLiveLinkRTCInteractVideoCompositingLayout *_preMixerStreamLayout;
    LiveStreamRenderSink *_outerAudioSink;
    IESLiveLinkAudioDiagnosis *_audioDiagnosis;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _curCapturePts;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _preMixVideoPts;
    struct LCLiveStreamConfig { long long streamWidth; long long streamHeight; long long streamFps; long long streamBitrate; long long streamGop; long long streamAudioChannels; long long streamAudioSamplerate; long long streamAudiobitrate; long long streamAudioCodec; long long streamVideoCodec; BOOL enableDeferredCompositingLayout; BOOL byteAudioModeEnable; BOOL shouldUseLCAudioUnit; BOOL onlyRenderOnViewReady; BOOL enableBlackFrameLeakFix; NSDictionary *sdkParams; BOOL purgeFBOnInputGLError; BOOL enableForceCompositingLayout; BOOL enableDownPKResolution; NSString *liveSdkVersion; } _lcLiveStreamConfig;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSLock *pushDarkLock;
@property (retain, nonatomic) NSMutableDictionary *propertyRTCDict;
@property (retain, nonatomic) IESLiveLinkRTCInteractClient *client;
@property (retain, nonatomic) IESLiveLinkRTCInteractConfiguration *config;
@property (retain, nonatomic) IESLiveLinkRTCAudioSink *audioSink;
@property (retain, nonatomic) IESLiveLinkRTCVideoSink *videoSink;
@property (weak, nonatomic) id<ILiveCoreForInteract> liveCoreClient;
@property (nonatomic) BOOL releaseRTCEngineManually;
@property (nonatomic) long long interactState;
@property (retain, nonatomic) NSMutableDictionary *interactSeiDic;
@property (retain, nonatomic) IESLiveLinkLiveTranscoder *liveTranscoder;
@property (retain, nonatomic) IESLiveLinkRTCInteractTranscodeAVParams *transcodeAvParams;
@property (retain, nonatomic) IESLiveLinkMultiChorusManager *multiChorusManager;
@property (nonatomic) unsigned long long multiChorusRole;
@property (nonatomic) BOOL shouldUseLCAudioUnit;
@property (nonatomic) struct LCLiveStreamConfig { long long streamWidth; long long streamHeight; long long streamFps; long long streamBitrate; long long streamGop; long long streamAudioChannels; long long streamAudioSamplerate; long long streamAudiobitrate; long long streamAudioCodec; long long streamVideoCodec; BOOL enableDeferredCompositingLayout; BOOL byteAudioModeEnable; BOOL shouldUseLCAudioUnit; BOOL onlyRenderOnViewReady; BOOL enableBlackFrameLeakFix; NSDictionary *sdkParams; BOOL purgeFBOnInputGLError; BOOL enableForceCompositingLayout; BOOL enableDownPKResolution; NSString *liveSdkVersion; } lcLiveStreamConfig;
@property (retain, nonatomic) NSLock *interactStateLock;
@property (nonatomic) long long inputFrameCount;
@property (retain, nonatomic) NSLock *frameCountLock;
@property BOOL useSwitchMixType;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } curCapturePts;
@property (nonatomic) long long videoFrameTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } preMixVideoPts;
@property (retain, nonatomic) NSMutableDictionary *waterMarksDict;
@property (nonatomic) long long preMixType;
@property (nonatomic) BOOL useLiveEnableBFrame;
@property (nonatomic) BOOL isCurMuteLocalAudio;
@property (nonatomic) BOOL isAppInBackground;
@property (retain, nonatomic) IESLiveLinkVideoMixer *mixer;
@property (retain, nonatomic) IESLiveLinkRTCInteractLiveLinkMixConfig *mixerConfig;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mixerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *smallWindowRenderQueue;
@property (nonatomic) BOOL isLiveLinkMixerFirstVideoFrame;
@property (retain, nonatomic) IESLiveLinkRTCInteractVideoCompositingLayout *preMixerStreamLayout;
@property (retain, nonatomic) LiveStreamRenderSink *outerAudioSink;
@property (retain, nonatomic) IESLiveLinkAudioDiagnosis *audioDiagnosis;
@property (weak, nonatomic) id<IESLiveLinkRTCInteractDelegate> interactDelegate;
@property (nonatomic) BOOL enableElapseStatistics;
@property (nonatomic) long long mixPriority;
@property (nonatomic) BOOL enableExternalAU;
@property (copy, nonatomic) id /* block */ interactLogCallback;
@property (nonatomic) BOOL interactLogEnabled;
@property (copy, nonatomic) id /* block */ inputRtcFrameCallback;
@property (copy, nonatomic) id /* block */ remoteRtcFrameCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getRTCSDKVersion;
+ (id)getRTCSdkDeviceID;
+ (void)ReleaseRTCEngine;
+ (void)preCreateRTCEngine:(id)arg0 config:(id)arg1;

- (void)onSyncedUsersChanged:(id)arg0;
- (void)onSyncEvent:(unsigned long long)arg0 withError:(unsigned long long)arg1;
- (int)adjustAudioMixingVolume:(long long)arg0;
- (id)interactSeiDic;
- (void)setInteractSeiDic:(id)arg0;
- (void)enableAudioPushStream:(BOOL)arg0;
- (BOOL)mixOnClient;
- (struct __CVBuffer { } *)darkFrameForAudioStream;
- (id)pushDarkLock;
- (long long)p_getCurrentSysMillSeconds;
- (void)setEnableExternalAU:(BOOL)arg0;
- (BOOL)enableExternalAU;
- (void)setPushDarkLock:(id)arg0;
- (id)getVideoFrameElapse;
- (int)adjustPlaybackSignalVolume:(long long)arg0;
- (int)adjustRecordingSignalVolume:(long long)arg0;
- (void)pushAudioData:(short *)arg0 size:(long long)arg1;
- (void)pushFLTAudioData:(float **)arg0 size:(long long)arg1;
- (void)setMovieMixVolume:(float)arg0 captureVolume:(float)arg1;
- (void)setMoviePlayVolume:(float)arg0;
- (void)setMoviePlayVolume:(float)arg0 captureVolume:(float)arg1;
- (void)didVideoBufferProcessed:(id)arg0 withPixelBuffer:(struct __CVBuffer { } *)arg1 withTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2;
- (void)didLiveCoreForSingleView:(BOOL)arg0;
- (void)setAudioSink:(id)arg0;
- (void)didLiveCoreStateChanged:(long long)arg0;
- (void)didLiveCoreStreamingParamsChangedWithParams:(id)arg0;
- (void)didLiveCoreUpdateAuthInfo:(id)arg0 FrameType:(long long)arg1;
- (void)didLiveCoreSwitchMixType:(BOOL)arg0;
- (void)didLiveCoreResumeMixedPushIfNeeded;
- (void)reportMoviePlayStats;
- (void)setMovieMixerMode:(long long)arg0;
- (void)setAudioScenario:(long long)arg0;
- (BOOL)setRtcVideoSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setVideoSourceType:(long long)arg0;
- (BOOL)isInteractRunning;
- (id)interactDelegate;
- (void)setInteractDelegate:(id)arg0;
- (void)setRuntimeParameters:(id)arg0;
- (int)setEnableSpeakerphone:(BOOL)arg0;
- (int)sendRoomMessage:(id)arg0;
- (void)startInteract;
- (void)setReleaseRTCEngineManually:(BOOL)arg0;
- (int)muteLocalVideoStream:(BOOL)arg0;
- (int)muteRemoteVideoStream:(id)arg0 mute:(BOOL)arg1;
- (int)muteAllRemoteVideoStreams:(BOOL)arg0;
- (void)startAudioSinkStream:(BOOL)arg0;
- (void)stopAudioSinkStream;
- (void)pushAudioSinkFrame:(id)arg0 timestamp:(long long)arg1;
- (int)startSubtitle;
- (int)stopSubtitle;
- (id)fullSession;
- (id)interactSessions;
- (id)localSmallWindowSession;
- (id)interactConfig;
- (int)reportAudioVolumeIndicationWithDuration:(long long)arg0 callback:(id /* block */)arg1;
- (BOOL)startInteractStreaming;
- (void)stopInteractStreaming;
- (void)enableVideoCapture:(BOOL)arg0;
- (int)muteLocalAudioStream:(BOOL)arg0 reason:(id)arg1;
- (int)muteAllRemoteAudioStreams:(BOOL)arg0 reason:(id)arg1;
- (BOOL)compositingLayoutOfPublisher;
- (long long)getMixType;
- (int)updateFmNeedRender:(BOOL)arg0;
- (void)setRemoteSessionNeedRender:(BOOL)arg0;
- (int)setDefaultMuteAllRemoteVideoStreams:(BOOL)arg0;
- (int)setRemoteVideoSuperResolution:(id)arg0 withMode:(long long)arg1;
- (void)setRemoteVideoDisplayDirect:(BOOL)arg0;
- (id)getRemoteVideoPreviewView;
- (void)setMixPriority:(long long)arg0;
- (void)startMovieInteract;
- (void)stopMovieInteract;
- (void)switchToPlayMode:(long long)arg0;
- (void)pauseMovie:(BOOL)arg0;
- (int)enableLocalVideo:(BOOL)arg0;
- (void)updateRtcExtInfo:(id)arg0;
- (void)updateAudioScene:(id)arg0;
- (struct __CVBuffer { } *)getLastPixelBufferWithUid:(id)arg0;
- (id)getLastPixelBufferWithUid:(id)arg0 compressionRatio:(double)arg1;
- (void)setEarMonitorVolume:(long long)arg0;
- (int)sendUserMessageOutsideRoom:(id)arg0 message:(id)arg1;
- (void)switchInteractSeiSourceValueManually:(BOOL)arg0;
- (int)startForwardStreamToRooms:(id)arg0;
- (int)updateForwardStreamToRooms:(id)arg0;
- (int)stopForwardStreamToRooms;
- (int)pauseForwardStreamToAllRooms;
- (int)resumeForwardStreamToAllRooms;
- (void)switchMixType:(long long)arg0;
- (void)enableSpatialAudioRender:(BOOL)arg0;
- (int)removeRemotePositionWithLinkMicId:(id)arg0;
- (int)removeAllRemotePosition;
- (void)setRemoteAudioPlaybackVolume:(id)arg0 volume:(int)arg1;
- (int)startPlayPublicStream:(id)arg0;
- (int)stopPlayPublicStream:(id)arg0;
- (int)setPublicStreamVideoCanvas:(id)arg0 withCanvas:(id)arg1;
- (int)setPublicStreamAudioPlaybackVolume:(id)arg0 volume:(long long)arg1;
- (int)startChorusCacheSync:(id)arg0;
- (int)stopChorusCacheSync;
- (int)updateMultiChorusMixedAction:(unsigned long long)arg0 withBaseUid:(id)arg1;
- (BOOL)startLiveLinkMixer:(id)arg0;
- (void)stopLiveLinkMixer;
- (BOOL)startLiveLinkPreMixer;
- (void)stopLiveLinkPreMixer;
- (void)updatePreMixerCompositingLayout;
- (void)pushPreMixerBuffer:(struct __CVBuffer { } *)arg0 layerId:(int)arg1 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2;
- (void)startSmallWindowSession;
- (void)stopSmallWindowSession;
- (void)setIsAppInBackground:(BOOL)arg0;
- (void)setInteractLogCallback:(id /* block */)arg0;
- (void)setLiveCoreForInteract:(id)arg0;
- (int)setupInteractStreamingWithConfig:(id)arg0 interactDelegate:(id)arg1;
- (void)playMovie;
- (void)prepareMovieWithSampleRate:(int)arg0 channels:(int)arg1;
- (int)sendSEIMessage:(id)arg0 andRepeatCount:(int)arg1;
- (BOOL)joinChannel;
- (void)startPushData;
- (int)muteRemoteAudioStream:(id)arg0 mute:(BOOL)arg1 reason:(id)arg2;
- (int)addWaterMarkWithId:(id)arg0 region:(id)arg1 pts:(long long)arg2;
- (int)removeWaterMarkWithId:(id)arg0;
- (int)updateWaterMarkWithId:(id)arg0 region:(id)arg1 pts:(long long)arg2;
- (int)removeAllWaterMarks;
- (int)composeCurrentWaterMarks;
- (int)updateSelfPositionInfo:(id)arg0;
- (int)updateRemoteLinkMicId:(id)arg0 postionInfo:(id)arg1;
- (void)interactClientWillLeaveChannel:(id)arg0;
- (void)interactClientDidLeaveChannel:(id)arg0 withStats:(id)arg1;
- (void)interactClient:(id)arg0 newSessionCreated:(id)arg1 local:(BOOL)arg2;
- (void)interactClient:(id)arg0 updateLayoutOfPublisher:(id)arg1;
- (void)interactClient:(id)arg0 updateLayoutOfSessionViews:(BOOL)arg1;
- (void)interactClient:(id)arg0 didOccurError:(id)arg1;
- (void)interactClient:(id)arg0 didOccurWarning:(id)arg1;
- (void)interactClientConnectionDidInterrupted:(id)arg0;
- (void)interactClient:(id)arg0 remoteVideoStats:(id)arg1;
- (void)interactClient:(id)arg0 localVideoStats:(id)arg1;
- (void)interactClient:(id)arg0 localAudioStats:(id)arg1;
- (void)interactClient:(id)arg0 remoteAudioStats:(id)arg1;
- (void)interactClient:(id)arg0 publishVideoStats:(id)arg1;
- (void)interactClient:(id)arg0 didOfflineOfUid:(id)arg1 reason:(unsigned long long)arg2;
- (void)interactClient:(id)arg0 firstRemoteVideoDecodedOfUid:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2 elapsed:(long long)arg3;
- (void)interactClient:(id)arg0 onSEIMessageReceived:(id)arg1 byUid:(id)arg2;
- (void)interactClient:(id)arg0 reportKeyApiCallToTTMonitorData:(id)arg1;
- (id /* block */)interactLogCallback;
- (void)interactClient:(id)arg0 reportToTTMonitorData:(id)arg1 logTypeStr:(id)arg2;
- (void)interactClient:(id)arg0 reportLogLevel:(int)arg1 filename:(id)arg2 tag:(id)arg3 line:(int)arg4 funcName:(id)arg5 format:(id)arg6;
- (void)interactClient:(id)arg0 firstLocalAudioFrame:(long long)arg1;
- (void)interactClient:(id)arg0 firstRemoteAudioFrameOfUid:(id)arg1 elapsed:(long long)arg2;
- (void)interactClient:(id)arg0 didVideoMuted:(BOOL)arg1 byUid:(id)arg2;
- (void)interactClient:(id)arg0 didLocalVideoEnabled:(BOOL)arg1 byUid:(id)arg2;
- (void)interactClient:(id)arg0 videoSizeChangedOfUid:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2 rotation:(long long)arg3;
- (void)interactClient:(id)arg0 onForwardStreamStateChanged:(id)arg1;
- (void)interactClient:(id)arg0 onPlayPublicStreamResult:(id)arg1 errorCode:(int)arg2;
- (void)interactClient:(id)arg0 onPublicStreamSEIMessageReceived:(id)arg1 andMessage:(id)arg2 sourceType:(long long)arg3;
- (void)interactClient:(id)arg0 onFirstPublicStreamVideoFrameDecoded:(id)arg1 withFrameInfo:(id)arg2;
- (void)interactClient:(id)arg0 onFirstPublicStreamAudioFrame:(id)arg1;
- (void)interactClient:(id)arg0 onSubtitleStateChanged:(id)arg1;
- (void)interactClient:(id)arg0 onSubtitleMessageReceived:(id)arg1;
- (void)interactClient:(id)arg0 onUserMessageReceivedOutsideRoom:(id)arg1 message:(id)arg2;
- (void)interactClient:(id)arg0 onUserMessageReceived:(id)arg1 message:(id)arg2;
- (void)interactClient:(id)arg0 onUserBinaryMessageReceived:(id)arg1 message:(id)arg2;
- (void)interactClient:(id)arg0 onRoomMessageReceived:(id)arg1 message:(id)arg2;
- (void)interactClient:(id)arg0 onRoomBinaryMessageReceived:(id)arg1 message:(id)arg2;
- (int)startChorus:(BOOL)arg0 withOnlySendPts:(BOOL)arg1;
- (int)stopChorus;
- (void)didLiveTranscoder:(id)arg0 CompositingChanged:(BOOL)arg1;
- (void)didLiveTranscoderMixingEvent:(unsigned long long)arg0 mixType:(long long)arg1;
- (void)didLiveTranscoderReportInteractStatusLog:(id)arg0 params:(id)arg1;
- (void)didLiveTranscoderUpdateLayoutOfPublisher:(id)arg0;
- (void)didLiveTranscoderStartChorus;
- (void)didLiveTranscoderStopChorus;
- (void)onMixingAudioFrame:(id)arg0 sampleCount:(long long)arg1 channel:(long long)arg2 sampleRate:(long long)arg3 timeStamp:(long long)arg4;
- (void)onMixingCacheSyncVideo:(struct __CFArray { } *)arg0 withDataFrame:(id)arg1 withUids:(id)arg2 withLayout:(id)arg3;
- (void)onMixingVideoFrame:(struct __CVBuffer { } *)arg0;
- (void)onMixingDataFrame:(id)arg0;
- (void)updateAuthInfo:(id)arg0 FrameType:(long long)arg1;
- (void)setInteractState:(long long)arg0;
- (void)p_didLeaveChannel;
- (unsigned long long)changeRenderModeFrom:(long long)arg0;
- (void)p_setCaptureBypassOutput;
- (void)reportKeyApiCallToTTMonitorData:(id)arg0;
- (void)setVideoSink:(id)arg0;
- (BOOL)shouldUseLCAudioUnit;
- (long long)interactState;
- (void)p_registerStatusChanged;
- (void)setPropertyRTCDict:(id)arg0;
- (void)setCurCapturePts:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setPreMixVideoPts:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setWaterMarksDict:(id)arg0;
- (void)p_reportToServer:(id)arg0;
- (void)p_switchMixType:(long long)arg0;
- (id)liveTranscoder;
- (id)transcodeAvParams;
- (BOOL)useLiveEnableBFrame;
- (void)p_stopLiveTranscoding;
- (void)p_updateTranscoderParamsNeedRestart;
- (void)p_updateLiveTranscodingLayout:(BOOL)arg0;
- (void)p_startLiveTranscoding;
- (void)p_reportALog:(id)arg0;
- (void)updateLiveCoreExtInfo:(id)arg0;
- (BOOL)p_setUpInternal:(id)arg0;
- (void)p_setupLiveTranscoder:(long long)arg0;
- (void)p_setupMultiChorusManager;
- (id /* block */)inputRtcFrameCallback;
- (void)setInputRtcFrameCallback:(id /* block */)arg0;
- (id)liveCoreClient;
- (void)setShouldUseLCAudioUnit:(BOOL)arg0;
- (void)setLcLiveStreamConfig:(struct LCLiveStreamConfig { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; id x15; BOOL x16; BOOL x17; BOOL x18; id x19; })arg0;
- (id)p_getServerMixTaskId:(id)arg0;
- (void)p_updateInteractMixMode:(id)arg0;
- (void)setTranscodeAvParams:(id)arg0;
- (struct CGSize { double x0; double x1; })p_updateInteractResolution;
- (void)configExternalAudioParameters;
- (id)propertyRTCDict;
- (struct LCLiveStreamConfig { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; id x15; BOOL x16; BOOL x17; BOOL x18; id x19; })lcLiveStreamConfig;
- (id)frameCountLock;
- (long long)inputFrameCount;
- (void)setInputFrameCount:(long long)arg0;
- (id)p_getStreamMixType:(long long)arg0;
- (id)audioDiagnosis;
- (BOOL)useSwitchMixType;
- (id /* block */)remoteRtcFrameCallback;
- (void)p_dealWithSingleChorusSEI:(id)arg0;
- (void)setAudioDiagnosis:(id)arg0;
- (void)startMixerWithConfig:(id)arg0 type:(unsigned long long)arg1;
- (void)setLiveTranscoder:(id)arg0;
- (BOOL)doStartInteractStreaming:(BOOL)arg0;
- (void)setupAudioCapturePipelineIfNeeded;
- (id)mixerQueue;
- (id)waterMarksDict;
- (void)destroyMixerWithType:(unsigned long long)arg0;
- (void)setUseSwitchMixType:(BOOL)arg0;
- (void)setUseLiveEnableBFrame:(BOOL)arg0;
- (void)p_layoutAndPublishStream;
- (id)transferLayout:(id)arg0;
- (void)updateMixerLayoutIfNeeded:(id)arg0;
- (void)mixWithCompositingLayoutChanged:(id)arg0 compositingChanged:(BOOL)arg1;
- (long long)preMixType;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })preMixVideoPts;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })curCapturePts;
- (BOOL)isLiveLinkMixerFirstVideoFrame;
- (id)mixerConfig;
- (void)setIsLiveLinkMixerFirstVideoFrame:(BOOL)arg0;
- (void)setPreMixType:(long long)arg0;
- (void)setIsCurMuteLocalAudio:(BOOL)arg0;
- (id)multiChorusManager;
- (void)setMultiChorusManager:(id)arg0;
- (void)setMultiChorusRole:(unsigned long long)arg0;
- (id)fetchSessionOfUID:(id)arg0;
- (int)checkParam:(id)arg0;
- (id)hostSession;
- (id)localSession;
- (int)enableAudioVolumeIndication:(long long)arg0 smooth:(long long)arg1;
- (int)enableLocalAudio:(BOOL)arg0;
- (BOOL)setRtcVideoFrameRate:(long long)arg0;
- (int)setDefaultMuteAllRemoteAudioStreams:(BOOL)arg0;
- (BOOL)isSendDualStream;
- (void)setRemoteVideoStream:(id)arg0 withStreamType:(long long)arg1;
- (BOOL)p_supportPublish;
- (int)setLocalVideoDenoiseMode:(long long)arg0 withMode:(long long)arg1;
- (id)getBusinessId;
- (BOOL)prePushStream;
- (BOOL)preJoinChannel;
- (id)p_convertImageBufferData:(struct __CVBuffer { } *)arg0 imageName:(id)arg1 ratio:(double)arg2;
- (id)interactStateLock;
- (id)audioSink;
- (id)videoSink;
- (id)smallWindowRenderQueue;
- (long long)sendUserMessage:(id)arg0 message:(id)arg1;
- (long long)sendUserBinaryMessage:(id)arg0 message:(id)arg1;
- (int)sendRoomBinaryMessage:(id)arg0;
- (int)startPushPublicStream:(id)arg0 withLayout:(id)arg1;
- (int)stopPushPublicStream:(id)arg0;
- (int)setPublicStreamVideoSink:(id)arg0 withSink:(id)arg1 withPixelFormat:(long long)arg2;
- (void)setPerformanceProfile:(long long)arg0;
- (void)p_reportDidLeaveChannel;
- (long long)mixPriority;
- (void)p_setSomeParamsFromVPASS:(id)arg0;
- (BOOL)p_checkVendorClientMixPercentage:(id)arg0 clientType:(int)arg1 playMode:(id)arg2;
- (BOOL)p_isHost;
- (BOOL)interactLogEnabled;
- (void)setPreMixerStreamLayout:(id)arg0;
- (void)setMixerConfig:(id)arg0;
- (void)setMixerQueue:(id)arg0;
- (void)updatePreMixerLayerInfo:(id)arg0;
- (void)setSmallWindowRenderQueue:(id)arg0;
- (id)outerAudioSink;
- (void)setOuterAudioSink:(id)arg0;
- (void)interactClient:(id)arg0 onJoinRoomResult:(id)arg1 withUid:(id)arg2 joinType:(long long)arg3 elapsed:(long long)arg4;
- (void)interactClient:(id)arg0 bindExtRendererForSession:(id)arg1;
- (void)interactClient:(id)arg0 unbindExtRendererForSession:(id)arg1;
- (void)rtcEngineConnectionDidLost:(id)arg0;
- (void)rtcEngine:(id)arg0 connectionStateChanged:(BOOL)arg1;
- (void)interactClient:(id)arg0 networkQuality:(id)arg1;
- (void)interactClient:(id)arg0 onMediaDeviceStateChanged:(id)arg1 device_type:(long long)arg2 device_state:(long long)arg3 device_error:(long long)arg4;
- (void)interactClient:(id)arg0 firstRemoteAudioFrameDecodedOfUid:(id)arg1 elapsed:(long long)arg2;
- (void)interactClient:(id)arg0 didAudioEnabled:(BOOL)arg1 byUid:(id)arg2;
- (void)interactClient:(id)arg0 didAudioMuted:(BOOL)arg1 byUid:(id)arg2;
- (void)interactClient:(id)arg0 didLocalAudioEnabled:(BOOL)arg1 byUid:(id)arg2;
- (void)interactClient:(id)arg0 didVideoEnabled:(BOOL)arg1 byUid:(id)arg2;
- (void)interactClient:(id)arg0 firstRemoteFrameRenderCallback:(id)arg1;
- (void)interactClient:(id)arg0 remoteFrameRenderCallback:(id)arg1 frameSize:(struct CGSize { double x0; double x1; })arg2 frameBuffer:(struct __CVBuffer { } *)arg3;
- (void)interactClient:(id)arg0 didStreamRemoved:(id)arg1 info:(id)arg2;
- (void)interactClient:(id)arg0 didPublishSucceedOfStream:(id)arg1;
- (void)interactClient:(id)arg0 onStreamAdd:(id)arg1 info:(id)arg2;
- (void)interactClient:(id)arg0 onPushExternalVideoFrameChanged:(struct CGSize { double x0; double x1; })arg1;
- (void)interactClient:(id)arg0 onUserJoined:(id)arg1 extraInfo:(id)arg2 elapsed:(long long)arg3;
- (void)interactClient:(id)arg0 onUserMessageSendResult:(long long)arg1 error:(long long)arg2;
- (void)interactClient:(id)arg0 onRoomMessageSendResult:(long long)arg1 error:(long long)arg2;
- (id)interactClient:(id)arg0 ttUrlDispatchWithUrl:(id)arg1;
- (id)interactClient:(id)arg0 ttUrlDispatchResultWithUrl:(id)arg1;
- (BOOL)interactClientShouldSetTTUrl;
- (void)interactClient:(id)arg0 onPushPublicStreamResult:(id)arg1 errorCode:(int)arg2;
- (void)didStopLiveTranscoding;
- (void)renderPixelBuffer:(struct __CVBuffer { } *)arg0 rotation:(long long)arg1 extendedData:(id)arg2;
- (void)onSyncedVideoFrames:(struct __CFArray { } *)arg0 withDataFrame:(id)arg1 withUids:(id)arg2;
- (void)pauseMovie;
- (id)getMixStreamingParams;
- (BOOL)startInteractPlay;
- (BOOL)changeToInteractStreaming;
- (BOOL)changeToInteractPlay;
- (int)enableVideo:(BOOL)arg0;
- (void)setIsInAudioList:(BOOL)arg0 inChannel:(id)arg1;
- (void)clearAudioListOfChannel:(id)arg0;
- (void)processRemoteEffectedVideoBuffer:(struct __CVBuffer { } *)arg0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 strUid:(id)arg2;
- (struct IESLiveLinkRTCVideoProfile { long long x0; long long x1; long long x2; long long x3; })getRTCVideoResolution;
- (void)setEnableElapseStatistics:(BOOL)arg0;
- (long long)getInteractState;
- (id)p_getAndCleanUpInteractSeiDic;
- (BOOL)enableElapseStatistics;
- (void)setInteractLogEnabled:(BOOL)arg0;
- (void)setRemoteRtcFrameCallback:(id /* block */)arg0;
- (void)setLiveCoreClient:(id)arg0;
- (BOOL)releaseRTCEngineManually;
- (unsigned long long)multiChorusRole;
- (void)setInteractStateLock:(id)arg0;
- (void)setFrameCountLock:(id)arg0;
- (BOOL)isCurMuteLocalAudio;
- (id)preMixerStreamLayout;
- (BOOL)isAppInBackground;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setClient:(id)arg0;
- (id)config;
- (void)setVideoFrameTime:(long long)arg0;
- (id)client;
- (id)queue;
- (long long)videoFrameTime;
- (void)dealloc;
- (void)setQueue:(id)arg0;
- (id).cxx_construct;
- (int)setBusinessId:(id)arg0;
- (int)login;
- (void)setPlaybackVolume:(long long)arg0;
- (int)enableAudio:(BOOL)arg0;
- (id)mixer;
- (void)setMixer:(id)arg0;

@end
