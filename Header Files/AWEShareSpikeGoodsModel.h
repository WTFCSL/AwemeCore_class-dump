//
//     Generated by private class-dump
//

@class AWEShareSpikeGoodsIMInfoModel, NSString, AWEShareSpikeGoodsPriceModel, NSArray, AWEShareSpikeGoodsCampaignModel, AWEURLModel;

@interface AWEShareSpikeGoodsModel : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_schema;
    AWEURLModel *_image;
    NSString *_subTitle;
    NSString *_channelDesc;
    AWEShareSpikeGoodsPriceModel *_price;
    long long _purchaseStatus;
    NSArray *_tags;
    NSArray *_indemnities;
    NSString *_benefitDesc;
    AWEURLModel *_badgeInfo;
    AWEShareSpikeGoodsIMInfoModel *_imInfo;
    AWEShareSpikeGoodsCampaignModel *_campaign;
    NSString *_detailUrl;
    NSString *_decisionUrl;
    NSString *_shareTemplate;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEURLModel *image;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *channelDesc;
@property (retain, nonatomic) AWEShareSpikeGoodsPriceModel *price;
@property (nonatomic) long long purchaseStatus;
@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSArray *indemnities;
@property (copy, nonatomic) NSString *benefitDesc;
@property (retain, nonatomic) AWEURLModel *badgeInfo;
@property (retain, nonatomic) AWEShareSpikeGoodsIMInfoModel *imInfo;
@property (retain, nonatomic) AWEShareSpikeGoodsCampaignModel *campaign;
@property (copy, nonatomic) NSString *detailUrl;
@property (copy, nonatomic) NSString *decisionUrl;
@property (copy, nonatomic) NSString *shareTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageJSONTransformer;
+ (id)tagsJSONTransformer;
+ (id)imInfoJSONTransformer;
+ (id)campaignJSONTransformer;
+ (id)badgeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)priceJSONTransformer;

- (id)imInfo;
- (void)setImInfo:(id)arg0;
- (id)detailUrl;
- (void)setPurchaseStatus:(long long)arg0;
- (long long)purchaseStatus;
- (void)setDetailUrl:(id)arg0;
- (id)benefitDesc;
- (void)setBenefitDesc:(id)arg0;
- (id)channelDesc;
- (void)setChannelDesc:(id)arg0;
- (id)indemnities;
- (void)setIndemnities:(id)arg0;
- (id)campaign;
- (void)setCampaign:(id)arg0;
- (id)decisionUrl;
- (void)setDecisionUrl:(id)arg0;
- (id)shareTemplate;
- (void)setShareTemplate:(id)arg0;
- (id)price;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)image;
- (id)tags;
- (id)title;
- (void)setImage:(id)arg0;
- (void)setTags:(id)arg0;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (id)schema;
- (void)setTitle:(id)arg0;
- (void)setPrice:(id)arg0;
- (void)setBadgeInfo:(id)arg0;
- (id)badgeInfo;

@end