//
//     Generated by private class-dump
//

@interface LSLiveAudioLoudNorm : NSObject {
    struct unique_ptr<mammon::Effect, std::default_delete<mammon::Effect>> { struct __compressed_pair<mammon::Effect *, std::default_delete<mammon::Effect>> { struct Effect *__value_; } __ptr_; } _processor;
    void *bus_array;
    struct unique_ptr<float[], std::default_delete<float[]>> { struct __compressed_pair<float *, std::default_delete<float[]>> { float *__value_; } __ptr_; } _data;
    struct unique_ptr<float[], std::default_delete<float[]>> { struct __compressed_pair<float *, std::default_delete<float[]>> { float *__value_; } __ptr_; } _data1;
    struct unique_ptr<float[], std::default_delete<float[]>> { struct __compressed_pair<float *, std::default_delete<float[]>> { float *__value_; } __ptr_; } _data2;
    float *_inData[2];
    struct vector<mammon::Bus, std::allocator<mammon::Bus>> { struct Bus *__begin_; struct Bus *__end_; struct __compressed_pair<mammon::Bus *, std::allocator<mammon::Bus>> { struct Bus *__value_; } __end_cap_; } _input_bus;
    BOOL _forceUseSingleChannel;
}

- (void)processAudioData:(short *)arg0 channels:(int)arg1 inNumberFrames:(unsigned int)arg2;
- (id)initOffLineWithSample:(int)arg0 channels:(int)arg1 useSingleChannel:(BOOL)arg2;
- (id)initWithSample:(int)arg0 channels:(int)arg1 useSingleChannel:(BOOL)arg2;
- (void)setLoudNormParams:(id)arg0 value:(float)arg1;
- (void)processBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 inNumberFrames:(unsigned int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
