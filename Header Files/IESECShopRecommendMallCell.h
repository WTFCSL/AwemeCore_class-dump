//
//     Generated by private class-dump
//

@class IESECShopRecommendMallObject, UIImageView, UILabel, UIView, IESECButton;

@interface IESECShopRecommendMallCell : UICollectionViewCell {
    IESECShopRecommendMallObject *_model;
    BOOL _ignorePadding;
    id /* block */ _clickProduct;
    id /* block */ _showProduct;
    UIView *_backView;
    UIImageView *_backImageView;
    UILabel *_recommendTitleLabel;
    UIView *_goodsBottomView;
    IESECButton *_goMallBtn;
}

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UIImageView *backImageView;
@property (retain, nonatomic) UILabel *recommendTitleLabel;
@property (retain, nonatomic) UIView *goodsBottomView;
@property (retain, nonatomic) IESECButton *goMallBtn;
@property (copy, nonatomic) id /* block */ clickProduct;
@property (copy, nonatomic) id /* block */ showProduct;
@property (nonatomic) BOOL ignorePadding;

- (void)setBackImageView:(id)arg0;
- (id)backImageView;
- (void)bindWithModel:(id)arg0;
- (id)goodsBottomView;
- (void)setGoodsBottomView:(id)arg0;
- (void)setIgnorePadding:(BOOL)arg0;
- (void)setClickProduct:(id /* block */)arg0;
- (void)setShowProduct:(id /* block */)arg0;
- (id)recommendTitleLabel;
- (id)goMallBtn;
- (void)clickProduct:(id)arg0;
- (id /* block */)showProduct;
- (id /* block */)clickProduct;
- (void)clickGoMall;
- (BOOL)ignorePadding;
- (void)setRecommendTitleLabel:(id)arg0;
- (void)setGoMallBtn:(id)arg0;
- (void)setBackView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)backView;
- (void)setupUI;

@end