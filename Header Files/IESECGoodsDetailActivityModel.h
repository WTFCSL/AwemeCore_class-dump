//
//     Generated by private class-dump
//

@class IESECGoodsAuctionModel, IESECGoodsGroupBuyingModel, IESECGoodsWarmupModel, NSDictionary, IESECCommonGirdleActivityModelV2, IESECGoodsMarketingFloorModel, IESECGoodsQualificationActivity, IESECGoodsSeckillModel, IESECSubsidyActivityModel, IESECGoodsIPActivityModel, IESECGoodsPresaleModel, IESECGoodsFullReductionModel, IESECCommonGirdleActivityModel, NSString, IESECGoodsMemberSampleModel, IESECGoodsDepositPresaleModel;

@interface IESECGoodsDetailActivityModel : MTLModel <MTLJSONSerializing> {
    IESECGoodsFullReductionModel *_fullReduction;
    IESECGoodsPresaleModel *_presale;
    IESECGoodsSeckillModel *_seckill;
    IESECGoodsWarmupModel *_warmup;
    IESECGoodsGroupBuyingModel *_groupbuy;
    IESECGoodsDepositPresaleModel *_depositPresale;
    IESECGoodsMarketingFloorModel *_bannerActivity;
    IESECGoodsMarketingFloorModel *_textActivity;
    IESECGoodsIPActivityModel *_ipActivity;
    NSDictionary *_mfPromotionEvent;
    IESECGoodsAuctionModel *_auction;
    IESECSubsidyActivityModel *_subsidy;
    IESECGoodsMemberSampleModel *_memberSample;
    IESECGoodsQualificationActivity *_qualificationActivity;
    long long _interalFeedActivityStyle;
    IESECCommonGirdleActivityModel *_commonGirdle;
    IESECCommonGirdleActivityModelV2 *_commonGirdleV2;
}

@property (retain, nonatomic) IESECGoodsFullReductionModel *fullReduction;
@property (retain, nonatomic) IESECGoodsPresaleModel *presale;
@property (retain, nonatomic) IESECGoodsSeckillModel *seckill;
@property (retain, nonatomic) IESECGoodsWarmupModel *warmup;
@property (retain, nonatomic) IESECGoodsGroupBuyingModel *groupbuy;
@property (retain, nonatomic) IESECGoodsDepositPresaleModel *depositPresale;
@property (retain, nonatomic) IESECGoodsMarketingFloorModel *bannerActivity;
@property (retain, nonatomic) IESECGoodsMarketingFloorModel *textActivity;
@property (retain, nonatomic) IESECGoodsIPActivityModel *ipActivity;
@property (retain, nonatomic) NSDictionary *mfPromotionEvent;
@property (retain, nonatomic) IESECGoodsAuctionModel *auction;
@property (retain, nonatomic) IESECSubsidyActivityModel *subsidy;
@property (retain, nonatomic) IESECGoodsMemberSampleModel *memberSample;
@property (retain, nonatomic) IESECGoodsQualificationActivity *qualificationActivity;
@property (nonatomic) long long interalFeedActivityStyle;
@property (retain, nonatomic) IESECCommonGirdleActivityModel *commonGirdle;
@property (retain, nonatomic) IESECCommonGirdleActivityModelV2 *commonGirdleV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)textActivity;
- (id)fullReduction;
- (void)setFullReduction:(id)arg0;
- (id)subsidy;
- (id)ipActivity;
- (id)depositPresale;
- (id)commonGirdle;
- (id)seckill;
- (id)bannerActivity;
- (void)setBannerActivity:(id)arg0;
- (id)groupbuy;
- (void)setGroupbuy:(id)arg0;
- (id)auction;
- (id)presale;
- (id)memberSample;
- (id)qualificationActivity;
- (id)commonGirdleV2;
- (void)setSubsidy:(id)arg0;
- (id)mfPromotionEvent;
- (long long)interalFeedActivityStyle;
- (void)setPresale:(id)arg0;
- (void)setSeckill:(id)arg0;
- (void)setDepositPresale:(id)arg0;
- (void)setTextActivity:(id)arg0;
- (void)setIpActivity:(id)arg0;
- (void)setMfPromotionEvent:(id)arg0;
- (void)setAuction:(id)arg0;
- (void)setMemberSample:(id)arg0;
- (void)setQualificationActivity:(id)arg0;
- (void)setInteralFeedActivityStyle:(long long)arg0;
- (void)setCommonGirdle:(id)arg0;
- (void)setCommonGirdleV2:(id)arg0;
- (void).cxx_destruct;
- (id)warmup;
- (void)setWarmup:(id)arg0;

@end