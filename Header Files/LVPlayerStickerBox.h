//
//     Generated by private class-dump
//

@interface LVPlayerStickerBox : NSObject {
    double _rotatePI;
    struct CGSize { double width; double height; } _size;
    struct CGPoint { double x; double y; } _centerPoint;
}

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGPoint { double x; double y; } centerPoint;
@property (nonatomic) double rotatePI;

- (void)setRotatePI:(double)arg0;
- (double)rotatePI;
- (void)setCenterPoint:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })size;
- (void)setSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })centerPoint;

@end
