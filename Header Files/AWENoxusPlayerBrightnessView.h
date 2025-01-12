//
//     Generated by private class-dump
//

@class CAGradientLayer, NSString, UIImageView, UIView;

@interface AWENoxusPlayerBrightnessView : UIView {
    BOOL _isShowing;
    BOOL _isAnimating;
    UIView *_containerView;
    UIImageView *_iconImageView;
    UIImageView *_animationImageView;
    CAGradientLayer *_progressGradientLayer;
    UIView *_progressBgView;
    UIView *_progressView;
    NSString *_lastIconName;
    UIView *_effectView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *animationImageView;
@property (retain, nonatomic) CAGradientLayer *progressGradientLayer;
@property (retain, nonatomic) UIView *progressBgView;
@property (retain, nonatomic) UIView *progressView;
@property (copy, nonatomic) NSString *lastIconName;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) UIView *effectView;
@property (nonatomic) BOOL isShowing;

- (void)dismissWithAnimated:(BOOL)arg0;
- (void)setIsShowing:(BOOL)arg0;
- (void)changeSystemBrightness:(double)arg0;
- (void)handleToNoLightBrightnessChange;
- (void)handleToLessBrightnessChange;
- (id)lastIconName;
- (void)setLastIconName:(id)arg0;
- (id)progressBgView;
- (id)progressGradientLayer;
- (void)showNewBrightness:(double)arg0;
- (void)setProgressGradientLayer:(id)arg0;
- (void)setProgressBgView:(id)arg0;
- (BOOL)isAnimating;
- (id)init;
- (void)dismiss;
- (id)effectView;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (BOOL)isShowing;
- (void)setEffectView:(id)arg0;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (id)containerView;
- (double)currentBrightness;
- (id)iconImageView;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setIconImageView:(id)arg0;
- (id)animationImageView;
- (void)setAnimationImageView:(id)arg0;
- (void)initUI;

@end
