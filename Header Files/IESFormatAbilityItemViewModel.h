//
//     Generated by private class-dump
//

@class NSString, UIColor, UIFont;

@interface IESFormatAbilityItemViewModel : NSObject {
    long long _type;
    NSString *_text;
    UIColor *_textColor;
    UIFont *_textFont;
    UIColor *_borderColor;
    double _borderWidth;
    double _borderRadius;
    double _horizontalPaddingForText;
    id /* block */ _onClickItem;
    struct CGSize { double width; double height; } _textSize;
}

@property (nonatomic) struct CGSize { double width; double height; } textSize;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double borderRadius;
@property (nonatomic) double horizontalPaddingForText;
@property (copy, nonatomic) id /* block */ onClickItem;

+ (id)viewModelWithPB:(id)arg0 click:(id /* block */)arg1;

- (void)setOnClickItem:(id /* block */)arg0;
- (id /* block */)onClickItem;
- (double)horizontalPaddingForText;
- (void)setHorizontalPaddingForText:(double)arg0;
- (double)borderWidth;
- (id)init;
- (void).cxx_destruct;
- (id)borderColor;
- (void)setText:(id)arg0;
- (void)setBorderColor:(id)arg0;
- (long long)type;
- (void)setBorderWidth:(double)arg0;
- (void)setType:(long long)arg0;
- (id)text;
- (void)setTextColor:(id)arg0;
- (id)textFont;
- (id)textColor;
- (struct CGSize { double x0; double x1; })textSize;
- (void)setTextFont:(id)arg0;
- (double)borderRadius;
- (void)setTextSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setBorderRadius:(double)arg0;

@end
