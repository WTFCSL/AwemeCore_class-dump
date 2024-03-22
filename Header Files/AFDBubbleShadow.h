//
//     Generated by private class-dump
//

@class UIColor;

@interface AFDBubbleShadow : NSObject {
    UIColor *_color;
    double _radius;
    double _opacity;
    struct CGSize { double width; double height; } _offset;
}

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double radius;
@property (nonatomic) double opacity;
@property (nonatomic) struct CGSize { double width; double height; } offset;

- (double)opacity;
- (id)color;
- (id)init;
- (void)setOpacity:(double)arg0;
- (void).cxx_destruct;
- (void)setOffset:(struct CGSize { double x0; double x1; })arg0;
- (double)radius;
- (struct CGSize { double x0; double x1; })offset;
- (void)setRadius:(double)arg0;
- (void)setColor:(id)arg0;

@end
