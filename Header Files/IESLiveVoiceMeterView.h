//
//     Generated by private class-dump
//

@class CAGradientLayer, UIColor, CAShapeLayer, UIBezierPath, NSMutableArray;

@interface IESLiveVoiceMeterView : UIView {
    BOOL _useSingleColor;
    unsigned long long _numOfLevels;
    double _levelWidth;
    double _levelMargin;
    double _minLength;
    UIColor *_levelColor;
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_shapeLayer;
    CAShapeLayer *_levelLayer;
    NSMutableArray *_currentLevels;
    UIBezierPath *_levelPath;
}

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) CAShapeLayer *levelLayer;
@property (retain, nonatomic) NSMutableArray *currentLevels;
@property (retain, nonatomic) UIBezierPath *levelPath;
@property (nonatomic) unsigned long long numOfLevels;
@property (nonatomic) double levelWidth;
@property (nonatomic) double levelMargin;
@property (nonatomic) double minLength;
@property (nonatomic) BOOL useSingleColor;
@property (retain, nonatomic) UIColor *levelColor;

- (void)resetLevelMeter;
- (void)updateWithVolumePower:(float)arg0;
- (id)levelLayer;
- (BOOL)useSingleColor;
- (id)currentLevels;
- (void)updateLevelLayer;
- (unsigned long long)numOfLevels;
- (void)updateLevelMeter:(float)arg0;
- (double)levelMargin;
- (void)setLevelColor:(id)arg0;
- (void)setNumOfLevels:(unsigned long long)arg0;
- (void)setLevelMargin:(double)arg0;
- (void)setUseSingleColor:(BOOL)arg0;
- (id)levelColor;
- (void)setLevelLayer:(id)arg0;
- (void)setCurrentLevels:(id)arg0;
- (id)levelPath;
- (void)setLevelPath:(id)arg0;
- (void)setLevelWidth:(double)arg0;
- (id)gradientLayer;
- (void).cxx_destruct;
- (void)setMinLength:(double)arg0;
- (id)shapeLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)levelWidth;
- (double)minLength;
- (void)setShapeLayer:(id)arg0;
- (void)layoutSubviews;
- (void)setGradientLayer:(id)arg0;
- (id)colorLayer;

@end
