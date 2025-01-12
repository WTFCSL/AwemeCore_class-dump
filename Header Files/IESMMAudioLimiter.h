//
//     Generated by private class-dump
//

@interface IESMMAudioLimiter : VEAudioEffectBase {
    void *_limiter;
    struct unique_ptr<mammon::Effect, std::default_delete<mammon::Effect>> { struct __compressed_pair<mammon::Effect *, std::default_delete<mammon::Effect>> { struct Effect *__value_; } __ptr_; } _limitProcessor;
    int _channels;
    float _volume;
}

@property (nonatomic) float volume;

- (id)initWithChannels:(int)arg0 sampleRate:(int)arg1;
- (void)processStereo:(float **)arg0 samplesPerCh:(int)arg1;
- (void)processPlanarStereo:(float *)arg0 samplesPerCh:(int)arg1;
- (id)init;
- (void).cxx_destruct;
- (float)volume;
- (void)updateWithConfig:(id)arg0;
- (void)setVolume:(float)arg0;
- (void)dealloc;
- (void)reset;
- (id).cxx_construct;

@end
