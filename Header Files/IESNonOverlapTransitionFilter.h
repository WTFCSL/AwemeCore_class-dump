//
//     Generated by private class-dump
//

@interface IESNonOverlapTransitionFilter : IESBaseTransitionFilter {
    BOOL _hasSetFirstTexture;
}

- (void)renderToTextureWithVertices:(const float *)arg0 textureCoordinates:(const float *)arg1;
- (struct CGSize { double x0; double x1; })rotatedSize:(struct CGSize { double x0; double x1; })arg0 forIndex:(long long)arg1;
- (void)setInputRotation:(unsigned long long)arg0 atIndex:(long long)arg1;
- (void)setInputFramebuffer:(id)arg0 atIndex:(long long)arg1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })arg0 atIndex:(long long)arg1;
- (long long)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 atIndex:(long long)arg1 exceptionBlock:(id /* block */)arg2;
- (id)initWithRenderer:(id)arg0 context:(id)arg1;
- (void)setProgress:(float)arg0;

@end