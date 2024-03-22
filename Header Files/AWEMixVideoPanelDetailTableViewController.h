//
//     Generated by private class-dump
//

@class AWEUILoadingView, AWEMixVideoNewPanelViewController, NSDictionary, UIViewController, AWEMixVideoPanelMoreView, UIButton, UIView, AWEMixVideoCollectionGuideManager, NSString, NSMutableSet, AWEAwemeModel, NSNumber, AWEMixVideoDetailPlayListDataController, AWEMixVideoModel, AWEMixVideoFloatLayerViewController;
@protocol AWEAwemeDetailTableViewControllerProtocol, AWEAwemePlayInteractionPanelControllerProtocol;

@interface AWEMixVideoPanelDetailTableViewController : AWEAwemeDetailTableViewController <AWERouterViewControllerProtocol, AWEMixVideoPanelViewDelegate, AWEMixVideoFloatLayerDelegate, AWEPadMixVideoContainer, AWERelatedMixDetailViewControllerDelegate, AWEMixBarInPlaceTransitionToContentProvider, AWEInPlaceTransitionFromContentProvider, AWEInPlaceTransitionToContentProvider> {
    BOOL _isTriggerModelStratege;
    BOOL _isNeedMaintainV3GuideContentOffsetY;
    BOOL _isShowingV3Guide;
    BOOL _isShowingRelatedMixViewController;
    BOOL _shouldImmersiveDetailEndMove;
    BOOL _isClickMixPanel;
    BOOL _hidePanel;
    BOOL _firstAppear;
    BOOL _panelRefresh;
    BOOL _forceFirstPosition;
    BOOL _fromDetailList;
    BOOL _outDataMode;
    BOOL _isFromJumpPanel;
    BOOL _mixPanelShowed;
    BOOL _mixFloatLayerShowed;
    BOOL _shareAlertShowed;
    BOOL _hasClickedVideoTapOnPanelShowed;
    BOOL _isScrolling;
    BOOL _recommendMixTabDisabled;
    BOOL _isFromContentXtab;
    UIView *_padAdapter_maskView;
    long long _transition_playStateBeforeViewWillDisappear;
    AWEMixVideoCollectionGuideManager *_collectionGuideManager;
    AWEMixVideoPanelMoreView *_moreView;
    AWEMixVideoFloatLayerViewController *_floatLayerVC;
    AWEMixVideoNewPanelViewController *_panelViewController;
    UIViewController<AWEAwemeDetailTableViewControllerProtocol> *_immersiveDetailViewController;
    UIButton *_immersiveDetailHintButton;
    NSNumber *_relatedMixDetailBeginOffset;
    double _tableViewOriginMinY;
    UIViewController *_mixMiniDetailViewController;
    AWEUILoadingView *_loadingView;
    AWEMixVideoDetailPlayListDataController *_subDataController;
    AWEMixVideoDetailPlayListDataController *_maintainSubDataController;
    AWEMixVideoModel *_mixVideoModel;
    AWEAwemeModel *_entranceAwemeModel;
    UIView *_moreBackgroundView;
    UIView *_bottomBackgroundView;
    UIView *_topCoverView;
    NSDictionary *_params;
    NSNumber *_currentEpisode;
    NSNumber *_maxCursor;
    NSNumber *_minCursor;
    NSString *_mixId;
    NSNumber *_fromOrder;
    NSString *_authorID;
    NSString *_searchKeyword;
    NSString *_enterMethod;
    NSString *_groupID;
    NSString *_searchID;
    NSString *_searchResultID;
    NSNumber *_currentTime;
    NSNumber *_positionEpisode;
    NSDictionary *_searchParams;
    NSDictionary *_searchTrackMap;
    long long _firstCacheDuration;
    double _duration;
    NSString *_showPanelMethod;
    id<AWEAwemePlayInteractionPanelControllerProtocol> _interactionPanel;
    NSString *_compilationFromOrder;
    NSString *_compilationEnterMethod;
    NSString *_preCompilationId;
    NSString *_compilationPreviousPage;
    NSString *_feedAuthorId;
    NSString *_feedGroupId;
    NSMutableSet *_trackedFloatMixIDSet;
    NSString *_feedLogExtraString;
    NSString *_lastPanelListShowMethod;
    NSDictionary *_contentLogExtra;
    NSString *_trackParamsString;
    UIView *_closeView;
}

@property (retain, nonatomic) AWEMixVideoCollectionGuideManager *collectionGuideManager;
@property (nonatomic) BOOL isTriggerModelStratege;
@property (retain, nonatomic) AWEMixVideoPanelMoreView *moreView;
@property (retain, nonatomic) AWEMixVideoFloatLayerViewController *floatLayerVC;
@property (retain, nonatomic) AWEMixVideoNewPanelViewController *panelViewController;
@property (retain, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *immersiveDetailViewController;
@property (retain, nonatomic) UIButton *immersiveDetailHintButton;
@property (nonatomic) BOOL isNeedMaintainV3GuideContentOffsetY;
@property (nonatomic) BOOL isShowingV3Guide;
@property (nonatomic) BOOL isShowingRelatedMixViewController;
@property (nonatomic) BOOL shouldImmersiveDetailEndMove;
@property (retain, nonatomic) NSNumber *relatedMixDetailBeginOffset;
@property (nonatomic) double tableViewOriginMinY;
@property (nonatomic) BOOL isClickMixPanel;
@property (retain, nonatomic) UIViewController *mixMiniDetailViewController;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEMixVideoDetailPlayListDataController *subDataController;
@property (retain, nonatomic) AWEMixVideoDetailPlayListDataController *maintainSubDataController;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (retain, nonatomic) AWEAwemeModel *entranceAwemeModel;
@property (retain, nonatomic) UIView *moreBackgroundView;
@property (retain, nonatomic) UIView *bottomBackgroundView;
@property (retain, nonatomic) UIView *topCoverView;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSNumber *currentEpisode;
@property (copy, nonatomic) NSNumber *maxCursor;
@property (copy, nonatomic) NSNumber *minCursor;
@property (copy, nonatomic) NSString *mixId;
@property (copy, nonatomic) NSNumber *fromOrder;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *searchKeyword;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *searchResultID;
@property (copy, nonatomic) NSNumber *currentTime;
@property (copy, nonatomic) NSNumber *positionEpisode;
@property (copy, nonatomic) NSDictionary *searchParams;
@property (copy, nonatomic) NSDictionary *searchTrackMap;
@property (nonatomic) long long firstCacheDuration;
@property (nonatomic) BOOL hidePanel;
@property (nonatomic) BOOL firstAppear;
@property (nonatomic) BOOL panelRefresh;
@property (nonatomic) BOOL forceFirstPosition;
@property (nonatomic) BOOL fromDetailList;
@property (nonatomic) BOOL outDataMode;
@property (nonatomic) BOOL isFromJumpPanel;
@property (nonatomic) BOOL mixPanelShowed;
@property (nonatomic) BOOL mixFloatLayerShowed;
@property (nonatomic) BOOL shareAlertShowed;
@property (nonatomic) BOOL hasClickedVideoTapOnPanelShowed;
@property (nonatomic) double duration;
@property (nonatomic) BOOL isScrolling;
@property (copy, nonatomic) NSString *showPanelMethod;
@property (nonatomic) BOOL recommendMixTabDisabled;
@property (retain, nonatomic) id<AWEAwemePlayInteractionPanelControllerProtocol> interactionPanel;
@property (copy, nonatomic) NSString *compilationFromOrder;
@property (copy, nonatomic) NSString *compilationEnterMethod;
@property (copy, nonatomic) NSString *preCompilationId;
@property (copy, nonatomic) NSString *compilationPreviousPage;
@property (copy, nonatomic) NSString *feedAuthorId;
@property (copy, nonatomic) NSString *feedGroupId;
@property (retain, nonatomic) NSMutableSet *trackedFloatMixIDSet;
@property (copy, nonatomic) NSString *feedLogExtraString;
@property (copy, nonatomic) NSString *lastPanelListShowMethod;
@property (nonatomic) BOOL isFromContentXtab;
@property (copy, nonatomic) NSDictionary *contentLogExtra;
@property (copy, nonatomic) NSString *trackParamsString;
@property (retain, nonatomic) UIView *closeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIViewController *mixVideoController;
@property (readonly, nonatomic) UIViewController *mixVideoPanelController;
@property (readonly, nonatomic) UIView *padAdapter_tableView;
@property (readonly, nonatomic) UIView *padAdapter_discoverEntranceView;
@property (readonly, nonatomic) UIView *padAdapter_moreView;
@property (readonly, nonatomic) BOOL padAdapter_mixPanelShowed;
@property (retain, nonatomic) UIView *padAdapter_maskView;
@property (nonatomic) long long transition_playStateBeforeViewWillDisappear;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadMixVideoAdapterClass;
+ (Class)aAWEPadMixVideoRotateAdapterClass;

- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (void)transition_didPopDoneTransitionWithContext:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (BOOL)awe_shouldAutorotate;
- (id)enterMethod;
- (id)awe_preferredTransitionProviderClassNameForContext:(id)arg0;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (id)searchParams;
- (void)setSearchParams:(id)arg0;
- (id)aAWEPadModuleAdapter;
- (id)awe_addReturnButton;
- (BOOL)mixPanelShowed;
- (BOOL)isPanelShowing;
- (id)searchResultID;
- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:(id)arg0;
- (void)setMinCursor:(id)arg0;
- (void)refreshDataWithCompletion:(id /* block */)arg0;
- (id)searchKeyword;
- (void)setSearchKeyword:(id)arg0;
- (id)panelViewController;
- (id)closeView;
- (void)setCloseView:(id)arg0;
- (void)setBottomBackgroundView:(id)arg0;
- (id)bottomBackgroundView;
- (void)playIfActive;
- (id)preCompilationId;
- (void)setPreCompilationId:(id)arg0;
- (void)setSearchResultID:(id)arg0;
- (BOOL)allowSlideToOtherFeed;
- (BOOL)allowSlideToPreviousFeedWithIndex:(long long)arg0;
- (BOOL)allowSlideToNextFeedWithIndex:(long long)arg0;
- (void)hasSlideToOtherFeed;
- (void)trackStayTime;
- (void)cellWillDisplay:(id)arg0 forRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)cellDidEndDisplay:(id)arg0;
- (id)moreView;
- (void)setMoreView:(id)arg0;
- (BOOL)shouldClickPlayCostCut;
- (void)onScrollWillChangeVideo:(id)arg0 index:(long long)arg1 directTop:(BOOL)arg2;
- (id)configCell:(id)arg0 atIndexPath:(id)arg1 tableView:(id)arg2;
- (void)onScrollDidEndWithIndexPath:(id)arg0;
- (void)dismissPanelWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setPanelViewController:(id)arg0;
- (id)moreBackgroundView;
- (void)setMoreBackgroundView:(id)arg0;
- (id)trackParamsString;
- (BOOL)isFromContentXtab;
- (void)setIsFromContentXtab:(BOOL)arg0;
- (id)fromOrder;
- (void)updatePlayletPaymentInfoWithModels:(id)arg0;
- (id)initWithDataController:(id)arg0 initialIndex:(long long)arg1 referString:(id)arg2 logExtraDict:(id)arg3;
- (void)handleRefreshDataNotification:(id)arg0;
- (BOOL)hidePanel;
- (void)showShareAlert;
- (void)dismissShareAlert;
- (void)p_updateVoiceOverElementWithPanelVCShown:(BOOL)arg0;
- (double)getStartSeekTime:(id)arg0;
- (void)showTopBlackView:(BOOL)arg0;
- (void)setFromOrder:(id)arg0;
- (void)setHidePanel:(BOOL)arg0;
- (void)setTrackParamsString:(id)arg0;
- (id)initWithAwemeModel:(id)arg0 referString:(id)arg1 logExtraDict:(id)arg2;
- (id)configCellLogExtraDictWithModel:(id)arg0 indexPath:(id)arg1;
- (void)detailCellViewController:(id)arg0 awemeModel:(id)arg1 playerPlayTime:(double)arg2 canPlayTime:(double)arg3 totalTime:(double)arg4;
- (id)enterFromForEnterSearch;
- (void)dismissMixPanel;
- (void)setupAdVideoManagerIfNeed;
- (void)adjustContentOffsetInDidAppear;
- (void)recallDimissOtherView;
- (BOOL)shouldAlbumVideoScrollToNextVideo;
- (BOOL)autoPlayScrollToNextVideo;
- (id)transition_contextProviderTopLevelView:(id)arg0 changeRectBlock:(id /* block */)arg1;
- (void)adaptPlaybackRateForDetailCell:(id)arg0;
- (void)recordForSpeedInheritedIfNeedsWithSpeed:(id)arg0 model:(id)arg1;
- (id)trackMediumPlayListParams;
- (void)willPlayNextLoop:(id)arg0;
- (BOOL)shareAlertShowed;
- (BOOL)mixFloatLayerShowed;
- (void)relatedMixDetailViewController:(id)arg0 willBeginDragging:(id)arg1;
- (void)relatedMixDetailViewController:(id)arg0 scrollViewDidScroll:(id)arg1;
- (void)relatedMixDetailViewController:(id)arg0 exitOnScrollDidEnd:(id)arg1 velocity:(struct CGPoint { double x0; double x1; })arg2;
- (void)relatedMixDetailViewControllerStartExit:(id)arg0;
- (BOOL)relatedMixDetailViewController:(id)arg0 shouldExitOnScrollDidEnd:(id)arg1;
- (BOOL)relatedMixDetailViewController:(id)arg0 exitOnScrollDidEnd:(id)arg1;
- (void)relatedMixDetailViewController:(id)arg0 rightSlideWithOffsetY:(double)arg1;
- (BOOL)relatedMixDetailViewController:(id)arg0 rightSlideDidEndWithVelocity:(struct CGPoint { double x0; double x1; })arg1;
- (id)transition_videoController;
- (BOOL)transition_shouldFixPlayerControllerForFromModel:(id)arg0 toModel:(id)arg1;
- (void)transition_scrollToPlayerControllerWithFromModel:(id)arg0;
- (id)transition_bottomMoveView;
- (id)transition_alphaViewArray;
- (id)transition_interactionController;
- (void)transition_customAnimateDidFinishWithVideoController:(id)arg0;
- (BOOL)transition_isMoveFromVC;
- (long long)transition_playStateBeforeViewWillDisappear;
- (void)setTransition_playStateBeforeViewWillDisappear:(long long)arg0;
- (id)mixVideoModel;
- (void)setMixVideoModel:(id)arg0;
- (BOOL)isTriggerModelStratege;
- (void)setIsTriggerModelStratege:(BOOL)arg0;
- (void)dismissFloatLayerWithCompletion:(id /* block */)arg0;
- (void)showRelatedMixPanelWithMethod:(id)arg0 completion:(id /* block */)arg1;
- (id)getRelatedAwemeModelAtIndex:(long long)arg0;
- (long long)getRelatedMixVideoModelCount;
- (id)getRelatedMixVideoModelAtIndex:(long long)arg0;
- (void)trackFloatCellShowAtIndex:(long long)arg0;
- (void)routerParamDictCheck:(id)arg0;
- (void)getParam:(id)arg0;
- (void)setSubDataController:(id)arg0;
- (id)subDataController;
- (void)setCompilationFromOrder:(id)arg0;
- (void)setPositionEpisode:(id)arg0;
- (id)mixId;
- (void)setMixId:(id)arg0;
- (void)setEntranceAwemeModel:(id)arg0;
- (void)onmoreViewClicked;
- (BOOL)recommendMixTabDisabled;
- (BOOL)isEnterFromSearch;
- (void)setRecommendMixTabDisabled:(BOOL)arg0;
- (id)contentLogExtra;
- (BOOL)forceFirstPosition;
- (void)setForceFirstPosition:(BOOL)arg0;
- (BOOL)fromDetailList;
- (void)setFromDetailList:(BOOL)arg0;
- (void)mixAdDeleteNotification:(id)arg0;
- (void)updateSpeedIfNeed;
- (void)reportEnterMixPlay;
- (id)aAWEPadMixVideoAdapter;
- (BOOL)isShowingRelatedMixViewController;
- (void)setOutDataMode:(BOOL)arg0;
- (BOOL)outDataMode;
- (BOOL)isMixPanelNewStyle;
- (void)initDataAndMixDetail;
- (void)requestMixInfoWithCompleteBlock:(id /* block */)arg0;
- (void)requestMixInfo;
- (BOOL)isShowingV3Guide;
- (void)initMixDetailPlay;
- (id)showPanelMethod;
- (void)showPanelAnimate:(BOOL)arg0 method:(id)arg1 complete:(id /* block */)arg2;
- (void)setIsNeedMaintainV3GuideContentOffsetY:(BOOL)arg0;
- (void)showPanelAnimate:(BOOL)arg0 complete:(id /* block */)arg1;
- (id)compilationEnterMethod;
- (id)compilationFromOrder;
- (id)searchTrackMap;
- (id)feedLogExtraString;
- (id)currentTrackerParams;
- (id)feedAuthorId;
- (id)feedGroupId;
- (id)immersiveDetailViewController;
- (void)setFeedAuthorId:(id)arg0;
- (void)setFeedGroupId:(id)arg0;
- (void)setSearchTrackMap:(id)arg0;
- (void)setCompilationEnterMethod:(id)arg0;
- (void)setCompilationPreviousPage:(id)arg0;
- (void)setShowPanelMethod:(id)arg0;
- (void)setFeedLogExtraString:(id)arg0;
- (void)mixScrollToNextVideo;
- (void)setShareAlertShowed:(BOOL)arg0;
- (BOOL)isSuccessHandleCompilationRecommendV3Guide;
- (void)showFloatLayerWhenPlayEnd;
- (long long)firstCacheDuration;
- (void)setFirstCacheDuration:(long long)arg0;
- (id)floatLayerVC;
- (id)getCurrentMixVideoListDataController;
- (void)showFloatLayer:(BOOL)arg0 method:(id)arg1 completion:(id /* block */)arg2;
- (id)sortArrayByExcuteDate:(id)arg0;
- (id)positionEpisode;
- (void)trackCompilationListMonitorWithModel:(id)arg0 error:(id)arg1;
- (id)lastPanelListShowMethod;
- (void)reloadCurrentLocatedCell;
- (void)setMixPanelShowed:(BOOL)arg0;
- (id)aAWEPadMixVideoRotateAdapter;
- (void)trackMixPanelShowWithClickBarWithMethod:(id)arg0;
- (void)setMaintainSubDataController:(id)arg0;
- (void)getInteractionPanel;
- (void)changeVideoWhenShowPanel:(BOOL)arg0;
- (id)getInteractionVC;
- (void)setInteractionPanel:(id)arg0;
- (id)topCoverView;
- (void)setTopCoverView:(id)arg0;
- (id)interactionPanel;
- (void)showMoreMixViewWithMethod:(id)arg0 completion:(id /* block */)arg1;
- (void)trackMoreMixShowWithEnterMethod:(id)arg0;
- (BOOL)canFloatLayerShow;
- (BOOL)relatedMixViewControllerEnabled;
- (void)setMixFloatLayerShowed:(BOOL)arg0;
- (void)trackFloatLayerShowWithMethod:(id)arg0;
- (void)refreshFloatLayerDataIfNeed;
- (id)trackedFloatMixIDSet;
- (void)correctCurrentLocatedCell;
- (void)trackClickMoreView;
- (void)setLastPanelListShowMethod:(id)arg0;
- (void)trackSelectWithAweme:(id)arg0;
- (void)setIsShowingV3Guide:(BOOL)arg0;
- (BOOL)panelRefresh;
- (void)setPanelRefresh:(BOOL)arg0;
- (void)setIsClickMixPanel:(BOOL)arg0;
- (BOOL)hasDiffWithNewDataSource:(id)arg0 oldDataSource:(id)arg1;
- (BOOL)isClickMixPanel;
- (id)entranceAwemeModel;
- (BOOL)isNeedCollectionGuide;
- (id)collectionGuideManager;
- (BOOL)isDidLoadAllData;
- (id)immersiveDetailHintButton;
- (id)mixMiniDetailViewController;
- (BOOL)isSuccessShowImmersiveDetailWithViewController:(id)arg0;
- (void)showMoreMixViewWithMethod:(id)arg0;
- (void)showImmersiveDetailHintButtonIfNeed;
- (BOOL)isNeedMaintainV3GuideContentOffsetY;
- (BOOL)mixCollectStatusDidReady;
- (void)syncMixCollectStatus;
- (void)dismissCollectionGuideIfNeeds;
- (void)setIsShowingRelatedMixViewController:(BOOL)arg0;
- (void)setRelatedMixDetailBeginOffset:(id)arg0;
- (id)immersiveDetailControllerManager;
- (void)moveTableViewAndRelatedMixDetail:(id)arg0 offsetY:(double)arg1;
- (id)relatedMixDetailBeginOffset;
- (double)tableViewOriginMinY;
- (void)setShouldImmersiveDetailEndMove:(BOOL)arg0;
- (void)relatedMixDetailViewController:(id)arg0 endMoveWithOffsetY:(double)arg1;
- (BOOL)shouldImmersiveDetailEndMove;
- (void)setImmersiveDetailViewController:(id)arg0;
- (void)setMixMiniDetailViewController:(id)arg0;
- (void)setTableViewOriginMinY:(double)arg0;
- (void)trackMoreCompilationToastShowWithEnterMethod:(id)arg0;
- (void)addImmersiveDetailHintButtonIfNeed;
- (void)mixVideoCollectionElementStateChangeNotification:(id)arg0;
- (BOOL)shouldResponseKeyboardBindingKeys;
- (void)mixVideoListDataHasRefresh;
- (void)willDismissPanelWithAnimated:(BOOL)arg0;
- (void)mixVideoListMoveGetProgress:(double)arg0;
- (void)cancelClosePanelShrinkVideo;
- (void)mixVideoDidTappedIndex:(long long)arg0 aweme:(id)arg1;
- (void)mixVideoListDidClickTabIsVideo:(BOOL)arg0;
- (id)mixVideoController;
- (id)mixVideoPanelController;
- (id)padAdapter_tableView;
- (id)padAdapter_discoverEntranceView;
- (id)padAdapter_moreView;
- (BOOL)padAdapter_mixPanelShowed;
- (id)padAdapter_maskView;
- (void)setPadAdapter_maskView:(id)arg0;
- (void)removeAdjacentADForDataController:(id)arg0;
- (void)setCollectionGuideManager:(id)arg0;
- (void)setFloatLayerVC:(id)arg0;
- (void)setImmersiveDetailHintButton:(id)arg0;
- (id)maintainSubDataController;
- (BOOL)isFromJumpPanel;
- (void)setIsFromJumpPanel:(BOOL)arg0;
- (BOOL)hasClickedVideoTapOnPanelShowed;
- (void)setHasClickedVideoTapOnPanelShowed:(BOOL)arg0;
- (id)compilationPreviousPage;
- (void)setTrackedFloatMixIDSet:(id)arg0;
- (void)setContentLogExtra:(id)arg0;
- (void)setGroupID:(id)arg0;
- (void)setIsScrolling:(BOOL)arg0;
- (id)groupID;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setCurrentTime:(id)arg0;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (BOOL)isScrolling;
- (void)viewWillDisappear:(BOOL)arg0;
- (BOOL)isInteracting;
- (double)duration;
- (void)scrollViewDidScroll:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)currentTime;
- (id)params;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)viewDidLoad;
- (void)setDuration:(double)arg0;
- (id)currentInteractionController;
- (void)setFirstAppear:(BOOL)arg0;
- (BOOL)firstAppear;
- (id)searchID;
- (void)setSearchID:(id)arg0;
- (void)setParams:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)currentEpisode;
- (id)authorID;
- (void)setAuthorID:(id)arg0;
- (void)setCurrentEpisode:(id)arg0;

@end