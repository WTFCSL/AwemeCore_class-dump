//
//     Generated by private class-dump
//

@class UIFont, NSArray, NSString, UIColor, YYLabel;

@interface IESECTitleLabel : UIView {
    YYLabel *_label;
    NSArray *_iconModels;
    double _iconFittingHeight;
    double _cornerRadiusForIcons;
    double _iconSpacing;
    double _spacingBetweenIconsAndTitle;
    NSString *_text;
    UIFont *_font;
    double _lineHeight;
    UIColor *_textColor;
}

@property (copy, nonatomic) NSArray *iconModels;
@property (nonatomic) double iconFittingHeight;
@property (nonatomic) double cornerRadiusForIcons;
@property (nonatomic) double iconSpacing;
@property (nonatomic) double spacingBetweenIconsAndTitle;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double lineHeight;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long numberOfLines;

- (void)setIconModels:(id)arg0;
- (id)iconModels;
- (id)spacingStringWithSpacing:(double)arg0;
- (void)setSpacingBetweenIconsAndTitle:(double)arg0;
- (void)setCornerRadiusForIcons:(double)arg0;
- (double)iconFittingHeight;
- (void)setIconFittingHeight:(double)arg0;
- (double)cornerRadiusForIcons;
- (double)spacingBetweenIconsAndTitle;
- (double)iconSpacing;
- (void)setLineBreakMode:(long long)arg0;
- (id)attributedText;
- (long long)lineBreakMode;
- (void).cxx_destruct;
- (void)setIconSpacing:(double)arg0;
- (void)setText:(id)arg0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)font;
- (void)updateAttributedText;
- (long long)numberOfLines;
- (id)text;
- (void)setNumberOfLines:(long long)arg0;
- (void)setFont:(id)arg0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })arg0;
- (void)setTextColor:(id)arg0;
- (void)layoutSubviews;
- (id)textColor;
- (double)lineHeight;
- (void)setLineHeight:(double)arg0;
- (void)setupSubviews;

@end