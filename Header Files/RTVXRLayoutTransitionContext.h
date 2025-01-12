//
//     Generated by private class-dump
//

@class NSString, UIViewController, UIView;
@protocol RTVXRContainer, RTVViewAnimator;

@interface RTVXRLayoutTransitionContext : NSObject <RTVXRLayoutTransitionContext> {
    id<RTVViewAnimator> _animtor;
    id<RTVViewAnimator> _contentViewAlphaAnimator;
    UIViewController<RTVXRContainer> *_fromContainer;
    UIViewController<RTVXRContainer> *_toContainer;
    UIViewController *_engine;
    UIView *_transitionContainerView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetFrame;
}

@property (retain, nonatomic) id<RTVViewAnimator> animtor;
@property (retain, nonatomic) id<RTVViewAnimator> contentViewAlphaAnimator;
@property (retain, nonatomic) UIViewController<RTVXRContainer> *fromContainer;
@property (retain, nonatomic) UIViewController<RTVXRContainer> *toContainer;
@property (retain, nonatomic) UIViewController *engine;
@property (retain, nonatomic) UIView *transitionContainerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setToContainer:(id)arg0;
- (void)setFromContainer:(id)arg0;
- (id)toContainer;
- (id)fromContainer;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rectTransformFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (id)contentViewAlphaAnimator;
- (id)animtor;
- (void)setAnimtor:(id)arg0;
- (void)setContentViewAlphaAnimator:(id)arg0;
- (void).cxx_destruct;
- (id)engine;
- (void)setTransitionContainerView:(id)arg0;
- (void)setEngine:(id)arg0;
- (id)transitionContainerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetFrame;
- (void)setTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
