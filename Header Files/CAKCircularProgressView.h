//
//     Generated by private class-dump
//

@class UIColor, CAKCircularProgressViewKVOObject;

@interface CAKCircularProgressView : UIView {
    double _progress;
    UIColor *_progressTintColor;
    UIColor *_progressBackgroundColor;
    double _lineWidth;
    double _backgroundWidth;
    double _progressRadius;
    double _backgroundRadius;
    long long _type;
    CAKCircularProgressViewKVOObject *_kvoObject;
}

@property (retain, nonatomic) CAKCircularProgressViewKVOObject *kvoObject;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) double backgroundWidth;
@property (nonatomic) double progressRadius;
@property (nonatomic) double backgroundRadius;
@property (nonatomic) long long type;

- (double)backgroundWidth;
- (double)progressRadius;
- (id)kvoObject;
- (id)observableKeypaths;
- (void)setProgressRadius:(double)arg0;
- (double)backgroundRadius;
- (void)setBackgroundRadius:(double)arg0;
- (void)setKvoObject:(id)arg0;
- (void)setBackgroundWidth:(double)arg0;
- (void)drawRectRound:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)drawRectSector:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupObservers;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)type;
- (double)lineWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setLineWidth:(double)arg0;
- (void)setType:(long long)arg0;
- (void)setProgressTintColor:(id)arg0;
- (double)progress;
- (void)setProgress:(double)arg0;
- (id)progressTintColor;
- (id)progressBackgroundColor;
- (void)setProgressBackgroundColor:(id)arg0;

@end
