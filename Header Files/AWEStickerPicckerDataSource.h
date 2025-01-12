//
//     Generated by private class-dump
//

@class AWEStickerPickerTabViewLayout, NSArray, NSString, NSMutableDictionary, NSDictionary, AWEStickerPickerSectionManager, NSObject, NSMutableArray, NSNumber, AWEStickerCategoryModel;
@protocol OS_dispatch_queue, AWEStickerPickerDataContainerProtocol;

@interface AWEStickerPicckerDataSource : NSObject <AWEStickerPickerModelDataSource> {
    BOOL _needFavorite;
    BOOL _needDIY;
    BOOL _isOnRecordingPage;
    BOOL _isTeenMode;
    BOOL _isLoadingCategoryList;
    NSObject<OS_dispatch_queue> *_dataHanleQueue;
    AWEStickerPickerSectionManager *_sectionManager;
    id /* block */ _tabSizeUpdateHandler;
    id /* block */ _stickerCategoryFilterBlock;
    id /* block */ _stickerFilterBlock;
    NSDictionary *_loadEffectRequestExtraParameters;
    AWEStickerPickerTabViewLayout *_tabViewLayout;
    NSMutableDictionary *_effectMap;
    NSMutableArray *_dataContainers;
    id<AWEStickerPickerDataContainerProtocol> _currentDataContainer;
    NSNumber *_searchFeatureOpened;
}

@property (retain, nonatomic) AWEStickerPickerTabViewLayout *tabViewLayout;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataHanleQueue;
@property (retain, nonatomic) NSMutableDictionary *effectMap;
@property (retain, nonatomic) NSMutableArray *dataContainers;
@property (retain, nonatomic) id<AWEStickerPickerDataContainerProtocol> currentDataContainer;
@property (retain, nonatomic) AWEStickerPickerSectionManager *sectionManager;
@property (nonatomic) BOOL isLoadingCategoryList;
@property (retain, nonatomic) NSNumber *searchFeatureOpened;
@property (readonly, nonatomic) BOOL categoryListIsLoading;
@property (nonatomic) BOOL needFavorite;
@property (nonatomic) BOOL needDIY;
@property (nonatomic) BOOL isOnRecordingPage;
@property (readonly, nonatomic) id<AWEStickerPickerDataContainerProtocol> dataContainer;
@property (readonly, copy, nonatomic) NSArray *categoryArray;
@property (copy, nonatomic) id /* block */ tabSizeUpdateHandler;
@property (copy, nonatomic) id /* block */ stickerCategoryFilterBlock;
@property (copy, nonatomic) id /* block */ stickerFilterBlock;
@property (retain, nonatomic) NSDictionary *loadEffectRequestExtraParameters;
@property (nonatomic) BOOL isTeenMode;
@property (readonly, nonatomic) BOOL enableStickerSearch;
@property (readonly, nonatomic) AWEStickerCategoryModel *favoriteCategoryModel;
@property (readonly, nonatomic) AWEStickerCategoryModel *DIYCategoryModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)needFavorite;
- (void)setNeedFavorite:(BOOL)arg0;
- (BOOL)isTeenMode;
- (id)categoryArray;
- (void)setIsTeenMode:(BOOL)arg0;
- (void)addEffectsToMap:(id)arg0;
- (id)loadEffectRequestExtraParameters;
- (void)setLoadEffectRequestExtraParameters:(id)arg0;
- (id)effectFromMapForId:(id)arg0;
- (void)addDataContainer:(id)arg0;
- (void)setIsOnRecordingPage:(BOOL)arg0;
- (BOOL)enableStickerSearch;
- (void)setTabSizeUpdateHandler:(id /* block */)arg0;
- (void)setStickerFilterBlock:(id /* block */)arg0;
- (void)setStickerCategoryFilterBlock:(id /* block */)arg0;
- (struct CGSize { double x0; double x1; })cellSizeForTabIndex:(long long)arg0;
- (void)insertPrioritizedStickers:(id)arg0;
- (id)dataHanleQueue;
- (void)setDataHanleQueue:(id)arg0;
- (void)useDataContainer:(id)arg0;
- (void)setNeedDIY:(BOOL)arg0;
- (id)favoriteCategoryModel;
- (id)sectionManager;
- (id)DIYCategoryModel;
- (id /* block */)stickerFilterBlock;
- (id)currentDataContainer;
- (void)setCurrentDataContainer:(id)arg0;
- (id)dataContainer:(id)arg0 effectFromMapForId:(id)arg1;
- (struct CGSize { double x0; double x1; })dataContainer:(id)arg0 cellSizeForTabIndex:(long long)arg1;
- (void)dataContainer:(id)arg0 insertPrioritizedStickers:(id)arg1;
- (void)setSearchFeatureOpened:(id)arg0;
- (id)searchFeatureOpened;
- (void)mergeWithInsertStickers:(id)arg0;
- (id)effectFilterCategory:(id)arg0;
- (void)updateTabLayoutForCategory:(id)arg0 tabIndex:(long long)arg1;
- (BOOL)needDIY;
- (id)tabViewLayout;
- (id /* block */)tabSizeUpdateHandler;
- (id)toInsertCategoryWithDataContainer:(id)arg0;
- (id)filterEffects:(id)arg0 category:(id)arg1;
- (void)dataContainer:(id)arg0 updateEffectArrayForCategoryKey:(id)arg1 effectArray:(id)arg2;
- (void)dataContainer:(id)arg0 addEffectToFavorite:(id)arg1;
- (void)setIsLoadingCategoryList:(BOOL)arg0;
- (void)handleCategoryResponse:(id)arg0 panelName:(id)arg1 dataContainer:(id)arg2;
- (void)onEffectListCheckUpdateCallback:(BOOL)arg0 panelName:(id)arg1 category:(id)arg2 dataContainer:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)transformCategoriesWithResponse:(id)arg0 panelName:(id)arg1 dataContainer:(id)arg2;
- (id)filterCategories:(id)arg0;
- (id)dataContainer:(id)arg0 filterEffects:(id)arg1 categoryKey:(id)arg2;
- (id)dataContainer:(id)arg0 effectArrayForCategoryKey:(id)arg1;
- (id /* block */)stickerCategoryFilterBlock;
- (BOOL)isLoadingCategoryList;
- (BOOL)isOnRecordingPage;
- (void)fetchCategoryListForPanelName:(id)arg0 dataContainer:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchEffectListWithPanelName:(id)arg0 category:(id)arg1 dataContainer:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchEffectListV2WithPanelName:(id)arg0 category:(id)arg1 pageCount:(long long)arg2 cursor:(long long)arg3 sortingPosition:(long long)arg4 dataContainer:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)fetchMyEffectListForPanelName:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)dataContainer:(id)arg0 updateFavorite:(BOOL)arg1 effectIDS:(id)arg2;
- (void)stickerPickerModel:(id)arg0 fetchCategoryListForPanelName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stickerPickerModel:(id)arg0 fetchEffectListForPanelName:(id)arg1 category:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)stickerPickerModel:(id)arg0 fetchEffectListForPanelName:(id)arg1 category:(id)arg2 pageCount:(long long)arg3 cursor:(long long)arg4 sortingPosition:(long long)arg5 completionHandler:(id /* block */)arg6;
- (void)stickerPickerModel:(id)arg0 fetchFavoriteForPanelName:(id)arg1 category:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)stickerPickerModel:(id)arg0 changeFavoriteWithEffectIDs:(id)arg1 panelName:(id)arg2 favorite:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)stickerPickerModel:(id)arg0 fetchDIYEffectListForPanelName:(id)arg1 category:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)categoryListIsLoading;
- (void)openSearchFeature:(BOOL)arg0;
- (id)searchFeatureOpenedValue;
- (void)setSectionManager:(id)arg0;
- (void)setTabViewLayout:(id)arg0;
- (void)setEffectMap:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)effectMap;
- (id)dataContainer;
- (id)dataContainers;
- (void)setDataContainers:(id)arg0;

@end
