//
//     Generated by private class-dump
//

@interface HTSGLAspectScaleFilter : HTSGLFilter {
    long long _mode;
    struct CGSize { double width; double height; } _fitInAspectRatio;
    struct CGSize { double width; double height; } _targetSize;
    struct CGSize { double width; double height; } _inputSize;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _transformBeforeAspectScale;
}

@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) struct CGSize { double width; double height; } inputSize;
@property (nonatomic) long long mode;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transformBeforeAspectScale;
@property (nonatomic) struct CGSize { double width; double height; } fitInAspectRatio;
@property (nonatomic) struct CGSize { double x0; double x1; } renderSize;

- (void)renderToTextureWithVertices:(const float *)arg0 textureCoordinates:(const float *)arg1;
- (void)forceProcessingAtSize:(struct CGSize { double x0; double x1; })arg0;
- (void)forceProcessingAtSizeRespectingAspectRatio:(struct CGSize { double x0; double x1; })arg0;
- (void)setInputSize:(struct CGSize { double x0; double x1; })arg0 atIndex:(long long)arg1;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 atIndex:(long long)arg1 exceptionBlock:(id /* block */)arg2;
- (struct CGSize { double x0; double x1; })fitInAspectRatio;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformBeforeAspectScale;
- (void)setTransformBeforeAspectScale:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (void)setFitInAspectRatio:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })targetSize;
- (id)initWithContext:(id)arg0;
- (long long)mode;
- (struct CGSize { double x0; double x1; })renderSize;
- (void)setMode:(long long)arg0;
- (struct CGSize { double x0; double x1; })inputSize;
- (void)setTargetSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setInputSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setRenderSize:(struct CGSize { double x0; double x1; })arg0;

@end
