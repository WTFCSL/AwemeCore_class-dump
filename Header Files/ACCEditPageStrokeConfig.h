//
//     Generated by private class-dump
//

@class UIColor;

@interface ACCEditPageStrokeConfig : NSObject {
    int _lineJoin;
    double _width;
    UIColor *_color;
}

@property (nonatomic) double width;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) int lineJoin;

+ (id)strokeWithWidth:(double)arg0 color:(id)arg1 lineJoin:(int)arg2;

- (id)color;
- (void).cxx_destruct;
- (void)setWidth:(double)arg0;
- (double)width;
- (void)setColor:(id)arg0;
- (int)lineJoin;
- (void)setLineJoin:(int)arg0;

@end
