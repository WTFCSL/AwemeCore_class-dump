//
//     Generated by private class-dump
//

@class IESLiveInnerFeedBaseItemModel, NSString, IGListAdapter, NSMutableArray, IESLiveInnerFeedContext;
@protocol IESLiveInnerFeedDataProvider;

@interface IESLiveInnerFeedDataSource : NSObject <IESLiveInnerFeedDataDidChangeObserver, IESLiveInnerFeedDataControlAction, IESLiveInnerFeedDataSourceControlService, IESLiveInnerFeedDisplayAction, HTSLiveCleanScreenActions, IESLiveFeedDrawerActions, IGListAdapterDataSource> {
    BOOL _isFetching;
    BOOL _reportNotLoadMoreEvent;
    BOOL _prepareDisplayed;
    BOOL _useNewLoadMoreStrategy;
    BOOL _deleteFirstRecommondFix;
    IGListAdapter *_adapter;
    IESLiveInnerFeedContext *_context;
    id<IESLiveInnerFeedDataProvider> _dataProvider;
    NSMutableArray *_items;
    NSMutableArray *_lastPortraitItems;
    NSMutableArray *_appendLandscapeItems;
    IESLiveInnerFeedBaseItemModel *_stashedRecommendItem;
    NSString *_currentPullRefreshId;
    long long _lastLoadMoreErrorCode;
    long long _newLoadMoreThresh;
}

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) id<IESLiveInnerFeedDataProvider> dataProvider;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *lastPortraitItems;
@property (retain, nonatomic) NSMutableArray *appendLandscapeItems;
@property (retain, nonatomic) IESLiveInnerFeedBaseItemModel *stashedRecommendItem;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) BOOL reportNotLoadMoreEvent;
@property (copy, nonatomic) NSString *currentPullRefreshId;
@property (nonatomic) BOOL prepareDisplayed;
@property (nonatomic) long long lastLoadMoreErrorCode;
@property (nonatomic) BOOL useNewLoadMoreStrategy;
@property (nonatomic) long long newLoadMoreThresh;
@property (nonatomic) BOOL deleteFirstRecommondFix;
@property (weak, nonatomic) IGListAdapter *adapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)nodeOptWithPrasedItems:(id)arg0;
- (id)objectsForListAdapter:(id)arg0;
- (id)listAdapter:(id)arg0 sectionControllerForObject:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg0;
- (long long)getItemsCount;
- (id)reRankFeedStreamWithDeleteIndexes:(id)arg0 insertIndexes:(id)arg1 insertModels:(id)arg2;
- (BOOL)_loadMore;
- (void)switchCleanScreenMode:(long long)arg0;
- (BOOL)enableUsePullRefresh;
- (void)endRefresh;
- (void)feedDrawerVCWillAppear:(id)arg0;
- (void)feedDrawerVCDidAppear:(id)arg0;
- (void)feedDrawerVCWillDisappear:(id)arg0;
- (void)feedDrawerVCDidDisappear:(id)arg0;
- (BOOL)deleteItems:(id)arg0 withAnimation:(BOOL)arg1;
- (void)insertItems:(id)arg0 atIndex:(long long)arg1;
- (void)manualLoadMore;
- (id)transFeedItemToItemModel:(id)arg0;
- (void)innerFeedFollowSwitchToRecommend;
- (BOOL)needDeleteDataWhenFinish;
- (void)innerFeedWillMountObject:(id)arg0 atIndex:(long long)arg1 currentIndex:(long long)arg2;
- (void)innerFeedWillDisplayObject:(id)arg0 atIndex:(long long)arg1;
- (void)innerFeedDidEndDecelerating:(id)arg0;
- (BOOL)liveCoverNeedLoadMore;
- (id)initWithDataProvider:(id)arg0 context:(id)arg1;
- (void)setUseNewLoadMoreStrategy:(BOOL)arg0;
- (void)setNewLoadMoreThresh:(long long)arg0;
- (BOOL)prepareDisplayed;
- (BOOL)canUpdatePullRefreshData:(id)arg0;
- (id)_praseItems:(id)arg0;
- (void)loadMoreDidEndWithError:(id)arg0;
- (void)dataDidChangeWithType:(unsigned long long)arg0 provider:(id)arg1 prasedItems:(id)arg2 hasMore:(BOOL)arg3;
- (void)setLastLoadMoreErrorCode:(long long)arg0;
- (BOOL)isLandscapeHorizontalScrollEnable;
- (id)appendLandscapeItems;
- (void)refreshFooterStatusWithChangeType:(unsigned long long)arg0;
- (BOOL)useNewLoadMoreStrategy;
- (BOOL)shouldLoadMoreWithDisplayIndex:(long long)arg0;
- (long long)_loadmoreThreshold;
- (long long)_loadmoreThresholdNew;
- (id)currentPullRefreshId;
- (void)_finishRestOrientation;
- (BOOL)deleteFirstRecommondFix;
- (id)stashedRecommendItem;
- (long long)getCurrentShowIndex;
- (void)blockRefreshingAction;
- (void)setPrepareDisplayed:(BOOL)arg0;
- (id)lastPortraitItems;
- (void)setCurrentPullRefreshId:(id)arg0;
- (void)trackPullRefreshEvent;
- (long long)lastLoadMoreErrorCode;
- (void)markItemModelLocalPropertiesAtIndex:(unsigned long long)arg0 baseItemModel:(id)arg1 feedItem:(id)arg2;
- (long long)newLoadMoreThresh;
- (BOOL)reportNotLoadMoreEvent;
- (void)setReportNotLoadMoreEvent:(BOOL)arg0;
- (void)provider:(id)arg0 dataDidChangeWithType:(unsigned long long)arg1 datas:(id)arg2 hasMore:(BOOL)arg3 extraParams:(id)arg4;
- (void)provider:(id)arg0 failToFetchData:(unsigned long long)arg1 error:(id)arg2 extraParams:(id)arg3;
- (void)prepareDisplay;
- (void)landscapePrepareDisplay;
- (void)backToPortialDisplay;
- (void)tryLoadMoreByPull;
- (void)loadMoreBySlideUp;
- (void)setLastPortraitItems:(id)arg0;
- (void)setAppendLandscapeItems:(id)arg0;
- (void)setStashedRecommendItem:(id)arg0;
- (void)setDeleteFirstRecommondFix:(BOOL)arg0;
- (id)dataProvider;
- (void)setDataProvider:(id)arg0;
- (void)refresh;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (void)setContext:(id)arg0;
- (id)context;
- (id)adapter;
- (void)setAdapter:(id)arg0;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg0;
- (id)commonLog;

@end