//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface BDPCDDynamicCardPlaceHolderTextModel : BDPCDDynamicCardAtomicModel {
    BOOL _adjustWidth;
    long long _alignType;
    long long _maxLine;
    double _fontSize;
    double _fontWeight;
    NSString *_color;
    NSString *_backgroundColor;
    NSArray *_textContentArr;
}

@property (nonatomic) long long alignType;
@property (nonatomic) long long maxLine;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontWeight;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSArray *textContentArr;
@property (nonatomic) BOOL adjustWidth;

- (void)setAlignType:(long long)arg0;
- (long long)alignType;
- (long long)maxLine;
- (void)setMaxLine:(long long)arg0;
- (id)textContentArr;
- (BOOL)adjustWidth;
- (id)generateTextContentArrWithTextContentPraseResult:(id)arg0 placeholderArr:(id)arg1;
- (void)setTextContentArr:(id)arg0;
- (void)setAdjustWidth:(BOOL)arg0;
- (id)color;
- (void).cxx_destruct;
- (void)setFontSize:(double)arg0;
- (double)fontWeight;
- (double)fontSize;
- (id)initWithDict:(id)arg0;
- (void)setFontWeight:(double)arg0;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg0;
- (void)setColor:(id)arg0;

@end