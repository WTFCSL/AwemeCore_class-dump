//
//     Generated by private class-dump
//

@interface AWEGlobalVisionPinchZoomOutTransition : AWEGlobalVisionPinchZoomInAndOutTransition

- (void)startCustomAnimationWithFromVC:(id)arg0 toVC:(id)arg1 fromContextProvider:(id)arg2 toContextProvider:(id)arg3 containerView:(id)arg4 context:(id)arg5;
- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })arg0 startPosition:(struct CGPoint { double x0; double x1; })arg1 scale:(double)arg2 numberOfTouches:(unsigned long long)arg3;
- (void)finishAnimationWithCompletionBlock:(id /* block */)arg0;
- (void)cancelAnimationWithCompletionBlock:(id /* block */)arg0;
- (BOOL)shouldCompleteWithScale:(double)arg0 typeMask:(unsigned long long)arg1;

@end