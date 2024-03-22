//
//     Generated by private class-dump
//

@class AWEMixVideoModel, UIImageView, LOTAnimationView, UILabel, AWEPaymentBadgeView, UIView;

@interface AWEMixInformationTableViewCell : UITableViewCell {
    BOOL _isSelected;
    AWEMixVideoModel *_model;
    UIImageView *_coverImageView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    LOTAnimationView *_lottieView;
    AWEPaymentBadgeView *_paymentBadgeView;
    UIView *_chargeCoverView;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;
@property (retain, nonatomic) UIView *chargeCoverView;
@property (retain, nonatomic) AWEMixVideoModel *model;
@property (nonatomic) BOOL isSelected;

+ (id)cellIdentifier;
+ (double)cellHeight;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)lottieView;
- (void)setLottieView:(id)arg0;
- (id)paymentBadgeView;
- (void)setPaymentBadgeView:(id)arg0;
- (void)configWithMixVideoModel:(id)arg0;
- (void)configWithMixVideoModel:(id)arg0 isSelected:(BOOL)arg1;
- (void)conformWithCompletion:(id /* block */)arg0 isSelected:(BOOL)arg1;
- (id)chargeCoverView;
- (void)setChargeCoverView:(id)arg0;
- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)awakeFromNib;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (BOOL)isSelected;
- (void)setIconImageView:(id)arg0;
- (void)setupUI;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;

@end
