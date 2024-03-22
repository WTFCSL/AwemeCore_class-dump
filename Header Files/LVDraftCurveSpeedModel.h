//
//     Generated by private class-dump
//

@class NSString, NSArray, _LVDraftCurveSpeedModelPackage;

@interface LVDraftCurveSpeedModel : NSObject {
    struct shared_ptr<CutSame::CurveSpeed> { struct CurveSpeed *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
    NSArray *_speedPoints;
}

@property (retain, nonatomic) _LVDraftCurveSpeedModelPackage *package;
@property (nonatomic) double avgRatioSpeed;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *speedPoints;

- (id)resourceId;
- (void)setResourceId:(id)arg0;
- (id)initWithCPPModel:(struct shared_ptr<CutSame::CurveSpeed> { struct CurveSpeed *x0; struct __shared_weak_count *x1; })arg0;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::CurveSpeed> { struct CurveSpeed *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::CurveSpeed> { struct CurveSpeed *x0; struct __shared_weak_count *x1; })arg0;
- (id)speedPoints;
- (void)setSpeedPoints:(id)arg0;
- (double)avgRatioSpeed;
- (void)setAvgRatioSpeed:(double)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)package;
- (void)setName:(id)arg0;
- (id).cxx_construct;
- (id)name;
- (void)setPackage:(id)arg0;

@end
