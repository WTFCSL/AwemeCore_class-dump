//
//     Generated by private class-dump
//

@class NLEResourceNode_OC;

@interface NLEStyCanvas_OC : NLENode_OC {
    NLEResourceNode_OC *_imageSource;
}

@property (nonatomic) BOOL isSceneCanvasDMT;
@property (nonatomic) struct shared_ptr<cut::model::NLEStyCanvas> { struct NLEStyCanvas *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) unsigned int borderColor;
@property (nonatomic) unsigned int borderWidth;
@property (nonatomic) unsigned long long canvasType;
@property (nonatomic) unsigned int color;
@property (nonatomic) float blurRadius;
@property (nonatomic) unsigned int startColor;
@property (nonatomic) unsigned int endColor;
@property (nonatomic) BOOL antialiasing;
@property (retain, nonatomic) NLEResourceNode_OC *imageSource;

- (void)setCanvasType:(unsigned long long)arg0;
- (unsigned long long)canvasType;
- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEStyCanvas> { struct NLEStyCanvas *x0; struct __shared_weak_count *x1; })arg0;
- (BOOL)antialiasing;
- (void)setIsSceneCanvasDMT:(BOOL)arg0;
- (BOOL)isSceneCanvasDMT;
- (unsigned int)color;
- (unsigned int)borderWidth;
- (id)init;
- (id)imageSource;
- (void).cxx_destruct;
- (unsigned int)borderColor;
- (void)setBorderColor:(unsigned int)arg0;
- (float)blurRadius;
- (void)setBlurRadius:(float)arg0;
- (void)setBorderWidth:(unsigned int)arg0;
- (void)setImageSource:(id)arg0;
- (void)setColor:(unsigned int)arg0;
- (void)setStartColor:(unsigned int)arg0;
- (void)setEndColor:(unsigned int)arg0;
- (unsigned int)startColor;
- (unsigned int)endColor;
- (void)setAntialiasing:(BOOL)arg0;

@end
