//
//     Generated by private class-dump
//

@class UIColor;

@interface CECSectorProgressView : UIView {
    double _progress;
    double _lineWidth;
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

@property (nonatomic) double progress;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *strokeColor;

- (void)setFillColor:(id)arg0;
- (void).cxx_destruct;
- (id)strokeColor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)lineWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setStrokeColor:(id)arg0;
- (void)setLineWidth:(double)arg0;
- (id)fillColor;
- (double)progress;
- (void)setProgress:(double)arg0;

@end