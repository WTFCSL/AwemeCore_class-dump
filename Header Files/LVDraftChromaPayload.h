//
//     Generated by private class-dump
//

@class NSString;

@interface LVDraftChromaPayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialChroma> { struct MaterialChroma *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSString *color;
@property (nonatomic) double intensityValue;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) double shadowValue;

+ (id)defaultPayload;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialChroma> { struct MaterialChroma *x0; struct __shared_weak_count *x1; })arg0;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::MaterialChroma> { struct MaterialChroma *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialChroma> { struct MaterialChroma *x0; struct __shared_weak_count *x1; })arg0;
- (double)shadowValue;
- (void)setShadowValue:(double)arg0;
- (void)setPath:(id)arg0;
- (id)color;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)path;
- (id).cxx_construct;
- (void)setColor:(id)arg0;
- (void)setIntensityValue:(double)arg0;
- (double)intensityValue;

@end
