//
//     Generated by private class-dump
//

@class AWETabContainerSectionController, AWEChallengeDetailHeaderSectionController, AWEChallengeDetailBodySectionController, AWEBaseListSectionController, CAKModalTransitionDelegate, AWECommerceTapMaskView, AWEBaseWebViewController, NSString, AWEChallengeDetailFeedFactory, UIViewController, BDXPopupViewController, AWEChallengeDetailFilterSectionController;
@protocol AFDHorizontalSimilarChallengeSectionControllerProtocol, AWEStoryTransferToEditVCManagerProtocol, AWEChallengeDetailLiveWrapperSectionController, AWEAdChallengeLiveViewController, AWEChallengeDetailContainerViewControllerDelegate;

@interface AWEChallengeDetailContainerViewController : AWEBaseDetailContainerViewController <AWEUserMessage, AWERouterViewControllerProtocol, AWETabContainerSectionControllerDataSource, AWETabContainerSectionControllerDelegate, AWEChallengeDetailHeaderSectionControllerDelegate, AWEChallengeDetailFeedFactoryDelegate, AWEPageSheetPresentationObserving, AWEChallengeDetailFilterSectionControllerDelegate, CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate, AWEAdChallengeLiveDetailDelegate, BDXContainerLifecycleProtocol, AWEStickCollectionViewDelegate, AWEChallengeDetailContainerContextProtocol, AWEChallengeDetailContainerViewControllerProtocol, UIGestureRecognizerDelegate> {
    BOOL _shouldRefreshChallengeData;
    BOOL _isiCloudDownloading;
    BOOL _isParticipateMission;
    BOOL _isTappedChallengePage;
    BOOL _isViewAppearing;
    AWEChallengeDetailHeaderSectionController *_headerSectionController;
    AWEChallengeDetailBodySectionController *_bodySectionController;
    AWEChallengeDetailFilterSectionController *_filterSectionController;
    AWEChallengeDetailFeedFactory *_feedFactory;
    id<AWEChallengeDetailContainerViewControllerDelegate> _delegate;
    AWEBaseListSectionController<AWEChallengeDetailLiveWrapperSectionController> *_liveSectionController;
    AWEBaseListSectionController<AFDHorizontalSimilarChallengeSectionControllerProtocol> *_horizontalSimilarSectionController;
    AWETabContainerSectionController *_tabSectionController;
    long long _initialTabIndex;
    UIViewController *_selectedViewController;
    long long _currentPreferredStyle;
    CAKModalTransitionDelegate *_transitionDelegate;
    id<AWEStoryTransferToEditVCManagerProtocol> _transferToEditManager;
    double _lastScrollViewContentOffsetY;
    AWECommerceTapMaskView *_tapMaskView;
    AWEBaseWebViewController *_lastCommerceWebViewController;
    UIViewController<AWEAdChallengeLiveViewController> *_adLiveViewController;
    double _containerViewOriginFrame;
    BDXPopupViewController *_popupVC;
    long long _liveSectionStartOrigin;
}

@property (retain, nonatomic) AWEChallengeDetailHeaderSectionController *headerSectionController;
@property (retain, nonatomic) AWEChallengeDetailBodySectionController *bodySectionController;
@property (retain, nonatomic) AWEChallengeDetailFilterSectionController *filterSectionController;
@property (retain, nonatomic) AWEBaseListSectionController<AWEChallengeDetailLiveWrapperSectionController> *liveSectionController;
@property (retain, nonatomic) AWEBaseListSectionController<AFDHorizontalSimilarChallengeSectionControllerProtocol> *horizontalSimilarSectionController;
@property (retain, nonatomic) AWETabContainerSectionController *tabSectionController;
@property (retain, nonatomic) AWEChallengeDetailFeedFactory *feedFactory;
@property (nonatomic) long long initialTabIndex;
@property (retain, nonatomic) UIViewController *selectedViewController;
@property (nonatomic) long long currentPreferredStyle;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (nonatomic) BOOL shouldRefreshChallengeData;
@property (retain, nonatomic) id<AWEStoryTransferToEditVCManagerProtocol> transferToEditManager;
@property (nonatomic) BOOL isiCloudDownloading;
@property (nonatomic) double lastScrollViewContentOffsetY;
@property (nonatomic) BOOL isParticipateMission;
@property (retain, nonatomic) AWECommerceTapMaskView *tapMaskView;
@property (nonatomic) BOOL isTappedChallengePage;
@property (retain, nonatomic) AWEBaseWebViewController *lastCommerceWebViewController;
@property (retain, nonatomic) UIViewController<AWEAdChallengeLiveViewController> *adLiveViewController;
@property (nonatomic) double containerViewOriginFrame;
@property (nonatomic) BOOL isViewAppearing;
@property (retain, nonatomic) BDXPopupViewController *popupVC;
@property (nonatomic) long long liveSectionStartOrigin;
@property (weak, nonatomic) id<AWEChallengeDetailContainerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)arg0 forSectionViewModel:(id)arg1;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)awe_naviBar;
- (BOOL)enableStickCollectionView;
- (id)awesst_enterFrom;
- (void)awe_onReturnButtonClicked:(id)arg0;
- (double)heightForSegmentedControl;
- (id)viewControllerForModel:(id)arg0 index:(long long)arg1;
- (double)heightForSectionController:(id)arg0;
- (void)setupTabContentConfig:(id)arg0;
- (id)segmentedControlForSectionController:(id)arg0;
- (void)updateSegmentedControl:(id)arg0 itemsArray:(id)arg1;
- (void)tabContainerSectionController:(id)arg0 didSelectItemAtIndex:(long long)arg1 itemViewController:(id)arg2 isByTap:(BOOL)arg3;
- (BOOL)enableMemoryWarningHandling;
- (void)setIsViewAppearing:(BOOL)arg0;
- (void)shoot;
- (BOOL)shouldStickWithSubScrollView:(id)arg0;
- (void)bindViewModel;
- (void)setPopupVC:(id)arg0;
- (id)popupVC;
- (void)onDiscoverButtonClicked:(id)arg0;
- (void)emptyPagePrimaryButtonDidTap:(id)arg0;
- (void)pageSheetPresentationWillBegin:(id)arg0;
- (void)pageSheetDismissalDidEnd:(id)arg0 completed:(BOOL)arg1;
- (BOOL)albumViewControllerHiddenForFooter:(id)arg0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)arg0;
- (id)listViewConfigForAlbumViewController:(id)arg0;
- (id)albumViewControllerConfigForFooter:(id)arg0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)arg0;
- (BOOL)albumViewController:(id)arg0 shouldSelectAlbumAsset:(id)arg1;
- (void)albumViewController:(id)arg0 didSelectAlbumAsset:(id)arg1 sourceType:(long long)arg2;
- (void)albumViewController:(id)arg0 didClickAlbumAssetCell:(id)arg1;
- (void)albumViewController:(id)arg0 didClickNextButtonWithSourceType:(long long)arg1 fetchedAlbumAssets:(id)arg2;
- (void)albumViewController:(id)arg0 updateBottomNextButtonWithButton:(id)arg1 fromPreview:(BOOL)arg2;
- (void)leaveFullScreenLiveRoomAndForceReloadHeaderSection:(BOOL)arg0;
- (void)setContainerViewOriginFrame:(double)arg0;
- (double)containerViewOriginFrame;
- (void)disableSlideSlip;
- (void)destroyLightMissionModel;
- (void)setTabSectionController:(id)arg0;
- (id)tabSectionController;
- (void)startTimingForTrack;
- (void)onActionButtonClicked:(id)arg0;
- (void)handleBottomTipShowNotice;
- (void)handleBottomTipHideNotice;
- (void)_onShareButtonClicked_IMP:(id)arg0;
- (void)onShareBtnClicked:(id)arg0;
- (void)updateContainerOffset:(BOOL)arg0;
- (void)setIsParticipateMission:(BOOL)arg0;
- (void)setInitialTabIndex:(long long)arg0;
- (void)closeChallengeDetailPage;
- (void)handleAppBecomeActive;
- (void)openSharePanelWithNotification:(id)arg0;
- (void)setShouldRefreshChallengeData:(BOOL)arg0;
- (BOOL)isParticipateMission;
- (void)setupPageTrackAttributes;
- (id)tapMaskView;
- (void)setIsTappedChallengePage:(BOOL)arg0;
- (void)trackStaytime;
- (BOOL)shouldRefreshChallengeData;
- (void)p_trackSearchBarShowEvent;
- (void)addCNYMaskViewForRetainWindow;
- (void)tryPopupSharePanel;
- (id)liveSectionController;
- (void)setTapMaskView:(id)arg0;
- (BOOL)openRetainWindow;
- (long long)currentPreferredStyle;
- (double)tabSectionOriginY;
- (void)setLiveSectionController:(id)arg0;
- (void)setHeaderSectionController:(id)arg0;
- (void)topSectionHeightChanged;
- (void)setBodySectionController:(id)arg0;
- (id)bodySectionController;
- (void)setHorizontalSimilarSectionController:(id)arg0;
- (id)horizontalSimilarSectionController;
- (void)setFilterSectionController:(id)arg0;
- (id)filterSectionController;
- (double)stickOffsetY;
- (void)updateBackgroundColorView;
- (id)feedFactory;
- (id)viewControllerForItem:(id)arg0 info:(id)arg1;
- (BOOL)shouldUseCommerceNewStyle;
- (id)getCommerceModeColor;
- (id)segmentedControlTitleWithModel:(id)arg0 index:(long long)arg1;
- (void)controllWebTabContainerVideo:(id)arg0;
- (BOOL)isCurrentlyLightStyle;
- (void)changeNaviBarTheme:(long long)arg0;
- (void)jumpOtherPageIfNeed;
- (id)adLiveViewController;
- (void)setCurrentPreferredStyle:(long long)arg0;
- (void)animateNaviBarWhenScrollViewDidScroll:(id)arg0;
- (void)adCoverLinkHandleDidEndDraggingEvent:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)adCoverLinkHandleDidEndDeceleratingEvent:(id)arg0;
- (void)tryEnterFullScreenAdLiveRoomWithScrollView:(id)arg0;
- (void)notifyViewController:(id)arg0 withInfo:(id)arg1;
- (id)lastCommerceWebViewController;
- (void)notifyViewController:(id)arg0 event:(id)arg1 reactID:(id)arg2;
- (void)setLastCommerceWebViewController:(id)arg0;
- (void)onFavoriteButtonClicked:(id)arg0;
- (void)setLiveSectionStartOrigin:(long long)arg0;
- (long long)liveSectionStartOrigin;
- (void)setAdLiveViewController:(id)arg0;
- (void)adLiveViewControllerHandlePan:(id)arg0;
- (void)addGlobalPreviewWaterMarkViewIfNeed;
- (void)updateAdLiveControllerIfNeed:(id)arg0;
- (void)updateTitleWithResponse:(id)arg0;
- (void)initSubChallengeIfNeeded:(id)arg0;
- (void)addShootActionToImageUponCamera;
- (void)updateCommerceChallengeBGColorIfNeeded;
- (void)updateCommerceLotteryGiftIfNeed:(id)arg0;
- (long long)initialTabIndex;
- (BOOL)isEnhanceFavoriteButton;
- (void)updateTopImageViewAlpha:(double)arg0;
- (void)animateNaviBarHalfScreenWhenScrollViewDidScroll:(id)arg0;
- (void)animateNaviBarFullScreenWhenScrollViewDidScroll:(id)arg0;
- (void)updateTopContentAlpha:(double)arg0;
- (void)animateCommerceNaviBarFullScreenWhenScrollViewDidScroll:(id)arg0;
- (BOOL)isCurrentlyDarkStyle;
- (void)animateNaviBarFullScreenVSWhenScrollViewDidScroll:(id)arg0;
- (void)animateNaviBarFullScreenHasTopImageViewWhenScrollViewDidScroll:(id)arg0;
- (void)animateNaviBarFullScreenNoTopImageViewWhenScrollViewDidScroll:(id)arg0;
- (double)lastScrollViewContentOffsetY;
- (void)setLastScrollViewContentOffsetY:(double)arg0;
- (void)updateContentAlphaWithContentOffsetY:(double)arg0;
- (void)animateSearchBarFullScreenHasTopImageViewWhenScrollViewDidScroll:(id)arg0;
- (void)onSearchButtonClicked;
- (void)addCornerMaskView;
- (id)addFlowerParamsToSchema:(id)arg0;
- (BOOL)isTappedChallengePage;
- (void)p_goToNextWithSelectedAssets:(id)arg0;
- (void)setTransferToEditManager:(id)arg0;
- (void)setIsiCloudDownloading:(BOOL)arg0;
- (id)transferToEditManager;
- (BOOL)isiCloudDownloading;
- (void)headerSectionController:(id)arg0 didSelectVideoAtIndex:(long long)arg1;
- (void)headerSectionControllerDidTapActionButton:(id)arg0;
- (void)headerSectionControllerTopImageDidShow:(id)arg0 image:(id)arg1 gradientImage:(id)arg2;
- (void)headerSectionControllerTopImageDidTapped;
- (void)feedViewControllerDidScrollUp;
- (void)feedViewControllerDidScrollDown;
- (void)filterSectionController:(id)arg0 didChangeSortType:(unsigned long long)arg1;
- (id)calculateZoomTransitionStartViewInHeaderWithIndex:(long long)arg0;
- (void)setFeedFactory:(id)arg0;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setSelectedViewController:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)fetchData;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)selectedViewController;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (void)setupUI;
- (id)headerSectionController;
- (void)handleAppWillResignActive;
- (BOOL)isViewAppearing;
- (void)setupCollectionView:(id)arg0;
- (void)setupNavigationBar;
- (void)closeButtonTapped;
- (id)challengeID;

@end
