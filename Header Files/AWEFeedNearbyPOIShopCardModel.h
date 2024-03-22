//
//     Generated by private class-dump
//

@class AWEFeedShopSpuInfoModel, NSArray, NSDictionary, AWEPOIContentItemModel, NSString, AWEURLModel;

@interface AWEFeedNearbyPOIShopCardModel : MTLModel <MTLJSONSerializing> {
    AWEPOIContentItemModel *_poiInfo;
    AWEFeedShopSpuInfoModel *_spuInfo;
    NSArray *_recommendInfo;
    NSArray *_nearbyPoi;
    AWEURLModel *_music;
    NSDictionary *_serverControlParams;
    NSDictionary *_backgroundInfo;
    NSArray *_spuInfoList;
    NSString *_schema;
    long long _bgColor;
    unsigned long long _style;
    NSString *_lynxURL;
    unsigned long long _moduleType;
    long long _cardShowLimitDaily;
    long long _cardShowInterval;
    long long _cardShowLimitExpInfo;
}

@property (retain, nonatomic) AWEPOIContentItemModel *poiInfo;
@property (retain, nonatomic) AWEFeedShopSpuInfoModel *spuInfo;
@property (copy, nonatomic) NSArray *recommendInfo;
@property (copy, nonatomic) NSArray *nearbyPoi;
@property (retain, nonatomic) AWEURLModel *music;
@property (readonly, copy, nonatomic) NSDictionary *serverControlParams;
@property (readonly, copy, nonatomic) NSDictionary *backgroundInfo;
@property (copy, nonatomic) NSArray *spuInfoList;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long bgColor;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *lynxURL;
@property (nonatomic) unsigned long long moduleType;
@property (readonly, copy, nonatomic) NSDictionary *frequencyParams;
@property (nonatomic) long long cardShowLimitDaily;
@property (nonatomic) long long cardShowInterval;
@property (nonatomic) long long cardShowLimitExpInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)recommendInfoJSONTransformer;
+ (id)nearbyPoiJSONTransformer;
+ (id)spuInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)poiInfo;
- (void)setLynxURL:(id)arg0;
- (id)lynxURL;
- (void)setPoiInfo:(id)arg0;
- (id)recommendInfo;
- (void)setRecommendInfo:(id)arg0;
- (id)serverControlParams;
- (id)backgroundInfo;
- (id)frequencyParams;
- (long long)cardShowLimitDaily;
- (long long)cardShowInterval;
- (long long)cardShowLimitExpInfo;
- (id)bgColorString;
- (id)spuInfo;
- (void)setSpuInfo:(id)arg0;
- (id)nearbyPoi;
- (void)setNearbyPoi:(id)arg0;
- (id)spuInfoList;
- (void)setSpuInfoList:(id)arg0;
- (void)setCardShowLimitDaily:(long long)arg0;
- (void)setCardShowInterval:(long long)arg0;
- (void)setCardShowLimitExpInfo:(long long)arg0;
- (id)music;
- (void)setSchema:(id)arg0;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)setMusic:(id)arg0;
- (unsigned long long)moduleType;
- (id)schema;
- (void)setStyle:(unsigned long long)arg0;
- (void)setModuleType:(unsigned long long)arg0;
- (long long)bgColor;
- (void)setBgColor:(long long)arg0;

@end