//
//     Generated by private class-dump
//

@interface VEAudioTimeAlignUnit : VEAudioBaseUnit {
    void *_executor;
    struct property { int x0; int x1; int x2; void *x3; unsigned int x4; char *x5; } *_property;
    struct AudioBufferQueue { char *bufferData; unsigned int dataSize; } _micbufferQuene;
    struct AudioBufferQueue { char *bufferData; unsigned int dataSize; } _bgmbufferQuene;
    double _fristAudioCallbackTime;
    double _fristVideoTime;
    double _fristAudioTime;
}

@property (nonatomic) double fristAudioCallbackTime;
@property (nonatomic) double fristVideoTime;
@property (nonatomic) double fristAudioTime;

- (BOOL)setAudioConfig:(id)arg0;
- (void)p_processer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 bgm:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg1 sampleCount:(int)arg2 channel:(float)arg3;
- (void)p_stopProcessor;
- (void)downData:(id)arg0;
- (void)p_startProcessor;
- (void)p_onStopProcessor;
- (void)p_initAudio;
- (double)fristAudioCallbackTime;
- (void)setFristAudioCallbackTime:(double)arg0;
- (float)p_getDelayTime;
- (BOOL)processSampleData:(id)arg0;
- (void)setFirstVideoTime:(double)arg0 firstAudioTime:(double)arg1;
- (void)setFristVideoTime:(double)arg0;
- (double)fristVideoTime;
- (double)fristAudioTime;
- (void)setFristAudioTime:(double)arg0;
- (void)dealloc;

@end