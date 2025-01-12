//
//     Generated by private class-dump
//

@interface LVDraftAudioFadePayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialAudioFade> { struct MaterialAudioFade *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) float fadeInDuration;
@property (nonatomic) float fadeOutDuration;
@property (nonatomic) double fadeIndeOffset;
@property (nonatomic) long long fadeInDurationMilliSeconds;
@property (nonatomic) long long fadeOutDurationMilliSeconds;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialAudioFade> { struct MaterialAudioFade *x0; struct __shared_weak_count *x1; })arg0;
- (double)fadeIndeOffset;
- (void)setFadeIndeOffset:(double)arg0;
- (id)initWithFadeInDuration:(float)arg0 fadeOutDuration:(float)arg1;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::MaterialAudioFade> { struct MaterialAudioFade *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialAudioFade> { struct MaterialAudioFade *x0; struct __shared_weak_count *x1; })arg0;
- (long long)fadeInDurationMilliSeconds;
- (void)setFadeInDurationMilliSeconds:(long long)arg0;
- (long long)fadeOutDurationMilliSeconds;
- (void)setFadeOutDurationMilliSeconds:(long long)arg0;
- (void).cxx_destruct;
- (float)fadeOutDuration;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setFadeOutDuration:(float)arg0;
- (void)setFadeInDuration:(float)arg0;
- (float)fadeInDuration;
- (id).cxx_construct;

@end
