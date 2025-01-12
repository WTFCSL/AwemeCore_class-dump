//
//     Generated by private class-dump
//

@class UILabel, NSString;

@interface AWETextTemplateCategoryCell : AWETextTemplateCategoryBaseCell <CAAnimationDelegate> {
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCategoryModel:(id)arg0;
- (void)categoryDidUpdate;
- (void)executeTwinkleAnimation;
- (void)configIconImageWithCategoryModel:(id)arg0 showYellowDot:(BOOL)arg1;
- (void)configWithCollectionImage;
- (struct CGSize { double x0; double x1; })titleLabelSizeWithTitle:(id)arg0 height:(double)arg1;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSelected:(BOOL)arg0;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isAccessibilityElement;
- (void)accessibilityElementDidBecomeFocused;
- (void)setupSubviews;

@end
