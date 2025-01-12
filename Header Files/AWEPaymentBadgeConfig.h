//
//     Generated by private class-dump
//

@class NSString, UIColor;

@interface AWEPaymentBadgeConfig : NSObject {
    BOOL _disableAddCornerBackground;
    double _viewHeight;
    NSString *_fontName;
    double _fontSize;
    double _margin;
    UIColor *_textColor;
    UIColor *_backgroundColor;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _edgeInsets;
}

@property (nonatomic) double viewHeight;
@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) double fontSize;
@property (nonatomic) double margin;
@property (nonatomic) BOOL disableAddCornerBackground;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;

- (void)setViewHeight:(double)arg0;
- (BOOL)disableAddCornerBackground;
- (void)setDisableAddCornerBackground:(BOOL)arg0;
- (double)margin;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void).cxx_destruct;
- (void)setFontSize:(double)arg0;
- (double)fontSize;
- (id)fontName;
- (void)setFontName:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (void)setMargin:(double)arg0;
- (id)backgroundColor;
- (void)setTextColor:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (id)textColor;
- (double)viewHeight;

@end
