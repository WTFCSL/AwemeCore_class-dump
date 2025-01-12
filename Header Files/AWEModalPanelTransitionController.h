//
//     Generated by private class-dump
//

@class UIScrollView;

@interface AWEModalPanelTransitionController : AWEPanelTransitionController {
    BOOL _useSmootherAnimationCurve;
    UIScrollView *_contentScrollView;
    double _lastOffset;
}

@property (nonatomic) double lastOffset;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (nonatomic) BOOL useSmootherAnimationCurve;

- (void)setUseSmootherAnimationCurve:(BOOL)arg0;
- (BOOL)useSmootherAnimationCurve;
- (void)presentedViewPanned:(id)arg0;
- (void)cancelInteractiveTransition;
- (void)animateTransition:(id)arg0;
- (void)finishInteractiveTransition;
- (id)init;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)contentScrollView;
- (double)lastOffset;
- (void)setLastOffset:(double)arg0;
- (void)setContentScrollView:(id)arg0;

@end
