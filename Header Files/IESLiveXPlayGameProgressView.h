//
//     Generated by private class-dump
//

@class CALayer, UIColor;

@interface IESLiveXPlayGameProgressView : UIView {
    UIColor *_backgroundColor;
    UIColor *_progressColor;
    double _progress;
    CALayer *_frontLayer;
    CALayer *_backgroundLayer;
}

@property (retain, nonatomic) CALayer *frontLayer;
@property (retain, nonatomic) CALayer *backgroundLayer;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *progressColor;

- (id)frontLayer;
- (void)setFrontLayer:(id)arg0;
- (void)_configSublayers;
- (void)_updateProgressLayerBounds;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSublayersOfLayer:(id)arg0;
- (double)progress;
- (id)backgroundColor;
- (void)setProgress:(double)arg0;
- (void)setBackgroundColor:(id)arg0;
- (id)progressColor;
- (void)setProgressColor:(id)arg0;
- (id)backgroundLayer;
- (void)setBackgroundLayer:(id)arg0;
- (void)updateProgress:(double)arg0;

@end
