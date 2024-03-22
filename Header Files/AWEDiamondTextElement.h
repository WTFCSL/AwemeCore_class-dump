//
//     Generated by private class-dump
//

@class UIFont, NSString, UILabel, AWEGradientView, AWEDiamondColor;

@interface AWEDiamondTextElement : AWEDiamondSingleElement {
    NSString *_text;
    NSString *_textColorString;
    double _fontSize;
    unsigned long long _fontWeight;
    unsigned long long _textAlignment;
    unsigned long long _textDecorationStyle;
    unsigned long long _textDecorationLine;
    NSString *_textDecorationColorString;
    unsigned long long _textOverflow;
    unsigned long long _whiteSpace;
    unsigned long long _textLineClamp;
    AWEDiamondColor *_textDiamondColor;
    AWEGradientView *_textGradientView;
    UILabel *_textLabel;
    UIFont *_font;
}

@property (retain, nonatomic) AWEDiamondColor *textDiamondColor;
@property (retain, nonatomic) AWEGradientView *textGradientView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColorString;
@property (nonatomic) double fontSize;
@property (nonatomic) unsigned long long fontWeight;
@property (nonatomic) unsigned long long textAlignment;
@property (nonatomic) unsigned long long textDecorationStyle;
@property (nonatomic) unsigned long long textDecorationLine;
@property (copy, nonatomic) NSString *textDecorationColorString;
@property (nonatomic) unsigned long long textOverflow;
@property (nonatomic) unsigned long long whiteSpace;
@property (nonatomic) unsigned long long textLineClamp;

+ (id)elementType;

- (id)textColorString;
- (void)setTextColorString:(id)arg0;
- (double)originWidth;
- (double)originHeight;
- (void)elementDidLayout;
- (void)loadViewWithCache:(id)arg0 delegate:(id)arg1;
- (void)renderElement;
- (void)updateWithNewElement:(id)arg0;
- (void)setTextDiamondColor:(id)arg0;
- (id)textDiamondColor;
- (id)textGradientView;
- (void)__loadTextLabel;
- (unsigned long long)textOverflow;
- (void)__updateTextElement;
- (unsigned long long)textLineClamp;
- (void)setTextLineClamp:(unsigned long long)arg0;
- (double)intrinsicContentWidth;
- (unsigned long long)textDecorationLine;
- (id)textDecorationColorString;
- (unsigned long long)textDecorationStyle;
- (void)setTextDecorationStyle:(unsigned long long)arg0;
- (void)setTextDecorationLine:(unsigned long long)arg0;
- (void)setTextDecorationColorString:(id)arg0;
- (void)setTextOverflow:(unsigned long long)arg0;
- (void)setTextGradientView:(id)arg0;
- (id)textLabel;
- (void).cxx_destruct;
- (void)setFontSize:(double)arg0;
- (void)setText:(id)arg0;
- (unsigned long long)fontWeight;
- (long long)alignment;
- (double)fontSize;
- (unsigned long long)textAlignment;
- (id)font;
- (void)setFontWeight:(unsigned long long)arg0;
- (id)text;
- (void)setFont:(id)arg0;
- (void)setTextAlignment:(unsigned long long)arg0;
- (void)loadView;
- (void)setTextLabel:(id)arg0;
- (double)intrinsicContentHeight;
- (unsigned long long)whiteSpace;
- (void)setWhiteSpace:(unsigned long long)arg0;

@end
