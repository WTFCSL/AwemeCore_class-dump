//
//     Generated by private class-dump
//

@class NSArray, AWEStickerCategoryModel;
@protocol AWEStickerPickerDataContainerProtocol;

@protocol AWEStickerPickerModelDataSource <NSObject>

@property (readonly, nonatomic) BOOL categoryListIsLoading;
@property (readonly, nonatomic) BOOL enableStickerSearch;
@property (readonly, copy, nonatomic) NSArray *categoryArray;
@property (readonly, nonatomic) AWEStickerCategoryModel *favoriteCategoryModel;
@property (readonly, nonatomic) AWEStickerCategoryModel *DIYCategoryModel;
@property (readonly, nonatomic) id<AWEStickerPickerDataContainerProtocol> dataContainer;

- (id)categoryArray;
- (BOOL)enableStickerSearch;
- (id)favoriteCategoryModel;
- (id)DIYCategoryModel;
- (void)stickerPickerModel:(id)arg0 fetchCategoryListForPanelName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stickerPickerModel:(id)arg0 fetchEffectListForPanelName:(id)arg1 category:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)stickerPickerModel:(id)arg0 fetchEffectListForPanelName:(id)arg1 category:(id)arg2 pageCount:(long long)arg3 cursor:(long long)arg4 sortingPosition:(long long)arg5 completionHandler:(id /* block */)arg6;
- (void)stickerPickerModel:(id)arg0 fetchFavoriteForPanelName:(id)arg1 category:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)stickerPickerModel:(id)arg0 changeFavoriteWithEffectIDs:(id)arg1 panelName:(id)arg2 favorite:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)stickerPickerModel:(id)arg0 fetchDIYEffectListForPanelName:(id)arg1 category:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)categoryListIsLoading;
- (id)dataContainer;

@end
