//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEPOIDouDiscountResModel, AWEPoiRankConfigModel, NSMutableDictionary, AWEURLModel, AWEPOILynxModel, NSMutableArray, NSNumber;

@interface AWEPOIFeedListDataController : AWEListDataController <AWEPOIFeedListDataControllerProtocol> {
    BOOL _didSuccessGetRefreshData;
    BOOL _isStopLoadingView;
    BOOL _hasMore;
    NSString *_rankTab;
    NSString *_rankGenre;
    NSString *_rankTitle;
    NSString *_rankPoiDistrict;
    AWEURLModel *_rankFloatIconURL;
    AWEURLModel *_rankBarIconURL;
    NSString *_detailRank;
    AWEPoiRankConfigModel *_rankConfig;
    NSMutableArray *_poiRankAwemeDataSource;
    NSMutableArray *_poiRankDataSource;
    long long _rankType;
    NSString *_ipTheme;
    NSString *_ipName;
    long long _rankBarIconWidth;
    long long _rankBarIconHeight;
    long long _rankFloatIconWidth;
    long long _rankFloatIconHeight;
    unsigned long long _sceneType;
    NSString *_poiID;
    NSString *_sessionID;
    NSString *_extraParams;
    long long _pageCount;
    NSArray *_initialAwemeList;
    NSNumber *_initialCursor;
    NSNumber *_initialPageCount;
    NSString *_dynamicText;
    NSString *_title;
    NSString *_subTitle;
    NSArray *_hotWordList;
    long long _refreshCount;
    long long _loadMoreCount;
    AWEPOILynxModel *_poiFeedFixLayer;
    NSArray *_poiRankResources;
    unsigned long long _preloadStatus;
    NSArray *_lastShowPOIs;
    long long _nextCursor;
    NSString *_removeAwemeID;
    NSMutableDictionary *_awemeIDToCursor;
    AWEPOIDouDiscountResModel *_douDiscountRes;
    NSString *_rankBottomURL;
    NSString *_rankTopURL;
    long long _innerStoreListTheme;
    NSString *_poiRankRes;
}

@property (nonatomic) unsigned long long sceneType;
@property (copy, nonatomic) NSArray *poiRankResources;
@property (nonatomic) unsigned long long preloadStatus;
@property (copy, nonatomic) NSArray *lastShowPOIs;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *removeAwemeID;
@property (retain, nonatomic) NSMutableDictionary *awemeIDToCursor;
@property (nonatomic) BOOL didSuccessGetRefreshData;
@property (copy, nonatomic) NSString *dynamicText;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSArray *hotWordList;
@property (retain, nonatomic) AWEPOIDouDiscountResModel *douDiscountRes;
@property (copy, nonatomic) NSString *rankGenre;
@property (copy, nonatomic) NSString *rankTab;
@property (copy, nonatomic) NSString *detailRank;
@property (copy, nonatomic) NSString *rankPoiDistrict;
@property (copy, nonatomic) NSString *rankTitle;
@property (retain, nonatomic) AWEURLModel *rankBarIconURL;
@property (retain, nonatomic) AWEURLModel *rankFloatIconURL;
@property (retain, nonatomic) AWEPoiRankConfigModel *rankConfig;
@property (copy, nonatomic) NSString *rankBottomURL;
@property (copy, nonatomic) NSString *rankTopURL;
@property (nonatomic) long long innerStoreListTheme;
@property (copy, nonatomic) NSString *poiRankRes;
@property (copy, nonatomic) NSString *douDiscountOuterGroupID;
@property (copy, nonatomic) NSString *douDiscountOuterGroupType;
@property (copy, nonatomic) NSString *ipName;
@property (nonatomic) long long rankType;
@property (copy, nonatomic) NSString *ipTheme;
@property (nonatomic) long long rankFloatIconWidth;
@property (nonatomic) long long rankFloatIconHeight;
@property (nonatomic) long long rankBarIconWidth;
@property (nonatomic) long long rankBarIconHeight;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *extraParams;
@property (nonatomic) long long pageCount;
@property (copy, nonatomic) NSArray *initialAwemeList;
@property (retain, nonatomic) NSNumber *initialCursor;
@property (retain, nonatomic) NSNumber *initialPageCount;
@property (nonatomic) BOOL isStopLoadingView;
@property (readonly, nonatomic) NSMutableArray *poiRankDataSource;
@property (readonly, nonatomic) NSMutableArray *poiRankAwemeDataSource;
@property (nonatomic) long long refreshCount;
@property (nonatomic) long long loadMoreCount;
@property (retain, nonatomic) AWEPOILynxModel *poiFeedFixLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getExpectedImageSizeInfo;

- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (long long)nextCursor;
- (void)setNextCursor:(long long)arg0;
- (id)extraParams;
- (long long)loadMoreCount;
- (id)poiID;
- (void)setExtraParams:(id)arg0;
- (void)setPoiID:(id)arg0;
- (void)setLoadMoreCount:(long long)arg0;
- (id)rankTitle;
- (void)setRankTitle:(id)arg0;
- (id)dynamicText;
- (void)setDynamicText:(id)arg0;
- (id)initWithSceneType:(unsigned long long)arg0;
- (id)initialAwemeList;
- (void)setInitialAwemeList:(id)arg0;
- (id)initialCursor;
- (void)setInitialCursor:(id)arg0;
- (id)initialPageCount;
- (void)setInitialPageCount:(id)arg0;
- (id)hotWordList;
- (BOOL)didSuccessGetRefreshData;
- (id)poiFeedFixLayer;
- (void)setPoiFeedFixLayer:(id)arg0;
- (void)setDouDiscountOuterGroupID:(id)arg0;
- (void)setDouDiscountOuterGroupType:(id)arg0;
- (void)enablePreloading;
- (void)trackDouDiscountPerformanceWithFirstFrameDuration:(long long)arg0 outerGroupId:(id)arg1;
- (id)poiRankInfoWithIndex:(long long)arg0;
- (void)trackDouDiscountInnerListDuration;
- (id)rankBarIconURL;
- (id)rankFloatIconURL;
- (id)rankGenre;
- (id)rankTab;
- (id)detailRank;
- (id)rankPoiDistrict;
- (id)rankTopURL;
- (id)rankBottomURL;
- (long long)innerStoreListTheme;
- (id)poiRankAwemeDataSource;
- (id)poiRankDataSource;
- (id)ipName;
- (id)ipTheme;
- (long long)rankFloatIconWidth;
- (long long)rankFloatIconHeight;
- (long long)rankBarIconWidth;
- (long long)rankBarIconHeight;
- (unsigned long long)preloadStatus;
- (BOOL)isStopLoadingView;
- (void)setIsStopLoadingView:(BOOL)arg0;
- (id)douDiscountOuterGroupID;
- (id)douDiscountOuterGroupType;
- (id)awemeIDToCursor;
- (id)poiRankFeedList;
- (void)p_bindSingleAwemeWithPOIRankRes:(id)arg0;
- (void)setPoiRankResources:(id)arg0;
- (id)removeAwemeID;
- (void)setRemoveAwemeID:(id)arg0;
- (void)setAwemeIDToCursor:(id)arg0;
- (void)setHotWordList:(id)arg0;
- (void)setDidSuccessGetRefreshData:(BOOL)arg0;
- (id)douDiscountRes;
- (void)setDouDiscountRes:(id)arg0;
- (id)poiRankRes;
- (void)setPoiRankRes:(id)arg0;
- (void)setRankGenre:(id)arg0;
- (void)setRankTab:(id)arg0;
- (void)setDetailRank:(id)arg0;
- (void)setRankPoiDistrict:(id)arg0;
- (void)setRankBarIconURL:(id)arg0;
- (void)setRankFloatIconURL:(id)arg0;
- (id)rankConfig;
- (void)setRankConfig:(id)arg0;
- (void)setIpName:(id)arg0;
- (void)setIpTheme:(id)arg0;
- (void)setRankFloatIconWidth:(long long)arg0;
- (void)setRankFloatIconHeight:(long long)arg0;
- (void)setRankBarIconWidth:(long long)arg0;
- (void)setRankBarIconHeight:(long long)arg0;
- (void)fetchWithCount:(long long)arg0 pullType:(long long)arg1 completion:(id /* block */)arg2;
- (id)p_baseParameters:(BOOL)arg0;
- (void)setRankBottomURL:(id)arg0;
- (void)setRankTopURL:(id)arg0;
- (void)setInnerStoreListTheme:(long long)arg0;
- (id /* block */)isPOIRankStructEqualBlock;
- (id)filterDuplicatedPOIDatasourceWithArray:(id)arg0 isEqual:(id /* block */)arg1;
- (void)setPoiRankDataSource:(id)arg0;
- (void)setPoiRankAwemeDataSource:(id)arg0;
- (void)setLastShowPOIs:(id)arg0;
- (void)monitorFeedListNetworkWithResponse:(id)arg0 error:(id)arg1 starTimeInterval:(double)arg2 parseDataTimeInterval:(double)arg3 isPreloadRequest:(BOOL)arg4 isLoadMoreRequest:(BOOL)arg5 recieveDataInterval:(double)arg6 serverTimeInterval:(double)arg7 clientTimeInterval:(double)arg8;
- (id)lastShowPOIs;
- (id)poiRankResources;
- (id)cursorForAwemeID:(id)arg0;
- (void)insertAwemeListOnTop:(id)arg0;
- (void)bindInitialAwemeWithPOIRankRes;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (id)sessionID;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setRankType:(long long)arg0;
- (void)setPageCount:(long long)arg0;
- (long long)pageCount;
- (id)title;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (id)tabs;
- (void)setTitle:(id)arg0;
- (long long)rankType;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (unsigned long long)sceneType;
- (void)setSceneType:(unsigned long long)arg0;
- (void)setCustomTitle:(id)arg0;
- (long long)refreshCount;
- (void)setRefreshCount:(long long)arg0;
- (void)setPreloadStatus:(unsigned long long)arg0;

@end