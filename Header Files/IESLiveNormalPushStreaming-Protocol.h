//
//     Generated by private class-dump
//

@protocol IESLiveNormalPushStreaming <NSObject>

@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL enableUpdateConfigCallAB;
@property (copy, nonatomic) id /* block */ startNormalStreamingBlock;

- (void)startFakeAudioCapture;
- (void)stopFakeAudioCapture;
- (BOOL)isFakeAudioCaptureRunning;
- (void)updateStreamingConfiguration:(id)arg0 callback:(id /* block */)arg1;
- (BOOL)enableUpdateConfigCallAB;
- (void)updateStreamingConfiguration:(id)arg0;
- (struct CGSize { double x0; double x1; })getCameraOutputSizeFromParams:(id)arg0;
- (void)pushRestart:(id)arg0;
- (void)setEnableUpdateConfigCallAB:(BOOL)arg0;
- (void)setIsMute:(BOOL)arg0;
- (void)enableSiti:(BOOL)arg0;
- (void)enableVideoDenoise:(BOOL)arg0;
- (void)setVideoDenoiseBitrateRatios:(double)arg0 ge1080pRatio:(double)arg1 lt1080pRatio:(double)arg2;
- (void)setBFrameBitrateRatio:(double)arg0;
- (void)mute:(BOOL)arg0 reason:(id)arg1;
- (void)updateStreamingBitrate:(long long)arg0 minBit:(long long)arg1 maxBit:(long long)arg2;
- (void)updateSiti:(BOOL)arg0 fps:(BOOL)arg1;
- (void)updateStreamingFrameRate:(long long)arg0;
- (void)startAudioCaptureWithPrivacyCert:(id)arg0 reason:(id)arg1;
- (void)startNormalStreamingWithConfig:(id)arg0;
- (void)audioCaptureInterrupted:(BOOL)arg0 withPrivacyCert:(id)arg1 reason:(id)arg2;
- (void)updatePushURL:(id)arg0;
- (void)updateStreamingOutputSize:(struct CGSize { double x0; double x1; })arg0;
- (void)stopNormalStreaming;
- (void)stopAudioCaptureWithPrivacyCert:(id)arg0 reason:(id)arg1;
- (void)audioPlayerInterrupted:(BOOL)arg0 reason:(id)arg1;
- (void)updateStreamingAudioBitrate:(long long)arg0;
- (BOOL)isStreaming;
- (BOOL)isMute;

@optional

- (void)setInputFrameCallback:(id /* block */)arg0;
- (void)setEffectFrameCallback:(id /* block */)arg0;
- (struct __CVBuffer { } *)getPixelBufferWithIsEffected:(BOOL)arg0;
- (id)getJpegDataWithIsEffected:(BOOL)arg0 compressionRatio:(double)arg1;
- (id)getAudioBytesSent;
- (id)getVideoBytesSent;
- (id /* block */)startNormalStreamingBlock;
- (void)setStartNormalStreamingBlock:(id /* block */)arg0;

@end