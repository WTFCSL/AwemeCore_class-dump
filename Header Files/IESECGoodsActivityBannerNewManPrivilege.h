//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, IESECGoodsActivityCountdownView;

@interface IESECGoodsActivityBannerNewManPrivilege : IESECGoodsActivityBanner {
    UILabel *_privilegeLabel;
    UILabel *_reducePriceLabel;
    UIView *_reducePriceView;
    UIImageView *_privilegeImageView;
    UILabel *_countDownTipLabel;
    IESECGoodsActivityCountdownView *_countdownLabel;
}

@property (retain, nonatomic) UILabel *privilegeLabel;
@property (retain, nonatomic) UILabel *reducePriceLabel;
@property (retain, nonatomic) UIView *reducePriceView;
@property (retain, nonatomic) UIImageView *privilegeImageView;
@property (retain, nonatomic) UILabel *countDownTipLabel;
@property (retain, nonatomic) IESECGoodsActivityCountdownView *countdownLabel;

- (void)setCountdownLabel:(id)arg0;
- (id)countdownLabel;
- (void)setupGradientLayer;
- (id)countDownTipLabel;
- (void)setCountDownTipLabel:(id)arg0;
- (void)handleActivityUpdateNotification:(id)arg0;
- (id)privilegeLabel;
- (void)setPrivilegeLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 parameters:(id)arg1 type:(long long)arg2 style:(long long)arg3;
- (void)handleActivityStateChangeNotification:(id)arg0;
- (id)privilegeImageView;
- (id)reducePriceView;
- (id)reducePriceLabel;
- (void)updateWithSeckillType;
- (void)updateWithCountDown;
- (void)updateWithNoSeckillType;
- (void)setReducePriceLabel:(id)arg0;
- (void)setReducePriceView:(id)arg0;
- (void)setPrivilegeImageView:(id)arg0;
- (void)updateContent;
- (void).cxx_destruct;

@end
