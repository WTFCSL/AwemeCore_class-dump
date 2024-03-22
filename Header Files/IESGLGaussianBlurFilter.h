//
//     Generated by private class-dump
//

@interface IESGLGaussianBlurFilter : HTSGLFilter {
    double _radius;
    double _width;
    double _height;
}

@property (nonatomic) double radius;
@property (nonatomic) double width;
@property (nonatomic) double height;

- (void)initializeRenderer:(id)arg0;
- (id)initWithContext:(id)arg0;
- (double)height;
- (double)radius;
- (void)setWidth:(double)arg0;
- (void)setRadius:(double)arg0;
- (void)setHeight:(double)arg0;
- (double)width;

@end
