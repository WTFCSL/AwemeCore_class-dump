//
//     Generated by private class-dump
//

@interface LVVideoMaskConfig : NSObject <LVCopying> {
    struct shared_ptr<CutSame::MaskConfig> { struct MaskConfig *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } center;
@property (nonatomic) double eclosion;
@property (nonatomic) double aspectRatio;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double feather;
@property (nonatomic) double height;
@property (nonatomic) BOOL invert;
@property (nonatomic) double rotation;
@property (nonatomic) double roundCorner;
@property (nonatomic) double width;

+ (struct CGSize { double x0; double x1; })aspectSizeWith:(struct CGSize { double x0; double x1; })arg0 maskSize:(struct CGSize { double x0; double x1; })arg1 aspectRatio:(double)arg2;

- (void)setFeather:(double)arg0;
- (double)feather;
- (void)setRoundCorner:(double)arg0;
- (double)roundCorner;
- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaskConfig> { struct MaskConfig *x0; struct __shared_weak_count *x1; })arg0;
- (id)copyToAnother;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::MaskConfig> { struct MaskConfig *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaskConfig> { struct MaskConfig *x0; struct __shared_weak_count *x1; })arg0;
- (void)setEclosion:(double)arg0;
- (double)eclosion;
- (id)initWithBorderSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })aspectSizeWith:(struct CGSize { double x0; double x1; })arg0;
- (void)setAspectRatio:(double)arg0;
- (BOOL)invert;
- (void)setRotation:(double)arg0;
- (void).cxx_destruct;
- (double)height;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (double)aspectRatio;
- (void)setCenter:(struct CGPoint { double x0; double x1; })arg0;
- (double)rotation;
- (void)setWidth:(double)arg0;
- (void)setHeight:(double)arg0;
- (double)width;
- (id).cxx_construct;
- (struct CGPoint { double x0; double x1; })center;
- (double)centerX;
- (double)centerY;
- (void)setCenterX:(double)arg0;
- (void)setCenterY:(double)arg0;
- (void)setInvert:(BOOL)arg0;

@end
