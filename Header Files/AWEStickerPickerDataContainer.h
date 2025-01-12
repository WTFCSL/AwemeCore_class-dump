//
//     Generated by private class-dump
//

@class NSString, NSArray, NSMutableDictionary, AWEDouyinStickerCategoryModel, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEStickerPickerDataContainer : NSObject <AWEStickerPickerDataContainerProtocol> {
    BOOL _loading;
    BOOL _effectListUseCache;
    BOOL _fetchCategorysFromCache;
    NSDictionary *_loadEffectRequestExtraParameters;
    NSString *_identifier;
    NSArray *_categoryArray;
    NSMutableDictionary *_effectArrayMap;
    AWEDouyinStickerCategoryModel *_favoriteCategoryModel;
    NSArray *_favoriteEffectArray;
    NSDictionary *_favoriteEffectDict;
    AWEDouyinStickerCategoryModel *_searchCategoryModel;
    AWEDouyinStickerCategoryModel *_DIYCategoryModel;
    NSArray *_insertStickers;
    NSObject<OS_dispatch_queue> *_dataHanleQueue;
}

@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL fetchCategorysFromCache;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL enableSearch;
@property (readonly, nonatomic) BOOL effectListUseCache;
@property (copy) NSArray *categoryArray;
@property (retain, nonatomic) NSMutableDictionary *effectArrayMap;
@property (retain, nonatomic) AWEDouyinStickerCategoryModel *favoriteCategoryModel;
@property (copy, nonatomic) NSArray *favoriteEffectArray;
@property (retain, nonatomic) NSDictionary *favoriteEffectDict;
@property (retain, nonatomic) AWEDouyinStickerCategoryModel *searchCategoryModel;
@property (retain, nonatomic) AWEDouyinStickerCategoryModel *DIYCategoryModel;
@property (copy, nonatomic) NSArray *insertStickers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataHanleQueue;
@property (retain, nonatomic) NSDictionary *loadEffectRequestExtraParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableSearch;
- (id)categoryArray;
- (void)setCategoryArray:(id)arg0;
- (id)loadEffectRequestExtraParameters;
- (void)setLoadEffectRequestExtraParameters:(id)arg0;
- (BOOL)isFetchCategorysFromCache;
- (id)dataHanleQueue;
- (void)setDataHanleQueue:(id)arg0;
- (id)favoriteCategoryModel;
- (id)DIYCategoryModel;
- (id)searchCategoryModel;
- (void)setInsertStickers:(id)arg0;
- (id)effectArrayMap;
- (void)setSearchCategoryModel:(id)arg0;
- (void)setFavoriteCategoryModel:(id)arg0;
- (void)setDIYCategoryModel:(id)arg0;
- (id)insertStickers;
- (id)favoriteEffectArray;
- (id)favoriteEffectDict;
- (void)setFavoriteEffectArray:(id)arg0;
- (void)setFavoriteEffectDict:(id)arg0;
- (void)fetchCategoryListForPanelName:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)updateFavoriteEffectDictWithFavoriteEffectArray:(id)arg0;
- (BOOL)effectListUseCache;
- (BOOL)useCacheInColdTimeWithPanelName:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)onfetchMergeCategoriesListAndPanelInfo:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)onMergePanelCheckAndPanelInfo:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)onCategoriesCheckUpdateCallback:(BOOL)arg0 panelName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setFetchCategorysFromCache:(BOOL)arg0;
- (void)updateCacheDataIfNeededWithPanelName:(id)arg0;
- (void)p_onCategoriesCheckUpdateCallback:(BOOL)arg0 panelName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)p_onMergePanelCheckAndPanelInfo:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)p_onfetchMergeCategoriesListAndPanelInfo:(id)arg0 completionHandler:(id /* block */)arg1;
- (id)cacheParamsWithPanelName:(id)arg0 cacheKey:(id)arg1;
- (long long)coldTimeForListCache;
- (BOOL)fetchCategorysFromCache;
- (void)setEffectArrayMap:(id)arg0;
- (id)cacheKey;
- (void)setLoading:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)identifier;
- (BOOL)loading;

@end
