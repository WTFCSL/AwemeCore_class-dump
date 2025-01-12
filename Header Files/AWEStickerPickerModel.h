//
//     Generated by private class-dump
//

@class ACCCameraSubscription, NSString, NSArray, AWEStickerSugResponseModel, IESEffectModel, AWEStickerCategoryModel;
@protocol AWEStickerPickerModelSearchDelegate, ACCStickerPickerServiceFavoriteCapability, AWEStickerPickerModelDataSource, ACCStickerPickerServiceSearchCapability;

@interface AWEStickerPickerModel : NSObject <ACCStickerPickerServiceFavoriteCapability, AWEStickerCategoryModelDelegate, AWEStickerCategoryModelDataSource, AWEStickerDownloadManagerObserverProtocol, ACCStickerPickerService, ACCStickerPickerServiceSearchCapability> {
    BOOL _isUseHot;
    BOOL _isCompleted;
    BOOL _isFromHashtag;
    BOOL _isFetchSearchRecommendWords;
    BOOL _isFirstExposureSug;
    BOOL _isSlideToSearchView;
    BOOL _isTeenMode;
    BOOL _loading;
    BOOL _hotTabChanged;
    IESEffectModel *_currentSticker;
    IESEffectModel *_currentChildSticker;
    IESEffectModel *_stickerWillSelect;
    AWEStickerCategoryModel *_currentCategoryModel;
    AWEStickerCategoryModel *_suitPhotoCategoryModel;
    NSArray *_stickerCategoryModels;
    NSString *_searchText;
    NSString *_searchID;
    NSString *_searchMethod;
    AWEStickerCategoryModel *_searchCategoryModel;
    NSArray *_urlPrefix;
    id<AWEStickerPickerModelSearchDelegate> _searchDelegate;
    id<AWEStickerPickerModelDataSource> _dataSource;
    NSString *_searchTips;
    unsigned long long _requestSource;
    NSArray *_recommendationList;
    NSArray *_resbonseRecommendWords;
    AWEStickerSugResponseModel *_searchSugResponse;
    NSArray *_searchSugList;
    double _showLoadingStartTime;
    NSString *_sugSessionID;
    NSString *_resbonseSearchTips;
    unsigned long long _source;
    ACCCameraSubscription *_subscription;
    NSString *_panelName;
}

@property (readonly, nonatomic) AWEStickerCategoryModel *favoriteCategoryModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *panelName;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (copy, nonatomic) NSArray *urlPrefix;
@property (nonatomic) BOOL hotTabChanged;
@property (retain, nonatomic) AWEStickerCategoryModel *searchCategoryModel;
@property (weak, nonatomic) id<AWEStickerPickerModelSearchDelegate> searchDelegate;
@property (weak, nonatomic) id<AWEStickerPickerModelDataSource> dataSource;
@property (copy, nonatomic) NSString *searchTips;
@property (nonatomic) BOOL isUseHot;
@property (nonatomic) BOOL isCompleted;
@property (nonatomic) BOOL isFromHashtag;
@property (nonatomic) unsigned long long requestSource;
@property (nonatomic) BOOL isFetchSearchRecommendWords;
@property (copy, nonatomic) NSArray *recommendationList;
@property (copy, nonatomic) NSArray *resbonseRecommendWords;
@property (retain, nonatomic) AWEStickerSugResponseModel *searchSugResponse;
@property (copy, nonatomic) NSArray *searchSugList;
@property (nonatomic) double showLoadingStartTime;
@property (nonatomic) BOOL isFirstExposureSug;
@property (copy, nonatomic) NSString *sugSessionID;
@property (nonatomic) BOOL isSlideToSearchView;
@property (copy, nonatomic) NSString *resbonseSearchTips;
@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) BOOL isTeenMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *stickerCategoryModels;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (retain, nonatomic) AWEStickerCategoryModel *currentCategoryModel;
@property (readonly, nonatomic) AWEStickerCategoryModel *hotCategoryModel;
@property (readonly, nonatomic) AWEStickerCategoryModel *suitPhotoCategoryModel;
@property (readonly, nonatomic) AWEStickerCategoryModel *DIYCategoryModel;
@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (retain, nonatomic) IESEffectModel *currentChildSticker;
@property (retain, nonatomic) IESEffectModel *stickerWillSelect;
@property (readonly, nonatomic) id<ACCStickerPickerServiceFavoriteCapability> favoriteCapability;
@property (readonly, nonatomic) id<ACCStickerPickerServiceSearchCapability> searchCapability;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *searchMethod;

- (id)searchMethod;
- (void)setSearchMethod:(id)arg0;
- (BOOL)isTeenMode;
- (id)searchTips;
- (void)setSearchTips:(id)arg0;
- (BOOL)isUseHot;
- (void)setIsUseHot:(BOOL)arg0;
- (void)stickerDownloadManager:(id)arg0 didBeginDownloadSticker:(id)arg1;
- (void)stickerDownloadManager:(id)arg0 sticker:(id)arg1 downloadProgressChange:(double)arg2;
- (void)stickerDownloadManager:(id)arg0 didFinishDownloadSticker:(id)arg1;
- (void)stickerDownloadManager:(id)arg0 didFailDownloadSticker:(id)arg1 withError:(id)arg2;
- (void)downloadStickerIfNeed:(id)arg0;
- (double)stickerDownloadProgress:(id)arg0;
- (void)p_updateSugSessionID;
- (id)sugSessionID;
- (void)setSugSessionID:(id)arg0;
- (void)trackWithEventName:(id)arg0 params:(id)arg1;
- (id)getFinalGetUrl:(id)arg0 withParams:(id)arg1;
- (void)setIsTeenMode:(BOOL)arg0;
- (void)loadStickerCategoryList;
- (id)currentSticker;
- (void)setUrlPrefix:(id)arg0;
- (id)initWithPanelName:(id)arg0 currentSticker:(id)arg1 currentChildSticker:(id)arg2;
- (void)setCurrentSticker:(id)arg0;
- (id)searchCapability;
- (void)updateSticker:(id)arg0 favoriteStatus:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)prefetchStickersIfNeed:(id)arg0;
- (void)setStickerWillSelect:(id)arg0;
- (id)stickerCategoryModels;
- (id)currentChildSticker;
- (id)stickerWillSelect;
- (id)currentCategoryModel;
- (void)resetHotTab;
- (void)insertStickersAtHotTab:(id)arg0;
- (void)setCurrentChildSticker:(id)arg0;
- (id)favoriteCapability;
- (BOOL)isMyFavoriteSticker:(id)arg0;
- (void)handlePickSticker:(id)arg0;
- (id)hotCategoryModel;
- (id)favoriteCategoryModel;
- (void)updateAllStickersAtHotTab:(id)arg0;
- (id)suitPhotoCategoryModel;
- (void)loadStickerCategoryListIfNeeded;
- (id)DIYCategoryModel;
- (void)handlePickStickerWithoutDownload:(id)arg0;
- (id)searchCategoryModel;
- (void)stickerCategoryModelDidBeginLoadStickers:(id)arg0;
- (void)stickerCategoryModel:(id)arg0 fetchEffectListForPanelName:(id)arg1 pageCount:(long long)arg2 cursor:(long long)arg3 sortingPosition:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)stickerCategoryModelDidFailLoadStickers:(id)arg0 withError:(id)arg1;
- (void)stickerCategoryModelDidFinishLoadStickers:(id)arg0;
- (void)stickerCategoryModel:(id)arg0 fetchFavoriteForPanelName:(id)arg1 category:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)stickerCategoryModel:(id)arg0 fetchDIYEffectListForPanelName:(id)arg1 category:(id)arg2 completion:(id /* block */)arg3;
- (void)stickerCategoryModel:(id)arg0 fetchEffectListForPanelName:(id)arg1 category:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setSearchCategoryModel:(id)arg0;
- (void)stickerCategoryModelDidUpdateStickers:(id)arg0;
- (BOOL)shouldSupportSearchFeature;
- (id)resbonseRecommendWords;
- (BOOL)isFetchSearchRecommendWords;
- (void)fetchHashtagsListWithIsTextFieldFirstResponder:(BOOL)arg0;
- (void)setCurrentMVTemplateSticker:(id)arg0;
- (void)setCurrentCategoryModel:(id)arg0;
- (void)handleResponse:(BOOL)arg0 error:(id)arg1 sticker:(id)arg2 favorite:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)p_insertStickerToFavorite:(id)arg0;
- (void)p_deleteStickerFromFavorite:(id)arg0;
- (void)setIsFromHashtag:(BOOL)arg0;
- (id)resbonseSearchTips;
- (void)handleHashtagsResponseWithError:(id)arg0 searchTips:(id)arg1 recommendWords:(id)arg2 isFirstResponder:(BOOL)arg3 startTime:(double)arg4;
- (void)setIsFetchSearchRecommendWords:(BOOL)arg0;
- (void)setResbonseSearchTips:(id)arg0;
- (void)setResbonseRecommendWords:(id)arg0;
- (void)handleSugResponseWithSugList:(id)arg0;
- (double)showLoadingStartTime;
- (void)setIsFirstExposureSug:(BOOL)arg0;
- (void)fetchStickerSugWithQuery:(id)arg0 textFieldParams:(id)arg1 completion:(id /* block */)arg2;
- (void)handleResponseWithSearchEffectsModel:(id)arg0;
- (BOOL)isFromHashtag;
- (void)setRecommendationList:(id)arg0;
- (void)setSearchSugResponse:(id)arg0;
- (void)setSearchSugList:(id)arg0;
- (id)recommendationList;
- (id)searchSugResponse;
- (id)searchSugList;
- (BOOL)isStickerSelected:(id)arg0;
- (void)willDisplaySticker:(id)arg0 indexPath:(id)arg1;
- (void)didSelectSticker:(id)arg0 category:(id)arg1 indexPath:(id)arg2;
- (void)didTapHashtag:(id)arg0;
- (void)fetchSearchSugWithText:(id)arg0;
- (void)searchWithText:(id)arg0 source:(unsigned long long)arg1;
- (void)searchTextDidChange:(id)arg0 isTab:(BOOL)arg1;
- (void)shouldTriggerKeyboardToShowIfIsTab:(BOOL)arg0 source:(unsigned long long)arg1;
- (void)shouldTriggerKeyboardToHide:(BOOL)arg0 source:(unsigned long long)arg1;
- (void)showKeyboardWithNotification:(id)arg0;
- (void)hideKeyboardWithNotification:(id)arg0 source:(unsigned long long)arg1;
- (void)updateSearchPanelToPackUp;
- (void)trackRecommendationListDidShowWithIsFirstResponder:(BOOL)arg0;
- (void)trackSugListDidShow;
- (void)initSearchProperties;
- (void)initSuitePhotoProperties;
- (BOOL)hotTabChanged;
- (void)setHotTabChanged:(BOOL)arg0;
- (void)setStickerCategoryModels:(id)arg0;
- (void)fetchStickerCategoryListInternal;
- (BOOL)shouldApplySticker:(id)arg0;
- (void)handleWithCategories:(id)arg0 urlPrefix:(id)arg1 error:(id)arg2;
- (long long)tabIndexForCategoryModel:(id)arg0;
- (void)trackProSwitchCategoryShowDuration:(long long)arg0 averageDuration:(long long)arg1 forStickerCategory:(id)arg2 isFirstScreen:(BOOL)arg3;
- (void)setShowLoadingStartTime:(double)arg0;
- (BOOL)isFirstExposureSug;
- (BOOL)isSlideToSearchView;
- (void)setIsSlideToSearchView:(BOOL)arg0;
- (BOOL)isLoading;
- (void)setLoading:(BOOL)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (BOOL)isLoaded;
- (BOOL)isCompleted;
- (id)searchText;
- (void)setSearchText:(id)arg0;
- (unsigned long long)source;
- (void).cxx_destruct;
- (void)setSearchDelegate:(id)arg0;
- (id)searchDelegate;
- (void)setRequestSource:(unsigned long long)arg0;
- (void)setSubscription:(id)arg0;
- (void)setSource:(unsigned long long)arg0;
- (unsigned long long)requestSource;
- (void)addSubscriber:(id)arg0;
- (id)subscription;
- (void)removeSubscriber:(id)arg0;
- (id)searchID;
- (void)setSearchID:(id)arg0;
- (void)setIsCompleted:(BOOL)arg0;
- (id)panelName;
- (void)setPanelName:(id)arg0;
- (id)urlPrefix;

@end
