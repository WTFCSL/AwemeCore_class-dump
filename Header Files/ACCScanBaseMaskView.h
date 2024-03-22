//
//     Generated by private class-dump
//

@class UILabel, UIImageView, CAGradientLayer;

@interface ACCScanBaseMaskView : UIView {
    BOOL _shadowAnimating;
    UILabel *_bottomTipView;
    UILabel *_searchTypeAlertLabel;
    UILabel *_tabAlertLabel;
    UIImageView *_tabAlertImageView;
    CAGradientLayer *_shadowLayer;
}

@property (retain, nonatomic) UILabel *searchTypeAlertLabel;
@property (retain, nonatomic) UILabel *tabAlertLabel;
@property (retain, nonatomic) UIImageView *tabAlertImageView;
@property (nonatomic) BOOL shadowAnimating;
@property (retain, nonatomic) CAGradientLayer *shadowLayer;
@property (retain, nonatomic) UILabel *bottomTipView;

- (void)setBottomTipView:(id)arg0;
- (id)bottomTipView;
- (void)showAlertWithText:(id)arg0;
- (void)updateTipContent:(id)arg0;
- (void)showImageAlert;
- (void)removeShadow;
- (void)makeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0 withOrientation:(long long)arg1;
- (void)setShadow;
- (id)searchTypeAlertLabel;
- (BOOL)needShowBottomTipView;
- (id)tabAlertLabel;
- (id)tabAlertImageView;
- (id)tabAlertName;
- (BOOL)needAutoHideAlert;
- (BOOL)shadowAnimating;
- (void)setShadowAnimating:(BOOL)arg0;
- (id)tabAlertImage;
- (void)setSearchTypeAlertLabel:(id)arg0;
- (void)setTabAlertLabel:(id)arg0;
- (void)setTabAlertImageView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)hideAlert;
- (id)shadowLayer;
- (void)setupUI;
- (void)setShadowLayer:(id)arg0;
- (void)showAlert:(id)arg0;

@end
