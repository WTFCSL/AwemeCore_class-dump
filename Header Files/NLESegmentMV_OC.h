//
//     Generated by private class-dump
//

@class NLEStyClip_OC, NLEResourceNode_OC, NLEStyCrop_OC;

@interface NLESegmentMV_OC : NLESegment_OC {
    NLEResourceNode_OC *_sourceFile;
    NLEStyCrop_OC *_crop;
    NLEStyClip_OC *_clip;
}

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentMV> { struct NLESegmentMV *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceNode_OC *sourceFile;
@property (nonatomic) unsigned long long sourceFileType;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } start;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } end;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (retain, nonatomic) NLEStyCrop_OC *crop;
@property (retain, nonatomic) NLEStyClip_OC *clip;
@property (nonatomic) double volume;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentMV> { struct NLESegmentMV *x0; struct __shared_weak_count *x1; })arg0;
- (unsigned long long)sourceFileType;
- (void)setSourceFileType:(unsigned long long)arg0;
- (void)setEnd:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })end;
- (id)init;
- (void)setStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void).cxx_destruct;
- (unsigned long long)height;
- (double)volume;
- (void)setWidth:(unsigned long long)arg0;
- (void)setVolume:(double)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })start;
- (void)setHeight:(unsigned long long)arg0;
- (unsigned long long)width;
- (id)clip;
- (id)sourceFile;
- (id)crop;
- (void)setCrop:(id)arg0;
- (void)setClip:(id)arg0;
- (void)setSourceFile:(id)arg0;

@end
