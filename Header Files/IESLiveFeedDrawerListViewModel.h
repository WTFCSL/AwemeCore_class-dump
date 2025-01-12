//
//     Generated by private class-dump
//

@class IESLiveFeedDrawerViewControllerContext, FeedResponse, NSObject, TabItem, NSMutableArray, UIView, NSString, IESLiveFeedDrawerHistoryNoRecordModel, TabResponse, NSHashTable, HTSLiveVerticalTypeInfo, NSNumber, HTSLiveFeedDataApi;
@protocol OS_dispatch_group, IESLiveFeedDrawerListViewModelDelegate, IESLiveIMSettingListenerAction;

@interface IESLiveFeedDrawerListViewModel : NSObject <IESLiveCardHistoryLoginAction, IGListAdapterDataSource> {
    BOOL _isRefreshing;
    BOOL _hasRequestError;
    BOOL _hasShowRecommond;
    BOOL _hasRequested;
    BOOL _hasMore;
    BOOL _isLoadingMore;
    BOOL _historyIsRefreshing;
    BOOL _isRefreshFeedRequest;
    BOOL _optimizeSearchDrawer;
    id<IESLiveFeedDrawerListViewModelDelegate> _delegate;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSString *_drawerPage;
    IESLiveFeedDrawerViewControllerContext *_context;
    TabResponse *_tabModel;
    TabItem *_tabConfig;
    NSMutableArray *_items;
    HTSLiveFeedDataApi *_feedApi;
    HTSLiveFeedDataApi *_historyApi;
    UIView *_errorView;
    UIView *_loginView;
    UIView *_emptyView;
    UIView *_loadingView;
    HTSLiveVerticalTypeInfo *_verticalTypeInfo;
    NSNumber *_roomId;
    NSHashTable *_allSectionControllers;
    NSMutableArray *_temporaryItems;
    NSObject<OS_dispatch_group> *_completionGroup;
    FeedResponse *_feedModel;
    FeedResponse *_historyModel;
    NSString *_errorTips;
    IESLiveFeedDrawerHistoryNoRecordModel *_currentNoRecordHistoryModel;
    id<IESLiveIMSettingListenerAction> _loginListener;
}

@property (retain, nonatomic) TabResponse *tabModel;
@property (retain, nonatomic) TabItem *tabConfig;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) HTSLiveFeedDataApi *feedApi;
@property (retain, nonatomic) HTSLiveFeedDataApi *historyApi;
@property (nonatomic) BOOL hasRequestError;
@property (nonatomic) BOOL hasShowRecommond;
@property (nonatomic) BOOL hasRequested;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) BOOL historyIsRefreshing;
@property (retain, nonatomic) UIView *errorView;
@property (retain, nonatomic) UIView *loginView;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) HTSLiveVerticalTypeInfo *verticalTypeInfo;
@property (retain, nonatomic) NSNumber *roomId;
@property (retain, nonatomic) NSHashTable *allSectionControllers;
@property (retain, nonatomic) NSMutableArray *temporaryItems;
@property (nonatomic) BOOL isRefreshFeedRequest;
@property (nonatomic) BOOL optimizeSearchDrawer;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup;
@property (retain, nonatomic) FeedResponse *feedModel;
@property (retain, nonatomic) FeedResponse *historyModel;
@property (retain, nonatomic) NSString *errorTips;
@property (retain, nonatomic) IESLiveFeedDrawerHistoryNoRecordModel *currentNoRecordHistoryModel;
@property (retain, nonatomic) id<IESLiveIMSettingListenerAction> loginListener;
@property (weak, nonatomic) id<IESLiveFeedDrawerListViewModelDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSString *enterMethod;
@property (readonly, copy, nonatomic) NSString *drawerPage;
@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (id)verticalTypeInfo;
- (void)setVerticalTypeInfo:(id)arg0;
- (BOOL)isLoadingMore;
- (void)setIsLoadingMore:(BOOL)arg0;
- (id)objectsForListAdapter:(id)arg0;
- (id)listAdapter:(id)arg0 sectionControllerForObject:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg0;
- (BOOL)hasRequestError;
- (void)setHasRequestError:(BOOL)arg0;
- (id)loginView;
- (id)feedModel;
- (id)historyModel;
- (void)setFeedModel:(id)arg0;
- (void)loadMore;
- (void)setTabConfig:(id)arg0;
- (id)tabConfig;
- (void)setLoginView:(id)arg0;
- (void)refreshLayout:(BOOL)arg0;
- (id)buildEnterRoomSourcePage;
- (id)feedApi;
- (void)setFeedApi:(id)arg0;
- (BOOL)hasRequested;
- (void)setHasRequested:(BOOL)arg0;
- (void)checkLoginStatus;
- (void)historyCardBecomeEmpty;
- (void)setTabModel:(id)arg0;
- (id)tabModel;
- (id)errorTips;
- (void)setErrorTips:(id)arg0;
- (id)drawerPage;
- (BOOL)updateCurrentVerticalInfo:(id)arg0 roomId:(id)arg1;
- (void)setAllSectionControllers:(id)arg0;
- (void)setOptimizeSearchDrawer:(BOOL)arg0;
- (void)refreshHistoryCardIfNeeded;
- (BOOL)optimizeSearchDrawer;
- (BOOL)shouldTriggerLoadMore:(id)arg0;
- (BOOL)enableShowHistoryCard;
- (void)refreshWithParams:(id)arg0;
- (void)setHasShowRecommond:(BOOL)arg0;
- (void)p_generateFeedDrawerURL;
- (void)fetchFeedList:(id)arg0 isRefresh:(BOOL)arg1 result:(id /* block */)arg2;
- (BOOL)enableRequestHistoryCardData;
- (void)p_generateHistoryDrawerURL;
- (void)setHistoryModel:(id)arg0;
- (long long)historyCardFetchCount;
- (void)fetchHistoryList:(id)arg0 result:(id /* block */)arg1;
- (id)parseFeedItemsFromModel:(id)arg0 isRefresh:(BOOL)arg1;
- (BOOL)shouldLoadmoreForRecommend;
- (BOOL)isInnerBanner;
- (id)getEnterFrom:(id)arg0;
- (id)getEnterMethod:(id)arg0;
- (id)historyApi;
- (BOOL)needToRefreshWithUpdateVertical:(id)arg0;
- (id)temporaryItems;
- (id)currentNoRecordHistoryModel;
- (BOOL)historyIsRefreshing;
- (id)parseHistoryCardModel;
- (void)setHistoryIsRefreshing:(BOOL)arg0;
- (void)setCurrentNoRecordHistoryModel:(id)arg0;
- (void)trackFeedDrawerBeginRequest;
- (void)setIsRefreshFeedRequest:(BOOL)arg0;
- (void)trackFeedDrawerEndRequest:(BOOL)arg0;
- (id)parseFeedItem:(id)arg0;
- (BOOL)hasShowRecommond;
- (BOOL)enableShowDistance;
- (id)allSectionControllers;
- (void)didClickLoginBtn;
- (void)scrollUpDeleteItems;
- (void)scrollDownAddItems;
- (BOOL)enableHiddenSkylightORBanner;
- (void)setHistoryApi:(id)arg0;
- (void)setTemporaryItems:(id)arg0;
- (BOOL)isRefreshFeedRequest;
- (id)loginListener;
- (void)setLoginListener:(id)arg0;
- (void)refresh;
- (void)setItems:(id)arg0;
- (id)initWithTab:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (void)setContext:(id)arg0;
- (id)delegate;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)context;
- (id)completionGroup;
- (BOOL)isEmpty;
- (void)setDelegate:(id)arg0;
- (BOOL)isRefreshing;
- (void)setCompletionGroup:(id)arg0;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (BOOL)deleteItemAtIndex:(unsigned long long)arg0;
- (id)errorView;
- (void)setErrorView:(id)arg0;
- (void)setIsRefreshing:(BOOL)arg0;

@end
