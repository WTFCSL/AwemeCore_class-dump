//
//     Generated by private class-dump
//

@class UILabel, IESECGoodsPriceLabel, UIView;

@interface AWEFeedGoodsTokenAlertView : UIView {
    UIView *_ecommerceContanierView;
    UILabel *_saleLabel;
    IESECGoodsPriceLabel *_priceLabel;
}

@property (retain, nonatomic) UIView *ecommerceContanierView;
@property (retain, nonatomic) UILabel *saleLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;

- (id)initWithPrice:(id)arg0 sale:(id)arg1 maxPrice:(id)arg2;
- (void)configUIWithPrice:(id)arg0 sale:(id)arg1 maxPrice:(id)arg2;
- (id)saleLabel;
- (id)ecommerceContanierView;
- (void)setEcommerceContanierView:(id)arg0;
- (void)setSaleLabel:(id)arg0;
- (void).cxx_destruct;
- (void)setupUI;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;

@end