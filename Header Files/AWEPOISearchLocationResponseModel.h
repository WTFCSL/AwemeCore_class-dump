//
//     Generated by private class-dump
//

@class NSString, AWEPOISearchGuideModel, NSArray, NSDictionary, AWEPOIInfoModel, AWEPOICommonBannerModel, AWEPOISearchAddLocationBannerModel, AWEPOISearchLifeGovernNoticeModel, NSNumber;

@interface AWEPOISearchLocationResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    BOOL _showSearchGuide;
    NSArray *_poiLocationArray;
    NSNumber *_page;
    unsigned long long _sessionID;
    AWEPOIInfoModel *_currentPOI;
    NSArray *_currentPOIs;
    AWEPOICommonBannerModel *_cpsBanner;
    AWEPOISearchGuideModel *_searchGuide;
    AWEPOICommonBannerModel *_storeBanner;
    NSDictionary *_cpsSignModal;
    NSString *_searchPlaceholder;
    AWEPOISearchAddLocationBannerModel *_addLocationBannerModel;
    AWEPOISearchLifeGovernNoticeModel *_lifeGovernNotice;
    NSArray *_poiSearchRange;
}

@property (copy, nonatomic) NSArray *poiLocationArray;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *page;
@property (nonatomic) unsigned long long sessionID;
@property (retain, nonatomic) AWEPOIInfoModel *currentPOI;
@property (copy, nonatomic) NSArray *currentPOIs;
@property (retain, nonatomic) AWEPOICommonBannerModel *cpsBanner;
@property (nonatomic) BOOL showSearchGuide;
@property (retain, nonatomic) AWEPOISearchGuideModel *searchGuide;
@property (retain, nonatomic) AWEPOICommonBannerModel *storeBanner;
@property (retain, nonatomic) NSDictionary *cpsSignModal;
@property (copy, nonatomic) NSString *searchPlaceholder;
@property (retain, nonatomic) AWEPOISearchAddLocationBannerModel *addLocationBannerModel;
@property (retain, nonatomic) AWEPOISearchLifeGovernNoticeModel *lifeGovernNotice;
@property (copy, nonatomic) NSArray *poiSearchRange;

+ (id)poiLocationArrayJSONTransformer;
+ (id)currentPOIsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setSearchPlaceholder:(id)arg0;
- (id)searchPlaceholder;
- (id)addLocationBannerModel;
- (void)setAddLocationBannerModel:(id)arg0;
- (id)storeBanner;
- (void)setStoreBanner:(id)arg0;
- (id)cpsSignModal;
- (void)setCpsSignModal:(id)arg0;
- (id)cpsBanner;
- (BOOL)showSearchGuide;
- (void)setShowSearchGuide:(BOOL)arg0;
- (id)searchGuide;
- (void)setSearchGuide:(id)arg0;
- (id)poiLocationArray;
- (id)currentPOIs;
- (void)setPoiLocationArray:(id)arg0;
- (id)currentPOI;
- (void)setCurrentPOI:(id)arg0;
- (void)setCurrentPOIs:(id)arg0;
- (void)setCpsBanner:(id)arg0;
- (id)lifeGovernNotice;
- (void)setLifeGovernNotice:(id)arg0;
- (id)poiSearchRange;
- (void)setPoiSearchRange:(id)arg0;
- (id)page;
- (void).cxx_destruct;
- (void)setSessionID:(unsigned long long)arg0;
- (void)setPage:(id)arg0;
- (unsigned long long)sessionID;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;

@end
