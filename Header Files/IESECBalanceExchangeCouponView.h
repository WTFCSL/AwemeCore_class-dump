//
//     Generated by private class-dump
//

@class UIImageView, IESECGradientView, UILabel, UIView;

@interface IESECBalanceExchangeCouponView : UIView <IESECLLComponent> {
    UIView *_seperatorLine;
    UIImageView *_redeemEntry;
    UIImageView *_couponExchangeIcon;
    UILabel *_subDescribeLabel;
    UILabel *_mainDescribeLabel;
    UILabel *_redeemDescriptionLabel;
    IESECGradientView *_backgroundView;
}

@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) UIImageView *redeemEntry;
@property (retain, nonatomic) UIImageView *couponExchangeIcon;
@property (retain, nonatomic) UILabel *subDescribeLabel;
@property (retain, nonatomic) UILabel *mainDescribeLabel;
@property (retain, nonatomic) UILabel *redeemDescriptionLabel;
@property (retain, nonatomic) IESECGradientView *backgroundView;

- (void)updateUIWithModel:(id)arg0;
- (id)couponExchangeIcon;
- (id)redeemEntry;
- (id)redeemDescriptionLabel;
- (id)mainDescribeLabel;
- (id)subDescribeLabel;
- (void)setRedeemEntry:(id)arg0;
- (void)setCouponExchangeIcon:(id)arg0;
- (void)setSubDescribeLabel:(id)arg0;
- (void)setMainDescribeLabel:(id)arg0;
- (void)setRedeemDescriptionLabel:(id)arg0;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setupUI;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg0;

@end