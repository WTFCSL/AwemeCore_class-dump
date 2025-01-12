//
//     Generated by private class-dump
//

@class CALayer, UIColor, NSString;

@interface IESOuterTestWebProgressView : UIView <CAAnimationDelegate> {
    UIColor *_progressColor;
    double _progressHeight;
    double _progress;
    CALayer *_progressLayer;
    id /* block */ _completionBlock;
}

@property (nonatomic) double progress;
@property (retain, nonatomic) CALayer *progressLayer;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) double progressHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setProgressHeight:(double)arg0;
- (double)progressHeight;
- (void)startProgressAnimatingWithDuration:(double)arg0;
- (void)startProgressingWithEstimatedProgress:(double)arg0;
- (void)finishProgressing;
- (void)didUpdateLoadingWithProgress:(double)arg0;
- (void)didAddToOuterTestViewWithLayoutTop:(id)arg0 bottom:(id)arg1 leading:(id)arg2 trailing:(id)arg3;
- (void)didFinishLoadingOuterTestWithCompletion:(id /* block */)arg0;
- (void)didStartLoadingOuterTestWithEstimatedProgress:(double)arg0;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)commonInit;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;
- (double)progress;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setProgress:(double)arg0;
- (id)progressColor;
- (void)setProgressColor:(id)arg0;
- (id)progressLayer;
- (void)setProgressLayer:(id)arg0;

@end
