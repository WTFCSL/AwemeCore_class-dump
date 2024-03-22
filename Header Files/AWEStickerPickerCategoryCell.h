//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView;

@interface AWEStickerPickerCategoryCell : AWEStickerPickerCategoryBaseCell <CAAnimationDelegate> {
    UILabel *_titleLabel;
    UIImageView *_imageView;
    UIView *_yellowDot;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *yellowDot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCategoryModel:(id)arg0;
- (void)categoryDidUpdate;
- (id)yellowDot;
- (void)setYellowDot:(id)arg0;
- (void)executeTwinkleAnimation;
- (void)configWithTitle:(id)arg0 showYellowDot:(BOOL)arg1;
- (void)layoutDot;
- (void)configCollectionImageBackgroundColor:(BOOL)arg0;
- (void)configIconImageWithCategoryModel:(id)arg0 showYellowDot:(BOOL)arg1;
- (void)configWithCollectionImage;
- (void)showYellowDotAnimated:(BOOL)arg0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)imageView;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setSelected:(BOOL)arg0;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isAccessibilityElement;
- (void)accessibilityElementDidBecomeFocused;
- (void)setupSubviews;

@end