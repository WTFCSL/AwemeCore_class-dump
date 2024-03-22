//
//     Generated by private class-dump
//

@class UIStackView, CAGradientLayer, UIImageView, AWEEcomSearchCouponTagViewUIConfig, UILabel, UIView;

@interface AWEEcomSearchCouponTagView : UIView {
    UIStackView *_tagStackView;
    UILabel *_textLabel;
    UIView *_labelBackground;
    UIImageView *_iconImage;
    AWEEcomSearchCouponTagViewUIConfig *_config;
    CAGradientLayer *_gradientLayer;
}

@property (retain, nonatomic) UIStackView *tagStackView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *labelBackground;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) AWEEcomSearchCouponTagViewUIConfig *config;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void)setTagStackView:(id)arg0;
- (id)tagStackView;
- (void)setTagWithText:(id)arg0 andIconUrl:(id)arg1 tagStyle:(long long)arg2;
- (void)setTagUIWithConfig:(id)arg0;
- (id)labelBackground;
- (void)updateLabelConstraintWithConfig:(id)arg0;
- (void)setLabelBackground:(id)arg0;
- (id)textLabel;
- (id)iconImage;
- (id)gradientLayer;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)config;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)setIconImage:(id)arg0;
- (void)setTextLabel:(id)arg0;
- (void)setGradientLayer:(id)arg0;
- (void)setupViews;

@end
