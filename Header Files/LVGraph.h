//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface LVGraph : NSObject {
    struct shared_ptr<CutSame::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
    NSArray *_graphPoints;
}

@property (copy, nonatomic) NSArray *graphPoints;
@property (copy, nonatomic) NSString *resourceID;
@property (copy, nonatomic) NSString *resourceName;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::Graph> { struct Graph *x0; struct __shared_weak_count *x1; })arg0;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::Graph> { struct Graph *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::Graph> { struct Graph *x0; struct __shared_weak_count *x1; })arg0;
- (id)graphPoints;
- (void)setGraphPoints:(id)arg0;
- (void)setResourceID:(id)arg0;
- (void).cxx_destruct;
- (id)resourceID;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setResourceName:(id)arg0;
- (id).cxx_construct;
- (id)resourceName;

@end
