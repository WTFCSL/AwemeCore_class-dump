//
//     Generated by private class-dump
//

@interface LVPoint : NSObject {
    struct shared_ptr<CutSame::Point> { struct Point *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) double x;
@property (nonatomic) double y;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::Point> { struct Point *x0; struct __shared_weak_count *x1; })arg0;
- (id)initX:(double)arg0 WithY:(double)arg1;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::Point> { struct Point *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::Point> { struct Point *x0; struct __shared_weak_count *x1; })arg0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })point;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setY:(double)arg0;
- (double)y;
- (double)x;
- (void)setX:(double)arg0;
- (id).cxx_construct;

@end
