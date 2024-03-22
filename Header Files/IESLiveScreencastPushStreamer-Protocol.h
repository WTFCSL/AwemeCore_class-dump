//
//     Generated by private class-dump
//

@class LiveStreamConfiguration, LiveCore;

@protocol IESLiveScreencastPushStreamer <NSObject>

@property (readonly, nonatomic) LiveStreamConfiguration *streamConfiguration;
@property (readonly, nonatomic) LiveCore *liveCore;
@property (readonly, nonatomic) BOOL isMicRunning;
@property (readonly, nonatomic) long long micAudioVolumePower;
@property (copy, nonatomic) id /* block */ sessionStatusChangedHandler;
@property (copy, nonatomic) id /* block */ streamLogCallback;
@property (copy, nonatomic) id /* block */ streamErrorCallback;
@property (copy, nonatomic) id /* block */ updateEncodeBitrateCallback;
@property (copy, nonatomic) id /* block */ audioCaptureEventHandler;
@property (nonatomic) BOOL enableUpdateConfigCallAB;

- (BOOL)isMicRunning;
- (void)setStreamLogCallback:(id /* block */)arg0;
- (BOOL)enableUpdateConfigCallAB;
- (void)retryStreaming;
- (void)setEnableUpdateConfigCallAB:(BOOL)arg0;
- (id /* block */)streamLogCallback;
- (id /* block */)updateEncodeBitrateCallback;
- (void)setUpdateEncodeBitrateCallback:(id /* block */)arg0;
- (void)setupLiveCoreWithConfig:(id)arg0;
- (id)liveCore;
- (void)stopMicAudioCapture;
- (void)startMicAudioCapture;
- (id)streamConfiguration;
- (id /* block */)sessionStatusChangedHandler;
- (id /* block */)streamErrorCallback;
- (id /* block */)audioCaptureEventHandler;
- (void)resetStreamingConfigurationIfNeed;
- (void)pushEncodedVideoData:(id)arg0 head:(struct { int x0; int x1; long long x2; long long x3; })arg1;
- (void)pushAudioData:(id)arg0 head:(struct { int x0; int x1; int x2; int x3; int x4; long long x5; int x6; })arg1;
- (void)createOutAuxAudioStream;
- (void)releaseOutAuxAudioStream;
- (void)setNeedPlayOutAuxAudio:(BOOL)arg0;
- (long long)micAudioVolumePower;
- (void)setSessionStatusChangedHandler:(id /* block */)arg0;
- (void)setStreamErrorCallback:(id /* block */)arg0;
- (void)setAudioCaptureEventHandler:(id /* block */)arg0;
- (void)startSession;
- (void)resumeSession;
- (void)closeSession;
- (void)pauseSession;

@end