//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface AWEPlayInteractionPOINewCustomerView : UIView {
    UIView *_centerView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)p_setupUI;
- (void)configWithTitle:(id)arg0 iconURLs:(id)arg1;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)centerView;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setCenterView:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isAccessibilityElement;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;

@end