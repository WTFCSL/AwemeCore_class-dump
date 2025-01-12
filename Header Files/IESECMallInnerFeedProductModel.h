//
//     Generated by private class-dump
//

@class IESECMallInnerFeedProductSKUInfoModel, IESECMallInnerFeedProductShopInfoModel, IESECMallInnerFeedProductLogisticsInfoModel, IESECMallInnerFeedProductCartInfoModel, NSDictionary, IESECMallInnerFeedProductCoverInfoModel, IESECMallInnerFeedProductCommentInfoModel, IESECMallInnerFeedProductTitleInfoModel, IESECMallInnerFeedProductPriceModel, NSString, IESECMallInnerFeedProductCollectInfoModel, IESECMallInnerFeedProductLinkInfoModel, IESECMallInnerFeedProductShareInfoModel, IESECMallInnerFeedProductBuyButtonInfoModel, NSArray, IESECMallInnerFeedProductBaseInfoModel, IESECMallInnerFeedProductSalesInfoModel;

@interface IESECMallInnerFeedProductModel : MTLModel <MTLJSONSerializing> {
    BOOL _plachHolderData;
    IESECMallInnerFeedProductBaseInfoModel *_baseInfo;
    IESECMallInnerFeedProductTitleInfoModel *_titleInfo;
    IESECMallInnerFeedProductCoverInfoModel *_coverInfo;
    NSArray *_titleTagsInfo;
    IESECMallInnerFeedProductPriceModel *_priceInfo;
    IESECMallInnerFeedProductSalesInfoModel *_salesInfo;
    NSArray *_marketingTagsInfo;
    NSArray *_privilegeTagsInfo;
    NSArray *_recReasonsInfo;
    IESECMallInnerFeedProductShopInfoModel *_shopInfo;
    IESECMallInnerFeedProductLogisticsInfoModel *_logisiticsInfo;
    IESECMallInnerFeedProductCommentInfoModel *_commentInfo;
    IESECMallInnerFeedProductCartInfoModel *_cartInfo;
    IESECMallInnerFeedProductCollectInfoModel *_collectInfo;
    IESECMallInnerFeedProductBuyButtonInfoModel *_buyButtonInfo;
    IESECMallInnerFeedProductLinkInfoModel *_linkInfo;
    IESECMallInnerFeedProductSKUInfoModel *_skuInfo;
    IESECMallInnerFeedProductShareInfoModel *_shareInfo;
    NSDictionary *_custom;
    NSDictionary *_lastSelectSKUDict;
}

@property (nonatomic) BOOL plachHolderData;
@property (retain, nonatomic) IESECMallInnerFeedProductBaseInfoModel *baseInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductTitleInfoModel *titleInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductCoverInfoModel *coverInfo;
@property (copy, nonatomic) NSArray *titleTagsInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductPriceModel *priceInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductSalesInfoModel *salesInfo;
@property (copy, nonatomic) NSArray *marketingTagsInfo;
@property (copy, nonatomic) NSArray *privilegeTagsInfo;
@property (copy, nonatomic) NSArray *recReasonsInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductShopInfoModel *shopInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductLogisticsInfoModel *logisiticsInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductCommentInfoModel *commentInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductCartInfoModel *cartInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductCollectInfoModel *collectInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductBuyButtonInfoModel *buyButtonInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductLinkInfoModel *linkInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductSKUInfoModel *skuInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductShareInfoModel *shareInfo;
@property (retain, nonatomic) NSDictionary *custom;
@property (retain, nonatomic) NSDictionary *lastSelectSKUDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleTagsInfoJSONTransformer;
+ (id)marketingTagsInfoJSONTransformer;
+ (id)privilegeTagsInfoJSONTransformer;
+ (id)recReasonsInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setCommentInfo:(id)arg0;
- (void)setCollectInfo:(id)arg0;
- (id)collectInfo;
- (id)linkInfo;
- (id)baseInfo;
- (void)setBaseInfo:(id)arg0;
- (void)setLinkInfo:(id)arg0;
- (id)shopInfo;
- (void)setShopInfo:(id)arg0;
- (id)salesInfo;
- (void)setSalesInfo:(id)arg0;
- (id)priceInfo;
- (void)setPriceInfo:(id)arg0;
- (id)coverInfo;
- (void)setCoverInfo:(id)arg0;
- (id)titleInfo;
- (void)setTitleInfo:(id)arg0;
- (id)marketingTagsInfo;
- (id)recReasonsInfo;
- (id)cartInfo;
- (id)buyButtonInfo;
- (void)setPlachHolderData:(BOOL)arg0;
- (BOOL)plachHolderData;
- (id)titleTagsInfo;
- (id)privilegeTagsInfo;
- (id)logisiticsInfo;
- (id)skuInfo;
- (id)lastSelectSKUDict;
- (void)setLastSelectSKUDict:(id)arg0;
- (void)setTitleTagsInfo:(id)arg0;
- (void)setMarketingTagsInfo:(id)arg0;
- (void)setPrivilegeTagsInfo:(id)arg0;
- (void)setRecReasonsInfo:(id)arg0;
- (void)setLogisiticsInfo:(id)arg0;
- (void)setCartInfo:(id)arg0;
- (void)setBuyButtonInfo:(id)arg0;
- (void)setSkuInfo:(id)arg0;
- (void).cxx_destruct;
- (id)shareInfo;
- (void)setShareInfo:(id)arg0;
- (id)custom;
- (void)setCustom:(id)arg0;
- (id)commentInfo;

@end
