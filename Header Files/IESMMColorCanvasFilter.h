//
//     Generated by private class-dump
//

@interface IESMMColorCanvasFilter : IESMMCanvasBaseFilter {
    BOOL _enableHdrEffectOptimization;
}

@property (nonatomic) BOOL enableHdrEffectOptimization;

- (void)renderToTextureWithVertices:(const float *)arg0 textureCoordinates:(const float *)arg1;
- (void)initializeRenderer:(id)arg0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 atIndex:(long long)arg1 exceptionBlock:(id /* block */)arg2;
- (BOOL)enableHdrEffectOptimization;
- (void)drawWithoutEffectRenderer;
- (void)drawCanvas:(id)arg0 shouldDraw:(BOOL)arg1;
- (void)setEnableHdrEffectOptimization:(BOOL)arg0;

@end