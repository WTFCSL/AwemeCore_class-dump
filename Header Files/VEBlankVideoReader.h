//
//     Generated by private class-dump
//

@interface VEBlankVideoReader : VEVideoReader {
    struct __CVBuffer { } *_lastPixelBufferRef;
}

@property (nonatomic) struct __CVBuffer { } *lastPixelBufferRef;

- (void)initPixelBuffer;
- (void)setLastPixelBufferRef:(struct __CVBuffer { } *)arg0;
- (struct __CVBuffer { } *)lastPixelBufferRef;
- (void)stop;
- (id)initWithConfig:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)copySampleBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;

@end