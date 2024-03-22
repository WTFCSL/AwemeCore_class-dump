//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEEcomSearchCouponTagViewUIConfig : NSObject {
    double _textFont;
    NSString *_textHexColorString;
    NSString *_labelBgHexColorString;
    NSArray *_gradientColors;
    double _showStyle;
    double _spaceBetweenIconAndText;
    struct CGSize { double width; double height; } _iconSize;
}

@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double textFont;
@property (copy, nonatomic) NSString *textHexColorString;
@property (copy, nonatomic) NSString *labelBgHexColorString;
@property (retain, nonatomic) NSArray *gradientColors;
@property (nonatomic) double showStyle;
@property (nonatomic) double spaceBetweenIconAndText;

- (double)showStyle;
- (void)setShowStyle:(double)arg0;
- (void)setTextHexColorString:(id)arg0;
- (void)setLabelBgHexColorString:(id)arg0;
- (double)spaceBetweenIconAndText;
- (id)textHexColorString;
- (id)labelBgHexColorString;
- (void)setSpaceBetweenIconAndText:(double)arg0;
- (void)setIconSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })iconSize;
- (id)init;
- (void).cxx_destruct;
- (id)gradientColors;
- (double)textFont;
- (void)setGradientColors:(id)arg0;
- (void)setTextFont:(double)arg0;

@end