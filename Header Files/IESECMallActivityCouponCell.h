//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, UIButton;

@interface IESECMallActivityCouponCell : UICollectionViewCell {
    UIImageView *_bgImageView;
    UIView *_nameBgView;
    UILabel *_nameLabel;
    UILabel *_amountLabel;
    UILabel *_discountLabel;
    UIButton *_useButton;
}

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *nameBgView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) UIButton *useButton;

+ (id)identifier;

- (void)setDiscountLabel:(id)arg0;
- (id)discountLabel;
- (id)nameBgView;
- (id)useButton;
- (void)updateButtonTitleWithModel:(id)arg0;
- (void)setNameBgView:(id)arg0;
- (void)setUseButton:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)nameLabel;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;
- (id)amountLabel;
- (void)setAmountLabel:(id)arg0;
- (void)updateWithModel:(id)arg0;
- (void)setBgImageView:(id)arg0;
- (id)bgImageView;

@end
