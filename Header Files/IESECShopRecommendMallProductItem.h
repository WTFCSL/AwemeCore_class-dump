//
//     Generated by private class-dump
//

@class UIImageView, IESECGoodsPriceLabel, UIView;

@interface IESECShopRecommendMallProductItem : UIView {
    UIImageView *_productsImageView;
    UIView *_maskView;
    UIView *_priceBottom;
    IESECGoodsPriceLabel *_priceLabel;
}

@property (retain, nonatomic) UIImageView *productsImageView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *priceBottom;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;

- (id)productsImageView;
- (id)priceBottom;
- (void)setProductsImageView:(id)arg0;
- (void)setPriceBottom:(id)arg0;
- (void).cxx_destruct;
- (id)maskView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setMaskView:(id)arg0;
- (void)setupUI;
- (void)updateWithModel:(id)arg0;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;

@end