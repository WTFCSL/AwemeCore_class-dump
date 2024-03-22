//
//     Generated by private class-dump
//

@class NSObject, AWENewHotSearchModel, AWEHotSearchProgressViewWithNumber, NSMutableArray, AWEHotSearchTopTitleView, UIView, AWEAwemeHotSpotSoftMaskManager, NSString, AWEHotSpotFoldVideoManager, MASConstraint, AWEHotSpotFeedViewModel, AWEHotSearchChangeModeBottomView, NSArray, AWEHotPointPanelBaseViewController, AWEHotSearchInnerBottomView;
@protocol AWEHotSpotManagerProtocol;

@interface AWEAwemeHotSearchTableViewController : AWEAwemeDetailTableViewController <AWEHotPointPanelControllerDelegate, AWEHotPointDataSource, UIGestureRecognizerDelegate, AWEHotSearchInnerBottomViewDelegate, CAAnimationDelegate, AWEHotSearchTopTitleDelegate, AWEHotSearchChangeModeDelegate, AWEHotSearchProgressViewDelegate, AWEHotSearchUnfoldFoldedVideoDelegate, AWEUserMessage, AWERouterViewControllerProtocol, AWEAwemeHotSearchTableViewControllerProtocol, AWENewHotSpotSearchFeedLoadHandlerDelegate> {
    BOOL _aweTTArticle_isAnimating;
    BOOL _aweTTArticle_isExpanding;
    BOOL _isTopTitleViewAnimating;
    BOOL _isInLiveLandScapeForIOS16;
    AWEHotSpotFeedViewModel *_viewModel;
    AWEHotSearchInnerBottomView *_innerBottomView;
    AWEHotPointPanelBaseViewController *_panelViewController;
    NSObject<AWEHotSpotManagerProtocol> *_originManager;
    NSArray *_allHotSpotsArray;
    AWEHotSearchTopTitleView *_topTitleView;
    NSObject<AWEHotSpotManagerProtocol> *_hotSearchManager;
    NSObject<AWEHotSpotManagerProtocol> *_originRecommendManager;
    AWENewHotSearchModel *_initialHotSpotModel;
    AWENewHotSearchModel *_lastHotSpotModel;
    NSString *_mainHotSpotForEntryWord;
    NSString *_relatedHotSpotWord;
    AWEAwemeHotSpotSoftMaskManager *_softMaskManager;
    UIView *_moreViewMaskView;
    NSMutableArray *_successBlocks;
    AWEHotSearchProgressViewWithNumber *_optimizedProgressView;
    NSObject<AWEHotSpotManagerProtocol> *_eventManager;
    AWEHotSpotFoldVideoManager *_foldVideoManager;
    AWEHotSearchChangeModeBottomView *_changeModeBottomView;
    MASConstraint *_changeModeBottomViewTop;
    long long _latestInsertRow;
    double _fetchedDataTimeStamp;
    UIView *_returnView;
}

@property (retain, nonatomic) AWEHotPointPanelBaseViewController *panelViewController;
@property (retain, nonatomic) NSObject<AWEHotSpotManagerProtocol> *originManager;
@property (copy, nonatomic) NSArray *allHotSpotsArray;
@property (retain, nonatomic) AWEHotSearchTopTitleView *topTitleView;
@property (retain, nonatomic) NSObject<AWEHotSpotManagerProtocol> *hotSearchManager;
@property (retain, nonatomic) NSObject<AWEHotSpotManagerProtocol> *originRecommendManager;
@property (retain, nonatomic) AWENewHotSearchModel *initialHotSpotModel;
@property (retain, nonatomic) AWENewHotSearchModel *lastHotSpotModel;
@property (copy, nonatomic) NSString *mainHotSpotForEntryWord;
@property (copy, nonatomic) NSString *relatedHotSpotWord;
@property (retain, nonatomic) AWEAwemeHotSpotSoftMaskManager *softMaskManager;
@property (retain, nonatomic) UIView *moreViewMaskView;
@property (retain, nonatomic) NSMutableArray *successBlocks;
@property (retain, nonatomic) AWEHotSearchProgressViewWithNumber *optimizedProgressView;
@property (retain, nonatomic) NSObject<AWEHotSpotManagerProtocol> *eventManager;
@property (retain, nonatomic) AWEHotSpotFoldVideoManager *foldVideoManager;
@property (retain, nonatomic) AWEHotSearchChangeModeBottomView *changeModeBottomView;
@property (nonatomic) BOOL aweTTArticle_isAnimating;
@property (nonatomic) BOOL aweTTArticle_isExpanding;
@property (retain, nonatomic) MASConstraint *changeModeBottomViewTop;
@property (nonatomic) BOOL isTopTitleViewAnimating;
@property (nonatomic) long long latestInsertRow;
@property (nonatomic) BOOL isInLiveLandScapeForIOS16;
@property (nonatomic) double fetchedDataTimeStamp;
@property (retain, nonatomic) UIView *returnView;
@property (retain, nonatomic) AWEHotSpotFeedViewModel *viewModel;
@property (retain, nonatomic) AWEHotSearchInnerBottomView *innerBottomView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadDetailTableViewAdapterClass;
+ (id)createInstanceWithDataArray:(id)arg0 initialIndex:(long long)arg1 referString:(id)arg2 otherParams:(id)arg3;

- (id)reactId;
- (void)setReactId:(id)arg0;
- (id)referString;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })arg0 toBreakPoint:(struct { long long x0; long long x1; })arg1;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)enterFrom;
- (id)currentAwemeModel;
- (void)setAweDisableFullscreenPopTransition:(BOOL)arg0;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)awe_onReturnButtonClicked:(id)arg0;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)configWithParamDict:(id)arg0;
- (id)currentCommentInputView;
- (void)setDataController:(id)arg0;
- (BOOL)shouldLoadPrevious;
- (BOOL)shouldPreventPause;
- (void)updateBottomBarWithAweme:(id)arg0 updateTiming:(long long)arg1;
- (void)setLoadPrevious:(BOOL)arg0;
- (void)setBottomBarHidden:(BOOL)arg0;
- (BOOL)isHotPointPanelShowed;
- (id)panelViewController;
- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (void)configureUI;
- (void)setReturnView:(id)arg0;
- (id)returnView;
- (id)cellReuseIdentifierForRowWithModel:(id)arg0;
- (BOOL)isHotPointPanelShow;
- (BOOL)allowSlideToNextFeedWithIndex:(long long)arg0;
- (void)hasSlideToOtherFeed;
- (void)cellWillDisplay:(id)arg0 forRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)initialDataSourceFetchDidFinished;
- (id)currentHotSearchModel;
- (void)shouldCloseFullMode;
- (BOOL)isFromLocalHotSpot;
- (id)trendingKeyWord;
- (void)appendTrackParamsIfNeeded:(id)arg0;
- (void)addLoadMoreIfNeeded;
- (void)configureRelateDataControllerIfNeed;
- (void)trackLaunch:(id)arg0;
- (BOOL)shouldUseInnerBottomBarCoordinator;
- (void)updateLastPlayingAwemeID;
- (void)_trackEventStayTime;
- (id)aAWEPadDetailTableViewAdapter;
- (id)innerBottomView;
- (void)updateInnerBottomViewHidden:(BOOL)arg0;
- (void)hideChangeModeViewIfNeeded:(BOOL)arg0;
- (void)setAweTTArticle_isExpanding:(BOOL)arg0;
- (id)topTitleView;
- (id)moreViewMaskView;
- (id)changeModeBottomView;
- (void)setChangeModeBottomViewTop:(id)arg0;
- (id)optimizedProgressView;
- (void)updateProgressUIWithCurrentAwemeModel:(id)arg0 isScroll:(BOOL)arg1;
- (id)verticalBoardModel;
- (id)mainHotSpotForEntryWord;
- (void)setMainHotSpotForEntryWord:(id)arg0;
- (id)relatedHotSpotWord;
- (void)setRelatedHotSpotWord:(id)arg0;
- (void)addNewMultiParamsToModel:(id)arg0;
- (BOOL)isHotSpotFeedForIP;
- (id)panelManager;
- (void)adjustInnerBottomStyleForIPHiddenNextBtn;
- (void)fetchRaceLampDataWithText:(id)arg0 groupIds:(id)arg1 completion:(id /* block */)arg2;
- (void)setFetchedDataTimeStamp:(double)arg0;
- (id)hotSearchModelForKeywordModel:(id)arg0;
- (id)allHotSpotsArray;
- (void)setInitialHotSpotModel:(id)arg0;
- (id)initialHotSpotModel;
- (void)bottomBarUseGrayStyleIfNeededWithModel:(id)arg0;
- (void)configureInitialHotSpotModel:(id)arg0 andTabsArray:(id)arg1;
- (void)trackHotSpotTurnToGray:(id)arg0;
- (void)loadMoreForOldStyle;
- (BOOL)isInSearchTimelineMode;
- (void)changeHotSpotIfDataEmpty;
- (void)expandHotPanelIfNeeded;
- (void)addTrackerForLocalHotSpotBoardModel:(id)arg0 inDict:(id)arg1;
- (void)trackEnterTrendingPageEventWithHotSearchModel:(id)arg0 andAwemeModel:(id)arg1;
- (void)setLastHotSpotModel:(id)arg0;
- (id)nextHotSpotModelAfterModel:(id)arg0;
- (void)hotPointCardDidTapped:(id)arg0 index:(long long)arg1 isHotWordsTapped:(BOOL)arg2 groupIds:(id)arg3;
- (void)shakeOnChangeHotPoint;
- (BOOL)isLastHotSpotModel:(id)arg0;
- (void)configVoiceOverElements;
- (id)hotSearchModelForKeywordModel:(id)arg0 needForceFreshAsRelatedWords:(BOOL)arg1 targetHotspotID:(id)arg2;
- (id)verticalManager;
- (id)originManager;
- (id)verticalRecommendManager;
- (id)originRecommendManager;
- (void)trackVideoRequest:(id)arg0;
- (void)handleLiveDetailExpandState:(id)arg0;
- (void)handleLiveCommentBecomeActive:(id)arg0;
- (void)handleLiveCommentWillResignActive:(id)arg0;
- (void)handleBaikeClickTracker:(id)arg0;
- (void)changeToFullModeInDiscussionCell:(id)arg0;
- (void)handleProgressViewDisplayScrollingToutiaoArticle:(id)arg0;
- (void)loadWebViewData:(id)arg0;
- (void)handleArticleAppearNoti:(id)arg0;
- (void)handleJSBroadcastNotification:(id)arg0;
- (void)handleLynxNotification:(id)arg0;
- (void)receiveDisableFullScreenTransitionNotification:(id)arg0;
- (void)onScrollWillChangeVideo:(id)arg0 index:(long long)arg1 directTop:(BOOL)arg2;
- (void)hideInteractionView:(BOOL)arg0 andMoreView:(BOOL)arg1;
- (BOOL)shouldShowMoreViewInLiveFullScreen;
- (id)pageReferString;
- (BOOL)aweTTArticle_isAnimating;
- (void)changeCurrentTabToNationIfNeeded;
- (id)articleWebVC;
- (id)foldVideoManager;
- (void)unfoldFoldedVideoWithCompletion:(id /* block */)arg0;
- (void)disableSlideGesture;
- (double)fetchedDataTimeStamp;
- (id)softMaskManager;
- (void)onScrollViewWillBeginDragging:(double)arg0;
- (void)animateBottomBarIfNeeded:(double)arg0;
- (void)onScrollBackToIndex:(long long)arg0;
- (id)configCell:(id)arg0 atIndexPath:(id)arg1 tableView:(id)arg2;
- (void)setCommonBottomBarHidden:(BOOL)arg0 model:(id)arg1;
- (BOOL)isInLiveLandScapeForIOS16;
- (void)updateCommentBottomBarHidden:(BOOL)arg0;
- (void)tableViewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 isLiveRoomRotate:(BOOL)arg1;
- (BOOL)shouldAdjustWhenRotate;
- (void)setIsInLiveLandScapeForIOS16:(BOOL)arg0;
- (id)lastHotSpotModel;
- (void)hideMaskViewIfNeed;
- (void)shouldCloseFullMode:(id)arg0 cell:(id)arg1;
- (void)hideViews:(BOOL)arg0;
- (void)changeToNewHotSpotModel:(id)arg0 awemeModel:(id)arg1 isScrolled:(BOOL)arg2;
- (long long)latestInsertRow;
- (void)setLatestInsertRow:(long long)arg0;
- (void)updateProgressViewOnNewReponse;
- (void)onScrollDidEndWithIndexPath:(id)arg0;
- (void)loadPrevious:(BOOL)arg0;
- (void)hideChangeModeViewIfNeeded:(BOOL)arg0 needAnimation:(BOOL)arg1;
- (void)hideViews:(BOOL)arg0 needAnimation:(BOOL)arg1;
- (void)hideInteractionView:(BOOL)arg0 duration:(double)arg1;
- (void)hideInteractionView:(BOOL)arg0 andMoreView:(BOOL)arg1 duration:(double)arg2;
- (id)hotSearchManager;
- (id)createSearchTimeLineNode:(id)arg0;
- (id)previousHotSpotModelBeforeModel:(id)arg0;
- (void)trackEnterTrendingPageEvent;
- (id)articleWebVCForCellController:(id)arg0;
- (id)lynxContainerViewForCellController:(id)arg0;
- (void)enableSlideGesture;
- (BOOL)isTopTitleViewAnimating;
- (void)setIsTopTitleViewAnimating:(BOOL)arg0;
- (void)setAweTTArticle_isAnimating:(BOOL)arg0;
- (void)dismissPanelWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (long long)currentBizType;
- (void)updatePanelLayout:(id)arg0;
- (void)resetPanelView;
- (id)risingHotSpotTitle;
- (BOOL)shouldShowHotWordsRecommend;
- (void)trackClickMoreHotSpot:(BOOL)arg0;
- (void)fastSwitchNextHotSpot;
- (void)onHotSearchMoreViewClicked;
- (id)configureTopTitleViewOuterParmasModel;
- (void)updatePanelLayout;
- (void)loadMoreIPHotSpotListIfNeeded;
- (void)updateBottomBarByRecommendWords;
- (void)showPanelView;
- (void)postNotificationForDiscussion:(BOOL)arg0;
- (void)updateProgressViewAfterDislike:(id)arg0;
- (void)onHotSpotMoreViewMaskViewTapped;
- (long long)currentAwemeTypeForTrack;
- (id)configAfterModel:(id)arg0;
- (id)configPreviousModel:(id)arg0;
- (void)configureFirstInitialResponse:(BOOL)arg0 toAwemeID:(id)arg1;
- (void)loadmoreForOnlyOneVideo;
- (void)finishNetworkRequest;
- (void)loadEventIfNeeded:(id)arg0 direction:(long long)arg1;
- (void)configHotspotFirstResponseEmpty:(BOOL)arg0;
- (void)updateAvoidDefaultPageShowFlag:(BOOL)arg0;
- (BOOL)eventListIsEmpty;
- (BOOL)shouldTrackWordShow;
- (void)actionClicked;
- (BOOL)showingLive;
- (id)hotSpotTableView;
- (id)hotSpotReturnView;
- (BOOL)needCancelTransition;
- (void)needUpdateDataControllerForKeyWord:(id)arg0 dataArray:(id)arg1 totalVideoCount:(long long)arg2;
- (id)createHotSpotInnerBottomBarContextBlock;
- (void)onCellDidEndDisplay:(id)arg0;
- (void)onScrollDidScroll:(id)arg0 nextModel:(id)arg1 percentage:(double)arg2;
- (void)addLoadPreviousIfNeeded;
- (void)hideHotInteractionView:(BOOL)arg0;
- (id)lynxContainerView;
- (void)configureNewDetailBoard:(id)arg0;
- (void)_onAwemeDeleted:(id)arg0 isDislike:(BOOL)arg1;
- (void)setInnerBottomView:(id)arg0;
- (void)setPanelViewController:(id)arg0;
- (void)setOriginManager:(id)arg0;
- (void)setAllHotSpotsArray:(id)arg0;
- (void)setTopTitleView:(id)arg0;
- (void)setHotSearchManager:(id)arg0;
- (void)setOriginRecommendManager:(id)arg0;
- (void)setSoftMaskManager:(id)arg0;
- (void)setMoreViewMaskView:(id)arg0;
- (void)setSuccessBlocks:(id)arg0;
- (void)setOptimizedProgressView:(id)arg0;
- (void)setFoldVideoManager:(id)arg0;
- (void)setChangeModeBottomView:(id)arg0;
- (BOOL)aweTTArticle_isExpanding;
- (id)changeModeBottomViewTop;
- (BOOL)shouldAutorotate;
- (void)setEventManager:(id)arg0;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)successBlocks;
- (unsigned long long)supportedInterfaceOrientations;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)appDidBecomeActive:(id)arg0;
- (id)eventManager;
- (void)fetchData;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (void)addCompletionBlock:(id /* block */)arg0;
- (id)viewModel;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)play;
- (void)viewDidLoad;
- (void)appWillResignActive:(id)arg0;
- (id)dataController;
- (void)addObservers;
- (long long)initialIndex;
- (void)setInitialIndex:(long long)arg0;

@end