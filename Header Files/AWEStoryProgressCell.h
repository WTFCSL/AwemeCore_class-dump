//
//     Generated by private class-dump
//

@class UIColor, UIView;

@interface AWEStoryProgressCell : UICollectionViewCell {
    BOOL _needAnimation;
    BOOL _needMini;
    double _progressValue;
    double _totalValue;
    UIView *_progressView;
    UIColor *_progressColor;
    double _interval;
    double _lastValue;
}

@property (nonatomic) double lastValue;
@property (nonatomic) BOOL needMini;
@property (retain, nonatomic) UIView *progressView;
@property (nonatomic) double progressValue;
@property (nonatomic) double totalValue;
@property (nonatomic) BOOL needAnimation;
@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) double interval;

- (void)setNeedAnimation:(BOOL)arg0;
- (double)widthWithProgress:(double)arg0 totalValue:(double)arg1;
- (BOOL)needAnimation;
- (void)setNeedMini:(BOOL)arg0;
- (BOOL)needMini;
- (double)miniWidth;
- (void)updateProgressValue:(double)arg0 totalValue:(double)arg1 lastValue:(double)arg2 needMini:(BOOL)arg3 animated:(BOOL)arg4;
- (void).cxx_destruct;
- (double)interval;
- (void)setProgressValue:(double)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setInterval:(double)arg0;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (double)lastValue;
- (double)progressValue;
- (void)layoutSubviews;
- (id)progressColor;
- (void)setProgressColor:(id)arg0;
- (double)totalValue;
- (void)setLastValue:(double)arg0;
- (void)setTotalValue:(double)arg0;

@end
