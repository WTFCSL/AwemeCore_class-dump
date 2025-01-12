//
//     Generated by private class-dump
//

@class UIColor, NSString, CAShapeLayer, IESECGoodsPaddingLabel;

@interface IESECLiveCouponTagButton : IESECButton {
    unsigned long long _style;
    UIColor *_themeColor;
    NSString *_tagHeader;
    NSString *_tagContent;
    IESECGoodsPaddingLabel *_tagLabel;
    CAShapeLayer *_dashline;
}

@property (retain, nonatomic) IESECGoodsPaddingLabel *tagLabel;
@property (retain, nonatomic) CAShapeLayer *dashline;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIColor *themeColor;
@property (copy, nonatomic) NSString *tagHeader;
@property (copy, nonatomic) NSString *tagContent;

- (void)setTagContent:(id)arg0;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (void)setTagHeader:(id)arg0;
- (id)dashline;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tagEdgeInsets;
- (id)tagFont;
- (double)tagTextPadding;
- (double)tagFullHeight;
- (id)tagHeader;
- (void)setDashline:(id)arg0;
- (void)updateContent;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)setThemeColor:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)themeColor;
- (void)layoutSubviews;
- (void)setStyle:(unsigned long long)arg0;
- (id)tagContent;
- (id)tagBackgroundColor;

@end
