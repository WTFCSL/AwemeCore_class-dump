//
//     Generated by private class-dump
//

@class UIColor, DUXLoadingCircleView, UIImageView, NSString, UIView, UIFont, UIButton;

@interface DUXBasicButton : UIControl {
    BOOL _loading;
    BOOL _useInteractionEffect;
    NSString *_title;
    id /* block */ _leftIconProvider;
    id /* block */ _rightIconProvider;
    double _customWidth;
    UIColor *_contentTintColor;
    UIColor *_contentBackgroundColor;
    UIFont *_contentTitleFont;
    double _contentIconWidth;
    double _horizentalContentEdgeInset;
    double _contentCornerRadius;
    unsigned long long _resizingStrategy;
    UIView *_interactionMaskView;
    UIImageView *_leftIconImageView;
    UIImageView *_rightIconImageView;
    DUXLoadingCircleView *_loadingView;
    UIButton *_button;
    UIView *_containerView;
    UIView *_contentView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _interactionZoneEnlargeInsets;
}

@property (nonatomic) unsigned long long resizingStrategy;
@property (retain, nonatomic) UIView *interactionMaskView;
@property (retain, nonatomic) UIImageView *leftIconImageView;
@property (retain, nonatomic) UIImageView *rightIconImageView;
@property (retain, nonatomic) DUXLoadingCircleView *loadingView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL loading;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ leftIconProvider;
@property (copy, nonatomic) id /* block */ rightIconProvider;
@property (nonatomic) BOOL useInteractionEffect;
@property (nonatomic) double customWidth;
@property (retain, nonatomic) UIColor *contentTintColor;
@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (retain, nonatomic) UIFont *contentTitleFont;
@property (nonatomic) double contentIconWidth;
@property (nonatomic) double horizentalContentEdgeInset;
@property (nonatomic) double contentCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } interactionZoneEnlargeInsets;

- (void)awe_themeReload;
- (void)awe_themeDidChange:(long long)arg0;
- (void)setInteractionZoneEnlargeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setContentTitleFont:(id)arg0;
- (void)hideLoading;
- (id)rightIconImageView;
- (void)setRightIconImageView:(id)arg0;
- (id)leftIconImageView;
- (void)setLeftIconImageView:(id)arg0;
- (void)setLeftIconProvider:(id /* block */)arg0;
- (void)setContentIconWidth:(double)arg0;
- (void)setHorizentalContentEdgeInset:(double)arg0;
- (unsigned long long)colorStyleToSuit:(long long)arg0;
- (void)updateIconImage;
- (id)contentTitleFont;
- (unsigned long long)resizingStrategy;
- (BOOL)p_isIconStyle;
- (double)p_horizentalPadding;
- (id)p_borderColor;
- (double)p_loadingEdgeLength;
- (id)p_interactionMaskColor;
- (void)p_setupFrame;
- (id)interactionMaskView;
- (void)setInteractionMaskView:(id)arg0;
- (void)showInteractionMask;
- (void)hideInteractionMask;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })interactionZoneEnlargeInsets;
- (BOOL)canInteractToPoint:(struct CGPoint { double x0; double x1; })arg0;
- (double)p_borderWidth;
- (id)p_shadowColor;
- (struct CGSize { double x0; double x1; })p_shadowOffset;
- (double)p_shadowRadius;
- (double)p_shadowOpacity;
- (double)contentIconWidth;
- (double)horizentalContentEdgeInset;
- (id /* block */)leftIconProvider;
- (id /* block */)rightIconProvider;
- (BOOL)useInteractionEffect;
- (id)revisedContentTintColor:(id)arg0;
- (void)setResizingStrategy:(unsigned long long)arg0;
- (void)setRightIconProvider:(id /* block */)arg0;
- (void)setUseInteractionEffect:(BOOL)arg0;
- (void)setTitle:(id)arg0 forState:(unsigned long long)arg1;
- (void)setLoading:(BOOL)arg0;
- (void).cxx_destruct;
- (id)button;
- (void)setButton:(id)arg0;
- (void)setContentCornerRadius:(double)arg0;
- (void)setContainerView:(id)arg0;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (id)title;
- (double)contentCornerRadius;
- (id)containerView;
- (BOOL)loading;
- (void)setEnabled:(BOOL)arg0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setTitle:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)setContentBackgroundColor:(id)arg0;
- (id)contentBackgroundColor;
- (void)setContentTintColor:(id)arg0;
- (id)contentTintColor;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setCustomWidth:(double)arg0;
- (double)customWidth;
- (void)showLoading;

@end
