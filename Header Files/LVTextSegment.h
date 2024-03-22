//
//     Generated by private class-dump
//

@class NSString;

@interface LVTextSegment : NSObject {
    struct shared_ptr<CutSame::TextSegment> { struct TextSegment *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) long long duration;
@property (nonatomic) BOOL isMutable;
@property (copy, nonatomic) NSString *materialID;
@property (nonatomic) double rotation;
@property (nonatomic) long long targetStartTime;
@property (copy, nonatomic) NSString *text;

- (void)setIsMutable:(BOOL)arg0;
- (id)initWithCPPModel:(struct shared_ptr<CutSame::TextSegment> { struct TextSegment *x0; struct __shared_weak_count *x1; })arg0;
- (id)materialID;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::TextSegment> { struct TextSegment *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::TextSegment> { struct TextSegment *x0; struct __shared_weak_count *x1; })arg0;
- (void)setMaterialID:(id)arg0;
- (long long)targetStartTime;
- (void)setTargetStartTime:(long long)arg0;
- (BOOL)isMutable;
- (void)setRotation:(double)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (long long)duration;
- (double)rotation;
- (id)text;
- (id).cxx_construct;
- (void)setDuration:(long long)arg0;

@end