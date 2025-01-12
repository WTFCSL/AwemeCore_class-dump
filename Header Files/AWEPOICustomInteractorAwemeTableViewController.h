//
//     Generated by private class-dump
//

@class NSMutableDictionary, AWEUILoadingView, AWEAweMVTemplateModel, NSDictionary, UITableView, AWECommentRequestExtraModel, UIViewController, UIView, NSString, AWEListDataController, AWEPOICustomInteractorConstData, AWEAwemeModel, NSArray, NSNumber;
@protocol AWEPOICustomInteractorStickyHeaderViewProtocol, AWEAwemeDetailTableViewControllerDelegate, AWEPOICustomInteractionViewControllerTransitionDelegate, AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol, AWEPOIFeedListDataControllerProtocol, AWEAwemeDetailTableViewControllerProtocol, AFDSpeedManagerProtocol, AWEPOICustomInteractorStickyFooterViewProtocol;

@interface AWEPOICustomInteractorAwemeTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEPOICustomInteractorStorage, AWEZoomTransitionInnerContextProvider, AWEDetailDrawBackCellDelegate, AWEPOICustomInteractorContainerProtocol> {
    BOOL _isModernFullScreen;
    BOOL _shouldPreventStartStayTime;
    BOOL _shouldPreventPause;
    BOOL disablePreLoadMore;
    BOOL _loadPrevious;
    BOOL _showInitialLoading;
    BOOL _autoPlay;
    BOOL _pausedByOutside;
    id<AWEAwemeDetailTableViewControllerDelegate> _delegate;
    NSString *_openModalViewBizType;
    AWEListDataController<AWEPOIFeedListDataControllerProtocol> *_dataController;
    NSString *_cityInfoString;
    id /* block */ _dataControllerDeleteBlock;
    NSDictionary *_detailContext;
    id /* block */ _detailVCPopTransitionBlock;
    AWECommentRequestExtraModel *_commentRequestExtraModel;
    id /* block */ _logExtraDictBlock;
    id<AFDSpeedManagerProtocol> speedManager;
    UIViewController<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *videoController;
    NSArray *effects;
    NSArray *bindEffects;
    long long exitType;
    unsigned long long _scene;
    id<AWEPOICustomInteractionViewControllerTransitionDelegate> _transitionDelegate;
    NSString *_referString;
    UITableView *_tableView;
    NSString *_reactId;
    id /* block */ _dataControllerChangedBlock;
    id /* block */ _dataControllerLoadmoreBlock;
    NSNumber *_initialIndex;
    UIView *_navBar;
    AWEUILoadingView *_loadingView;
    UIView *_entryBackgroundView;
    NSString *_anchorAwemeID;
    double _seekTime;
    AWEPOICustomInteractorConstData *_constData;
    NSDictionary *_trackerData;
    NSMutableDictionary *_internalLocalStorage;
    UIView<AWEPOICustomInteractorStickyFooterViewProtocol> *_footerView;
    UIView<AWEPOICustomInteractorStickyHeaderViewProtocol> *_headerView;
}

@property (retain, nonatomic) NSNumber *initialIndex;
@property (retain, nonatomic) UIView *navBar;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *entryBackgroundView;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL pausedByOutside;
@property (copy, nonatomic) NSString *anchorAwemeID;
@property (nonatomic) double seekTime;
@property (retain, nonatomic) AWEPOICustomInteractorConstData *constData;
@property (copy, nonatomic) NSDictionary *trackerData;
@property (retain, nonatomic) NSMutableDictionary *internalLocalStorage;
@property (retain, nonatomic) UIView<AWEPOICustomInteractorStickyFooterViewProtocol> *footerView;
@property (retain, nonatomic) UIView<AWEPOICustomInteractorStickyHeaderViewProtocol> *headerView;
@property (readonly, nonatomic) unsigned long long scene;
@property (weak, nonatomic) id<AWEPOICustomInteractionViewControllerTransitionDelegate> transitionDelegate;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEListDataController<AWEPOIFeedListDataControllerProtocol> *dataController;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSString *reactId;
@property (copy, nonatomic) id /* block */ dataControllerChangedBlock;
@property (copy, nonatomic) id /* block */ dataControllerLoadmoreBlock;
@property (nonatomic, getter=shouldLoadPrevious) BOOL loadPrevious;
@property (nonatomic) BOOL showInitialLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ dataControllerDeleteBlock;
@property (weak, nonatomic) id<AWEAwemeDetailTableViewControllerDelegate> delegate;
@property (readonly, nonatomic) AWEAwemeModel *currentDisplayingAweme;
@property (nonatomic) BOOL isModernFullScreen;
@property (nonatomic) BOOL shouldPreventStartStayTime;
@property (nonatomic) BOOL shouldPreventPause;
@property (copy, nonatomic) NSString *openModalViewBizType;
@property (copy, nonatomic) id /* block */ detailVCPopTransitionBlock;
@property (copy, nonatomic) NSDictionary *detailContext;
@property (nonatomic) long long exitType;
@property (copy, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSArray *bindEffects;
@property (retain, nonatomic) id<AFDSpeedManagerProtocol> speedManager;
@property (readonly, nonatomic) UIViewController<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *videoController;
@property (retain, nonatomic) AWECommentRequestExtraModel *commentRequestExtraModel;
@property (copy, nonatomic) id /* block */ logExtraDictBlock;
@property (copy, nonatomic) NSString *cityInfoString;
@property (copy, nonatomic) NSString *originEntryEnterMethod;
@property (retain, nonatomic) NSDictionary *userTrackAttributes;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) id /* block */ trackAwemePlayTime;
@property (nonatomic) BOOL shouldHideMusicInfoView;
@property (copy, nonatomic) NSDictionary *detailBottomInfoDict;
@property (copy, nonatomic) NSString *mvID;
@property (retain, nonatomic) NSNumber *cutSameStatusCode;
@property (retain, nonatomic) AWEAweMVTemplateModel *cutSameTemplate;
@property (copy, nonatomic) NSString *openProductId;
@property (copy, nonatomic) NSDictionary *ecomLiveParams;
@property (copy, nonatomic) NSString *adLightWebURL;
@property (nonatomic) BOOL isFromSearchECommerce;
@property (copy, nonatomic) NSString *previousPage;
@property (weak, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *previousFeedFallThroughController;
@property (weak, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *nextFeedFallThroughController;
@property (weak, nonatomic) id fallThroughFromTransitionProvider;
@property (nonatomic) BOOL transitionOriginIndexEnable;
@property (nonatomic) BOOL emptyFilteredDataSourceUseLoadMore;
@property (nonatomic) BOOL enableAutoScrollToNextVideo;
@property (copy, nonatomic) id /* block */ dataControllerModifyBlock;
@property (nonatomic) BOOL disableZoomTransition;
@property (nonatomic) BOOL enablePopDismissByDefault;
@property (nonatomic) long long currentPlayingIndex;
@property (nonatomic) BOOL disablePreLoadMore;

- (id)reactId;
- (void)setReactId:(id)arg0;
- (id)commentRequestExtraModel;
- (void)setCommentRequestExtraModel:(id)arg0;
- (id)cityInfoString;
- (void)setCityInfoString:(id)arg0;
- (id)referString;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (void)setReferString:(id)arg0;
- (long long)zoomTransitionItemOffset;
- (id)aweui_emptyPageBelowView;
- (id /* block */)dataControllerChangedBlock;
- (void)setDataControllerChangedBlock:(id /* block */)arg0;
- (id /* block */)dataControllerDeleteBlock;
- (void)setDataControllerDeleteBlock:(id /* block */)arg0;
- (id /* block */)dataControllerLoadmoreBlock;
- (void)setDataControllerLoadmoreBlock:(id /* block */)arg0;
- (void)setDataController:(id)arg0;
- (BOOL)shouldLoadPrevious;
- (BOOL)showInitialLoading;
- (BOOL)isModernFullScreen;
- (void)setIsModernFullScreen:(BOOL)arg0;
- (BOOL)shouldPreventStartStayTime;
- (void)setShouldPreventStartStayTime:(BOOL)arg0;
- (BOOL)shouldPreventPause;
- (id)openModalViewBizType;
- (void)setOpenModalViewBizType:(id)arg0;
- (id /* block */)detailVCPopTransitionBlock;
- (void)setDetailVCPopTransitionBlock:(id /* block */)arg0;
- (id)detailContext;
- (void)setDetailContext:(id)arg0;
- (id)bindEffects;
- (void)setBindEffects:(id)arg0;
- (id)speedManager;
- (void)setSpeedManager:(id)arg0;
- (id /* block */)logExtraDictBlock;
- (void)setLogExtraDictBlock:(id /* block */)arg0;
- (void)reloadDataForDataControllerChange;
- (void)reloadWithDataController:(id)arg0 initialIndex:(long long)arg1;
- (void)updateInitialIndex:(long long)arg0;
- (id)currentLiveRoomID;
- (BOOL)disablePreLoadMore;
- (void)setDisablePreLoadMore:(BOOL)arg0;
- (void)setShouldPreventPause:(BOOL)arg0;
- (id)currentDisplayingAweme;
- (void)setShowInitialLoading:(BOOL)arg0;
- (void)setLoadPrevious:(BOOL)arg0;
- (void)p_setupUI;
- (void)p_onScrollDidEnd;
- (long long)modernTransitionItemOffset;
- (void)p_fetchData;
- (void)setAnchorAwemeID:(id)arg0;
- (id)anchorAwemeID;
- (double)contentOffsetYForCellAtIndex:(long long)arg0;
- (void)setupRecallRegisters;
- (void)p_reStarDrawBackCellIfNeed;
- (void)detailDrawBackCellTimeIsOver:(id)arg0;
- (void)p_dealRecallMessage:(id)arg0;
- (void)p_loadMoreData;
- (id)constData;
- (id)initWithVideoStyle:(unsigned long long)arg0 feedSceneType:(unsigned long long)arg1 dataController:(id)arg2 trackerData:(id)arg3 params:(id)arg4;
- (void)setTrackerData:(id)arg0;
- (id)trackerData;
- (BOOL)isFromPOICollect;
- (void)handleApplicationWillResignActive;
- (void)handleApplicationDidBecomeActive;
- (void)favoriteStatusChanged:(id)arg0;
- (void)setConstData:(id)arg0;
- (void)p_appendSessionIDToLynx:(id)arg0;
- (void)p_reloadViewWithDataInitial;
- (BOOL)pausedByOutside;
- (void)p_playCurrentVideo;
- (unsigned long long)_currentVisibleCellIndex;
- (void)setPausedByOutside:(BOOL)arg0;
- (void)p_pauseCurrentVideo;
- (void)p_addLoadMoreIfNeeded;
- (void)p_safeScrollToIndexPath:(id)arg0;
- (unsigned long long)p_scrollToAwemeId:(id)arg0;
- (void)p_updateCurrentItem;
- (void)p_updateStickyView:(BOOL)arg0;
- (double)p_cellHeight;
- (id)internalLocalStorage;
- (void)p_stopCurrentVideo;
- (id)p_currentDisplayingCell;
- (void)p_scrollToNextVideo;
- (void)p_updateHeaderView:(BOOL)arg0;
- (void)p_updateFooterView:(BOOL)arg0;
- (void)p_storeAwemeInCurrentSession:(id)arg0;
- (long long)poi_currentDisplayingCellIndex;
- (void)poi_play;
- (void)poi_showHeaderView;
- (void)poi_showNavBar;
- (void)poi_hideHeaderView;
- (void)poi_hideNavBar;
- (id)entryBackgroundView;
- (void)setEntryBackgroundView:(id)arg0;
- (void)setInternalLocalStorage:(id)arg0;
- (id)init;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)footerView;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void)setFooterView:(id)arg0;
- (void).cxx_destruct;
- (id)tableView;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setSeekTime:(double)arg0;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (long long)preferredStatusBarStyle;
- (void)setHeaderView:(id)arg0;
- (void)saveValue:(id)arg0 forKey:(id)arg1;
- (void)scrollViewDidScroll:(id)arg0;
- (id)effects;
- (id)delegate;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (double)seekTime;
- (BOOL)prefersStatusBarHidden;
- (id)headerView;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)viewDidLoad;
- (unsigned long long)scene;
- (void)setEffects:(id)arg0;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (long long)exitType;
- (void)setExitType:(long long)arg0;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg0;
- (id)videoController;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (id)localStorage;
- (id)initialIndex;
- (void)setInitialIndex:(id)arg0;
- (id)navBar;
- (void)setNavBar:(id)arg0;

@end
