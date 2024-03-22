//
//     Generated by private class-dump
//

@interface AWECommentForwardShareContentFrameModel : NSObject {
    double _x;
    double _y;
    double _width;
    double _height;
    double _originalWidth;
    double _originalHeight;
}

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double originalWidth;
@property (nonatomic) double originalHeight;

+ (id)modelWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 originalSize:(struct CGSize { double x0; double x1; })arg1;

- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 originalSize:(struct CGSize { double x0; double x1; })arg1;
- (double)originalHeight;
- (double)height;
- (void)setY:(double)arg0;
- (double)y;
- (double)x;
- (double)originalWidth;
- (void)setX:(double)arg0;
- (void)setWidth:(double)arg0;
- (void)setHeight:(double)arg0;
- (double)width;
- (void)setOriginalHeight:(double)arg0;
- (void)setOriginalWidth:(double)arg0;

@end
