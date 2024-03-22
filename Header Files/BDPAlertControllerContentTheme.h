//
//     Generated by private class-dump
//

@class UIColor, UIFont;

@interface BDPAlertControllerContentTheme : BDPAlertControllerThemeBase {
    long long _maxLineCount;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignemnt;
    double _lineSpacing;
    double _minHeight;
    double _lineHeight;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _overflowInsets;
}

@property (nonatomic) long long maxLineCount;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignemnt;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } overflowInsets;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double minHeight;
@property (nonatomic) double lineHeight;

- (void)setTextAlignemnt:(long long)arg0;
- (long long)textAlignemnt;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })overflowInsets;
- (void)setOverflowInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)init;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void).cxx_destruct;
- (void)setMinHeight:(double)arg0;
- (id)font;
- (void)setFont:(id)arg0;
- (void)setTextColor:(id)arg0;
- (id)textColor;
- (double)minHeight;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg0;
- (double)lineHeight;
- (void)setLineHeight:(double)arg0;
- (void)setMaxLineCount:(long long)arg0;
- (long long)maxLineCount;

@end
