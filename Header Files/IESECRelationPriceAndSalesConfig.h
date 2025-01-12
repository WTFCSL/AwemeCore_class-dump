//
//     Generated by private class-dump
//

@interface IESECRelationPriceAndSalesConfig : NSObject {
    BOOL _showSuffix;
    BOOL _hideSales;
    double _priceHeight;
    double _integerFontSize;
    double _iphone5AlikeIntergerFontSize;
    double _decimalFontSize;
    double _prefixFontSize;
    double _suffixFontSize;
    double _tagFontSize;
    double _salesFontSize;
    double _maxWidth;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _padding;
}

@property (nonatomic) double priceHeight;
@property (nonatomic) double integerFontSize;
@property (nonatomic) double iphone5AlikeIntergerFontSize;
@property (nonatomic) double decimalFontSize;
@property (nonatomic) double prefixFontSize;
@property (nonatomic) double suffixFontSize;
@property (nonatomic) double tagFontSize;
@property (nonatomic) BOOL showSuffix;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) BOOL hideSales;
@property (nonatomic) double salesFontSize;
@property (nonatomic) double maxWidth;

- (void)setPrefixFontSize:(double)arg0;
- (double)prefixFontSize;
- (void)setSuffixFontSize:(double)arg0;
- (double)suffixFontSize;
- (BOOL)showSuffix;
- (void)setShowSuffix:(BOOL)arg0;
- (BOOL)hideSales;
- (void)setHideSales:(BOOL)arg0;
- (void)setPriceHeight:(double)arg0;
- (void)setIntegerFontSize:(double)arg0;
- (void)setDecimalFontSize:(double)arg0;
- (double)iphone5AlikeIntergerFontSize;
- (double)integerFontSize;
- (double)decimalFontSize;
- (double)tagFontSize;
- (double)salesFontSize;
- (double)priceHeight;
- (void)setIphone5AlikeIntergerFontSize:(double)arg0;
- (void)setTagFontSize:(double)arg0;
- (void)setSalesFontSize:(double)arg0;
- (void)setPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setMaxWidth:(double)arg0;
- (double)maxWidth;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;

@end
