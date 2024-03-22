//
//     Generated by private class-dump
//

@class UIView;

@interface IESLiveRotatingView : UIView {
    BOOL _waitingForAnimate;
    double _transalateDistance;
    double _translateAnimationTime;
    double _alphaAnimationTime;
    UIView *_firstView;
    long long _animationDirection;
    id /* block */ _viewCreateBlock;
}

@property (nonatomic) BOOL waitingForAnimate;
@property (copy, nonatomic) id /* block */ viewCreateBlock;
@property (nonatomic) double transalateDistance;
@property (nonatomic) double translateAnimationTime;
@property (nonatomic) double alphaAnimationTime;
@property (retain, nonatomic) UIView *firstView;
@property (nonatomic) long long animationDirection;

- (void)setTransalateDistance:(double)arg0;
- (void)setTranslateAnimationTime:(double)arg0;
- (double)alphaAnimationTime;
- (void)setAlphaAnimationTime:(double)arg0;
- (id /* block */)viewCreateBlock;
- (void)setViewCreateBlock:(id /* block */)arg0;
- (BOOL)waitingForAnimate;
- (void)setWaitingForAnimate:(BOOL)arg0;
- (double)transalateDistance;
- (double)translateAnimationTime;
- (void).cxx_destruct;
- (long long)animationDirection;
- (void)setAnimationDirection:(long long)arg0;
- (void)layoutSubviews;
- (void)startAnimation;
- (id)initWithCreateViewBlock:(id /* block */)arg0;
- (void)setFirstView:(id)arg0;
- (id)firstView;

@end
