//
//     Generated by private class-dump
//

@class NSString;

@interface LVTailSegment : NSObject {
    struct shared_ptr<CutSame::TailSegment> { struct TailSegment *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSString *materialID;
@property (nonatomic) long long targetStartTime;
@property (copy, nonatomic) NSString *text;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::TailSegment> { struct TailSegment *x0; struct __shared_weak_count *x1; })arg0;
- (id)materialID;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::TailSegment> { struct TailSegment *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::TailSegment> { struct TailSegment *x0; struct __shared_weak_count *x1; })arg0;
- (void)setMaterialID:(id)arg0;
- (long long)targetStartTime;
- (void)setTargetStartTime:(long long)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)text;
- (id).cxx_construct;

@end
