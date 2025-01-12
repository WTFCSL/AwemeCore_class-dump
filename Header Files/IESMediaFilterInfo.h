//
//     Generated by private class-dump
//

@class NSString, IESMMVideoTransformInfo;

@interface IESMediaFilterInfo : NSObject {
    NSString *resourcePath;
    long long filterType;
    BOOL _isOverlap;
    NSString *_resourcePath;
    long long _filterType;
    IESMMVideoTransformInfo *_transFormInfo;
    double _duration;
    double _overlapDuration;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _effectRange;
}

@property (readonly, copy, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) long long filterType;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } effectRange;
@property (retain, nonatomic) IESMMVideoTransformInfo *transFormInfo;
@property (nonatomic) BOOL isOverlap;
@property (nonatomic) double duration;
@property (nonatomic) double overlapDuration;

- (void)setIsOverlap:(BOOL)arg0;
- (BOOL)isOverlap;
- (void)setOverlapDuration:(double)arg0;
- (id)initWithResourcePath:(id)arg0 isOverlap:(BOOL)arg1;
- (id)transFormInfo;
- (double)overlapDuration;
- (id)initWithDict:(id)arg0 fileFolder:(id)arg1;
- (void)setTransFormInfo:(id)arg0;
- (void).cxx_destruct;
- (long long)filterType;
- (id)initWithType:(long long)arg0;
- (double)duration;
- (id)resourcePath;
- (void)setDuration:(double)arg0;
- (id)toDict;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })effectRange;
- (void)setEffectRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;

@end
