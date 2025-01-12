//
//     Generated by private class-dump
//

@interface AWENewVideoCoverImageLayerInfo : NSObject {
    BOOL _intelligentCutout;
    BOOL _transformLayerContent;
    double _alpha;
    double _rotate;
    struct CGPoint { double x; double y; } _translate;
    struct CGPoint { double x; double y; } _scale;
}

@property (nonatomic) BOOL intelligentCutout;
@property (nonatomic) double alpha;
@property (nonatomic) BOOL transformLayerContent;
@property (nonatomic) struct CGPoint { double x; double y; } translate;
@property (nonatomic) struct CGPoint { double x; double y; } scale;
@property (nonatomic) double rotate;

- (BOOL)intelligentCutout;
- (void)setIntelligentCutout:(BOOL)arg0;
- (BOOL)transformLayerContent;
- (void)setTransformLayerContent:(BOOL)arg0;
- (void)syncStateToLayer:(id)arg0;
- (void)setAlpha:(double)arg0;
- (struct CGPoint { double x0; double x1; })scale;
- (id)initWithLayer:(id)arg0;
- (double)alpha;
- (void)setScale:(struct CGPoint { double x0; double x1; })arg0;
- (double)rotate;
- (void)setRotate:(double)arg0;
- (struct CGPoint { double x0; double x1; })translate;
- (void)setTranslate:(struct CGPoint { double x0; double x1; })arg0;

@end
