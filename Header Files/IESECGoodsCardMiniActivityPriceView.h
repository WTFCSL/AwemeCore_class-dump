//
//     Generated by private class-dump
//

@class IESECInsetsLabel, UIStackView, IESECGoodsPriceLabel, IESECGoodsDetailParameters, UILabel;

@interface IESECGoodsCardMiniActivityPriceView : UIView <IESECLLComponent> {
    IESECGoodsDetailParameters *_parameters;
    UIStackView *_container;
    IESECInsetsLabel *_activityLabel;
    IESECGoodsPriceLabel *_priceLabel;
    IESECGoodsPriceLabel *_marketPriceLabel;
    IESECInsetsLabel *_depositLabel;
    IESECInsetsLabel *_depositPresaleLabel;
    UILabel *_salesLabel;
}

@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (retain, nonatomic) UIStackView *container;
@property (retain, nonatomic) IESECInsetsLabel *activityLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *marketPriceLabel;
@property (retain, nonatomic) IESECInsetsLabel *depositLabel;
@property (retain, nonatomic) IESECInsetsLabel *depositPresaleLabel;
@property (retain, nonatomic) UILabel *salesLabel;

- (void)updateUIWithModel:(id)arg0;
- (void)setSalesLabel:(id)arg0;
- (id)salesLabel;
- (void)setMarketPriceLabel:(id)arg0;
- (id)marketPriceLabel;
- (id)depositPresaleLabel;
- (id)depositLabel;
- (void)setDepositLabel:(id)arg0;
- (void)setDepositPresaleLabel:(id)arg0;
- (id)container;
- (id)init;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (void)setParameters:(id)arg0;
- (id)parameters;
- (void)setActivityLabel:(id)arg0;
- (id)activityLabel;
- (void)setupSubviews;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;

@end
