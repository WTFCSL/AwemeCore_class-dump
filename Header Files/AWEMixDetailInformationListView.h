//
//     Generated by private class-dump
//

@class AWEUILoadingView, AWEPaymentDetailBuyButton, UILabel, AWEMixVideoSelectMixSectionHeadView, NSMutableDictionary, AWEMixVideoMoreMixSectionHeadView, UITableView, AWEMixVideoCollectiionButtonView, AWEMixVideoSelectMixSectionFooterView, AWEMixVideoEpisodeSegmentView, UIView, NSDictionary, AWEMixDetailInformationHeadView, NSString, NSMutableSet, AWEMixVideoListDataController, AWEAwemeModel, NSNumber, AWEMixVideoModel;
@protocol AWEMixVideoDetailInformationViewDelegate;

@interface AWEMixDetailInformationListView : UIView <UITableViewDataSource, UITableViewDelegate, AWEMixDetailInformationHeadViewDelegate, AWEMixVideoDetailServiceDelegate, AWEMixVideoHorizontalCellDelegate, AWEMixVideoEpisodeSegmentViewDelegate, AWEMixDetailInformationListViewProtocol> {
    BOOL skipLocalCache;
    BOOL _lightModeEnabled;
    BOOL _fromPersonPage;
    BOOL _showHeadContentView;
    BOOL _needForceLoadPreviousWhenInit;
    BOOL _watchedEpisodeLocated;
    BOOL _recommendMixTabDisabled;
    BOOL _segmentEnabled;
    BOOL _forceFirstPosition;
    BOOL _fromDetailList;
    BOOL _useExternalDataSource;
    BOOL _isPanelMoreMixClicked;
    BOOL _bottomAnimate;
    BOOL _isPreloadData;
    BOOL _isScrolling;
    BOOL _isNeedTabButtonChangeInScrolling;
    BOOL _hasPaymentUpdate;
    BOOL _isMoreMixButtonClicked;
    BOOL _isReportVIPMixShow;
    NSString *reqFrom;
    UITableView *_tableView;
    id<AWEMixVideoDetailInformationViewDelegate> _delegate;
    AWEMixDetailInformationHeadView *_headContentView;
    double _topOffset;
    double _navBarHeight;
    NSString *_previousPage;
    NSString *_searchID;
    NSString *_searchResultID;
    NSString *_searchLogPB;
    NSString *_searchListItemID;
    NSString *_searchListID;
    NSString *_searchKeyword;
    NSNumber *_watchedEpisode;
    NSString *_referString;
    NSString *_compilationEnterMethod;
    NSString *_compilationFromOrder;
    AWEMixVideoListDataController *_dataController;
    NSDictionary *_logExtraDict;
    NSNumber *_fromOrder;
    NSString *_panelSelectedMoreMixID;
    AWEMixVideoModel *_mixVideoModel;
    UILabel *_noContentTipLabel;
    AWEUILoadingView *_loadingView;
    UIView *_bottomCollectView;
    AWEMixVideoCollectiionButtonView *_bottomButton;
    AWEPaymentDetailBuyButton *_paymentButton;
    double _originalScrollViewOffset;
    double _currentOffset;
    AWEAwemeModel *_selectedModel;
    AWEMixVideoSelectMixSectionHeadView *_selectMixHeadView;
    AWEMixVideoMoreMixSectionHeadView *_moreMixHeadView;
    long long _type;
    AWEMixVideoSelectMixSectionFooterView *_selectMixSectionFooterView;
    AWEMixVideoSelectMixSectionFooterView *_moreMixSectionFooterView;
    AWEMixVideoEpisodeSegmentView *_segmentView;
    NSNumber *_maintainOffset;
    long long _isEnableSelectRefresh;
    double _lastOffsetWhenDidClickRecommendTab;
    long long _continueIndex;
    NSMutableDictionary *_contentOffsetDict;
    NSMutableSet *_showDict;
}

@property (retain, nonatomic) AWEMixVideoListDataController *dataController;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (retain, nonatomic) UILabel *noContentTipLabel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *bottomCollectView;
@property (retain, nonatomic) AWEMixVideoCollectiionButtonView *bottomButton;
@property (retain, nonatomic) AWEPaymentDetailBuyButton *paymentButton;
@property (nonatomic) BOOL bottomAnimate;
@property (nonatomic) double originalScrollViewOffset;
@property (nonatomic) double currentOffset;
@property (nonatomic) BOOL isPreloadData;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isNeedTabButtonChangeInScrolling;
@property (retain, nonatomic) AWEAwemeModel *selectedModel;
@property (retain, nonatomic) AWEMixVideoSelectMixSectionHeadView *selectMixHeadView;
@property (retain, nonatomic) AWEMixVideoMoreMixSectionHeadView *moreMixHeadView;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEMixVideoSelectMixSectionFooterView *selectMixSectionFooterView;
@property (retain, nonatomic) AWEMixVideoSelectMixSectionFooterView *moreMixSectionFooterView;
@property (retain, nonatomic) AWEMixVideoEpisodeSegmentView *segmentView;
@property (retain, nonatomic) NSNumber *maintainOffset;
@property (nonatomic) BOOL hasPaymentUpdate;
@property (nonatomic) long long isEnableSelectRefresh;
@property (nonatomic) BOOL isMoreMixButtonClicked;
@property (nonatomic) double lastOffsetWhenDidClickRecommendTab;
@property (nonatomic) long long continueIndex;
@property (retain, nonatomic) NSMutableDictionary *contentOffsetDict;
@property (retain, nonatomic) NSMutableSet *showDict;
@property (nonatomic) BOOL isReportVIPMixShow;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<AWEMixVideoDetailInformationViewDelegate> delegate;
@property (retain, nonatomic) AWEMixDetailInformationHeadView *headContentView;
@property (nonatomic) double topOffset;
@property (nonatomic) double navBarHeight;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL lightModeEnabled;
@property (nonatomic) BOOL fromPersonPage;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *searchResultID;
@property (copy, nonatomic) NSString *searchLogPB;
@property (copy, nonatomic) NSString *searchListItemID;
@property (copy, nonatomic) NSString *searchListID;
@property (copy, nonatomic) NSString *searchKeyword;
@property (copy, nonatomic) NSNumber *watchedEpisode;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *compilationEnterMethod;
@property (copy, nonatomic) NSString *compilationFromOrder;
@property (readonly, nonatomic) BOOL showHeadContentView;
@property (nonatomic) BOOL needForceLoadPreviousWhenInit;
@property (nonatomic) BOOL watchedEpisodeLocated;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) BOOL recommendMixTabDisabled;
@property (nonatomic) BOOL segmentEnabled;
@property (copy, nonatomic) NSNumber *fromOrder;
@property (nonatomic) BOOL forceFirstPosition;
@property (nonatomic) BOOL fromDetailList;
@property (nonatomic) BOOL useExternalDataSource;
@property (copy, nonatomic) NSString *panelSelectedMoreMixID;
@property (nonatomic) BOOL isPanelMoreMixClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL skipLocalCache;
@property (copy, nonatomic) NSString *reqFrom;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)currentAwemeModel;
- (void)setDataController:(id)arg0;
- (void)loadmore;
- (id)searchResultID;
- (void)didDisplay;
- (id)selectedModel;
- (id)searchKeyword;
- (void)setSearchKeyword:(id)arg0;
- (id)segmentView;
- (void)setSegmentView:(id)arg0;
- (void)setSelectedModel:(id)arg0;
- (id)watchedEpisode;
- (void)setWatchedEpisode:(id)arg0;
- (void)setSearchResultID:(id)arg0;
- (void)addLoadMoreIfNeeded;
- (void)setOriginalScrollViewOffset:(double)arg0;
- (double)originalScrollViewOffset;
- (id)fromOrder;
- (id)paymentButton;
- (BOOL)shouldShowPaymentButton;
- (void)setPaymentButton:(id)arg0;
- (BOOL)fromPersonPage;
- (void)dismissHintBubble;
- (void)setFromPersonPage:(BOOL)arg0;
- (id)headContentView;
- (id)noContentTipLabel;
- (id)bottomCollectView;
- (void)setBottomAnimate:(BOOL)arg0;
- (void)updatePaymentButtonIfNeeded;
- (double)navBarHeight;
- (BOOL)bottomAnimate;
- (BOOL)showHeadContentView;
- (void)showBottomCollection;
- (void)hideBottomCollection;
- (void)orderMix:(id)arg0;
- (void)setHintBubbleParams:(id)arg0;
- (id)videoAtIndex:(long long)arg0;
- (id)getScrollView;
- (void)setHeadContentView:(id)arg0;
- (void)setNavBarHeight:(double)arg0;
- (void)setNoContentTipLabel:(id)arg0;
- (void)setBottomCollectView:(id)arg0;
- (void)setFromOrder:(id)arg0;
- (void)_onScrollDidEnd;
- (BOOL)isDarkStyle;
- (void)setSkipLocalCache:(BOOL)arg0;
- (id)contentOffsetDict;
- (void)setContentOffsetDict:(id)arg0;
- (void)hideLoadingIfNeeds;
- (void)showLoadingIfNeeds;
- (void)dealSelectVideoWithTableView:(id)arg0 indexPath:(id)arg1;
- (id)mixVideoModel;
- (void)setMixVideoModel:(id)arg0;
- (void)setCompilationFromOrder:(id)arg0;
- (BOOL)recommendMixTabDisabled;
- (void)setRecommendMixTabDisabled:(BOOL)arg0;
- (BOOL)forceFirstPosition;
- (void)setForceFirstPosition:(BOOL)arg0;
- (BOOL)fromDetailList;
- (void)setFromDetailList:(BOOL)arg0;
- (void)setPanelSelectedMoreMixID:(id)arg0;
- (id)compilationEnterMethod;
- (id)compilationFromOrder;
- (void)setCompilationEnterMethod:(id)arg0;
- (void)setNeedForceLoadPreviousWhenInit:(BOOL)arg0;
- (void)loadmoreWith:(id /* block */)arg0;
- (void)switchToRecommendWith:(id /* block */)arg0;
- (void)syncLocatedStatusWith:(long long)arg0;
- (void)scrollToLocatedCell;
- (BOOL)isSegmentVisibled;
- (void)scrollToLocatedCellAnimated:(BOOL)arg0;
- (void)setIsPanelMoreMixClicked:(BOOL)arg0;
- (BOOL)needLocatedAlignment;
- (void)setUseExternalDataSource:(BOOL)arg0;
- (void)setSelectedRefreshEnable:(BOOL)arg0;
- (void)setReqFrom:(id)arg0;
- (void)preloadDataDidScroll:(id)arg0;
- (BOOL)isNeedToHideCollectButton;
- (id)reqFrom;
- (BOOL)useExternalDataSource;
- (BOOL)isNotNeedInitRequest;
- (void)addRequestUpIfNeeded;
- (void)requestUp:(id /* block */)arg0;
- (void)setIsEnableSelectRefresh:(long long)arg0;
- (BOOL)isPreloadData;
- (void)setIsPreloadData:(BOOL)arg0;
- (long long)isEnableSelectRefresh;
- (BOOL)hasRecommendData;
- (void)mixVideoDetailHeadViewRefreshData;
- (void)mixVideoDetailHeadView:(id)arg0 collectTaped:(id)arg1;
- (void)collectionLabelClicked;
- (void)mixVideoDetailHeadView:(id)arg0 changedHeight:(double)arg1;
- (void)updateMixID:(id)arg0 lastEpisode:(id)arg1;
- (void)reportEnterLiveVIPMixDetailWithActionType:(id)arg0 btnType:(id)arg1;
- (BOOL)isFromCompilationPlayPage;
- (BOOL)isReportVIPMixShow;
- (void)setIsReportVIPMixShow:(BOOL)arg0;
- (id)selectMixHeadView;
- (BOOL)isEnableRecord;
- (void)hideHeadViewIfNeeded;
- (void)loadmoreWithWillCallback:(id /* block */)arg0 completeBlock:(id /* block */)arg1;
- (BOOL)hasPaymentUpdate;
- (id)moreMixHeadView;
- (id)selectMixSectionFooterView;
- (id)moreMixSectionFooterView;
- (id)showDict;
- (long long)continueIndex;
- (BOOL)enableShowLoadingViewInit;
- (void)updateSelectViewFrameIfNeed;
- (void)segmentViewDidUpdate;
- (BOOL)enableFixFooterHiden;
- (void)setMaintainOffset:(id)arg0;
- (BOOL)enableLoadPreviousAfterUpdate;
- (BOOL)needForceLoadPreviousWhenInit;
- (void)segmentViewStartLock;
- (void)tabButtonChangedIfNeeds;
- (void)segmentViewEndLockWithPriority:(unsigned long long)arg0 currentEpisode:(id)arg1;
- (void)scrollToBottomWithAnimated:(BOOL)arg0;
- (void)scrollToTopLocatedCellAtIndex:(long long)arg0 animated:(BOOL)arg1;
- (void)segmentView:(id)arg0 didReloadFromEpisode:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)reportClickHead;
- (void)videoSourceUpdateFirstData;
- (void)clearAndCacheCurrentRecommendNodeIfNeeds;
- (double)lastOffsetWhenDidClickRecommendTab;
- (void)setLastOffsetWhenDidClickRecommendTab:(double)arg0;
- (BOOL)isEmptyListWithNode:(id)arg0;
- (void)videoSourceUpdateLastData;
- (BOOL)isPanelMoreMixClicked;
- (BOOL)isMoreMixButtonClicked;
- (id)panelSelectedMoreMixID;
- (void)setIsMoreMixButtonClicked:(BOOL)arg0;
- (void)loadmoreWithType:(unsigned long long)arg0 currentAwemeModel:(id)arg1 willCallback:(id /* block */)arg2 callback:(id /* block */)arg3;
- (void)scrollToEpisode:(id)arg0 atScrollPosition:(long long)arg1 animate:(BOOL)arg2;
- (void)dealSelectMixWithAwemeModel:(id)arg0 awemeModelList:(id)arg1 mixVideoModel:(id)arg2 enterMethod:(id)arg3;
- (BOOL)lightModeEnabled;
- (void)setHasPaymentUpdate:(BOOL)arg0;
- (BOOL)watchedEpisodeLocated;
- (void)trackMoreMixShow;
- (id)searchLogPB;
- (id)searchListItemID;
- (id)searchListID;
- (void)setIsNeedTabButtonChangeInScrolling:(BOOL)arg0;
- (BOOL)isNeedTabButtonChangeInScrolling;
- (BOOL)segmentEnabled;
- (unsigned long long)currentLayoutPriority;
- (void)preloadDataDidClick:(id)arg0 index:(long long)arg1;
- (id)maintainOffset;
- (void)segmentViewRefreshLockWithOffsetY:(double)arg0;
- (void)scrollToSelectMixUpEpisode:(id /* block */)arg0;
- (void)horizontalCell:(id)arg0 didSelectAwemeModel:(id)arg1 awemeModelList:(id)arg2 mixVideoModel:(id)arg3 enterMethod:(id)arg4;
- (void)horizontalCell:(id)arg0 detailWithEnterMethod:(id)arg1 mixVideoModel:(id)arg2;
- (void)segmentView:(id)arg0 didClickedIndex:(long long)arg1;
- (void)segmentViewWillBeginDragging:(id)arg0;
- (void)updateMixInfo:(id)arg0 needResetDataController:(BOOL)arg1;
- (void)scrollToUpEpisode;
- (void)trackWillDisplay;
- (void)setSearchLogPB:(id)arg0;
- (void)setSearchListItemID:(id)arg0;
- (void)setSearchListID:(id)arg0;
- (BOOL)skipLocalCache;
- (void)setWatchedEpisodeLocated:(BOOL)arg0;
- (void)updateCollectStatus;
- (void)updateBackgroundColorInPanel;
- (long long)getMixDetailListViewCurrentIndex;
- (id)getMixDetailListViewDataController;
- (void)updateMixInfo:(id)arg0 dataController:(id)arg1;
- (void)scrolltoHeaderWith:(long long)arg0;
- (long long)getCurrentCellCursorForListMid;
- (void)reloadDataToTopIfNeed;
- (void)requestUp;
- (void)dealSelectMixWithTableView:(id)arg0 indexPath:(id)arg1;
- (void)setLightModeEnabled:(BOOL)arg0;
- (void)setSegmentEnabled:(BOOL)arg0;
- (void)setSelectMixHeadView:(id)arg0;
- (void)setMoreMixHeadView:(id)arg0;
- (void)setSelectMixSectionFooterView:(id)arg0;
- (void)setMoreMixSectionFooterView:(id)arg0;
- (void)setContinueIndex:(long long)arg0;
- (void)setShowDict:(id)arg0;
- (double)topOffset;
- (void)setTopOffset:(double)arg0;
- (double)currentOffset;
- (void)setIsScrolling:(BOOL)arg0;
- (id)init;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (BOOL)isScrolling;
- (long long)type;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (id)initWithType:(long long)arg0;
- (void)clearCache;
- (void)scrollViewDidScroll:(id)arg0;
- (void)setType:(long long)arg0;
- (id)delegate;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)sceneName;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (long long)numberOfVideos;
- (void)setCurrentOffset:(double)arg0;
- (id)searchID;
- (void)setSearchID:(id)arg0;
- (void)willDisplayCell:(id)arg0 forRowAtIndexPath:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (id)bottomButton;
- (void)setBottomButton:(id)arg0;

@end
