//
//     Generated by private class-dump
//

@class NSArray;

@interface LVCoverMaterials : NSObject {
    struct shared_ptr<CutSame::CoverMaterials> { struct CoverMaterials *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
    NSArray *_coverTexts;
}

@property (copy, nonatomic) NSArray *coverTexts;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::CoverMaterials> { struct CoverMaterials *x0; struct __shared_weak_count *x1; })arg0;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::CoverMaterials> { struct CoverMaterials *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::CoverMaterials> { struct CoverMaterials *x0; struct __shared_weak_count *x1; })arg0;
- (id)coverTexts;
- (void)setCoverTexts:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id).cxx_construct;

@end