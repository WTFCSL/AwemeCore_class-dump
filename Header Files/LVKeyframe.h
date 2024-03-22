//
//     Generated by private class-dump
//

@class NSString;

@interface LVKeyframe : NSObject <LVCopying, LVKeyframeProtocol> {
    struct shared_ptr<CutSame::Keyframe> { struct Keyframe *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long timeOffset;
@property (copy, nonatomic) NSString *typeString;

+ (id)instanceWithCPPModel:(struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })arg0;
+ (unsigned long long)KeyframeTypeFromString:(id)arg0;
+ (id)stringFromKeyframeType:(unsigned long long)arg0;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })arg0;
- (id)initWithType:(unsigned long long)arg0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (id)copyToAnother;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })arg0;
- (void)setTimeOffset:(long long)arg0;
- (long long)timeOffset;
- (void).cxx_destruct;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (id)typeString;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (unsigned long long)type;
- (id)identifier;
- (void)setTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setType:(unsigned long long)arg0;
- (void)setTypeString:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (id).cxx_construct;
- (void)setIdentifier:(id)arg0;

@end
