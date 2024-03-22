//
//     Generated by private class-dump
//

@class UIColor, YYTextShadow;

@interface YYTextBorder : NSObject <NSCoding, NSCopying> {
    int _lineJoin;
    long long _lineStyle;
    double _strokeWidth;
    UIColor *_strokeColor;
    double _cornerRadius;
    YYTextShadow *_shadow;
    UIColor *_fillColor;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
}

@property (nonatomic) long long lineStyle;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) int lineJoin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) YYTextShadow *shadow;
@property (retain, nonatomic) UIColor *fillColor;

+ (id)borderWithLineStyle:(long long)arg0 lineWidth:(double)arg1 strokeColor:(id)arg2;
+ (id)borderWithFillColor:(id)arg0 cornerRadius:(double)arg1;

- (void)setLineStyle:(long long)arg0;
- (double)strokeWidth;
- (void)setInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)init;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)setFillColor:(id)arg0;
- (void).cxx_destruct;
- (id)strokeColor;
- (void)setStrokeWidth:(double)arg0;
- (double)cornerRadius;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)shadow;
- (void)setStrokeColor:(id)arg0;
- (id)fillColor;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (void)setCornerRadius:(double)arg0;
- (int)lineJoin;
- (void)setLineJoin:(int)arg0;
- (void)setShadow:(id)arg0;
- (long long)lineStyle;

@end