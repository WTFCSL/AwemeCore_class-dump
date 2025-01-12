//
//     Generated by private class-dump
//

@class UIView;

@interface AWEStickerPickerPropAICell : AWEStickerPickerPropSmallCell {
    UIView *_bgView;
}

@property (retain, nonatomic) UIView *bgView;

+ (double)labelHeight;
+ (double)indicatorWidth;
+ (double)iconBornerRadius;
+ (double)spacingBetweenIconAndLabel;

- (void)setStickerSelected:(BOOL)arg0 animated:(BOOL)arg1;
- (void)tapAnimation;
- (id)placeholderImageName;
- (void)willStartUpdateIcon;
- (void)didEndUpdateIcon;
- (double)propNameFontSize;
- (void)modifyConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (id)bgView;
- (void)setBgView:(id)arg0;

@end
