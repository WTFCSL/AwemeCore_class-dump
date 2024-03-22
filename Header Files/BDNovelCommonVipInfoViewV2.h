//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIView, BDNovelCommonVipInfoCardViewV2, BDNovelCommonVipRotateView;

@interface BDNovelCommonVipInfoViewV2 : BDNovelCommonVipBaseChildView <CAAnimationDelegate> {
    BOOL _lastIsVip;
    UIView *_vipCardViewContainer;
    UIView *_bottomAnimationView;
    BDNovelCommonVipInfoCardViewV2 *_vipCardView;
    UIImageView *_vipCardDiamondView;
    UIView *_vipCardLightContainerView;
    UIImageView *_vipCardLightView;
    BDNovelCommonVipRotateView *_rotateView;
}

@property (retain, nonatomic) BDNovelCommonVipInfoCardViewV2 *vipCardView;
@property (retain, nonatomic) UIImageView *vipCardDiamondView;
@property (retain, nonatomic) UIView *vipCardLightContainerView;
@property (retain, nonatomic) UIImageView *vipCardLightView;
@property (retain, nonatomic) BDNovelCommonVipRotateView *rotateView;
@property (nonatomic) BOOL lastIsVip;
@property (retain, nonatomic) UIView *vipCardViewContainer;
@property (weak, nonatomic) UIView *bottomAnimationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isVip;
- (id)vipCardView;
- (void)setVipCardView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 parentView:(id)arg1 viewModel:(id)arg2;
- (void)setLastIsVip:(BOOL)arg0;
- (void)setupVipViews;
- (void)innerLayout;
- (void)updateVipState;
- (id)vipCardViewContainer;
- (id)vipCardDiamondView;
- (id)vipCardLightContainerView;
- (id)vipCardLightView;
- (void)setVipCardViewContainer:(id)arg0;
- (void)setVipCardLightContainerView:(id)arg0;
- (void)setVipCardLightView:(id)arg0;
- (void)setVipCardDiamondView:(id)arg0;
- (void)playScannerLight;
- (id)rotateView;
- (void)setRotateView:(id)arg0;
- (void)playDiamondTransition;
- (id)bottomAnimationView;
- (void)playCardRotate;
- (BOOL)lastIsVip;
- (void)playOpenVipAnimation;
- (void)sizeToWidth:(double)arg0;
- (void)setBottomAnimationView:(id)arg0;
- (void)animationDidStart:(id)arg0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)layoutSubviews;
- (void)updateWithViewModel:(id)arg0;

@end