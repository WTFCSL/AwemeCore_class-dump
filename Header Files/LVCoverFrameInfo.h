//
//     Generated by private class-dump
//

@class NSString;

@interface LVCoverFrameInfo : NSObject {
    struct shared_ptr<CutSame::CoverFrameInfo> { struct CoverFrameInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) long long position;
@property (copy, nonatomic) NSString *segmentID;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::CoverFrameInfo> { struct CoverFrameInfo *x0; struct __shared_weak_count *x1; })arg0;
- (void)setSegmentID:(id)arg0;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::CoverFrameInfo> { struct CoverFrameInfo *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::CoverFrameInfo> { struct CoverFrameInfo *x0; struct __shared_weak_count *x1; })arg0;
- (void).cxx_destruct;
- (long long)position;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setPosition:(long long)arg0;
- (id).cxx_construct;
- (id)segmentID;

@end
