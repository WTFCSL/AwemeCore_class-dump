//
//     Generated by private class-dump
//

@class AWEPOISpuInfoModel, AWEPOISpuModel, AWEPOIContentItemModel, AWEAwemeModel, AWEUserFavouritePOIMapIconModel, NSString;

@interface AWEUserFavoritePOIInfo : MTLModel <MTLJSONSerializing> {
    long long _collectType;
    AWEPOIContentItemModel *_poiDetail;
    AWEPOISpuInfoModel *_spuInfo;
    AWEAwemeModel *_aweme;
    AWEUserFavouritePOIMapIconModel *_mapIcon;
    AWEPOISpuModel *_spu;
}

@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL isRecommand;
@property (nonatomic) long long collectType;
@property (retain, nonatomic) AWEPOIContentItemModel *poiDetail;
@property (retain, nonatomic) AWEPOISpuInfoModel *spuInfo;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEUserFavouritePOIMapIconModel *mapIcon;
@property (retain, nonatomic) AWEPOISpuModel *spu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (id)spuInfo;
- (void)setSpuInfo:(id)arg0;
- (long long)collectType;
- (void)setCollectType:(long long)arg0;
- (id)poiDetail;
- (void)setPoiDetail:(id)arg0;
- (void)setMapIcon:(id)arg0;
- (id)spu;
- (void)setSpu:(id)arg0;
- (BOOL)isRecommand;
- (void)setIsRecommand:(BOOL)arg0;
- (void).cxx_destruct;
- (id)mapIcon;
- (void)setHasShown:(BOOL)arg0;
- (BOOL)hasShown;

@end
