//
//     Generated by private class-dump
//

@class LiveStreamRenderSinkBuffer;

@interface LiveStreamRenderSink : NSObject {
    struct scoped_refptr<avframework::AudioDeviceInterface::AudioRenderSinkInterface> { struct AudioRenderSinkInterface *ptr_; } _renderSink;
    struct unique_ptr<avframework::AudioFrame, std::default_delete<avframework::AudioFrame>> { struct __compressed_pair<avframework::AudioFrame *, std::default_delete<avframework::AudioFrame>> { struct AudioFrame *__value_; } __ptr_; } _audioFrame;
    id /* block */ _getAudioCallback;
    LiveStreamRenderSinkBuffer *_sinkBuffer;
}

@property (retain, nonatomic) LiveStreamRenderSinkBuffer *sinkBuffer;
@property (copy, nonatomic) id /* block */ getAudioCallback;

- (void)setGetAudioCallback:(id /* block */)arg0;
- (id /* block */)getAudioCallback;
- (void)pushAudioData:(short *)arg0 samplesPerChannel:(int)arg1 sampleRate:(int)arg2 numChannels:(int)arg3 timestamp:(long long)arg4;
- (void)openForceMediaMode:(BOOL)arg0;
- (void)setQuirks:(long long)arg0;
- (float)getPlayerVolume;
- (void)setPlayerVolume:(float)arg0;
- (void)setAudioLoudNormParam:(float)arg0;
- (void)setDisAbleLockWhenStopAndPull:(BOOL)arg0;
- (void)setEnableMix2Output:(BOOL)arg0;
- (long long)getQuirks;
- (id)initWithByteAudioRenderSink:(struct scoped_refptr<avframework::AudioDeviceInterface::AudioRenderSinkInterface> { struct AudioRenderSinkInterface *x0; })arg0;
- (void)enableAGC:(BOOL)arg0 isVoice:(BOOL)arg1;
- (BOOL)isEnableAGC;
- (void)setExhaustMode:(BOOL)arg0 withConfig:(id)arg1;
- (id)sinkBuffer;
- (void)setSinkBuffer:(id)arg0;
- (void)startStream;
- (void).cxx_destruct;
- (void)setVolume:(float)arg0;
- (void)dealloc;
- (id).cxx_construct;
- (void)setMute:(BOOL)arg0;
- (float)getVolume;
- (void)stopStream;
- (BOOL)isMute;

@end