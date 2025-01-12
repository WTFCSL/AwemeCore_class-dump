//
//     Generated by private class-dump
//

@class AFDPinchZoomInTipsView;

@interface AFDPinchZoomInTransition : AFDPinchZoomTransition {
    AFDPinchZoomInTipsView *_tipsView;
}

@property (retain, nonatomic) AFDPinchZoomInTipsView *tipsView;

- (void)startCustomAnimationWithFromVC:(id)arg0 toVC:(id)arg1 fromContextProvider:(id)arg2 toContextProvider:(id)arg3 containerView:(id)arg4 context:(id)arg5;
- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })arg0 startPosition:(struct CGPoint { double x0; double x1; })arg1 scale:(double)arg2 numberOfTouches:(unsigned long long)arg3;
- (void)finishAnimationWithCompletionBlock:(id /* block */)arg0;
- (void)cancelAnimationWithCompletionBlock:(id /* block */)arg0;
- (BOOL)shouldCompleteWithScale:(double)arg0 typeMask:(unsigned long long)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg0;
- (void)showTipsViewIfNeededWithScale:(double)arg0;
- (void)triggerHapticIfNeededWithScale:(double)arg0;
- (id)init;
- (void).cxx_destruct;

@end
