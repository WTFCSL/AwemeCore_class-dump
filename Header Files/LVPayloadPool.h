//
//     Generated by private class-dump
//

@class NSArray;

@interface LVPayloadPool : NSObject {
    struct shared_ptr<CutSame::Materials> { struct Materials *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
    NSArray *_audioBalances;
    NSArray *_audioEffectPayloads;
    NSArray *_audioFadePayloads;
    NSArray *_audioPayloads;
    NSArray *_beatPayloads;
    NSArray *_canvasPayloads;
    NSArray *_chromaPayloads;
    NSArray *_effectPayloads;
    NSArray *_hsl;
    NSArray *_imagesPayloads;
    NSArray *_maskPayloads;
    NSArray *_animationPayloads;
    NSArray *_placeholderPayloads;
    NSArray *_speedPayloads;
    NSArray *_stickerPayloads;
    NSArray *_tailLeaderPayloads;
    NSArray *_textTemplates;
    NSArray *_textPayloads;
    NSArray *_transitionPayloads;
    NSArray *_videoEffectPayloads;
    NSArray *_videoTrackings;
    NSArray *_videoPayloads;
}

@property (copy, nonatomic) NSArray *audioBalances;
@property (copy, nonatomic) NSArray *audioEffectPayloads;
@property (copy, nonatomic) NSArray *audioFadePayloads;
@property (copy, nonatomic) NSArray *audioPayloads;
@property (copy, nonatomic) NSArray *beatPayloads;
@property (copy, nonatomic) NSArray *canvasPayloads;
@property (copy, nonatomic) NSArray *chromaPayloads;
@property (copy, nonatomic) NSArray *effectPayloads;
@property (copy, nonatomic) NSArray *hsl;
@property (copy, nonatomic) NSArray *imagesPayloads;
@property (copy, nonatomic) NSArray *maskPayloads;
@property (copy, nonatomic) NSArray *animationPayloads;
@property (copy, nonatomic) NSArray *placeholderPayloads;
@property (copy, nonatomic) NSArray *speedPayloads;
@property (copy, nonatomic) NSArray *stickerPayloads;
@property (copy, nonatomic) NSArray *tailLeaderPayloads;
@property (copy, nonatomic) NSArray *textTemplates;
@property (copy, nonatomic) NSArray *textPayloads;
@property (copy, nonatomic) NSArray *transitionPayloads;
@property (copy, nonatomic) NSArray *videoEffectPayloads;
@property (copy, nonatomic) NSArray *videoTrackings;
@property (copy, nonatomic) NSArray *videoPayloads;

- (id)textTemplates;
- (void)setTextTemplates:(id)arg0;
- (id)hsl;
- (void)setHsl:(id)arg0;
- (id)initWithCPPModel:(struct shared_ptr<CutSame::Materials> { struct Materials *x0; struct __shared_weak_count *x1; })arg0;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::Materials> { struct Materials *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::Materials> { struct Materials *x0; struct __shared_weak_count *x1; })arg0;
- (id)audioBalances;
- (void)setAudioBalances:(id)arg0;
- (id)audioEffectPayloads;
- (void)setAudioEffectPayloads:(id)arg0;
- (id)audioFadePayloads;
- (void)setAudioFadePayloads:(id)arg0;
- (id)beatPayloads;
- (void)setBeatPayloads:(id)arg0;
- (id)canvasPayloads;
- (void)setCanvasPayloads:(id)arg0;
- (id)chromaPayloads;
- (void)setChromaPayloads:(id)arg0;
- (id)effectPayloads;
- (void)setEffectPayloads:(id)arg0;
- (id)imagesPayloads;
- (void)setImagesPayloads:(id)arg0;
- (id)maskPayloads;
- (void)setMaskPayloads:(id)arg0;
- (id)animationPayloads;
- (void)setAnimationPayloads:(id)arg0;
- (id)placeholderPayloads;
- (void)setPlaceholderPayloads:(id)arg0;
- (id)speedPayloads;
- (void)setSpeedPayloads:(id)arg0;
- (id)stickerPayloads;
- (void)setStickerPayloads:(id)arg0;
- (id)tailLeaderPayloads;
- (void)setTailLeaderPayloads:(id)arg0;
- (id)textPayloads;
- (void)setTextPayloads:(id)arg0;
- (id)transitionPayloads;
- (void)setTransitionPayloads:(id)arg0;
- (id)videoEffectPayloads;
- (void)setVideoEffectPayloads:(id)arg0;
- (id)videoTrackings;
- (void)setVideoTrackings:(id)arg0;
- (id)videoPayloads;
- (void)setVideoPayloads:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id).cxx_construct;
- (id)allPayloads;
- (id)audioPayloads;
- (void)setAudioPayloads:(id)arg0;

@end
