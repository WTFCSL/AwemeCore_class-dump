//
//     Generated by private class-dump
//

@class NSString, NSArray, NSNumber, AWEPOILynxModel;

@protocol AWEPOIFeedListDataControllerProtocol <NSObject>

@property (readonly, nonatomic) unsigned long long sceneType;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *extraParams;
@property (nonatomic) long long pageCount;
@property (copy, nonatomic) NSArray *initialAwemeList;
@property (retain, nonatomic) NSNumber *initialCursor;
@property (retain, nonatomic) NSNumber *initialPageCount;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, copy, nonatomic) NSArray *hotWordList;
@property (readonly, nonatomic) BOOL didSuccessGetRefreshData;
@property (retain, nonatomic) AWEPOILynxModel *poiFeedFixLayer;
@property (readonly, nonatomic) unsigned long long preloadStatus;
@property (readonly, copy, nonatomic) NSString *dynamicText;
@property (nonatomic) BOOL isStopLoadingView;
@property (nonatomic) long long refreshCount;
@property (nonatomic) long long loadMoreCount;

- (id)extraParams;
- (id)poiID;
- (void)setExtraParams:(id)arg0;
- (void)setPoiID:(id)arg0;
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
- (void)setSessionID:(id)arg0;
- (id)sessionID;
- (void)setPageCount:(long long)arg0;
- (long long)pageCount;
- (id)title;
- (id)subTitle;
- (id)tabs;
- (unsigned long long)sceneType;

@optional

- (long long)loadMoreCount;
- (void)setLoadMoreCount:(long long)arg0;
- (id)rankTitle;
- (id)dynamicText;
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
- (long long)rankType;
- (void)setCustomTitle:(id)arg0;
- (long long)refreshCount;
- (void)setRefreshCount:(long long)arg0;

@end
