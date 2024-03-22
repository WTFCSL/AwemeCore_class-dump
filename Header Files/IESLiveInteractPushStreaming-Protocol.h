//
//     Generated by private class-dump
//

@protocol IESLiveInteractPushStreaming <NSObject>

@property (nonatomic) BOOL changeToFullInteractOnlySelf;

- (void)startFakeAudioCapture;
- (void)stopFakeAudioCapture;
- (void)setEnableAudioCaptureInBackground:(BOOL)arg0;
- (void)setEnableNoiseSuppression:(BOOL)arg0 param:(float)arg1;
- (void)setEnableNoiseSuppressionWithType:(unsigned long long)arg0 enable:(BOOL)arg1 param:(float)arg2 resourceUrl:(id)arg3;
- (BOOL)isMicRunning;
- (void)setEnableAudioCaptureRespondToAppStatus:(BOOL)arg0;
- (void)setChangeToFullInteractOnlySelf:(BOOL)arg0;
- (void)pushVideoBuffer:(struct __CVBuffer { } *)arg0 andTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (void)willCloseLivingRoom;
- (BOOL)changeToFullInteractOnlySelf;
- (void)pushAudioData:(short *)arg0 size:(long long)arg1;
- (void)pushFLTAudioData:(float **)arg0 size:(long long)arg1;
- (void)preparePushExtraAudio:(int)arg0 channels:(int)arg1;
- (void)setMovieMixVolume:(float)arg0 captureVolume:(float)arg1;
- (void)setMoviePlayVolume:(float)arg0;
- (void)stopPushExtraAudio;
- (void)reportMoviePlayStats;
- (void)setMovieMixerMode:(long long)arg0;
- (void)setMovieInteractOnlyPlay:(BOOL)arg0;
- (void)setNeedPlayMovieInteractAudio:(BOOL)arg0;
- (void)setAudioScenario:(long long)arg0;
- (void)setVideoSourceType:(long long)arg0;
- (BOOL)isInteractRunning;
- (void)startAudioCaptureWithReason:(id)arg0;
- (BOOL)audioCaptureInterrupted;
- (void)audioCaptureInterrupted:(BOOL)arg0 reason:(id)arg1;
- (void)startInteract;
- (int)muteLocalVideoStream:(BOOL)arg0;
- (int)muteAllRemoteVideoStreams:(BOOL)arg0;
- (void)setupInteractStreamConfig:(id)arg0 delegate:(id)arg1;
- (id)fullSession;
- (id)interactSessions;
- (id)localSmallWindowSession;
- (id)interactConfig;
- (int)reportAudioVolumeIndicationWithDuration:(double)arg0 callback:(id /* block */)arg1;
- (void)startInteractStreaming;
- (void)stopInteractStreaming;
- (void)enableVideoCapture:(BOOL)arg0;
- (void)removeDelegate;
- (int)muteLocalAudioStream:(BOOL)arg0 reason:(id)arg1;
- (int)muteRemoteAudioStreamWithStringUid:(id)arg0 mute:(BOOL)arg1 reason:(id)arg2;
- (int)muteRemoteVideoStreamWithStringUid:(id)arg0 mute:(BOOL)arg1;
- (int)muteAllRemoteAudioStreams:(BOOL)arg0 reason:(id)arg1;
- (BOOL)compositingLayoutOfPublisher;
- (long long)getMixType;
- (BOOL)isMixOnClient;
- (void)enableKeepDarkFrame:(BOOL)arg0;
- (void)interactIgnoreCaptureVideoBuffer:(BOOL)arg0;
- (void)updateFmNeedRender:(BOOL)arg0;
- (void)startJoinChannel;
- (void)startPushStream;
- (void)setRemoteSessionNeedRender:(BOOL)arg0;
- (int)setDefaultMuteAllRemoteVideoStreams:(BOOL)arg0;
- (int)setRemoteVideoSuperResolution:(id)arg0 withMode:(long long)arg1;
- (void)setRemoteVideoDisplayDirect:(BOOL)arg0;
- (id)getRemoteVideoPreviewView;
- (void)sendSEIInLowLantency:(id)arg0;
- (int)sendSEIMessage:(id)arg0;
- (void)setMixPriority:(long long)arg0;
- (void)setEnableVolumeBalance:(BOOL)arg0 balancedLoudnessValue:(double)arg1;
- (void)startMovieInteract;
- (void)stopMovieInteract;
- (void)switchToPlayMode:(long long)arg0;
- (void)playMoive;
- (void)pauseMovie:(BOOL)arg0;
- (void)enableLocalVideo:(BOOL)arg0;
- (id)noiseSuppressionParams;
- (void)updateRtcExtInfo:(id)arg0;
- (void)updateAudioScene:(long long)arg0;
- (void)updateInteractStreamSize:(struct CGSize { double x0; double x1; })arg0;
- (struct __CVBuffer { } *)getLastPixelBufferWithUid:(id)arg0;
- (id)getLastPixelBufferWithUid:(id)arg0 compressionRatio:(double)arg1;
- (void)setPreviewMode:(long long)arg0;

@optional

- (int)adjustPlaybackSignalVolume:(long long)arg0;
- (void)startAudioSinkStream:(BOOL)arg0;
- (void)stopAudioSinkStream;
- (void)pushAudioSinkFrame:(id)arg0 timestamp:(long long)arg1;
- (int)startSubtitle;
- (int)stopSubtitle;
- (void)setupWithScene:(long long)arg0;
- (void)setEarMonitorVolume:(long long)arg0;
- (int)sendUserMessageOutsideRoom:(id)arg0 message:(id)arg1;
- (void)switchInteractSeiSourceValueManually:(BOOL)arg0;
- (void)updateAuthInfo:(id)arg0 frameType:(long long)arg1;
- (int)startForwardStreamToRooms:(id)arg0;
- (int)updateForwardStreamToRooms:(id)arg0;
- (int)stopForwardStreamToRooms;
- (int)pauseForwardStreamToAllRooms;
- (int)resumeForwardStreamToAllRooms;
- (void)switchMixType:(long long)arg0;
- (void)enableSingleViewOptimization:(BOOL)arg0;
- (void)disableSingleViewOptimization;
- (BOOL)isSingleViewOptimizationEnabled;
- (void)updateSingleViewOptimizationCropRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)addMixPicWithConfig:(id)arg0;
- (void)removeMixPicWithId:(id)arg0;
- (void)updateMixPicWithConfig:(id)arg0;
- (void)removeAllMixPics;
- (void)composeCurrentMixPic;
- (BOOL)isMixOnClientByRTC;
- (BOOL)isMixOnClientByLiveCore;
- (void)enableSpatialAudioRender:(BOOL)arg0;
- (int)updateSelfSpatialAudioPosition:(id)arg0;
- (int)updateRemoteLinkMicId:(id)arg0 positionInfo:(id)arg1;
- (int)removeRemotePositionWithLinkMicId:(id)arg0;
- (int)removeAllRemotePosition;
- (void)startChorus:(BOOL)arg0 onlySyncTimeStamp:(BOOL)arg1;
- (void)closeChorus;
- (void)setRemoteAudioPlaybackVolume:(id)arg0 volume:(int)arg1;
- (int)startPlayPublicStream:(id)arg0;
- (int)stopPlayPublicStream:(id)arg0;
- (int)setPublicStreamVideoCanvas:(id)arg0 withCanvas:(id)arg1;
- (int)setPublicStreamAudioPlaybackVolume:(id)arg0 volume:(long long)arg1;
- (void)startChorusCacheSync:(id)arg0;
- (void)stopChorusCacheSync;
- (void)updateMultiChorusMixedAction:(unsigned long long)arg0 withBaseUid:(id)arg1;
- (void)setRenderFilterEnable:(BOOL)arg0 effectConfig:(id)arg1;
- (BOOL)isRenderFilterEnable;
- (void)updateRenderFilterLayout;
- (void)destoryRenderFilter;
- (void)setRenderFilterMixOutput:(long long)arg0 height:(long long)arg1;
- (BOOL)startLiveLinkMixer:(id)arg0;
- (void)stopLiveLinkMixer;
- (BOOL)startLiveLinkPreMixer;
- (void)stopLiveLinkPreMixer;
- (void)updatePreMixerCompositingLayout;
- (void)pushPreMixerBuffer:(struct __CVBuffer { } *)arg0 layerId:(int)arg1 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2;
- (void)startSmallWindowSession;
- (void)stopSmallWindowSession;
- (int)login;
- (void)setPlaybackVolume:(long long)arg0;

@end
