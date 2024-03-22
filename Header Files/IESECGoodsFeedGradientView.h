//
//     Generated by private class-dump
//

@class UIColor, NSArray;

@interface IESECGoodsFeedGradientView : UIView {
    UIColor *_startColor;
    UIColor *_endColor;
    NSArray *_locations;
    NSArray *_colors;
    struct CGPoint { double x; double y; } _startPoint;
    struct CGPoint { double x; double y; } _endPoint;
}

@property (retain, nonatomic) UIColor *startColor;
@property (retain, nonatomic) UIColor *endColor;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (copy, nonatomic) NSArray *locations;
@property (copy, nonatomic) NSArray *colors;

+ (Class)layerClass;

- (id)init;
- (void)setStartPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setLocations:(id)arg0;
- (void)setColors:(id)arg0;
- (void).cxx_destruct;
- (void)setEndPoint:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })endPoint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)colors;
- (id)locations;
- (struct CGPoint { double x0; double x1; })startPoint;
- (void)layoutSubviews;
- (void)setStartColor:(id)arg0;
- (void)setEndColor:(id)arg0;
- (id)startColor;
- (id)endColor;

@end
