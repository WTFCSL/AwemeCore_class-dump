//
//     Generated by private class-dump
//

@interface VEAudioAECUnit : VEAudioBaseUnit {
    struct unique_ptr<mammon::Effect, std::default_delete<mammon::Effect>> { struct __compressed_pair<mammon::Effect *, std::default_delete<mammon::Effect>> { struct Effect *__value_; } __ptr_; } _processor;
}

+ (id)requeirements;
+ (id)modelName;

- (BOOL)setAudioConfig:(id)arg0;
- (void)p_processer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 bgm:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg1 sampleCount:(int)arg2 channel:(float)arg3;
- (void)p_stopProcessor;
- (void)p_startProcessor;
- (BOOL)processAudioSampleData:(id)arg0;
- (void)p_initAudio;
- (void)p_createFile;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;

@end
