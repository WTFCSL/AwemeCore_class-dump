//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView, IESECMallADLogoView;

@interface IESECMallCardProductInfoView : UIView {
    id /* block */ _clickBlock;
    NSString *_bizTag;
    NSString *_sceneTag;
    UILabel *_titleLabel;
    UIImageView *_goodsImageView;
    UIView *_goodsMaskView;
    UIView *_priceBgView;
    UILabel *_priceLabel;
    UILabel *_priceTypeTextLabel;
    IESECMallADLogoView *_adLogo;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) UIView *goodsMaskView;
@property (retain, nonatomic) UIView *priceBgView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *priceTypeTextLabel;
@property (retain, nonatomic) IESECMallADLogoView *adLogo;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;

- (void)setClickBlock:(id /* block */)arg0;
- (void)setBizTag:(id)arg0;
- (id)bizTag;
- (id /* block */)clickBlock;
- (id)sceneTag;
- (void)setSceneTag:(id)arg0;
- (id)goodsImageView;
- (void)setGoodsImageView:(id)arg0;
- (id)adLogo;
- (void)setAdLogo:(id)arg0;
- (id)priceBgView;
- (id)priceTypeTextLabel;
- (id)goodsMaskView;
- (void)updateWithModel:(id)arg0 priceStr:(id)arg1;
- (void)setGoodsMaskView:(id)arg0;
- (void)setPriceBgView:(id)arg0;
- (void)setPriceTypeTextLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (void)click;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;

@end