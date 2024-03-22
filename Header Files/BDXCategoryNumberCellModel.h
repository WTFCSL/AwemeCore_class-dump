//
//     Generated by private class-dump
//

@class NSString, UIColor, UIFont;

@interface BDXCategoryNumberCellModel : BDXCategoryTitleCellModel {
    BOOL _shouldMakeRoundWhenSingleNumber;
    long long _count;
    NSString *_numberString;
    double _numberStringWidth;
    id /* block */ _numberStringFormatterBlock;
    UIColor *_numberBackgroundColor;
    UIColor *_numberTitleColor;
    double _numberLabelWidthIncrement;
    double _numberLabelHeight;
    UIFont *_numberLabelFont;
    struct CGPoint { double x; double y; } _numberLabelOffset;
}

@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *numberString;
@property (readonly, nonatomic) double numberStringWidth;
@property (copy, nonatomic) id /* block */ numberStringFormatterBlock;
@property (retain, nonatomic) UIColor *numberBackgroundColor;
@property (retain, nonatomic) UIColor *numberTitleColor;
@property (nonatomic) double numberLabelWidthIncrement;
@property (nonatomic) double numberLabelHeight;
@property (retain, nonatomic) UIFont *numberLabelFont;
@property (nonatomic) struct CGPoint { double x; double y; } numberLabelOffset;
@property (nonatomic) BOOL shouldMakeRoundWhenSingleNumber;

- (id)numberBackgroundColor;
- (id)numberLabelFont;
- (id)numberTitleColor;
- (id)numberString;
- (double)numberLabelHeight;
- (struct CGPoint { double x0; double x1; })numberLabelOffset;
- (BOOL)shouldMakeRoundWhenSingleNumber;
- (double)numberStringWidth;
- (double)numberLabelWidthIncrement;
- (void)updateNumberSizeWidthIfNeeded;
- (void)setNumberString:(id)arg0;
- (void)setNumberLabelHeight:(double)arg0;
- (void)setNumberLabelFont:(id)arg0;
- (id /* block */)numberStringFormatterBlock;
- (void)setNumberStringFormatterBlock:(id /* block */)arg0;
- (void)setNumberBackgroundColor:(id)arg0;
- (void)setNumberTitleColor:(id)arg0;
- (void)setNumberLabelWidthIncrement:(double)arg0;
- (void)setNumberLabelOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)setShouldMakeRoundWhenSingleNumber:(BOOL)arg0;
- (void)setCount:(long long)arg0;
- (void).cxx_destruct;
- (long long)count;

@end
