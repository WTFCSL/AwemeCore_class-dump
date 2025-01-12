//
//     Generated by private class-dump
//

@class UIImageView, AWEPaymentBadgeView, UILabel, UIView;

@interface AWEProfileMixVideoListViewCell : UITableViewCell {
    UIImageView *_coverImageView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_updateMixLabel;
    UIView *_updateMixView;
    AWEPaymentBadgeView *_paymentBadgeView;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *updateMixLabel;
@property (retain, nonatomic) UIView *updateMixView;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;

+ (id)identifier;
+ (double)cellHeight;

- (void)configWithModel:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (double)adaptiveFontSize:(double)arg0;
- (id)paymentBadgeView;
- (void)setPaymentBadgeView:(id)arg0;
- (id)updateMixView;
- (id)updateMixLabel;
- (void)setUpdateMixLabel:(id)arg0;
- (void)setUpdateMixView:(id)arg0;
- (void)setIconImageViewWithMixType:(unsigned long long)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;

@end
