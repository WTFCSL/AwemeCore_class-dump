//
//     Generated by private class-dump
//

@protocol LSGLInput <NSObject>

- (void)setInputRotation:(unsigned long long)arg0 atIndex:(long long)arg1;
- (void)setInputFramebuffer:(id)arg0 atIndex:(long long)arg1;
- (void)needRender:(BOOL)arg0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 atIndex:(long long)arg1;
- (void)endProcessing;
- (long long)nextAvailableTextureIndex;
- (struct CGSize { double x0; double x1; })maximumOutputSize;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (BOOL)enabled;
- (id)name;
- (void)startProcessing;

@end
