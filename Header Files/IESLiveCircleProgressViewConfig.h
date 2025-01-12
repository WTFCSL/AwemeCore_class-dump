//
//     Generated by private class-dump
//

@class UIColor;

@interface IESLiveCircleProgressViewConfig : NSObject {
    BOOL _clockwise;
    double _lineWidth;
    UIColor *_startColor;
    UIColor *_endColor;
    UIColor *_backgroundColor;
    double _backgroundLineWidth;
}

@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *startColor;
@property (retain, nonatomic) UIColor *endColor;
@property (nonatomic) BOOL clockwise;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double backgroundLineWidth;

- (double)backgroundLineWidth;
- (void)setBackgroundLineWidth:(double)arg0;
- (void).cxx_destruct;
- (double)lineWidth;
- (void)setLineWidth:(double)arg0;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg0;
- (void)setStartColor:(id)arg0;
- (void)setEndColor:(id)arg0;
- (id)startColor;
- (id)endColor;
- (void)setClockwise:(BOOL)arg0;
- (BOOL)clockwise;

@end
