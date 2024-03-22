//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEECOMIMTransferUserToShopCardModel : AWEECOMIMBaseCardModel <AWEECOMIMCardComponentCommonTitleViewProtocol, AWEECOMIMSubCardProductSalesCardProtocol, AWEECOMIMSubCardOrderCardProtocol, AWEECOMIMCardComponentMultiIconLabelViewProtocol> {
    NSString *_title;
    NSString *_statusDesc;
    NSString *_productId;
    NSString *_productUrl;
    NSString *_goodTitle;
    NSString *_goodImg;
    NSString *_showPrice;
    NSString *_sellNum;
    NSString *_orderId;
    NSString *_goodNum;
    NSArray *_multiLineDesc;
    NSArray *_multiLineIcon;
}

@property (copy, nonatomic) NSArray *multiLineIcon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *statusDesc;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *productUrl;
@property (copy, nonatomic) NSString *goodTitle;
@property (copy, nonatomic) NSString *goodImg;
@property (copy, nonatomic) NSString *showPrice;
@property (copy, nonatomic) NSString *sellNum;
@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *goodNum;
@property (copy, nonatomic) NSArray *multiLineDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cardViewClass;

- (id)showPrice;
- (void)setShowPrice:(id)arg0;
- (id)orderId;
- (void)setOrderId:(id)arg0;
- (id)statusDesc;
- (void)setStatusDesc:(id)arg0;
- (void)updateModelWithData:(id)arg0 encrypted:(BOOL)arg1;
- (void)setGoodTitle:(id)arg0;
- (void)setGoodImg:(id)arg0;
- (void)setGoodNum:(id)arg0;
- (id)goodImg;
- (id)goodTitle;
- (id)goodNum;
- (void)setSellNum:(id)arg0;
- (id)productUrl;
- (id)multiLineDesc;
- (id)iconForIndex:(unsigned long long)arg0;
- (void)setProductUrl:(id)arg0;
- (id)sellNum;
- (void)setMultiLineDesc:(id)arg0;
- (void)setMultiLineIcon:(id)arg0;
- (id)multiLineIcon;
- (void).cxx_destruct;
- (id)title;
- (id)productId;
- (void)setTitle:(id)arg0;
- (void)setProductId:(id)arg0;

@end