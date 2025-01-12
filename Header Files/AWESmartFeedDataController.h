//
//     Generated by private class-dump
//

@class NSObject, NSMutableDictionary, NSString, AWESmartFeedLastViewModel, NSDate, NSNumber, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWESmartFeedDataController : AWEListDataController <AWEUserMessage, AWESmartFeedDataControllerProtocol> {
    BOOL isVCDAuthFirstTime;
    BOOL hasReadAllFreshContent;
    BOOL hasUpdatedItems;
    BOOL isRecommendFlow;
    BOOL isUploadAwemeInsertedBeforeInitialFetch;
    BOOL _isLoadMoreRequestOnAir;
    BOOL _isInsertLogicExist;
    BOOL _hasForceInsertedRecommandUserCard;
    BOOL _useBackup;
    BOOL _hasTrackForProbeAlive;
    BOOL _hasLastView;
    BOOL _hasProbeAlive;
    BOOL _isEnterFollowWithYellowDot;
    BOOL _enterWithYellowDot;
    NSString *blankPanelText;
    AWESmartFeedLastViewModel *lastViewModel;
    NSString *firstPublishedVideoId;
    NSString *previousPageValue;
    double _lastEnterTabTimeStamp;
    long long _refreshIndex;
    NSNumber *_cursor;
    NSNumber *_level;
    NSNumber *_fetchCount;
    NSNumber *_alreadyLastView;
    NSMutableArray *_viewedCache;
    NSMutableDictionary *_responseCache;
    NSObject<OS_dispatch_queue> *_storageSnapshotQueue;
    long long _lastViewIndex;
    NSDate *_lastRefreshTime;
}

@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *level;
@property (retain, nonatomic) NSNumber *fetchCount;
@property (nonatomic) BOOL hasUpdatedItems;
@property (retain, nonatomic) NSNumber *alreadyLastView;
@property (nonatomic) BOOL isLoadMoreRequestOnAir;
@property (retain, nonatomic) NSMutableArray *viewedCache;
@property (retain, nonatomic) NSMutableDictionary *responseCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storageSnapshotQueue;
@property (nonatomic) BOOL isInsertLogicExist;
@property (nonatomic) BOOL hasForceInsertedRecommandUserCard;
@property (nonatomic) BOOL useBackup;
@property (nonatomic) BOOL hasTrackForProbeAlive;
@property (nonatomic) BOOL hasLastView;
@property (nonatomic) BOOL hasProbeAlive;
@property (nonatomic) long long lastViewIndex;
@property (retain, nonatomic) NSDate *lastRefreshTime;
@property (nonatomic) BOOL isEnterFollowWithYellowDot;
@property (nonatomic) BOOL enterWithYellowDot;
@property (nonatomic) double lastEnterTabTimeStamp;
@property (nonatomic) long long refreshIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isUploadAwemeInsertedBeforeInitialFetch;
@property (retain, nonatomic) AWESmartFeedLastViewModel *lastViewModel;
@property (copy, nonatomic) NSString *blankPanelText;
@property (nonatomic) BOOL isVCDAuthFirstTime;
@property (nonatomic) BOOL hasReadAllFreshContent;
@property (nonatomic) BOOL isRecommendFlow;
@property (copy, nonatomic) NSString *previousPageValue;
@property (copy, nonatomic) NSString *firstPublishedVideoId;
@property (copy, nonatomic) id /* block */ insertFamiliarFeedPersonalCard;

+ (id)noticeCountLaunchParam;
+ (void)p_insertDebugParamsInDictionary:(id)arg0;
+ (id)requestFeedMonitorParam;
+ (id /* block */)_didGetDuplicatedArrayBlock;

- (void)didFinishLogout;
- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)setPreviousPageValue:(id)arg0;
- (BOOL)isUploadAwemeInsertedBeforeInitialFetch;
- (void)setIsUploadAwemeInsertedBeforeInitialFetch:(BOOL)arg0;
- (id)lastViewModel;
- (void)setLastViewModel:(id)arg0;
- (BOOL)hasUpdatedItems;
- (id)blankPanelText;
- (void)setBlankPanelText:(id)arg0;
- (BOOL)isVCDAuthFirstTime;
- (void)setIsVCDAuthFirstTime:(BOOL)arg0;
- (BOOL)hasReadAllFreshContent;
- (void)setHasReadAllFreshContent:(BOOL)arg0;
- (BOOL)isRecommendFlow;
- (void)setIsRecommendFlow:(BOOL)arg0;
- (unsigned long long)freshCount;
- (id)previousPageValue;
- (id)firstPublishedVideoId;
- (void)setFirstPublishedVideoId:(id)arg0;
- (void)initFetchWithNoHandleDataCompletion:(id /* block */)arg0;
- (void)refreshWithNoHandleDataCompletion:(id /* block */)arg0;
- (id)handleRefreshCompletionData:(id)arg0 error:(id)arg1 isInitFetch:(BOOL)arg2 isFakeRefresh:(BOOL)arg3;
- (BOOL)getIsInsertLogicExist;
- (BOOL)hasForceInsertedRecommandUserCard;
- (void)setHasForceInsertedRecommandUserCard:(BOOL)arg0;
- (void)probeAliveIfNeedWithCurrentIndex:(long long)arg0 CompletionBlock:(id /* block */)arg1;
- (id)deleteHistoryDataWithCurrentIndexIfNeed:(long long)arg0;
- (void)updateEnterFollowWithModel:(id)arg0;
- (id /* block */)isEqualBlock;
- (id)addressBookAccess;
- (id)alreadyLastView;
- (void)setAlreadyLastView:(id)arg0;
- (BOOL)useBackup;
- (void)setUseBackup:(BOOL)arg0;
- (void)videoPlay:(id)arg0;
- (BOOL)isLiveCard:(id)arg0;
- (void)albumAppendImagesNotificationHandler:(id)arg0;
- (void)trackAccuracyCheckWithNoticeType:(id)arg0 response:(id)arg1;
- (void)refreshProbeAliveStatus;
- (void)refreshProbeAliveTime;
- (void)trackFollowChannelWithNewItemCount:(id)arg0 newRoomCount:(id)arg1 logPb:(id)arg2;
- (id)locationAccess;
- (id)getExpectedSizeInfo;
- (long long)refreshIndex;
- (void)setRefreshIndex:(long long)arg0;
- (double)lastEnterTabTimeStamp;
- (void)setLastEnterTabTimeStamp:(double)arg0;
- (void)setHasLastView:(BOOL)arg0;
- (void)setLastViewIndex:(long long)arg0;
- (void)setHasProbeAlive:(BOOL)arg0;
- (void)setHasTrackForProbeAlive:(BOOL)arg0;
- (void)setLastRefreshTime:(id)arg0;
- (BOOL)hasProbeAlive;
- (BOOL)hasLastView;
- (long long)lastViewIndex;
- (id)lastRefreshTime;
- (BOOL)hasTrackForProbeAlive;
- (BOOL)isInsertLogicExist;
- (void)setIsInsertLogicExist:(BOOL)arg0;
- (void)updateFeedPullType:(long long)arg0 response:(id)arg1;
- (void)requestFollowingFeedDataWithParams:(id)arg0 pullType:(long long)arg1 completion:(id /* block */)arg2;
- (void)reloadListWithPullType:(long long)arg0 noHandleDataCompletion:(id /* block */)arg1;
- (BOOL)isLoadMoreRequestOnAir;
- (id)__commonParams;
- (id)__concernFeedGoodsCardAdditionParams;
- (void)setIsEnterFollowWithYellowDot:(BOOL)arg0;
- (void)onRefreshWithCompleted:(id)arg0 pullType:(long long)arg1 awemeId:(id)arg2 fakeStrategy:(unsigned long long)arg3 enableFakeRefreshV4:(BOOL)arg4 params:(id)arg5 response:(id)arg6 error:(id)arg7 noHandleDataCompletion:(id /* block */)arg8;
- (BOOL)isEnterFollowWithYellowDot;
- (BOOL)shouldSaveDataWhenRefresh;
- (id)snapShotKey;
- (id)storageSnapshotQueue;
- (void)updateConcernCardListInfo:(id)arg0 feedType:(long long)arg1 awemeBlock:(id /* block */)arg2;
- (id)transferAwemeListIfNeededWithArray:(id)arg0;
- (id)refreshDataSourceWithArray:(id)arg0 cleanRefresh:(BOOL)arg1 requestId:(id)arg2 trackContext:(id)arg3;
- (void)preloadConcernGoodsCardFromIndex:(int)arg0 fetchType:(long long)arg1 dataSourceCount:(int)arg2;
- (void)setHasUpdatedItems:(BOOL)arg0;
- (void)p_addEmptyListMonitorWithResponse:(id)arg0 isFilterEmpty:(BOOL)arg1 error:(id)arg2;
- (void)_storeLiveListWithData:(id)arg0 isFetch:(BOOL)arg1;
- (void)trackFollowFeedResponse:(id)arg0 error:(id)arg1 dataList:(id)arg2 trackContext:(id)arg3;
- (void)setIsLoadMoreRequestOnAir:(BOOL)arg0;
- (id)loadmoreDataSourceWithArray:(id)arg0 requestId:(id)arg1 trackContext:(id)arg2;
- (BOOL)enterWithYellowDot;
- (void)trackRequestDurationWithPullType:(long long)arg0 error:(id)arg1;
- (id)filterDatasourceForNewConcernWithArray:(id)arg0;
- (id)cacheHashWithViewedItem:(id)arg0;
- (id)filterDuplicatedDatasourceWithArray:(id)arg0 requestId:(id)arg1 isEqual:(id /* block */)arg2 didGetDuplicatedArray:(id /* block */)arg3 trackContext:(id)arg4;
- (void)trackWhenDeleteDuplicatedItems:(id)arg0 requestId:(id)arg1;
- (id)transferAwemeModelForLive:(id)arg0;
- (id)viewedCache;
- (void)syncViewedCache;
- (void)setEnterWithYellowDot:(BOOL)arg0;
- (void)setViewedCache:(id)arg0;
- (void)refreshLastViewInformation;
- (void)setStorageSnapshotQueue:(id)arg0;
- (void)setLevel:(id)arg0;
- (id)cursor;
- (id)init;
- (id)level;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setCursor:(id)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (void)preloadWithCompletion:(id /* block */)arg0;
- (void)setFetchCount:(id)arg0;
- (id)fetchCount;
- (id)responseCache;
- (void)setResponseCache:(id)arg0;

@end
