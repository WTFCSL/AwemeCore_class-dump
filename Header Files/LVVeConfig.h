//
//     Generated by private class-dump
//

@interface LVVeConfig : NSObject {
    struct shared_ptr<CutSame::VeConfig> { struct VeConfig *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) BOOL autoPrepare;
@property (nonatomic) BOOL veCtrlSurface;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::VeConfig> { struct VeConfig *x0; struct __shared_weak_count *x1; })arg0;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::VeConfig> { struct VeConfig *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::VeConfig> { struct VeConfig *x0; struct __shared_weak_count *x1; })arg0;
- (BOOL)autoPrepare;
- (void)setAutoPrepare:(BOOL)arg0;
- (BOOL)veCtrlSurface;
- (void)setVeCtrlSurface:(BOOL)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id).cxx_construct;

@end
