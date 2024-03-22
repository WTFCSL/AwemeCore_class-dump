//
//     Generated by private class-dump
//

@class AWEUILoadingView, NSIndexPath, UICollectionView, NSDictionary, NSMutableArray, UIView, AWEFavoriteAwemeDataController, AWEFavoriteTagDataController, AWEFavoriteRecommendSnakeBarManager, NSHashTable, NSString, AWEPageContext, AWEAwemeModel, AWEFavoriteNewAwemeDatacontroller, AWEUserWorkCellViewModelPool, AWEUserModel, UIImageView;
@protocol AWEProfileGuidePopoverHelperProtocol, AWEProfileBatchModifyViewControllerProtocol, AWEUserProfileTabVCDelegate;

@interface AWEFavoriteVideosViewController : UIViewController <UICollectionViewDataSource, SectionColorCollectionViewDelegateFlowLayout, AWEPreviewable, AWEProfileCollectionViewDelegateWaterfallLayout, AWEUserWorkCollectionViewCellTabDelegate, AWEProfileBatchModifyViewControllerDelegate, AWERouterViewControllerProtocol, AWEUserProfileCollectionViewControllerProtocol, AWEZoomTransitionOuterContextProvider, AWEProfileTabCustomProtocol> {
    BOOL _isInHomePage;
    BOOL _isProfileExploreStyle;
    BOOL _isThisViewControllerShown;
    BOOL _isSettingViewControllerShown;
    BOOL _initialLoadMoreEnabled;
    BOOL _shouldReloadData;
    BOOL _shouldChangeColumnStyle;
    BOOL _isRequesting;
    BOOL _hasViewAppeared;
    BOOL _recommendCreateFavoriteSnakeBarhasAppeared;
    BOOL _needRefreshAfterCollection;
    BOOL _isTagDataEmptyFromServer;
    BOOL _shouldShowJustCollectedLabel;
    id /* block */ _reloadRightFixedArea;
    NSString *_referString;
    NSString *_enterMethod;
    NSDictionary *_logExtra;
    id<AWEUserProfileTabVCDelegate> _userDelegate;
    id /* block */ _requestDataCompletionBlock;
    AWEUserModel *_user;
    id /* block */ _favoriteAwemeCellWillDisplayBlock;
    id /* block */ _createRecommendFavoriteSuccessCompletion;
    id /* block */ _zoomTransitionBackToOutsideBlock;
    AWEFavoriteTagDataController *_dataController;
    AWEFavoriteAwemeDataController *_awemeDataController;
    AWEFavoriteNewAwemeDatacontroller *_favoriteNewAwemeDataController;
    AWEFavoriteRecommendSnakeBarManager *_favoriteRecommendSnakeBarManager;
    UICollectionView *_collectionView;
    AWEUILoadingView *_loadingView;
    NSHashTable *_animatedCoverCells;
    UIImageView *_lockImageView;
    UIView *_tagsBackgroundView;
    UIView *_topGradientView;
    NSIndexPath *_zoomPostIndexPath;
    id<AWEProfileGuidePopoverHelperProtocol> _dualColumnPopoverHelper;
    AWEAwemeModel *_model;
    NSMutableArray *_removeAwemeArray;
    AWEPageContext *_tabContext;
    id<AWEProfileGuidePopoverHelperProtocol> _popoverHelper;
    id<AWEProfileBatchModifyViewControllerProtocol> _batchModifyVC;
    AWEUserWorkCellViewModelPool *_viewModelPool;
}

@property (retain, nonatomic) AWEFavoriteTagDataController *dataController;
@property (retain, nonatomic) AWEFavoriteAwemeDataController *awemeDataController;
@property (retain, nonatomic) AWEFavoriteNewAwemeDatacontroller *favoriteNewAwemeDataController;
@property (retain, nonatomic) AWEFavoriteRecommendSnakeBarManager *favoriteRecommendSnakeBarManager;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL initialLoadMoreEnabled;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) NSHashTable *animatedCoverCells;
@property (nonatomic) BOOL shouldReloadData;
@property (nonatomic) BOOL shouldChangeColumnStyle;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) UIImageView *lockImageView;
@property (retain, nonatomic) UIView *tagsBackgroundView;
@property (retain, nonatomic) UIView *topGradientView;
@property (nonatomic) BOOL hasViewAppeared;
@property (nonatomic) BOOL isThisViewControllerShown;
@property (nonatomic) BOOL isSettingViewControllerShown;
@property (retain, nonatomic) NSIndexPath *zoomPostIndexPath;
@property (nonatomic) BOOL recommendCreateFavoriteSnakeBarhasAppeared;
@property (nonatomic) BOOL needRefreshAfterCollection;
@property (retain, nonatomic) id<AWEProfileGuidePopoverHelperProtocol> dualColumnPopoverHelper;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSMutableArray *removeAwemeArray;
@property (nonatomic) BOOL isTagDataEmptyFromServer;
@property (retain, nonatomic) AWEPageContext *tabContext;
@property (nonatomic) BOOL shouldShowJustCollectedLabel;
@property (retain, nonatomic) id<AWEProfileGuidePopoverHelperProtocol> popoverHelper;
@property (retain, nonatomic) id<AWEProfileBatchModifyViewControllerProtocol> batchModifyVC;
@property (retain, nonatomic) AWEUserWorkCellViewModelPool *viewModelPool;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) BOOL isInHomePage;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> userDelegate;
@property (copy, nonatomic) id /* block */ requestDataCompletionBlock;
@property (nonatomic) BOOL isProfileExploreStyle;
@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) id /* block */ favoriteAwemeCellWillDisplayBlock;
@property (copy, nonatomic) id /* block */ createRecommendFavoriteSuccessCompletion;
@property (copy, nonatomic) id /* block */ zoomTransitionBackToOutsideBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ reloadRightFixedArea;

- (id)referString;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)setAweui_viewControllerState:(unsigned long long)arg0;
- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (void)setEnterMethod:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterMethod;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)setDataController:(id)arg0;
- (void)setIsRequesting:(BOOL)arg0;
- (id)favoriteRecommendSnakeBarManager;
- (BOOL)isRequesting;
- (double)contentOffsetY;
- (id /* block */)reloadRightFixedArea;
- (void)setReloadRightFixedArea:(id /* block */)arg0;
- (void)p_setupUI;
- (id)previewingViewControllerForView:(id)arg0 atPoint:(struct CGPoint { double x0; double x1; })arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewingSourceRectForView:(id)arg0 atPoint:(struct CGPoint { double x0; double x1; })arg1;
- (id)userDelegate;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })arg0 animated:(BOOL)arg1;
- (double)contentSizeHeight;
- (void)setUserDelegate:(id)arg0;
- (BOOL)isProfileExploreStyle;
- (void)setIsProfileExploreStyle:(BOOL)arg0;
- (BOOL)initialLoadMoreEnabled;
- (void)setInitialLoadMoreEnabled:(BOOL)arg0;
- (void)p_loadMoreData;
- (id)viewModelPool;
- (id /* block */)requestDataCompletionBlock;
- (void)setRequestDataCompletionBlock:(id /* block */)arg0;
- (void)setViewModelPool:(id)arg0;
- (BOOL)addAwemeWithItemID:(id)arg0;
- (void)setAnimatedCoverCells:(id)arg0;
- (id)animatedCoverCells;
- (BOOL)removeAwemeWithItemID:(id)arg0;
- (void)p_endRefreshingWithMore:(BOOL)arg0 list:(id)arg1 error:(id)arg2 beginDate:(id)arg3;
- (void)p_backBtnClicked:(id)arg0;
- (void)handleDeleteNotification:(id)arg0;
- (void)p_trackWithModel:(id)arg0 event:(id)arg1;
- (id)tabContext;
- (void)setTabContext:(id)arg0;
- (void)setPopoverHelper:(id)arg0;
- (id)popoverHelper;
- (id)awemeDataController;
- (void)setAwemeDataController:(id)arg0;
- (void)setFavoriteAwemeCellWillDisplayBlock:(id /* block */)arg0;
- (void)setIsInHomePage:(BOOL)arg0;
- (void)p_didChangeVideoPrivacy:(id)arg0;
- (void)p_favoriteItemChanged:(id)arg0;
- (void)p_handleForAwemeFamiliarRecommend:(id)arg0;
- (void)p_didCreateNewFile;
- (void)handleSettingSliderVCWillShowNotification:(id)arg0;
- (void)handleDiggedNotification:(id)arg0;
- (void)dynamicCoverSettingsChanged:(id)arg0;
- (void)__refreshData;
- (void)refreshFileData;
- (BOOL)needRefreshAfterCollection;
- (BOOL)shouldReloadData;
- (void)setShouldReloadData:(BOOL)arg0;
- (id)removeAwemeArray;
- (void)setRemoveAwemeArray:(id)arg0;
- (void)setNeedRefreshAfterCollection:(BOOL)arg0;
- (void)setIsThisViewControllerShown:(BOOL)arg0;
- (void)setIsSettingViewControllerShown:(BOOL)arg0;
- (void)showFavoriteRecommendSnakeBarIfNeed;
- (BOOL)enableOptimizeAnimationCoverLeak;
- (id)batchModifyVC;
- (BOOL)isInHomePage;
- (BOOL)isThisViewControllerShown;
- (BOOL)isSettingViewControllerShown;
- (id /* block */)createRecommendFavoriteSuccessCompletion;
- (void)setCreateRecommendFavoriteSuccessCompletion:(id /* block */)arg0;
- (void)p_createCollectionButtonClick;
- (void)showBatchModifyPopoverIfNeeded;
- (id)tagsBackgroundView;
- (BOOL)isTagDataEmptyFromServer;
- (void)setIsTagDataEmptyFromServer:(BOOL)arg0;
- (BOOL)p_isSelfCollectionTab;
- (void)trackShowAnimatedVideoCoverWithModel:(id)arg0 extraParams:(id)arg1;
- (id /* block */)favoriteAwemeCellWillDisplayBlock;
- (void)trackClickHomepageVideoCoverWithModel:(id)arg0 extraParams:(id)arg1;
- (void)setZoomPostIndexPath:(id)arg0;
- (void)setBatchModifyVC:(id)arg0;
- (id)zoomPostIndexPath;
- (id /* block */)zoomTransitionBackToOutsideBlock;
- (void)p_refreshAwemeData;
- (id)collectionView:(id)arg0 layout:(id)arg1 backgroundColorForSection:(long long)arg2;
- (BOOL)shouldShowLongPressBatchModify;
- (void)enterBatchModifyWithLongPressItem:(id)arg0;
- (void)didDeleteAllItems;
- (BOOL)shouldAnimateCoverCell;
- (void)setZoomTransitionBackToOutsideBlock:(id /* block */)arg0;
- (void)setFavoriteRecommendSnakeBarManager:(id)arg0;
- (void)setTagsBackgroundView:(id)arg0;
- (BOOL)recommendCreateFavoriteSnakeBarhasAppeared;
- (void)setRecommendCreateFavoriteSnakeBarhasAppeared:(BOOL)arg0;
- (id)favoriteNewAwemeDataController;
- (void)setFavoriteNewAwemeDataController:(id)arg0;
- (id)awemeDataControllerInDifferentExp;
- (void)setShouldShowJustCollectedLabel:(BOOL)arg0;
- (BOOL)currentVCHasNoData;
- (BOOL)shouldChangeColumnStyle;
- (void)setShouldChangeColumnStyle:(BOOL)arg0;
- (id)dualColumnPopoverHelper;
- (void)setDualColumnPopoverHelper:(id)arg0;
- (BOOL)shouldShowJustCollectedLabel;
- (void)setUser:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)setModel:(id)arg0;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)user;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (void)viewDidAppear:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)model;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setCollectionView:(id)arg0;
- (void)reloadData;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)contentView;
- (id)context;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (void)refreshData;
- (id)topGradientView;
- (void)setTopGradientView:(id)arg0;
- (BOOL)hasViewAppeared;
- (void)setHasViewAppeared:(BOOL)arg0;
- (id)lockImageView;
- (void)setLockImageView:(id)arg0;

@end
