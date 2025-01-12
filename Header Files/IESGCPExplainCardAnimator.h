//
//     Generated by private class-dump
//

@class UIView;
@protocol IESGCPExplainCardProtocol;

@interface IESGCPExplainCardAnimator : NSObject {
    UIView<IESGCPExplainCardProtocol> *_animationView;
}

@property (retain, nonatomic) UIView<IESGCPExplainCardProtocol> *animationView;

- (id)initWithAnimationView:(id)arg0;
- (void)animateZoomInWithCompletion:(id /* block */)arg0;
- (void)animateSmallZoomInWithCompletion:(id /* block */)arg0;
- (void)animateZoomOutWithCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)animationView;
- (void)setAnimationView:(id)arg0;
- (void)animateFadeOutWithCompletion:(id /* block */)arg0;

@end
