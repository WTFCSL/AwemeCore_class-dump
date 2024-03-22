//
//     Generated by private class-dump
//

@interface BDUGVideoMark : NSObject

+ (void)readWithAsset:(id)arg0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1 complete:(id /* block */)arg2;
+ (void)decodeSharedWaterMark:(char *)arg0 width:(int)arg1 height:(int)arg2 maxWatermarkSize:(long long)arg3 completion:(id /* block */)arg4;
+ (void)readWithAsset:(id)arg0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1 maxWatermarkSize:(long long)arg2 complete:(id /* block */)arg3;
+ (void)trackStartDecodeWithAsset:(id)arg0;
+ (void)decodeSharedVideoWaterMarkBuffer:(struct opaqueCMSampleBuffer { } *)arg0 maxWatermarkSize:(long long)arg1 completion:(id /* block */)arg2;
+ (void)trackEndDecodeWithAsset:(id)arg0 success:(BOOL)arg1 startTime:(double)arg2 count:(long long)arg3;
+ (void)readWithAsset:(id)arg0 complete:(id /* block */)arg1;
+ (void)read:(id)arg0 complete:(id /* block */)arg1;
+ (void)read:(id)arg0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1 complete:(id /* block */)arg2;
+ (void)read:(id)arg0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1 maxWatermarkSize:(long long)arg2 complete:(id /* block */)arg3;
+ (void)setMonitor:(BOOL)arg0;

@end