//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, NSArray, AWEListDataController, NSMutableDictionary, AWETVAwemeResponseModel, AWELandscapeFeedDataController, AWEAwemeResponseModel, AWELandscapePageContext, NSMutableArray;
@protocol AWELandscapeSpiltScreenDataControllerProtocol, AWELandscapeFeedViewModelDelegate;

@interface AWELandscapeFeedViewModel : AWEBaseListViewModel {
    BOOL _isSlideEnable;
    BOOL _isLoadPreviousList;
    BOOL _hasRemovedCacheData;
    BOOL _transFromSplitAndFullPage;
    BOOL _isFirstRequest;
    long long _backTrackIndex;
    NSMutableArray *_albumEpisodeList;
    id<AWELandscapeSpiltScreenDataControllerProtocol> _splitScreenDataController;
    id<AWELandscapeFeedViewModelDelegate> _delegate;
    AWEListDataController *_externalDataController;
    AWELandscapeFeedDataController *_dataController;
    AWETVAwemeResponseModel *_tvResponseModel;
    AWEAwemeResponseModel *_responseModel;
    NSString *_referString;
    AWELandscapePageContext *_pageContext;
    long long _indexEnterSplit;
    AWEAwemeModel *_modelEnterSplit;
    NSMutableArray *_splitScreenModels;
    NSMutableArray *_originCellModel;
    long long _vcMode;
    NSString *_lastUID;
    NSMutableDictionary *_addToGeneralSearchModels;
}

@property (retain, nonatomic) AWEListDataController *externalDataController;
@property (retain, nonatomic) AWELandscapeFeedDataController *dataController;
@property (retain, nonatomic) AWETVAwemeResponseModel *tvResponseModel;
@property (retain, nonatomic) AWEAwemeResponseModel *responseModel;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (nonatomic) BOOL isLoadPreviousList;
@property (nonatomic) BOOL hasRemovedCacheData;
@property (nonatomic) long long indexEnterSplit;
@property (retain, nonatomic) AWEAwemeModel *modelEnterSplit;
@property (retain, nonatomic) NSMutableArray *splitScreenModels;
@property (retain, nonatomic) NSMutableArray *originCellModel;
@property (nonatomic) long long vcMode;
@property (nonatomic) BOOL transFromSplitAndFullPage;
@property (copy, nonatomic) NSString *lastUID;
@property (retain, nonatomic) NSMutableDictionary *addToGeneralSearchModels;
@property (nonatomic) BOOL isFirstRequest;
@property (nonatomic) long long backTrackIndex;
@property (readonly, copy, nonatomic) NSArray *modelList;
@property (retain, nonatomic) NSMutableArray *albumEpisodeList;
@property (nonatomic) BOOL isSlideEnable;
@property (retain, nonatomic) id<AWELandscapeSpiltScreenDataControllerProtocol> splitScreenDataController;
@property (weak, nonatomic) id<AWELandscapeFeedViewModelDelegate> delegate;

- (id)referString;
- (void)fetchListData;
- (void)loadMoreListData;
- (void)setReferString:(id)arg0;
- (void)setDataController:(id)arg0;
- (BOOL)isSlideEnable;
- (BOOL)isFirstRequest;
- (void)setIsFirstRequest:(BOOL)arg0;
- (void)setupWithModel:(id)arg0;
- (void)setLastUID:(id)arg0;
- (id)lastUID;
- (id)modelList;
- (id)sectionViewModel;
- (id)transferAwemeModelForLive:(id)arg0;
- (void)refreshWithAwemeModel:(id)arg0;
- (id)awemeModelWithIndex:(long long)arg0;
- (void)setExternalDataController:(id)arg0;
- (id)externalDataController;
- (long long)cellModelsCount;
- (id)createViewModelsWithAwemeModels:(id)arg0;
- (id)filterAwemeModels:(id)arg0;
- (void)setupSectionViewModelIfNeeded;
- (id)splitScreenDataController;
- (BOOL)canUseAuthorSplitCacheData;
- (void)loadMoreSplitScreenDataIfNeededWithIndex:(long long)arg0 completion:(id /* block */)arg1;
- (void)loadPreSplitScreenDataIfNeededWithIndex:(long long)arg0 completion:(id /* block */)arg1;
- (long long)vcMode;
- (void)setSplitScreenDataController:(id)arg0;
- (void)loadMoreMixVideoIfNeededWithIndex:(long long)arg0 completion:(id /* block */)arg1;
- (void)loadMorePostIfNeededWithIndex:(long long)arg0 completion:(id /* block */)arg1;
- (void)setVcMode:(long long)arg0;
- (void)updateDataToSplitScreen:(long long)arg0 targetIndex:(long long)arg1;
- (void)changeDataToSpiltScreen:(long long)arg0 dataController:(id)arg1 currentModel:(id)arg2 currentIndex:(long long)arg3 completionBlock:(id /* block */)arg4;
- (void)enterSpiltScreenWithCurrentModel:(id)arg0 currentIndex:(long long)arg1;
- (long long)indexWithAwemeModel:(id)arg0;
- (void)replaceCurrentModel:(long long)arg0 WithNewModel:(id)arg1;
- (void)insertNotCurrentInnerVideoModel:(id)arg0 index:(long long)arg1;
- (void)updateDataToFullScreen:(long long)arg0 targerModelIndex:(long long)arg1 needRefresh:(BOOL)arg2 needInsert:(BOOL)arg3;
- (void)changeDataToFullScreen:(id)arg0 currentIndex:(long long)arg1 completionBlock:(id /* block */)arg2;
- (void)insertCellModels:(id)arg0;
- (void)loadPreviousMixVideoIfNeededWithIndex:(long long)arg0 completion:(id /* block */)arg1;
- (void)loadPreviousPostVideoIfNeededWithIndex:(long long)arg0 completion:(id /* block */)arg1;
- (long long)backTrackIndex;
- (BOOL)isBackTrackingLandscapeFeed:(id)arg0;
- (void)preloadConverImageWithIndexPath:(id)arg0;
- (void)preloadVideosWithIndexPath:(id)arg0;
- (void)cancelVideosPreload;
- (void)setIsSlideEnable:(BOOL)arg0;
- (BOOL)needLoadMoreRelatedVideo;
- (void)loadMoreGeneralSearchIfNeededWithIndex:(long long)arg0 completion:(id /* block */)arg1;
- (id)albumEpisodeList;
- (void)removeNotCurrentMixVideoModelIfNeeded:(id)arg0 completion:(id /* block */)arg1;
- (void)removeNonRealPostVideoModelIfNeeded:(id)arg0 completion:(id /* block */)arg1;
- (void)removeNonGeneralSearchVideoModelIfNeeded:(id)arg0 completion:(id /* block */)arg1;
- (id)createViewModelsWithTVAwemeModels:(id)arg0;
- (id)createViewModelsWithTVAwemeModels:(id)arg0 changeHorizontalType:(BOOL)arg1;
- (BOOL)canUseLoadMoreCacheData;
- (BOOL)hasRemovedCacheData;
- (id)dataSourceForDataController:(id)arg0;
- (id)filteredAlbumModelAndNonRealPostWithModelList:(id)arg0;
- (id)filteredAlbumModelAndOtherMixWithModelList:(id)arg0;
- (id)buildExternalDataController;
- (void)setBackTrackIndex:(long long)arg0;
- (void)handleAwemeResponse:(id)arg0 error:(id)arg1;
- (void)handleSplitScreenDataResponse:(id)arg0 error:(id)arg1;
- (void)recordAddedModelInGeneralSearch:(id)arg0;
- (void)setAlbumEpisodeList:(id)arg0;
- (BOOL)shouldAddModelToList:(id)arg0;
- (BOOL)isLoadPreviousList;
- (void)setIsLoadPreviousList:(BOOL)arg0;
- (id)getModelListFromMixDataController:(BOOL)arg0;
- (id)getModelListFromPostDataController:(BOOL)arg0 originList:(id)arg1;
- (id)addToGeneralSearchModels;
- (long long)landscapeBackTrackIndex;
- (id)filteredDuplicateModels:(id)arg0;
- (id)calculatePreloadVideoSectionsWithIndexPath:(id)arg0;
- (void)preloadVideos:(id)arg0;
- (void)setTvResponseModel:(id)arg0;
- (void)preprocessWithModel:(id)arg0;
- (BOOL)filterLiveModel:(id)arg0;
- (void)setHasRemovedCacheData:(BOOL)arg0;
- (id)tvResponseModel;
- (long long)mixVideoBackTrackIndex;
- (void)setSplitScreenModels:(id)arg0;
- (id)modelEnterSplit;
- (long long)indexEnterSplit;
- (id)originCellModel;
- (id)splitScreenModels;
- (void)refreshMixVideoDataControllerWithAwemeModel:(id)arg0;
- (void)refreshPostVideoDataControllerWithAwemeModel:(id)arg0;
- (void)setOriginCellModel:(id)arg0;
- (void)setIndexEnterSplit:(long long)arg0;
- (void)setModelEnterSplit:(id)arg0;
- (void)fetchProfileWithModel:(id)arg0 completionBlock:(id /* block */)arg1;
- (BOOL)transFromSplitAndFullPage;
- (void)setTransFromSplitAndFullPage:(BOOL)arg0;
- (void)setAddToGeneralSearchModels:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)handleResponse:(id)arg0 error:(id)arg1;
- (BOOL)isEmptyState;
- (void)setDelegate:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (id)dataController;
- (id)responseModel;
- (void)setResponseModel:(id)arg0;
- (void)setupWithContext:(id)arg0;

@end