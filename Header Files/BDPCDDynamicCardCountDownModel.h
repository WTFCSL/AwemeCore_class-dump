//
//     Generated by private class-dump
//

@class NSString;

@interface BDPCDDynamicCardCountDownModel : BDPCDDynamicCardAtomicModel {
    long long _fontSize;
    long long _numberFontWeight;
    NSString *_numberColor;
    long long _textFontWeight;
    NSString *_textColor;
    long long _deadline;
}

@property (nonatomic) long long fontSize;
@property (nonatomic) long long numberFontWeight;
@property (copy, nonatomic) NSString *numberColor;
@property (nonatomic) long long textFontWeight;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long deadline;

- (id)numberColor;
- (void)setNumberColor:(id)arg0;
- (long long)textFontWeight;
- (long long)numberFontWeight;
- (void)setNumberFontWeight:(long long)arg0;
- (void)setTextFontWeight:(long long)arg0;
- (void).cxx_destruct;
- (void)setFontSize:(long long)arg0;
- (long long)fontSize;
- (id)initWithDict:(id)arg0;
- (void)setTextColor:(id)arg0;
- (id)textColor;
- (long long)deadline;
- (void)setDeadline:(long long)arg0;

@end
