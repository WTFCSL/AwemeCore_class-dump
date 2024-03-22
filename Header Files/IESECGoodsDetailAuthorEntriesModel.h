//
//     Generated by private class-dump
//

@class IESECGoodsDetailAuthorShopEntryModel, NSString, IESECURLModel, IESECGoodsDetailAuthorLiveEntryModel, IESECGoodsRankListEntryModel, IESECGoodsDetailAuthorShopBindAuthorModel, IESECGoodsEntryModel;

@interface IESECGoodsDetailAuthorEntriesModel : MTLModel <IESECGoodsDetailShopEntryModel, MTLJSONSerializing> {
    IESECURLModel *_avatar;
    NSString *_name;
    NSString *_originName;
    IESECGoodsDetailAuthorLiveEntryModel *_live;
    IESECGoodsRankListEntryModel *_rankListEntryModel;
    IESECGoodsDetailAuthorShopBindAuthorModel *_referrer;
    IESECGoodsDetailAuthorShopEntryModel *_store;
    IESECGoodsDetailAuthorShopEntryModel *_shop;
    IESECGoodsDetailAuthorShopBindAuthorModel *_shopBindAuthor;
    IESECGoodsEntryModel *_goods3DEntry;
    IESECGoodsEntryModel *_goodsAREntry;
    IESECGoodsDetailAuthorShopEntryModel *_cachedMixModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECGoodsDetailAuthorShopEntryModel *cachedMixModel;
@property (retain, nonatomic) IESECURLModel *avatar;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *originName;
@property (retain, nonatomic) IESECGoodsDetailAuthorLiveEntryModel *live;
@property (retain, nonatomic) IESECGoodsRankListEntryModel *rankListEntryModel;
@property (retain, nonatomic) IESECGoodsDetailAuthorShopBindAuthorModel *referrer;
@property (retain, nonatomic) IESECGoodsDetailAuthorShopEntryModel *store;
@property (retain, nonatomic) IESECGoodsDetailAuthorShopEntryModel *shop;
@property (retain, nonatomic) IESECGoodsDetailAuthorShopBindAuthorModel *shopBindAuthor;
@property (retain, nonatomic) IESECGoodsEntryModel *goods3DEntry;
@property (retain, nonatomic) IESECGoodsEntryModel *goodsAREntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)followStatus;
- (id)brandInfo;
- (long long)goodsCount;
- (id)shop;
- (void)setShop:(id)arg0;
- (id)rankListEntryModel;
- (id)shopBindAuthor;
- (id)promotionInfos;
- (long long)toutiaoGoodsCount;
- (long long)recommendGoodsCount;
- (id)sellRatingInfo;
- (id)shopHeaderIconList;
- (void)setOriginName:(id)arg0;
- (void)setRankListEntryModel:(id)arg0;
- (void)setShopBindAuthor:(id)arg0;
- (id)goods3DEntry;
- (void)setGoods3DEntry:(id)arg0;
- (id)goodsAREntry;
- (void)setGoodsAREntry:(id)arg0;
- (id)cachedMixModel;
- (void)setCachedMixModel:(id)arg0;
- (id)shopMarketingBanner;
- (id)nameSuffix;
- (id)live;
- (void).cxx_destruct;
- (void)setLive:(id)arg0;
- (id)store;
- (void)setStore:(id)arg0;
- (void)setName:(id)arg0;
- (id)buttonTitle;
- (id)name;
- (id)name;
- (id)originName;
- (id)originName;
- (id)avatar;
- (id)avatar;
- (void)setAvatar:(id)arg0;
- (id)URLScheme;
- (id)referrer;
- (void)setReferrer:(id)arg0;
- (BOOL)isStore;
- (id)authorID;

@end
