//
//     Generated by private class-dump
//

@class NSString, UIImageView, IESLiveGiftBannerViewModel, UILabel, CAKeyframeAnimation;

@interface IESLiveGiftBannerView : UIView <CAAnimationDelegate> {
    IESLiveGiftBannerViewModel *_giftBannerViewModel;
    UIImageView *_backgroundImageView;
    UILabel *_descriptionLabel;
    UIImageView *_giftBannerImageView;
    CAKeyframeAnimation *_giftBannerImageRotationAnimation;
}

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *giftBannerImageView;
@property (retain, nonatomic) IESLiveGiftBannerViewModel *giftBannerViewModel;
@property (retain, nonatomic) CAKeyframeAnimation *giftBannerImageRotationAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)pr_loadsubViews;
- (void)pr_bindViewModel;
- (void)setGiftBannerImageView:(id)arg0;
- (id)giftBannerImageView;
- (id)giftBannerViewModel;
- (void)didGiftBannerViewTaped:(id)arg0;
- (void)shakeGiftBannerImageView;
- (id)giftBannerImageRotationAnimation;
- (void)setGiftBannerImageRotationAnimation:(id)arg0;
- (void)setGiftBannerViewModel:(id)arg0;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)setDescriptionLabel:(id)arg0;
- (id)descriptionLabel;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)setBackgroundImageView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;

@end
