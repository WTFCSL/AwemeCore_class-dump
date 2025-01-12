//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEPOISearchGuideModel, NSDictionary, NSMutableArray, AWEPOICommonBannerModel, AWEPOISearchAddLocationBannerModel, NSNumber, CLLocation;

@interface AWEPOISearchLocationDataManager : AWEListDataController <AWEPOISearchLocationDataManagerProtocol> {
    BOOL _needCurrentCity;
    BOOL _showSearchGuide;
    BOOL _useInputtips;
    CLLocation *_location;
    CLLocation *_safeLocation;
    NSArray *_locationInfos;
    NSString *_keywords;
    unsigned long long _type;
    long long _searchType;
    NSDictionary *_logPassback;
    long long _poiStickerEntranceType;
    unsigned long long _stage;
    NSString *_awemeID;
    NSArray *_AIRecommendPOIs;
    NSArray *_topics;
    NSString *_creationID;
    AWEPOICommonBannerModel *_banner;
    AWEPOICommonBannerModel *_storeBanner;
    NSDictionary *_cpsSignModal;
    NSString *_currentPOIId;
    NSString *_shootWay;
    AWEPOISearchGuideModel *_searchGuide;
    NSNumber *_page;
    NSDictionary *_extraRequestParams;
    NSMutableArray *_placeholderArrayForSchoolType;
    NSMutableArray *_placeholderArrayForNoShowLocationSection;
    AWEPOISearchAddLocationBannerModel *_addLocationBannerModel;
    id /* block */ _searchCompletion;
    long long _locationSource;
    NSDictionary *_cacheRequestDict;
    unsigned long long _sessionID;
    NSString *_urlString;
}

@property (retain, nonatomic) NSNumber *page;
@property (copy, nonatomic) id /* block */ searchCompletion;
@property (nonatomic) long long locationSource;
@property (retain, nonatomic) NSDictionary *cacheRequestDict;
@property (nonatomic) unsigned long long sessionID;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSArray *locationInfos;
@property (copy, nonatomic) NSString *keywords;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long searchType;
@property (nonatomic) BOOL needCurrentCity;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (nonatomic) long long poiStickerEntranceType;
@property (nonatomic) unsigned long long stage;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSArray *AIRecommendPOIs;
@property (copy, nonatomic) NSArray *topics;
@property (copy, nonatomic) NSString *creationID;
@property (retain, nonatomic) AWEPOICommonBannerModel *banner;
@property (retain, nonatomic) AWEPOICommonBannerModel *storeBanner;
@property (retain, nonatomic) NSDictionary *cpsSignModal;
@property (copy, nonatomic) NSString *currentPOIId;
@property (copy, nonatomic) NSString *shootWay;
@property (nonatomic) BOOL showSearchGuide;
@property (retain, nonatomic) AWEPOISearchGuideModel *searchGuide;
@property (nonatomic) BOOL useInputtips;
@property (copy, nonatomic) NSDictionary *extraRequestParams;
@property (retain, nonatomic) NSMutableArray *placeholderArrayForSchoolType;
@property (retain, nonatomic) NSMutableArray *placeholderArrayForNoShowLocationSection;
@property (retain, nonatomic) AWEPOISearchAddLocationBannerModel *addLocationBannerModel;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) CLLocation *safeLocation;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) BOOL refreshHasMore;
@property (nonatomic) BOOL loadmoreHasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (void)setShootWay:(id)arg0;
- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (id)shootWay;
- (id)searchRegionTypeString;
- (id)AIRecommendPOIs;
- (void)setAIRecommendPOIs:(id)arg0;
- (id)creationID;
- (void)setCreationID:(id)arg0;
- (void)setExtraRequestParams:(id)arg0;
- (id)extraRequestParams;
- (void)setSafeLocation:(id)arg0;
- (void)setLocationInfos:(id)arg0;
- (id)requestParameter;
- (id)locationInfos;
- (void)setLocationSource:(long long)arg0;
- (BOOL)needCurrentCity;
- (BOOL)useInputtips;
- (id)addLocationBannerModel;
- (void)setAddLocationBannerModel:(id)arg0;
- (id)storeBanner;
- (void)setStoreBanner:(id)arg0;
- (id)cpsSignModal;
- (void)setCpsSignModal:(id)arg0;
- (BOOL)showSearchGuide;
- (void)setShowSearchGuide:(BOOL)arg0;
- (id)searchGuide;
- (void)setSearchGuide:(id)arg0;
- (void)p_fetchLocationArrayWithParameter:(id)arg0 pullType:(long long)arg1 completion:(id /* block */)arg2;
- (void)refreshPublishDataWithCompletion:(id /* block */)arg0;
- (void)setCacheRequestDict:(id)arg0;
- (id)p_invalidParameterError;
- (id)base64StringWithString:(id)arg0;
- (void)p_requestLocationArrayWithParameters:(id)arg0 pullType:(long long)arg1 completion:(id /* block */)arg2;
- (long long)poiStickerEntranceType;
- (long long)locationSource;
- (id)cacheRequestDict;
- (id)currentPOIId;
- (void)setNeedCurrentCity:(BOOL)arg0;
- (void)setUseInputtips:(BOOL)arg0;
- (id)placeholderArrayForSchoolType;
- (id)placeholderArrayForNoShowLocationSection;
- (void)setPoiStickerEntranceType:(long long)arg0;
- (void)setCurrentPOIId:(id)arg0;
- (void)setPlaceholderArrayForSchoolType:(id)arg0;
- (void)setPlaceholderArrayForNoShowLocationSection:(id)arg0;
- (id)urlString;
- (id)banner;
- (void)setSearchType:(long long)arg0;
- (long long)searchType;
- (id)init;
- (id)page;
- (void).cxx_destruct;
- (void)setSessionID:(unsigned long long)arg0;
- (void)setPage:(id)arg0;
- (unsigned long long)sessionID;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (unsigned long long)type;
- (unsigned long long)stage;
- (id)location;
- (void)setTopics:(id)arg0;
- (id)initWithURLString:(id)arg0;
- (void)setType:(unsigned long long)arg0;
- (void)setLocation:(id)arg0;
- (void)setUrlString:(id)arg0;
- (id)keywords;
- (void)setStage:(unsigned long long)arg0;
- (id)topics;
- (void)setBanner:(id)arg0;
- (void)setKeywords:(id)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (id /* block */)searchCompletion;
- (void)setSearchCompletion:(id /* block */)arg0;
- (id)safeLocation;

@end
