//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEHPPinTopSnackBarCouponUIModel, UIView, UILabel, BDImageView;

@interface AWEHPPinTopSnackBarCoupon : UIView <AWEHPPinTopUILifeCycleProtocol> {
    AWEHPPinTopSnackBarCouponUIModel *_configModel;
    BDImageView *_animationImageView;
    UIView *_couponView;
    UIImageView *_bgImageView;
    UIView *_amountView;
    UIImageView *_amountIcon;
    UILabel *_amountLabel;
    UIView *_couponConditionView;
    UILabel *_couponTextLabel;
    UILabel *_couponConditionLabel;
}

@property (retain, nonatomic) AWEHPPinTopSnackBarCouponUIModel *configModel;
@property (retain, nonatomic) BDImageView *animationImageView;
@property (retain, nonatomic) UIView *couponView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *amountView;
@property (retain, nonatomic) UIImageView *amountIcon;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UIView *couponConditionView;
@property (retain, nonatomic) UILabel *couponTextLabel;
@property (retain, nonatomic) UILabel *couponConditionLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (id)couponView;
- (void)setCouponView:(id)arg0;
- (void)pinTopComponentDidShow;
- (void)pinTopComponentDidDismiss;
- (void)setupCouponViewUI;
- (double)getAmountFont;
- (long long)getAmountViewTopOffset;
- (id)amountIcon;
- (id)couponConditionView;
- (id)couponTextLabel;
- (id)couponConditionLabel;
- (id)transformNumberToString:(long long)arg0;
- (long long)getAmountViewHeight;
- (void)setAmountIcon:(id)arg0;
- (void)setCouponConditionView:(id)arg0;
- (void)setCouponTextLabel:(id)arg0;
- (void)setCouponConditionLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg0;
- (void)setupUI;
- (id)amountView;
- (void)setAmountView:(id)arg0;
- (id)amountLabel;
- (void)setAmountLabel:(id)arg0;
- (double)viewWidth;
- (void)setBgImageView:(id)arg0;
- (id)bgImageView;
- (id)animationImageView;
- (void)setAnimationImageView:(id)arg0;

@end
