//
//     Generated by private class-dump
//

@class UILabel;

@interface IESECGoodsFeedResourceCardPriceLabel : UIView {
    UILabel *_priceLabel;
    UILabel *_pricePrefix;
    UILabel *_crossedPriceLabel;
    BOOL _showCrossedMarketPrice;
    BOOL _fixShowCrossedMarketPrice;
}

- (void)setupUIWithModel:(id)arg0;
- (id)initWithModel:(id)arg0 showCrossedMarketPrice:(BOOL)arg1 fixCrossedMarketPrice:(BOOL)arg2;
- (void)updatePriceLabelWithModel:(id)arg0 hasPriceHeader:(BOOL)arg1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
