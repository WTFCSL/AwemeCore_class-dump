//
//     Generated by private class-dump
//

@class NSDictionary, AWENearbyPageContext, AWENearbyC2SectionLayoutConfig, NSString, AWENearbyC2FeedViewModel, AWENearbyC2AutoPlayConfig, UICollectionViewCell;
@protocol AWENearbyC2ContainerFeedCellProtocol, AWENearbyC2FeedDelegate;

@interface AWENearbyC2FeedController : NSObject <AWENearbyContainerEventMessage, AWENearbyHalfScreenContainerEventMessage, AWEPlayVideoMessage, AWELiveRoomMessage, AWENearbyC2ContainerFeedSectionProtocol, AWENearbyC2CommonLifeCycleProtocol, AWENearbyC2NicolEventDelegate, AWENearbyContainerCollectionViewProtocol, AWENearbyC2FeedCellDelegate> {
    BOOL _isFirstFetched;
    BOOL _isInitFetchFinish;
    BOOL _needInvalidateLayout;
    BOOL _isHalfScreenShowing;
    NSDictionary *previousPageContext;
    AWENearbyC2FeedViewModel *_vm;
    id<AWENearbyC2FeedDelegate> _delegate;
    AWENearbyC2SectionLayoutConfig *_feedSectionLayout;
    AWENearbyPageContext *_pageContext;
    AWENearbyC2AutoPlayConfig *_autoPlayConfig;
    long long _lastAutoPlayType;
    long long _normalRefreshCount;
    long long _schemaAutoPlayRefreshCount;
    UICollectionViewCell<AWENearbyC2ContainerFeedCellProtocol> *_playingCell;
}

@property (retain, nonatomic) AWENearbyC2FeedViewModel *vm;
@property (nonatomic) BOOL isFirstFetched;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (nonatomic) BOOL isInitFetchFinish;
@property (retain, nonatomic) AWENearbyC2AutoPlayConfig *autoPlayConfig;
@property (retain, nonatomic) AWENearbyC2SectionLayoutConfig *feedSectionLayout;
@property (nonatomic) BOOL needInvalidateLayout;
@property (nonatomic) long long lastAutoPlayType;
@property (nonatomic) long long normalRefreshCount;
@property (nonatomic) long long schemaAutoPlayRefreshCount;
@property (retain, nonatomic) UICollectionViewCell<AWENearbyC2ContainerFeedCellProtocol> *playingCell;
@property (nonatomic) BOOL isHalfScreenShowing;
@property (weak, nonatomic) id<AWENearbyC2FeedDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *previousPageContext;

- (id)referString;
- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)playerDidReadyForDisplay:(id)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)audienceQuitAllRoomWithSlideVC:(id)arg0 player:(id)arg1 context:(id)arg2;
- (BOOL)isHalfScreenShowing;
- (BOOL)enableAutoPlay;
- (long long)autoPlayAffectTime;
- (void)setupBinding;
- (void)setAutoPlayConfig:(id)arg0;
- (void)deleteEndedLivedRoom:(id)arg0;
- (void)setIsHalfScreenShowing:(BOOL)arg0;
- (id)modelForPlayer:(id)arg0;
- (id)nearbyIdentifier;
- (id)nextPlayCellList;
- (id)playingCell;
- (id)initWithPageContext:(id)arg0;
- (id)collectionView:(id)arg0 layout:(id)arg1 sectionLayoutConfigInSection:(long long)arg2;
- (double)collectionView:(id)arg0 layout:(id)arg1 columnCountInSection:(long long)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 cellWidth:(double)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)deleteAwemes:(id)arg0;
- (void)containerDidLoad;
- (id)previousPageContext;
- (void)nearbyContainerDidDisappear;
- (void)nearbyContainerEnterBackground;
- (void)containerscrollViewDidEndScroll:(id)arg0;
- (void)nearbyHalfScreenContainerWillShowWithModel:(id)arg0;
- (void)nearbyHalfScreenContainerWillDismissWithModel:(id)arg0;
- (id)vm;
- (void)insertAwemeModel:(id)arg0 index:(long long)arg1 insertType:(unsigned long long)arg2;
- (void)setPreviousPageContext:(id)arg0;
- (id)isSchemaInsertLiveUndeTake;
- (id)grouponIdentifier;
- (BOOL)shouldStopAutoPlay;
- (long long)normalRefreshCount;
- (void)setNormalRefreshCount:(long long)arg0;
- (long long)schemaAutoPlayRefreshCount;
- (void)setSchemaAutoPlayRefreshCount:(long long)arg0;
- (void)setIsInitFetchFinish:(BOOL)arg0;
- (BOOL)isInitFetchFinish;
- (void)playEnd:(id)arg0;
- (void)willExitInnerPage:(id)arg0;
- (void)willEnterInnerPage:(id)arg0;
- (void)shouldShowSmallScreenWithRoomID:(id)arg0 customSchema:(id)arg1 scene:(long long)arg2;
- (void)cellSizeChangeWithAweme:(id)arg0;
- (void)cellUpdatePlayTime:(double)arg0 totalTime:(double)arg1 awemeModel:(id)arg2;
- (void)cellUpdateLivePlayTime:(double)arg0 awemeModel:(id)arg1;
- (void)setVm:(id)arg0;
- (void)setIsFirstFetched:(BOOL)arg0;
- (void)startAutoPlayType:(long long)arg0 source:(long long)arg1;
- (BOOL)needInvalidateLayout;
- (void)setNeedInvalidateLayout:(BOOL)arg0;
- (BOOL)isFirstFetched;
- (void)incrementFreshCount;
- (void)updateFirstFetch;
- (id)feedSectionLayout;
- (void)setLastAutoPlayType:(long long)arg0;
- (void)autoPlayNextCellFromSource:(id)arg0;
- (BOOL)inSchemaAutoPlayUnderTake;
- (void)setPlayingCell:(id)arg0;
- (long long)lastAutoPlayType;
- (BOOL)isLiveSmallWindowShowingAtNearby;
- (id)getLiveSmallWindowManger;
- (void)pauseAutoPlay;
- (void)restartAutoPlay;
- (BOOL)hasLiveSmallWindow;
- (void)hideLiveSmallScreen;
- (void)trackVideoRenderTime:(id)arg0;
- (void)onItemDeletedWithAweme:(id)arg0;
- (void)insertAwemeModel:(id)arg0 index:(long long)arg1 allowApendMax:(BOOL)arg2 insertType:(unsigned long long)arg3;
- (id)lastVisibleCanInsertItemPath;
- (void)resumeAutoPlay;
- (void)setFeedSectionLayout:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)addObserver;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (BOOL)cancelCurrentRequest;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (id)autoPlayConfig;

@end
