//
//     Generated by private class-dump
//

@class UIView;

@interface AWENearbylHafScreenContentAlertAnimator : AWENearbylHafScreenContentAnimator {
    UIView *_animationView;
    double _animationDuration;
    struct CGPoint { double x; double y; } _trianglePoint;
}

@property (retain, nonatomic) UIView *animationView;
@property (nonatomic) struct CGPoint { double x; double y; } trianglePoint;
@property (nonatomic) double animationDuration;

+ (id)createAnimator:(id)arg0 trianglePoint:(struct CGPoint { double x0; double x1; })arg1 animationDuration:(double)arg2;

- (void)showWithAttachAnimation:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)dismissWithAttachAnimation:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)animationHalfScreenWithAnimation:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)animationFullScreenWithAnimation:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)setTrianglePoint:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })trianglePoint;
- (void)dismiss;
- (void).cxx_destruct;
- (double)animationDuration;
- (void)show;
- (void)setAnimationDuration:(double)arg0;
- (id)animationView;
- (void)setAnimationView:(id)arg0;

@end
