//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;

@interface AWENearbyPOIInfoFavoriteButton : UIView {
    BOOL _selected;
    BOOL _isAnimating;
    id /* block */ _actionBlock;
    UIView *_bgView;
    UIView *_layoutContainer;
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    UIImageView *_selectedIconImageView;
}

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *layoutContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *selectedIconImageView;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (copy, nonatomic) id /* block */ actionBlock;

- (id)layoutContainer;
- (id)selectedIconImageView;
- (void)updateUIStatus;
- (void)setLayoutContainer:(id)arg0;
- (void)setSelectedIconImageView:(id)arg0;
- (BOOL)isAnimating;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSelected:(BOOL)arg0;
- (void)setSelected:(BOOL)arg0 animated:(BOOL)arg1;
- (id /* block */)actionBlock;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isAccessibilityElement;
- (id)iconImageView;
- (BOOL)isSelected;
- (void)setIsAnimating:(BOOL)arg0;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setIconImageView:(id)arg0;
- (void)setActionBlock:(id /* block */)arg0;

@end
