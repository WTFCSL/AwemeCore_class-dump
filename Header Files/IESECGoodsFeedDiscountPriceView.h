//
//     Generated by private class-dump
//

@class IESECDiscountPrice, IESECGoodsPriceLabel, UILabel, NSNumber;

@interface IESECGoodsFeedDiscountPriceView : UIView {
    BOOL _hasGapPrice;
    BOOL _hideBackground;
    IESECGoodsPriceLabel *_priceLabel;
    UILabel *_prefixAreaLabel;
    long long _type;
    long long _state;
    IESECDiscountPrice *_discountModel;
    NSNumber *_minPrice;
}

@property (nonatomic) long long type;
@property (nonatomic) long long state;
@property (retain, nonatomic) IESECDiscountPrice *discountModel;
@property (nonatomic) BOOL hasGapPrice;
@property (nonatomic) BOOL hideBackground;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) UILabel *prefixAreaLabel;

- (BOOL)hideBackground;
- (void)setHideBackground:(BOOL)arg0;
- (id)minPrice;
- (void)setMinPrice:(id)arg0;
- (BOOL)hasGapPrice;
- (void)setHasGapPrice:(BOOL)arg0;
- (id)prefixAreaLabel;
- (id)discountModel;
- (id)initDiscountPriceViewWithDiscountConfigure:(id)arg0;
- (void)updateUIWithDiscountConfigure:(id)arg0;
- (void)setPrefixAreaLabel:(id)arg0;
- (void)setDiscountModel:(id)arg0;
- (void)configInternalFeedV2Style;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (long long)type;
- (void)setType:(long long)arg0;
- (void)setupUI;
- (void)updateUI;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;

@end
