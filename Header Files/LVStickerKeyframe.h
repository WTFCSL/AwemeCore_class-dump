//
//     Generated by private class-dump
//

@class LVGraph, LVPoint;

@interface LVStickerKeyframe : LVKeyframe {
    struct shared_ptr<CutSame::StickerKeyframe> { struct StickerKeyframe *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
    LVGraph *_graph;
    LVPoint *_position;
    LVPoint *_scale;
}

@property (retain, nonatomic) LVGraph *graph;
@property (retain, nonatomic) LVPoint *position;
@property (nonatomic) double rotation;
@property (retain, nonatomic) LVPoint *scale;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::StickerKeyframe> { struct StickerKeyframe *x0; struct __shared_weak_count *x1; })arg0;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::StickerKeyframe> { struct StickerKeyframe *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::StickerKeyframe> { struct StickerKeyframe *x0; struct __shared_weak_count *x1; })arg0;
- (void)applyPropertiesToSegment:(id)arg0;
- (void)setGraph:(id)arg0;
- (void)setRotation:(double)arg0;
- (void).cxx_destruct;
- (id)position;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setPosition:(id)arg0;
- (id)scale;
- (double)rotation;
- (id)graph;
- (void)setScale:(id)arg0;
- (id).cxx_construct;

@end
