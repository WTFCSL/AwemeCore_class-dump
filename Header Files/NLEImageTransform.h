//
//     Generated by private class-dump
//

@interface NLEImageTransform : NSObject {
    double _rotate;
    struct CGPoint { double x; double y; } _translate;
    struct CGPoint { double x; double y; } _scale;
}

@property (nonatomic) struct CGPoint { double x; double y; } translate;
@property (nonatomic) struct CGPoint { double x; double y; } scale;
@property (nonatomic) double rotate;

- (struct CGPoint { double x0; double x1; })scale;
- (void)setScale:(struct CGPoint { double x0; double x1; })arg0;
- (double)rotate;
- (void)setRotate:(double)arg0;
- (struct CGPoint { double x0; double x1; })translate;
- (void)setTranslate:(struct CGPoint { double x0; double x1; })arg0;

@end