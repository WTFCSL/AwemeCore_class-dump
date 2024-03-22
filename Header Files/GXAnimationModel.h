//
//     Generated by private class-dump
//

@class GXLottieAnimationModel, NSString, NSDictionary, GXPropAnimatorSet;

@interface GXAnimationModel : GXAnimationBaseModel {
    BOOL _state;
    BOOL _trigger;
    NSString *_type;
    NSDictionary *_animationInfo;
    GXPropAnimatorSet *_propAnimatorSet;
    GXLottieAnimationModel *_lottieAnimator;
}

@property (nonatomic) BOOL state;
@property (nonatomic) BOOL trigger;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSDictionary *animationInfo;
@property (retain, nonatomic) GXPropAnimatorSet *propAnimatorSet;
@property (retain, nonatomic) GXLottieAnimationModel *lottieAnimator;

- (void)setupAnimationInfo:(id)arg0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (id)propAnimatorSet;
- (void)setPropAnimatorSet:(id)arg0;
- (id)lottieAnimator;
- (void)setLottieAnimator:(id)arg0;
- (void).cxx_destruct;
- (BOOL)state;
- (BOOL)trigger;
- (void)setState:(BOOL)arg0;
- (id)type;
- (void)setTrigger:(BOOL)arg0;
- (void)setType:(id)arg0;
- (id)animationInfo;
- (void)setAnimationInfo:(id)arg0;

@end
