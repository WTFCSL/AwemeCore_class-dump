//
//     Generated by private class-dump
//

@class UIFont, UIColor, UILabel, UIView;

@interface AWEComposerBeautyTopBarCollectionViewCell : UICollectionViewCell {
    BOOL _shouldShowUnderline;
    UILabel *_titleLabel;
    UIView *_underline;
    UIFont *_selectedTitleFont;
    UIFont *_unselectedTitleFont;
    UIColor *_selectedTitleColor;
    UIColor *_unselectedTitleColor;
    UIView *_flagDotView;
}

@property (retain, nonatomic) UIView *flagDotView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *underline;
@property (nonatomic) BOOL shouldShowUnderline;
@property (retain, nonatomic) UIFont *selectedTitleFont;
@property (retain, nonatomic) UIFont *unselectedTitleFont;
@property (retain, nonatomic) UIColor *selectedTitleColor;
@property (retain, nonatomic) UIColor *unselectedTitleColor;

+ (id)identifier;

- (void)setSelectedTitleColor:(id)arg0;
- (id)unselectedTitleColor;
- (void)setUnselectedTitleColor:(id)arg0;
- (void)setSelectedTitleFont:(id)arg0;
- (id)selectedTitleFont;
- (void)updateWithTitle:(id)arg0 selected:(BOOL)arg1;
- (void)setFlagDotViewHidden:(BOOL)arg0;
- (id)flagDotView;
- (void)setFlagDotView:(id)arg0;
- (void)updateWithUserSelected:(BOOL)arg0;
- (BOOL)shouldShowUnderline;
- (id)unselectedTitleFont;
- (void)setShouldShowUnderline:(BOOL)arg0;
- (void)setUnselectedTitleFont:(id)arg0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isAccessibilityElement;
- (void)setUnderline:(id)arg0;
- (id)underline;
- (id)selectedTitleColor;

@end