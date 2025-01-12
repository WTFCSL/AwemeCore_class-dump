//
//     Generated by private class-dump
//

@class UIColor, UIFont, NSArray, NSString, UIImage, NSAttributedString, IESEffectModel;

@interface ACCSocialStickerViewViewModel : NSObject {
    NSAttributedString *_textPlaceholder;
    UIColor *_textColor;
    UIFont *_textFont;
    NSArray *_textGradientColors;
    long long _gradientdiRect;
    UIColor *_tintColor;
    UIFont *_iconFont;
    NSString *_iconFontGlyph;
    double _iconViewLeftInset;
    UIImage *_iconFontImage;
    NSString *_iconURL;
    double _contentHorizontalMinMargin;
    double _contentHeight;
    UIColor *_backgroundColor;
    double _cornerRadius;
    double _borderHeight;
    double _viewHeight;
    double _textMaxWidth;
    IESEffectModel *_effectModel;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _textViewPadding;
}

@property (readonly, copy, nonatomic) NSAttributedString *textPlaceholder;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIFont *textFont;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textViewPadding;
@property (readonly, nonatomic) NSArray *textGradientColors;
@property (readonly, nonatomic) long long gradientdiRect;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIFont *iconFont;
@property (readonly, copy, nonatomic) NSString *iconFontGlyph;
@property (readonly, nonatomic) double iconViewLeftInset;
@property (readonly, nonatomic) UIImage *iconFontImage;
@property (readonly, copy, nonatomic) NSString *iconURL;
@property (readonly, nonatomic) double contentHorizontalMinMargin;
@property (readonly, nonatomic) double contentHeight;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) double borderHeight;
@property (readonly, nonatomic) double viewHeight;
@property (readonly, nonatomic) double textMaxWidth;
@property (retain, nonatomic) IESEffectModel *effectModel;

+ (id)constModelWithSocialType:(unsigned long long)arg0 effectModelInfo:(id)arg1;

- (id)effectModel;
- (void)setEffectModel:(id)arg0;
- (double)textMaxWidth;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textViewPadding;
- (double)iconViewLeftInset;
- (double)contentHorizontalMinMargin;
- (double)borderHeight;
- (id)textGradientColors;
- (long long)gradientdiRect;
- (id)iconFontImage;
- (id)iconFont;
- (id)iconFontGlyph;
- (void)p_setupIconFontWithIsMention:(BOOL)arg0;
- (id)initWithSocialType:(unsigned long long)arg0 effectModelInfo:(id)arg1;
- (void).cxx_destruct;
- (double)contentHeight;
- (id)iconURL;
- (double)cornerRadius;
- (id)tintColor;
- (id)backgroundColor;
- (id)textFont;
- (id)textColor;
- (id)textPlaceholder;
- (double)viewHeight;

@end
