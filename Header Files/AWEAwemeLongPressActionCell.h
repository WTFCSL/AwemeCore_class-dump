//
//     Generated by private class-dump
//

@class UIColor, NSString, UIImageView, AFDLongPressContext, UILabel, UIView;

@interface AWEAwemeLongPressActionCell : UICollectionViewCell <AFDHoverable> {
    BOOL _enableDynamicTheme;
    id /* block */ _actionBlock;
    UIImageView *_iconView;
    UIView *_iconBackgroundView;
    UILabel *_titleLabel;
    UIColor *_titleColor;
    UIView *_highlightMaskView;
    UIView *_unfoldMaskView;
    AFDLongPressContext *_context;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *iconBackgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIView *highlightMaskView;
@property (retain, nonatomic) UIView *unfoldMaskView;
@property (nonatomic) BOOL enableDynamicTheme;
@property (retain, nonatomic) AFDLongPressContext *context;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly, nonatomic) long long afdHoverStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)iconBackgroundView;
- (void)setIconBackgroundView:(id)arg0;
- (void)updateMaskLayer;
- (void)setHighlightMaskView:(id)arg0;
- (id)highlightMaskView;
- (void)hoverBegan:(id)arg0;
- (void)hoverEnded:(id)arg0;
- (void)hoverCancelled:(id)arg0;
- (BOOL)enableDynamicTheme;
- (void)setEnableDynamicTheme:(BOOL)arg0;
- (void)setupUIWithContext:(id)arg0;
- (void)updateDynamicTheme:(BOOL)arg0;
- (void)setUnfoldMaskView:(id)arg0;
- (id)unfoldMaskView;
- (void)updateIconWithImage:(id)arg0;
- (void)updateTitle:(id)arg0 attributeTitle:(id)arg1 titleColor:(id)arg2 backgroundColor:(id)arg3;
- (void).cxx_destruct;
- (id)iconView;
- (void)setContext:(id)arg0;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)titleColor;
- (id)context;
- (void)setTitleColor:(id)arg0;
- (void)prepareForReuse;
- (id /* block */)actionBlock;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setActionBlock:(id /* block */)arg0;

@end
