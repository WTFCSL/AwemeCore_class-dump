//
//     Generated by private class-dump
//

@interface AWESegmentList : NSObject {
    long long _totalCount;
    long long _segmentLimit;
    struct shared_ptr<std::list<AWESegmentListSubSegmentWrapper *>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _segments;
}

@property (nonatomic) struct shared_ptr<std::list<AWESegmentListSubSegmentWrapper *>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } segments;
@property (nonatomic) long long segmentLimit;
@property (nonatomic) long long totalCount;

- (void)updateAllSegmentPos;
- (void)removeElementIfNeed:(id /* block */)arg0;
- (void)insertElement:(id)arg0 AtIndex:(long long)arg1 preferredInsertFrontSegment:(BOOL)arg2;
- (id)addArrayAsSegment:(id)arg0 extraInfo:(id)arg1 atFront:(BOOL)arg2;
- (void)updateSegmentDetailData:(id)arg0 extraInfo:(id)arg1 withSubSegment:(id)arg2;
- (id)findThePreSegmentWithSegment:(id)arg0;
- (id)findTheNextSegmentWithSegment:(id)arg0;
- (long long)indexForElement:(id /* block */)arg0;
- (long long)segmentLimit;
- (void)setSegmentLimit:(long long)arg0;
- (id)init;
- (struct shared_ptr<std::list<AWESegmentListSubSegmentWrapper *>> { void *x0; struct __shared_weak_count *x1; })segments;
- (void)clearAllData;
- (void).cxx_destruct;
- (id)elementAtIndex:(long long)arg0;
- (id)allData;
- (void)setSegments:(struct shared_ptr<std::list<AWESegmentListSubSegmentWrapper *>> { void *x0; struct __shared_weak_count *x1; })arg0;
- (void)removeElementAtIndex:(long long)arg0;
- (long long)totalCount;
- (id).cxx_construct;
- (void)removeSegment:(id)arg0;
- (void)setTotalCount:(long long)arg0;
- (id)segmentAtIndex:(long long)arg0;

@end
