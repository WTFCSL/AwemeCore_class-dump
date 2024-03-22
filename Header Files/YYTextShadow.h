//
//     Generated by private class-dump
//

@class UIColor;

@interface YYTextShadow : NSObject <NSCoding, NSCopying> {
    int _blendMode;
    UIColor *_color;
    double _radius;
    YYTextShadow *_subShadow;
    struct CGSize { double width; double height; } _offset;
}

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) struct CGSize { double width; double height; } offset;
@property (nonatomic) double radius;
@property (nonatomic) int blendMode;
@property (retain, nonatomic) YYTextShadow *subShadow;

+ (id)shadowWithColor:(id)arg0 offset:(struct CGSize { double x0; double x1; })arg1 radius:(double)arg2;
+ (id)shadowWithNSShadow:(id)arg0;

- (id)subShadow;
- (void)setSubShadow:(id)arg0;
- (id)nsShadow;
- (id)color;
- (void).cxx_destruct;
- (void)setOffset:(struct CGSize { double x0; double x1; })arg0;
- (int)blendMode;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (double)radius;
- (void)setBlendMode:(int)arg0;
- (struct CGSize { double x0; double x1; })offset;
- (id)initWithCoder:(id)arg0;
- (void)setRadius:(double)arg0;
- (void)encodeWithCoder:(id)arg0;
- (void)setColor:(id)arg0;

@end