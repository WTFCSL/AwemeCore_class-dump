//
//     Generated by private class-dump
//

@class UIColor, CAShapeLayer;

@interface AWEMusicCircleProgressView : UIView {
    double _lineWidth;
    UIColor *_lineColor;
    UIColor *_bgLineColor;
    CAShapeLayer *_curShapreLayer;
    CAShapeLayer *_bgShapeLayer;
    CAShapeLayer *_auxiliaryLayer;
    double _progress;
}

@property (retain, nonatomic) CAShapeLayer *curShapreLayer;
@property (retain, nonatomic) CAShapeLayer *bgShapeLayer;
@property (retain, nonatomic) CAShapeLayer *auxiliaryLayer;
@property (nonatomic) double progress;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *lineColor;
@property (retain, nonatomic) UIColor *bgLineColor;

- (id)curShapreLayer;
- (id)auxiliaryLayer;
- (id)bgShapeLayer;
- (id)generatePath;
- (id)auxiliaryPath;
- (void)setBgLineColor:(id)arg0;
- (id)bgLineColor;
- (void)setCurShapreLayer:(id)arg0;
- (void)setBgShapeLayer:(id)arg0;
- (void)setAuxiliaryLayer:(id)arg0;
- (void)setLineColor:(id)arg0;
- (void).cxx_destruct;
- (id)lineColor;
- (double)lineWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setLineWidth:(double)arg0;
- (double)progress;
- (void)layoutSubviews;
- (void)setProgress:(double)arg0;
- (void)_setupSubviews;
- (void)updateProgress:(double)arg0;

@end
