//
//     Generated by private class-dump
//

@interface IESSCAudioBufferUtil : NSObject

+ (struct opaqueCMSampleBuffer { } *)cropSampleBufferFormSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg0 withtime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 headerOrTailPart:(BOOL)arg2;
+ (void)copyPCMBuffer:(id)arg0 toAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg1 byteSize:(unsigned long long)arg2;
+ (void)copyAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 toPCMBuffer:(id)arg1 maxByteSize:(unsigned long long)arg2 offset:(long long)arg3;
+ (struct opaqueCMSampleBuffer { } *)cropSampleBufferFormSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg0 toEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
+ (struct opaqueCMSampleBuffer { } *)cropSampleBufferFormSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg0 fromStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;

@end