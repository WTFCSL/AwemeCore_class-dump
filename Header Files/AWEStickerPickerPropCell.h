//
//     Generated by private class-dump
//

@class UIView;

@interface AWEStickerPickerPropCell : AWEStickerPickerStickerPropNameCell {
    UIView *_bgView;
    UIView *_iconContainerView;
}

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *iconContainerView;

- (void)setStickerSelected:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setupPlaceholderView;
- (void)tapAnimation;
- (id)placeholderImageName;
- (void)willStartUpdateIcon;
- (void)didEndUpdateIcon;
- (void)modifyConstraints;
- (void)setupCornerRadiusForView:(id)arg0 cornerRadius:(double)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)updateViews;
- (void)updateCornerRadius;
- (id)iconContainerView;
- (void)setIconContainerView:(id)arg0;

@end
