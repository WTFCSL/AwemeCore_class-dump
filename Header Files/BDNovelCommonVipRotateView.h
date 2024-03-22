//
//     Generated by private class-dump
//

@class UIView, NSString, CADisplayLink;

@interface BDNovelCommonVipRotateView : UIView <CAAnimationDelegate> {
    BOOL _beginRotate;
    CADisplayLink *_displayLink;
    UIView *_fromView;
    UIView *_toView;
    UIView *_inView;
    id /* block */ _completion;
}

@property (nonatomic) BOOL beginRotate;
@property (weak, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) UIView *fromView;
@property (retain, nonatomic) UIView *toView;
@property (weak, nonatomic) UIView *inView;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBeginRotate:(BOOL)arg0;
- (void)transitionFromView:(id)arg0 toView:(id)arg1 inView:(id)arg2 completion:(id /* block */)arg3;
- (id)fromView;
- (void)setDisplayLink:(id)arg0;
- (id)toView;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)setToView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)displayLink;
- (void)update;
- (void)setFromView:(id)arg0;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)layoutSubviews;
- (void)stopAnimation;
- (id)inView;
- (void)setInView:(id)arg0;
- (BOOL)beginRotate;

@end