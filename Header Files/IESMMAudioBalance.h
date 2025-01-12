//
//     Generated by private class-dump
//

@class IESMMAudioBalanceConfig;

@interface IESMMAudioBalance : IESMMObject {
    struct unique_ptr<mammon::Effect, std::default_delete<mammon::Effect>> { struct __compressed_pair<mammon::Effect *, std::default_delete<mammon::Effect>> { struct Effect *__value_; } __ptr_; } _processor;
    BOOL _passthrough;
    IESMMAudioBalanceConfig *_config;
}

- (id)initWithSampleRate:(int)arg0 channels:(int)arg1 config:(id)arg2;
- (int)process:(float **)arg0 samples:(unsigned long long)arg1 channels:(int)arg2;
- (void).cxx_destruct;
- (id)config;
- (void)dealloc;
- (void)reset;
- (id).cxx_construct;

@end
