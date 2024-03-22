//
//     Generated by private class-dump
//

@class UIColor, UIFont;

@interface HGAlertControllerTitleTheme : HGAlertControllerThemeBase {
    long long _maxLineCount;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignment;
    double _lineHeight;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
}

@property (nonatomic) long long maxLineCount;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) double lineHeight;

- (void)setInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)init;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void).cxx_destruct;
- (long long)textAlignment;
- (id)font;
- (void)setFont:(id)arg0;
- (void)setTextAlignment:(long long)arg0;
- (void)setTextColor:(id)arg0;
- (id)textColor;
- (double)lineHeight;
- (void)setLineHeight:(double)arg0;
- (void)setMaxLineCount:(long long)arg0;
- (long long)maxLineCount;

@end