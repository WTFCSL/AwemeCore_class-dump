//
//     Generated by private class-dump
//

@interface IESAudioBufferUtils : NSObject

+ (void)copyBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 srcBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg1;
+ (void)resetBufferQueue:(struct AudioBufferQueue { char *x0; unsigned int x1; } *)arg0;
+ (void)resetAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0;
+ (void)createBufferQueue:(struct AudioBufferQueue { char *x0; unsigned int x1; } *)arg0;
+ (void)freeBufferQueue:(struct AudioBufferQueue { char *x0; unsigned int x1; } *)arg0;
+ (BOOL)pushQueue:(struct AudioBufferQueue { char *x0; unsigned int x1; } *)arg0 srcData:(char *)arg1 dataSize:(unsigned int)arg2;
+ (int)dequeue:(struct AudioBufferQueue { char *x0; unsigned int x1; } *)arg0 dstData:(char *)arg1 outputSize:(unsigned int)arg2;
+ (struct opaqueCMSampleBuffer { } *)sampleBufferFromAudioBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg1 timingInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })arg2 inNumberFrames:(unsigned int)arg3;
+ (int)dequeue:(struct AudioBufferQueue { char *x0; unsigned int x1; } *)arg0 dstData:(char *)arg1 dstOffset:(unsigned int)arg2 outputSize:(unsigned int)arg3;
+ (BOOL)reCreateBuffer:(float **)arg0 currLength:(int *)arg1 needLength:(int)arg2;
+ (struct opaqueCMSampleBuffer { } *)generateSilence:(double)arg0 asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg1;
+ (void)copyBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 srcBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg1 byteSize:(unsigned int)arg2;
+ (void)convertFloatInterleaved:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 toNonInterleaved:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg1 numberOfFrames:(unsigned int)arg2;
+ (BOOL)convertNonInterleavedToInterleaved:(float *)arg0 numberOfFrames:(int)arg1;
+ (BOOL)isFullBufferQuene:(struct AudioBufferQueue { char *x0; unsigned int x1; } *)arg0 dataSize:(unsigned int)arg1;
+ (void)convertAudioBuffer:(struct OpaqueAudioConverter { } *)arg0 srcSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg1 resBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg2 targetAsbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg3 srcAsbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg4 isFullCache:(BOOL)arg5;
+ (void)convertAudioBuffer:(struct OpaqueAudioConverter { } *)arg0 srcBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg1 resBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg2 targetAsbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg3 srcAsbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg4 isFullCache:(BOOL)arg5;
+ (struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)VEAudioBufferListCreate:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0 numberFrames:(unsigned int)arg1;
+ (void)VEAudioBufferListFree:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0;

@end