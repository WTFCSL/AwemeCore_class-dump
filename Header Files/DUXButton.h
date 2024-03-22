//
//     Generated by private class-dump
//

@class UIColor, DUXLoadingCircleView, NSString, UIFont, UILabel;

@interface DUXButton : UIButton {
    BOOL _enableHighlighted;
    BOOL _loading;
    BOOL _adaptBigFont;
    unsigned long long _sizeStyle;
    unsigned long long _style;
    unsigned long long _iconPosition;
    id /* block */ _iconProvider;
    NSString *_title;
    UIColor *_contentTintColor;
    UIColor *_contentBackgroundColor;
    UIFont *_contentTitleFont;
    double _contentIconWidth;
    double _horizentalContentEdgeInset;
    double _horizentalPadding;
    double _contentCornerRadius;
    UILabel *_interactionMaskView;
    DUXLoadingCircleView *_loadingView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _interactionZoneEnlargeInsets;
}

@property (nonatomic) unsigned long long sizeStyle;
@property (retain, nonatomic) UILabel *interactionMaskView;
@property (retain, nonatomic) DUXLoadingCircleView *loadingView;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long iconPosition;
@property (copy, nonatomic) id /* block */ iconProvider;
@property (nonatomic) BOOL enableHighlighted;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL adaptBigFont;
@property (retain, nonatomic) UIColor *contentTintColor;
@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (retain, nonatomic) UIFont *contentTitleFont;
@property (nonatomic) double contentIconWidth;
@property (nonatomic) double horizentalContentEdgeInset;
@property (nonatomic) double horizentalPadding;
@property (nonatomic) double contentCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } interactionZoneEnlargeInsets;

+ (id)buttonWithStyle:(unsigned long long)arg0 sizeStyle:(unsigned long long)arg1;

- (void)awe_themeDidChange:(long long)arg0;
- (id)initWithStyle:(unsigned long long)arg0 sizeStyle:(unsigned long long)arg1;
- (void)setAdaptBigFont:(BOOL)arg0;
- (void)setInteractionZoneEnlargeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setContentTitleFont:(id)arg0;
- (void)setHorizentalPadding:(double)arg0;
- (void)setIconPosition:(unsigned long long)arg0;
- (void)hideLoading;
- (id)contentShadowColor;
- (unsigned long long)iconPosition;
- (BOOL)adaptBigFont;
- (void)setSizeStyle:(unsigned long long)arg0;
- (void)setContentIconWidth:(double)arg0;
- (void)setHorizentalContentEdgeInset:(double)arg0;
- (unsigned long long)colorStyleToSuit:(long long)arg0;
- (void)setEnableHighlighted:(BOOL)arg0;
- (void)updateIconImage;
- (id)contentTitleFont;
- (double)p_horizentalPadding;
- (id)interactionMaskView;
- (void)setInteractionMaskView:(id)arg0;
- (void)showInteractionMask;
- (void)hideInteractionMask;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })interactionZoneEnlargeInsets;
- (BOOL)canInteractToPoint:(struct CGPoint { double x0; double x1; })arg0;
- (double)contentIconWidth;
- (double)horizentalContentEdgeInset;
- (id)revisedContentTintColor:(id)arg0;
- (id)interactionMaskColor;
- (BOOL)enableHighlighted;
- (id)styleTitleFont;
- (id)styleTintColor;
- (id)styleBackgroundColor;
- (double)iconStyleWidth;
- (double)containerHorizentalContentEdgeInset;
- (struct CGSize { double x0; double x1; })contentShadowOffset;
- (double)contentShadowRadius;
- (double)contentShadowOpacity;
- (id)styleBorderColor;
- (double)styleBorderWidth;
- (double)loadingEdgeLength;
- (double)horizentalPadding;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (unsigned long long)style;
- (void)setLoading:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContentCornerRadius:(double)arg0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (double)contentCornerRadius;
- (id)initWithCoder:(id)arg0;
- (BOOL)loading;
- (id /* block */)iconProvider;
- (void)setEnabled:(BOOL)arg0;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg0;
- (void)setStyle:(unsigned long long)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setTitle:(id)arg0;
- (void)setIconProvider:(id /* block */)arg0;
- (void)setContentBackgroundColor:(id)arg0;
- (id)contentBackgroundColor;
- (void)setContentTintColor:(id)arg0;
- (id)contentTintColor;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (unsigned long long)sizeStyle;
- (double)containerCornerRadius;
- (double)containerHeight;
- (void)showLoading;

@end
