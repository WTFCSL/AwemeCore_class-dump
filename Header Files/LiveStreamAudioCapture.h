//
//     Generated by private class-dump
//

@class LiveAudioConfiguration, LiveStreamMultiTimerManager, AudioSource, NSString, NSObject;
@protocol LiveStreamAudioCaptureDelegate, LiveStreamAudioLinkMicDelegate, LiveStreamAudioRecordDelegate, OS_dispatch_queue, LiveCoreAudioDeviceMonitorDelegate;

@interface LiveStreamAudioCapture : NSObject <AudioCapturerDelegate, LSAudioDeviceAudioSinkDelegate, LSAudioCaptureByteAudioCoderSinkDelegate, LiveStreamAudioLinkMicDelegate, LiveCoreAudioDeviceMonitorDelegate> {
    void *_audioDevice;
    struct scoped_refptr<avframework::AudioDeviceInterface> { struct AudioDeviceInterface *ptr_; } _adm;
    struct AudioSinkInterface { void /* function */ **x0; } *_audioSink;
    struct LiveAudioProcessor { void /* function */ **x0; id x1; } *_apm;
    struct LSAudioCaptureByteAudioCoderSinkWrapper { void /* function */ **x0; id x1; } *_byteAudioCoderSinkWrapper;
    struct LSAudioCaptureByteAudioRecordAudioSinkWrapper { void /* function */ **x0; id x1; } *_byteAudioRecordAudioWrapper;
    struct AudioLinkMicSinkWrapper { void /* function */ **x0; id x1; } *_byteAudioLinkMicSinkWrapper;
    struct LSAudioCaptureByteAudioRecordAudioSinkWrapper { void /* function */ **x0; id x1; } *_byteAudioEncodeAudioSinkWrapper;
    struct AudioDeviceMonitor { void /* function */ **x0; id x1; } *_byteAudioaudioDeviceMonitor;
    id<LiveCoreAudioDeviceMonitorDelegate> _byteAudioaudioDevicedelegate;
    BOOL _isStarted;
    BOOL _isFakeStarted;
    BOOL _isInterrupted;
    BOOL _isTimerStarted;
    BOOL _isEnablePlayEcho;
    BOOL _isEnableAec;
    BOOL _isSilenced;
    LiveAudioConfiguration *_audioConfig;
    id<LiveStreamAudioCaptureDelegate> _delegate;
    id<LiveStreamAudioRecordDelegate> _recordDelegate;
    id<LiveStreamAudioLinkMicDelegate> _linkMicDelegate;
    AudioSource *_source;
    LiveStreamMultiTimerManager *_checkTimer;
    NSObject<OS_dispatch_queue> *_audioQueue;
    long long _ioAUStatus;
}

@property (retain, nonatomic) LiveStreamMultiTimerManager *checkTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue;
@property (nonatomic) BOOL isStarted;
@property (nonatomic) BOOL isFakeStarted;
@property (nonatomic) BOOL isInterrupted;
@property (nonatomic) BOOL isTimerStarted;
@property (nonatomic) BOOL isEnablePlayEcho;
@property (nonatomic) BOOL isEnableAec;
@property (nonatomic) BOOL isSilenced;
@property (nonatomic) long long ioAUStatus;
@property (retain, nonatomic) LiveAudioConfiguration *audioConfig;
@property (weak, nonatomic) id<LiveStreamAudioCaptureDelegate> delegate;
@property (weak, nonatomic) id<LiveStreamAudioRecordDelegate> recordDelegate;
@property (weak, nonatomic) id<LiveStreamAudioLinkMicDelegate> linkMicDelegate;
@property (retain, nonatomic) AudioSource *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)audioConfig;
- (void)setAudioConfig:(id)arg0;
- (int)getAECType;
- (void)pushPlayerAudioData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 frames:(int)arg1 bytesPerSample:(int)arg2 channels:(int)arg3 sampleRate:(int)arg4;
- (void)pushPlayerAECAudioData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 frames:(int)arg1 bytesPerSample:(int)arg2 channels:(int)arg3 sampleRate:(int)arg4;
- (void)pullMicAudio:(void *)arg0 size:(unsigned int)arg1 sampleRate:(int)arg2 timeStamp:(long long)arg3 mNumberChannels:(unsigned int)arg4 numberOfFrames:(int)arg5 processedData:(void *)arg6 earMonitorData:(void *)arg7;
- (void)processEarMonitorData:(void *)arg0 size:(unsigned int)arg1 sampleRate:(int)arg2 timeStamp:(long long)arg3 mNumberChannels:(unsigned int)arg4 numberOfFrames:(int)arg5;
- (struct AudioSinkInterface { void /* function */ **x0; } *)audioCoderSinkForByteAudio;
- (void)onLinkMicAudio:(void *)arg0 size:(unsigned int)arg1 numberOfFrames:(int)arg2 numberOfchannels:(int)arg3 sampleRate:(int)arg4 pts:(long long)arg5;
- (BOOL)isRouteToSpeaker;
- (BOOL)isHeadphonesMonitoringEnabled;
- (void)setEnablePlayer:(BOOL)arg0;
- (void)setMicVolume:(float)arg0;
- (void)setEnableAudioLoudNorm:(BOOL)arg0 param:(float)arg1;
- (void)startFakeAudioCapture;
- (void)stopFakeAudioCapture;
- (BOOL)isMicOccupiedSilenced;
- (void)audioPlayerInterrupted:(BOOL)arg0;
- (void)setEnableAudioCaptureInBackground:(BOOL)arg0;
- (void)setEnableSpeaker:(BOOL)arg0;
- (void)setEnableNoiseSuppression:(BOOL)arg0 param:(float)arg1;
- (void)setEnableNoiseSuppressionWithType:(unsigned long long)arg0 enable:(BOOL)arg1 param:(float)arg2 resourceUrl:(id)arg3;
- (void)setEnableExternalSoundCard:(BOOL)arg0;
- (void)setEnableAecOnHeadsetMode:(BOOL)arg0;
- (BOOL)isEnableSoftAec;
- (void)setAECType:(int)arg0;
- (void)setDiagnosisModelPath:(id)arg0;
- (void)setEnableSoftAec:(BOOL)arg0;
- (void)setEnableMediaVolOnSWAec:(BOOL)arg0;
- (BOOL)isEnableAecOnHeadsetMode;
- (void)setSoftAECModelPath:(id)arg0;
- (void)setHeadphonesMonitoringEnabled:(BOOL)arg0;
- (void)setEnableAudioLowLatency:(BOOL)arg0 ioBufferDuration:(float)arg1;
- (void)setEnablePlayoutEcho:(BOOL)arg0;
- (void)resetCheckAudioIOPipelineInterval:(double)arg0;
- (BOOL)isMicRunning;
- (BOOL)isFakeAudioCaptureRunning;
- (BOOL)isEchoCancellationEnabled;
- (BOOL)isAudioCaptureInterrupted;
- (int)getAudioRmsInCaptureTime;
- (void)enableAudioPushStream:(BOOL)arg0;
- (void)audioCaptureInterrupted:(BOOL)arg0;
- (long long)getLatestAudioPts;
- (void)setEchoCancellationEnabled:(BOOL)arg0;
- (void)setEnableCalculateAudioLoudness:(BOOL)arg0;
- (float)getMicVolume;
- (void)setEnableAudioMonitor:(BOOL)arg0 timefreq:(int)arg1;
- (void)setAudioMonitorDelegate:(id)arg0;
- (void)runSyncOnQueue:(id /* block */)arg0;
- (void)runAsyncOnQueue:(id /* block */)arg0;
- (void)setIsInterrupted:(BOOL)arg0;
- (id)createRenderSink;
- (BOOL)isByteAudio;
- (BOOL)isHeadphonesMonitoringRunning;
- (void)setLinkMicDelegate:(id)arg0;
- (void)setEnableFakeAudioCaptureAfterInterrupted:(BOOL)arg0;
- (void)pushAudioBuffer:(char *)arg0 andDataLen:(unsigned long long)arg1 sampleRate:(int)arg2 channels:(int)arg3 andBitsPerSample:(int)arg4 timestamp:(long long)arg5;
- (void)setRecordAudioPipeline:(BOOL)arg0;
- (BOOL)isAecOpend;
- (BOOL)isEnableAudioEffectPlayEcho;
- (id)getQosInfo;
- (void)addMonitoringLinkMicAudioData;
- (void)removeMonitoringLinkMicAudioData;
- (void)setAudioSink:(struct AudioSinkInterface { void /* function */ **x0; } *)arg0;
- (id)getRmsInfo;
- (id)getAudioDiagnosisResult;
- (void)updateScenePushBaseParam:(id)arg0;
- (void)setMicMute:(BOOL)arg0;
- (id)getAudioDiagnosisFinalResult;
- (void)parseAudioSdkParamsWithAudioConfig:(id)arg0;
- (void)createAudioDeviceManager;
- (void)stopCheckerTimer;
- (void)startCheckerTimer:(double)arg0;
- (void)setIsFakeStarted:(BOOL)arg0;
- (void)setIsEnableAec:(BOOL)arg0;
- (BOOL)isEnablePlayEcho;
- (void)setIsEnablePlayEcho:(BOOL)arg0;
- (BOOL)isFakeStarted;
- (id)getQosInfoForPrivate;
- (double)getAdmVolumeValueWithKey:(unsigned long long)arg0;
- (void)parseParamsWithListToConfig:(id)arg0 param:(id)arg1;
- (BOOL)isSilenced;
- (id)linkMicDelegate;
- (void)onAudioDeviceStatus:(long long)arg0 isMute:(BOOL)arg1 audioDb:(long long)arg2 inTime:(long long)arg3;
- (BOOL)isTimerStarted;
- (void)setIsTimerStarted:(BOOL)arg0;
- (id)checkTimer;
- (void)checkAudioIOPipeline;
- (void)checkAudioIOPipelineOld;
- (void)setCheckTimer:(id)arg0;
- (void)setIsSilenced:(BOOL)arg0;
- (long long)ioAUStatus;
- (void)setIoAUStatus:(long long)arg0;
- (void)routeChanged:(id)arg0;
- (void)sessionInterrupt:(id)arg0;
- (id)audioCoderSinkForAudioDevice;
- (void)updateAudioConfig:(id)arg0;
- (void)updateAecFlagBeforeSetupAudioUnit:(BOOL)arg0;
- (void)startPlayOnly;
- (void)setInputStreamVolume:(float)arg0;
- (void)setMixedAllDataCallBackSink:(id)arg0;
- (void)setEnableLocalRecord:(BOOL)arg0;
- (void)setEnableRemoteRecord:(BOOL)arg0;
- (void)resumeByteAudioConfig;
- (void)audioLogWithDic:(id)arg0;
- (BOOL)isEnableAec;
- (void)setInputStreamMute:(BOOL)arg0;
- (int)getMicStartErrorCode;
- (void)cleanUp;
- (id)source;
- (BOOL)isStarted;
- (void).cxx_destruct;
- (void)removeObserver;
- (void)stopAudioCapture;
- (id)initWithConfig:(id)arg0;
- (id)delegate;
- (void)startAudioCapture;
- (void)setSource:(id)arg0;
- (BOOL)isInterrupted;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)addObserver;
- (id).cxx_construct;
- (void)setRecordDelegate:(id)arg0;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioStreamBasicDescription;
- (id)recordDelegate;
- (id)audioQueue;
- (void)setIsStarted:(BOOL)arg0;
- (void)setAudioQueue:(id)arg0;

@end
