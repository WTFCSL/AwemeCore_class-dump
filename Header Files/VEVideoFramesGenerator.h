//
//     Generated by private class-dump
//

@class AVAssetImageGenerator;

@interface VEVideoFramesGenerator : NSObject {
    BOOL _cancelGenerateFrames;
    AVAssetImageGenerator *_generator;
    id /* block */ _callback;
    id /* block */ _frameCallback;
    long long _index;
    long long _total;
}

@property (retain, nonatomic) AVAssetImageGenerator *generator;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) id /* block */ frameCallback;
@property (nonatomic) long long index;
@property (nonatomic) long long total;
@property (nonatomic) BOOL cancelGenerateFrames;

- (long long)orientationForVideoImage:(id)arg0;
- (double)caculateInterval:(unsigned long long)arg0;
- (void)generateFile:(id)arg0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1 customInterval:(double)arg2 size:(struct CGSize { double x0; double x1; })arg3 imageCallback:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)caculateFramesTimesInRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0 andInterval:(double)arg1;
- (void)setFrameCallback:(id /* block */)arg0;
- (id /* block */)frameCallback;
- (void)setCancelGenerateFrames:(BOOL)arg0;
- (BOOL)cancelGenerateFrames;
- (void)generateFile:(id)arg0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1 fps:(unsigned long long)arg2 size:(struct CGSize { double x0; double x1; })arg3 imageCallback:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)generateImageWithFile:(id)arg0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1 customInterval:(double)arg2 size:(struct CGSize { double x0; double x1; })arg3 imageCallback:(id /* block */)arg4 completion:(id /* block */)arg5;
- (long long)total;
- (void)setIndex:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setCallback:(id /* block */)arg0;
- (id /* block */)callback;
- (id)generator;
- (long long)index;
- (void)cancel;
- (void)setGenerator:(id)arg0;
- (void)setTotal:(long long)arg0;

@end