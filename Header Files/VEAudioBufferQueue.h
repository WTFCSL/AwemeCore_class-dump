//
//     Generated by private class-dump
//

@interface VEAudioBufferQueue : NSObject {
    struct _VECompileAudioBuffer { short *audioDataList; unsigned long long dataSize; unsigned long long maxSize; long long initialPts; long long processedSampleCount; } _audioBufferPool;
}

@property (nonatomic) struct _VECompileAudioBuffer { short *audioDataList; unsigned long long dataSize; unsigned long long maxSize; long long initialPts; long long processedSampleCount; } audioBufferPool;

- (void)enqueueAudioData:(short *)arg0 sampleCount:(unsigned int)arg1 pts:(long long)arg2;
- (id)initWithMaxQueueSize:(unsigned long long)arg0;
- (void)enqueueInterleavedAudioData:(float *)arg0 sampleCount:(unsigned int)arg1 pts:(long long)arg2 format:(int)arg3;
- (void)enqueueAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg0;
- (BOOL)dequeueAudioData:(short *)arg0 outPts:(long long *)arg1 sampleCount:(unsigned int)arg2 outSampleCount:(unsigned int *)arg3 dequeueWithMismatchSampleCount:(BOOL)arg4;
- (struct _VECompileAudioBuffer { short *x0; unsigned long long x1; unsigned long long x2; long long x3; long long x4; })audioBufferPool;
- (void)setAudioBufferPool:(struct _VECompileAudioBuffer { short *x0; unsigned long long x1; unsigned long long x2; long long x3; long long x4; })arg0;
- (void)dealloc;

@end