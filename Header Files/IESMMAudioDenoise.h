//
//     Generated by private class-dump
//

@interface IESMMAudioDenoise : IESMMObject {
    struct unique_ptr<mammon::Effect, std::default_delete<mammon::Effect>> { struct __compressed_pair<mammon::Effect *, std::default_delete<mammon::Effect>> { struct Effect *__value_; } __ptr_; } _processor;
}

- (id)initWithSampleRate:(int)arg0 channels:(int)arg1 config:(id)arg2;
- (int)process:(float **)arg0 samples:(unsigned long long)arg1 channels:(int)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (void)seekToTime:(double)arg0;
- (id).cxx_construct;

@end
