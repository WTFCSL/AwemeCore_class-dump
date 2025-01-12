//
//     Generated by private class-dump
//

@class UIColor, UIFont, NSString;

@interface AWENearbyC2CellTextData : AWEBaseApiModel {
    BOOL _isBold;
    NSString *_text;
    NSString *_textColor;
    double _textDegree;
    long long _textSize;
}

@property (readonly, nonatomic) BOOL textConfigEnable;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) double textDegree;
@property (nonatomic) BOOL isBold;
@property (nonatomic) long long textSize;

+ (BOOL)automaticallyDefaultMapping;

- (double)textDegree;
- (void)setTextDegree:(double)arg0;
- (BOOL)textConfigEnable;
- (id)color;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (BOOL)isBold;
- (void)setIsBold:(BOOL)arg0;
- (id)font;
- (id)text;
- (void)setTextColor:(id)arg0;
- (id)textColor;
- (long long)textSize;
- (void)setTextSize:(long long)arg0;

@end
