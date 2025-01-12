//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEECOMIMSubCardRightsParamsModel;

@interface AWEECOMIMGoodsCardModel : AWEECOMIMBaseCardModel <AWEECOMIMSubCardProductSalesCardProtocol, AWEECOMIMCardComponentOperationPanelProtocol, AWEECOMIMSubCardRightsProtocol> {
    NSString *_goodTitle;
    NSString *_goodImg;
    NSString *_showPrice;
    NSString *_sellNum;
    unsigned long long _goodsStatus;
    NSString *_productUrl;
    NSString *_productId;
    NSString *_skuUrl;
    NSArray *_rightsItemArr;
    NSString *_displayRightsText;
    AWEECOMIMSubCardRightsParamsModel *_rightsParamsData;
    NSArray *_buttons;
}

@property (copy, nonatomic) NSString *goodTitle;
@property (copy, nonatomic) NSString *goodImg;
@property (copy, nonatomic) NSString *showPrice;
@property (copy, nonatomic) NSString *sellNum;
@property (nonatomic) unsigned long long goodsStatus;
@property (copy, nonatomic) NSString *productUrl;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *skuUrl;
@property (copy, nonatomic) NSArray *rightsItemArr;
@property (copy, nonatomic) NSString *displayRightsText;
@property (retain, nonatomic) AWEECOMIMSubCardRightsParamsModel *rightsParamsData;
@property (copy, nonatomic) NSArray *buttons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cardViewClass;
+ (Class)cardMsgModelClassFromMessage:(id)arg0;
+ (unsigned long long)goodsStatusDesc:(id)arg0;

- (id)showPrice;
- (void)setShowPrice:(id)arg0;
- (void)updateModelWithData:(id)arg0 encrypted:(BOOL)arg1;
- (void)setGoodTitle:(id)arg0;
- (void)setGoodImg:(id)arg0;
- (id)goodImg;
- (id)goodTitle;
- (void)setSellNum:(id)arg0;
- (void)fetchCardDataWithCompletion:(id /* block */)arg0;
- (id)productUrl;
- (id)rightsItemArr;
- (id)rightsParamsData;
- (void)setProductUrl:(id)arg0;
- (id)sellNum;
- (void)setSkuUrl:(id)arg0;
- (void)setGoodsStatus:(unsigned long long)arg0;
- (void)setRightsParamsData:(id)arg0;
- (void)setRightsItemArr:(id)arg0;
- (void)setDisplayRightsText:(id)arg0;
- (void)getGoodDataWithCompletion:(id /* block */)arg0;
- (id)skuUrl;
- (unsigned long long)goodsStatus;
- (id)displayRightsText;
- (void).cxx_destruct;
- (void)setButtons:(id)arg0;
- (id)buttons;
- (id)productId;
- (void)setProductId:(id)arg0;

@end
