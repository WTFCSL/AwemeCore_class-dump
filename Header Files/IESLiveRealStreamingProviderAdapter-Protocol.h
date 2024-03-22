//
//     Generated by private class-dump
//

@protocol IESLiveRealStreamingProviderAdapter <NSObject>

@optional

- (BOOL)stopEffectBachAlgorithm;
- (void)setContourDataCallBack:(id /* block */)arg0;
- (void)setEffectBachAlgorithmEnable:(BOOL)arg0 threshold:(long long)arg1;
- (int)sendSEIMsgWithKey:(id)arg0 value:(id)arg1 repeatTimes:(long long)arg2 keyFrameOnly:(BOOL)arg3 allowsCovered:(BOOL)arg4 timeGap:(int)arg5 seiFlag:(int)arg6;
- (long long)sendSEIMsgWithKey:(id)arg0 value:(id)arg1 repeatTimes:(long long)arg2 keyFrameOnly:(BOOL)arg3 allowsCovered:(BOOL)arg4;
- (void)pushEffectedVideoBuffer:(struct __CVBuffer { } *)arg0 texture:(int)arg1 andCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2;
- (void)pushEffectedVideoBufferAfterStarted:(struct __CVBuffer { } *)arg0 texture:(int)arg1 andCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2;
- (int)createOutAuxAudioStream:(long long)arg0;
- (int)createOutAuxAudioStream:(long long)arg0 withAudioFileConfig:(id)arg1;
- (int)releaseOutAuxAudioStream:(int)arg0;
- (void)setOutAuxStreamVolume:(int)arg0 volume:(float)arg1;
- (void)interuptOutAuxStream:(int)arg0 interupt:(BOOL)arg1;
- (void)prepareOutAuxAudioStream:(int)arg0 sampleRate:(int)arg1 channels:(int)arg2;
- (int)pushOutAuxFLTAudioData:(int)arg0 data:(float **)arg1 size:(long long)arg2;
- (id)streamingLiveCoreSession;
- (id)normalStreamer;
- (id)interactStreamer;
- (id)ktv;
- (id)bitrateHandler;
- (id)screencastStreamer;
- (BOOL)startEffectBachAlgorithm;

@end
