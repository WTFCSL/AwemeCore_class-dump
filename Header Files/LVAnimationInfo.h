//
//     Generated by private class-dump
//

@class _LVAnimationPackage, NSString;

@interface LVAnimationInfo : LVDraftPayload <LVCopying> {
    struct shared_ptr<CutSame::MaterialAnimation> { struct MaterialAnimation *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (retain, nonatomic) _LVAnimationPackage *package;
@property (copy, nonatomic) NSString *animationID;
@property (copy, nonatomic) NSString *animationType;
@property (nonatomic) unsigned long long platformSupport;
@property (copy, nonatomic) NSString *resourceMD5;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *animationName;
@property (copy, nonatomic) NSString *relativePath;
@property (copy, nonatomic) NSString *resourceID;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialAnimation> { struct MaterialAnimation *x0; struct __shared_weak_count *x1; })arg0;
- (id)copyToAnother;
- (id)resourceMD5;
- (void)setResourceMD5:(id)arg0;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::MaterialAnimation> { struct MaterialAnimation *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialAnimation> { struct MaterialAnimation *x0; struct __shared_weak_count *x1; })arg0;
- (void)setAnimationName:(id)arg0;
- (void)setResourceID:(id)arg0;
- (id)relativePath;
- (void)setRelativePath:(id)arg0;
- (void).cxx_destruct;
- (id)resourceID;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setAnimationType:(id)arg0;
- (long long)duration;
- (id)package;
- (id)animationID;
- (id)animationType;
- (id).cxx_construct;
- (void)setAnimationID:(id)arg0;
- (void)setPackage:(id)arg0;
- (void)setDuration:(long long)arg0;
- (id)animationName;

@end
