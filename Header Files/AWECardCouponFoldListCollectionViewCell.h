//
//     Generated by private class-dump
//

@class UIImageView, UILabel, CAGradientLayer;

@interface AWECardCouponFoldListCollectionViewCell : AWECardCouponCollectionViewCell {
    UIImageView *_backgroundImageView;
    UILabel *_couponNameLabel;
    UILabel *_statusLabel;
    UILabel *_validDateLabel;
    UIImageView *_statusLabelBackgroundImageView;
    CAGradientLayer *_gradientLayer;
}

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *couponNameLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *validDateLabel;
@property (retain, nonatomic) UIImageView *statusLabelBackgroundImageView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

+ (id)identifier;

- (id)couponNameLabel;
- (void)setCouponNameLabel:(id)arg0;
- (id)validDateLabel;
- (void)setValidDateLabel:(id)arg0;
- (id)statusLabelBackgroundImageView;
- (void)setCouponStyleForValid:(BOOL)arg0;
- (void)p_updateTextShadowWithIsDefaultImg:(BOOL)arg0;
- (void)setStatusLabelBackgroundImageView:(id)arg0;
- (id)gradientLayer;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setGradientLayer:(id)arg0;
- (void)configureWithModel:(id)arg0;
- (void)setBackgroundImageView:(id)arg0;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg0;

@end
