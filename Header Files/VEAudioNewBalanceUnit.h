//
//     Generated by private class-dump
//

@interface VEAudioNewBalanceUnit : VEAudioBaseUnit {
    void *_handle;
    struct extractorCreateParameter { unsigned int sampleRate; unsigned int numChannel; } _param;
    id /* block */ _newBalanceCallback;
}

@property (copy, nonatomic) id /* block */ newBalanceCallback;

- (BOOL)setAudioConfig:(id)arg0;
- (void)p_stopProcessor;
- (void)downData:(id)arg0;
- (void)p_startProcessor;
- (BOOL)processAudioSampleData:(id)arg0;
- (void)p_processer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 sampleCount:(int)arg1 channel:(float)arg2;
- (void)p_getResults:(id)arg0;
- (struct featureArray { struct feature *x0; unsigned int x1; unsigned int x2; } *)findWantedFeature:(struct featureSet { int x0; struct featureArray *x1; } *)arg0 feature_id:(int)arg1;
- (void)p_initAudio;
- (void)p_createFile;
- (void)setNewBalanceCallback:(id /* block */)arg0;
- (id /* block */)newBalanceCallback;
- (void).cxx_destruct;
- (void)dealloc;

@end
