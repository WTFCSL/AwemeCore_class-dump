//
//     Generated by private class-dump
//

@class NSDictionary, AWELifeShelfCardListItemCardDataPOI, AWELifeShelfCardListItemCardDataMinusSaleInfo, AWELifeShelfCardListItemCardDataDisplayControl, NSString, AWELifeShelfCardListItemCardDataLotteryInfo, AWELifeShelfCardListItemBrandLabel, AWELifeShelfCardListItemCardDataBrand, AWELifeShelfCardListItemCardDataFlashSale, AWELifeShelfCardListItemCardDataExecutionPlan, NSArray, NSNumber, AWELifeShelfCardListItemCardDataDrawTicketModel, AWELifeShelfCardListItemCardDataChannelSale;

@interface AWELifeShelfCardListItemCardData : MTLModel <MTLJSONSerializing> {
    BOOL _needRefresh;
    NSArray *_rightList;
    NSString *_title;
    NSString *_actualAmount;
    NSString *_buttonText;
    NSString *_discount;
    AWELifeShelfCardListItemCardDataFlashSale *_flashSale;
    AWELifeShelfCardListItemCardDataChannelSale *_channelSale;
    NSString *_grouponId;
    NSArray *_imageInfo;
    NSString *_imageTagUrl;
    NSArray *_ticket;
    AWELifeShelfCardListItemBrandLabel *_brandLabel;
    AWELifeShelfCardListItemCardDataExecutionPlan *_executionPlan;
    NSArray *_labelList;
    NSString *_originAmount;
    AWELifeShelfCardListItemCardDataPOI *_poi;
    AWELifeShelfCardListItemCardDataBrand *_brand;
    NSString *_soldCount;
    NSString *_source;
    NSNumber *_actualAmountNum;
    NSNumber *_cardType;
    NSNumber *_categoryId;
    NSNumber *_sourceType;
    NSNumber *_stock;
    NSNumber *_consumptionTimes;
    NSString *_cardTypeName;
    long long _productType;
    long long _productBizLine;
    NSNumber *_accountId;
    NSNumber *_soldStartTime;
    NSNumber *_soldEndTime;
    AWELifeShelfCardListItemCardDataDisplayControl *_displayControl;
    AWELifeShelfCardListItemCardDataMinusSaleInfo *_minusSaleInfo;
    NSString *_salePoint;
    AWELifeShelfCardListItemCardDataLotteryInfo *_lotteryInfo;
    NSDictionary *_originData;
    AWELifeShelfCardListItemCardDataDrawTicketModel *_drawTicketParams;
    NSDictionary *_caiJingCoupon;
    NSDictionary *_marketingDisplayInfo;
    NSDictionary *_marketingDisplaySetting;
}

@property (copy, nonatomic) NSArray *rightList;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *actualAmount;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *discount;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataFlashSale *flashSale;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataChannelSale *channelSale;
@property (copy, nonatomic) NSString *grouponId;
@property (copy, nonatomic) NSArray *imageInfo;
@property (copy, nonatomic) NSString *imageTagUrl;
@property (copy, nonatomic) NSArray *ticket;
@property (nonatomic) BOOL needRefresh;
@property (retain, nonatomic) AWELifeShelfCardListItemBrandLabel *brandLabel;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataExecutionPlan *executionPlan;
@property (copy, nonatomic) NSArray *labelList;
@property (copy, nonatomic) NSString *originAmount;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataPOI *poi;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataBrand *brand;
@property (copy, nonatomic) NSString *soldCount;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSNumber *actualAmountNum;
@property (copy, nonatomic) NSNumber *cardType;
@property (copy, nonatomic) NSNumber *categoryId;
@property (copy, nonatomic) NSNumber *sourceType;
@property (copy, nonatomic) NSNumber *stock;
@property (copy, nonatomic) NSNumber *consumptionTimes;
@property (copy, nonatomic) NSString *cardTypeName;
@property (nonatomic) long long productType;
@property (nonatomic) long long productBizLine;
@property (copy, nonatomic) NSNumber *accountId;
@property (copy, nonatomic) NSNumber *soldStartTime;
@property (copy, nonatomic) NSNumber *soldEndTime;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataDisplayControl *displayControl;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataMinusSaleInfo *minusSaleInfo;
@property (copy, nonatomic) NSString *salePoint;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataLotteryInfo *lotteryInfo;
@property (copy, nonatomic) NSDictionary *originData;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataDrawTicketModel *drawTicketParams;
@property (copy, nonatomic) NSDictionary *caiJingCoupon;
@property (copy, nonatomic) NSDictionary *marketingDisplayInfo;
@property (copy, nonatomic) NSDictionary *marketingDisplaySetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageInfoJSONTransformer;
+ (id)rawModelFromJsonString:(id)arg0;
+ (id)ticketJSONTransformer;
+ (id)rawModelFromJsonDictionary:(id)arg0;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setNeedRefresh:(BOOL)arg0;
- (id)poi;
- (void)setPoi:(id)arg0;
- (id)rightList;
- (void)setRightList:(id)arg0;
- (void)setOriginAmount:(id)arg0;
- (id)originAmount;
- (void)setBrandLabel:(id)arg0;
- (id)brandLabel;
- (id)soldCount;
- (void)setSoldCount:(id)arg0;
- (void)setCardTypeName:(id)arg0;
- (id)cardTypeName;
- (id)discount;
- (void)setDiscount:(id)arg0;
- (id)originData;
- (void)setOriginData:(id)arg0;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg0;
- (id)grouponId;
- (id)minusSaleInfo;
- (id)displayControl;
- (id)drawTicketParams;
- (void)setDrawTicketParams:(id)arg0;
- (id)consumptionTimes;
- (void)setConsumptionTimes:(id)arg0;
- (void)setGrouponId:(id)arg0;
- (void)setMinusSaleInfo:(id)arg0;
- (id)soldEndTime;
- (void)setSoldEndTime:(id)arg0;
- (id)soldStartTime;
- (void)setSoldStartTime:(id)arg0;
- (long long)productBizLine;
- (void)setProductBizLine:(long long)arg0;
- (void)setDisplayControl:(id)arg0;
- (void)setActualAmount:(id)arg0;
- (id)actualAmount;
- (id)labelList;
- (void)setLabelList:(id)arg0;
- (id)flashSale;
- (void)setFlashSale:(id)arg0;
- (id)executionPlan;
- (id)salePoint;
- (void)setSalePoint:(id)arg0;
- (id)imageTagUrl;
- (id)actualAmountNum;
- (void)mergeFromCardData:(id)arg0;
- (void)updateV2CardDataWithNewCardData:(id)arg0 isRefresh:(BOOL)arg1;
- (void)updateCardLotteryDataForNonDraw;
- (void)setActualAmountNum:(id)arg0;
- (id)channelSale;
- (void)setChannelSale:(id)arg0;
- (id)caiJingCoupon;
- (void)setCaiJingCoupon:(id)arg0;
- (void)setImageTagUrl:(id)arg0;
- (id)marketingDisplayInfo;
- (void)setMarketingDisplayInfo:(id)arg0;
- (id)marketingDisplaySetting;
- (void)setMarketingDisplaySetting:(id)arg0;
- (void)setExecutionPlan:(id)arg0;
- (void)setSourceType:(id)arg0;
- (id)sourceType;
- (long long)productType;
- (void)setAccountId:(id)arg0;
- (void)setProductType:(long long)arg0;
- (id)source;
- (void).cxx_destruct;
- (BOOL)needRefresh;
- (id)accountId;
- (id)title;
- (id)buttonText;
- (void)setSource:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)imageInfo;
- (void)setImageInfo:(id)arg0;
- (id)ticket;
- (void)setTicket:(id)arg0;
- (void)setButtonText:(id)arg0;
- (id)categoryId;
- (id)brand;
- (id)cardType;
- (void)setCardType:(id)arg0;
- (void)setBrand:(id)arg0;
- (void)setCategoryId:(id)arg0;
- (id)stock;
- (void)setStock:(id)arg0;

@end
