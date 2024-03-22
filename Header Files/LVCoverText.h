//
//     Generated by private class-dump
//

@class LVDraftEffectPayload, LVSegmentClipInfo, LVDraftTextPayload;

@interface LVCoverText : NSObject {
    struct shared_ptr<CutSame::CoverText> { struct CoverText *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
    LVSegmentClipInfo *_clip;
    LVDraftTextPayload *_text;
    LVDraftEffectPayload *_textEffect;
    LVDraftEffectPayload *_textShape;
}

@property (retain, nonatomic) LVSegmentClipInfo *clip;
@property (retain, nonatomic) LVDraftTextPayload *text;
@property (retain, nonatomic) LVDraftEffectPayload *textEffect;
@property (retain, nonatomic) LVDraftEffectPayload *textShape;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::CoverText> { struct CoverText *x0; struct __shared_weak_count *x1; })arg0;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::CoverText> { struct CoverText *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::CoverText> { struct CoverText *x0; struct __shared_weak_count *x1; })arg0;
- (id)textShape;
- (void)setTextShape:(id)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)text;
- (id).cxx_construct;
- (id)clip;
- (void)setClip:(id)arg0;
- (id)textEffect;
- (void)setTextEffect:(id)arg0;

@end
