//
//     Generated by private class-dump
//

@class CAShapeLayer;

@interface IESLiveRoundProgressView : UIView {
    double _progress;
    CAShapeLayer *_backgroundLayer;
    CAShapeLayer *_progressLayer;
}

@property (retain, nonatomic) CAShapeLayer *backgroundLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (nonatomic) double progress;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)progress;
- (void)layoutSubviews;
- (void)setProgress:(double)arg0;
- (id)backgroundLayer;
- (void)setBackgroundLayer:(id)arg0;
- (id)progressLayer;
- (void)setProgressLayer:(id)arg0;

@end
