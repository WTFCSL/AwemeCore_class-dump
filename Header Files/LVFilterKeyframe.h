//
//     Generated by private class-dump
//

@interface LVFilterKeyframe : LVKeyframe {
    struct shared_ptr<CutSame::FilterKeyframe> { struct FilterKeyframe *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) float value;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::FilterKeyframe> { struct FilterKeyframe *x0; struct __shared_weak_count *x1; })arg0;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::FilterKeyframe> { struct FilterKeyframe *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::FilterKeyframe> { struct FilterKeyframe *x0; struct __shared_weak_count *x1; })arg0;
- (void)applyPropertiesToSegment:(id)arg0;
- (void).cxx_destruct;
- (float)value;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setValue:(float)arg0;
- (id).cxx_construct;

@end
