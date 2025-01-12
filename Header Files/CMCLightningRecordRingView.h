//
//     Generated by private class-dump
//

@class UIColor, NSArray, CAShapeLayer, CMCRecordMode, NSString, NSNumber;

@interface CMCLightningRecordRingView : UIView <CMCLightningRecordAnimatable> {
    BOOL _hiddenWhenNotNormalState;
    long long _state;
    CMCRecordMode *_recordMode;
    double _progress;
    UIColor *_progressColor;
    NSArray *_marks;
    double _startLimit;
    double _endLimit;
    NSNumber *_longtailShootAnimationEnabled;
    CAShapeLayer *_whiteLayer;
    CAShapeLayer *_rangeLayer;
}

@property (retain, nonatomic) CAShapeLayer *whiteLayer;
@property (retain, nonatomic) CAShapeLayer *rangeLayer;
@property (nonatomic) double startLimit;
@property (nonatomic) double endLimit;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) NSArray *marks;
@property (nonatomic) BOOL hiddenWhenNotNormalState;
@property (retain, nonatomic) NSNumber *longtailShootAnimationEnabled;
@property (nonatomic) long long state;
@property (retain, nonatomic) CMCRecordMode *recordMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (id)recordMode;
- (void)setRecordMode:(id)arg0;
- (void)setLongtailShootAnimationEnabled:(id)arg0;
- (void)addRangeIndicatorWithStart:(float)arg0 end:(float)arg1;
- (id)longtailShootAnimationEnabled;
- (double)startLimit;
- (double)endLimit;
- (BOOL)p_longtailShootAnimationEnabled;
- (id)normalPath;
- (void)resetNormalState;
- (void)resetWhitePath;
- (id)whiteLayer;
- (double)convertProgress:(double)arg0;
- (void)setStartLimit:(double)arg0;
- (void)setEndLimit:(double)arg0;
- (id)rangeLayer;
- (void)setWhiteLayer:(id)arg0;
- (void)setRangeLayer:(id)arg0;
- (id)p_redColor;
- (void)setHiddenWhenNotNormalState:(BOOL)arg0;
- (BOOL)hiddenWhenNotNormalState;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (id)shapeLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)progress;
- (void)setProgress:(double)arg0;
- (id)progressColor;
- (void)setProgressColor:(id)arg0;
- (void)setProgress:(float)arg0 animated:(BOOL)arg1;
- (void)addSeparator:(double)arg0;
- (id)recordingPath;
- (id)marks;
- (void)setMarks:(id)arg0;

@end
