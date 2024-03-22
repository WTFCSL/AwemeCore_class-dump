//
//     Generated by private class-dump
//

@class UIView, NSIndexPath, NSArray, CAKAlbumViewModel, CAKAlbumCustomCellDataModel, CAKAlbumZoomTransitionDelegate, CAKAlbumListTabConfig, NSString, NSObject, UICollectionView, NSCache;
@protocol CAKCategoryContainerProtocol, CAKCommonConfigProtocol, CAKAlbumListBlankViewProtocol, CAKTextLoadingViewProtocol, CAKAlbumListViewControllerDelegate;

@interface CAKAlbumListViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, CAKAlbumZoomTransitionOuterContextProvider, CAKAlbumPreviewAndSelectControllerDelegate, CAKAlbumListViewControllerProtocol> {
    BOOL enableBottomViewShow;
    BOOL enableSelectedAssetsViewShow;
    BOOL isSelectAllMode;
    BOOL _hasCheckedAndReload;
    BOOL _previewFromBottom;
    BOOL _isFirstEnter;
    BOOL _hasKVOControllerNonRetaining;
    BOOL _didViewDidlayoutSubview;
    BOOL _blockReloadData;
    BOOL _blockUpdateCell;
    BOOL _didHandleFirstRender;
    BOOL _didLayoutOrAppeared;
    id<CAKAlbumListViewControllerDelegate> vcDelegate;
    unsigned long long resourceType;
    NSString *tabIdentifier;
    CAKAlbumViewModel *_viewModel;
    CAKAlbumListTabConfig *_tabConfig;
    UICollectionView *_collectionView;
    id<CAKCommonConfigProtocol> _commonConfig;
    NSObject<CAKCategoryContainerProtocol> *_categoryContainer;
    UIView<CAKTextLoadingViewProtocol> *_loadingView;
    UIView<CAKAlbumListBlankViewProtocol> *_blankContentView;
    NSArray *_dataSource;
    CAKAlbumCustomCellDataModel *_customCellDataModel;
    CAKAlbumZoomTransitionDelegate *_transitionDelegate;
    long long _selectedCellIndex;
    NSIndexPath *_selectedIndexPath;
    NSCache *_coverImageCache;
    struct CGSize { double width; double height; } _aspectRatio;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousPreHeatRect;
}

@property (retain, nonatomic) id<CAKCommonConfigProtocol> commonConfig;
@property (retain, nonatomic) NSObject<CAKCategoryContainerProtocol> *categoryContainer;
@property (nonatomic) struct CGSize { double width; double height; } aspectRatio;
@property (nonatomic) BOOL hasCheckedAndReload;
@property (retain, nonatomic) UIView<CAKTextLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIView<CAKAlbumListBlankViewProtocol> *blankContentView;
@property (readonly, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) CAKAlbumCustomCellDataModel *customCellDataModel;
@property (retain, nonatomic) CAKAlbumZoomTransitionDelegate *transitionDelegate;
@property (nonatomic) BOOL previewFromBottom;
@property (nonatomic) long long selectedCellIndex;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (nonatomic) BOOL isFirstEnter;
@property (nonatomic) BOOL hasKVOControllerNonRetaining;
@property (nonatomic) BOOL didViewDidlayoutSubview;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousPreHeatRect;
@property (retain, nonatomic) NSCache *coverImageCache;
@property (nonatomic) BOOL blockReloadData;
@property (nonatomic) BOOL blockUpdateCell;
@property (nonatomic) BOOL didHandleFirstRender;
@property (nonatomic) BOOL didLayoutOrAppeared;
@property (weak, nonatomic) CAKAlbumViewModel *viewModel;
@property (nonatomic) unsigned long long resourceType;
@property (retain, nonatomic) CAKAlbumListTabConfig *tabConfig;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CAKAlbumListViewControllerDelegate> vcDelegate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tabIdentifier;
@property (nonatomic) BOOL enableBottomViewShow;
@property (nonatomic) BOOL enableSelectedAssetsViewShow;
@property (nonatomic) BOOL isSelectAllMode;

+ (void)debug_updateTotalCount:(long long)arg0 revert:(BOOL)arg1;

- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (long long)zoomTransitionItemOffset;
- (void)setEnableMultiSelect:(BOOL)arg0;
- (void)reloadVisibleCell;
- (void)setCommonConfig:(id)arg0;
- (id)commonConfig;
- (void)bindViewModel;
- (void)voiceOverStatusChanged:(id)arg0;
- (BOOL)isFirstEnter;
- (void)setIsFirstEnter:(BOOL)arg0;
- (void)setTabConfig:(id)arg0;
- (id)tabConfig;
- (BOOL)enableMultiSelect;
- (void)setVcDelegate:(id)arg0;
- (void)checkAuthorizationAndReloadWithScrollToBottom:(BOOL)arg0;
- (BOOL)didHandleFirstRender;
- (void)setDidHandleFirstRender:(BOOL)arg0;
- (BOOL)isSelectAllMode;
- (id)transitionCollectionCellForItemOffset:(long long)arg0;
- (void)setSelectedCellIndex:(long long)arg0;
- (long long)selectedCellIndex;
- (BOOL)isEmptyPhotoAlbum;
- (BOOL)isEmptyVideoeAlbum;
- (id)vcDelegate;
- (void)CAKFMLUpdateResourceDataWithResourceType:(unsigned long long)arg0 albumAssetDataModel:(id)arg1 changeDetails:(id)arg2;
- (void)CAKFMLUpdateSelectedDataWithResourceType:(unsigned long long)arg0 selectedAssets:(id)arg1;
- (id)coverImageCache;
- (void)setCoverImageCache:(id)arg0;
- (BOOL)hasKVOControllerNonRetaining;
- (void)setupFirstRenderOptConfig;
- (void)fetchAssetsDataCompletionHandler:(id)arg0 needReset:(id)arg1;
- (void)updateResourceAsset:(id)arg0 needReset:(id)arg1;
- (BOOL)hasCheckedAndReload;
- (void)setHasCheckedAndReload:(BOOL)arg0;
- (void)setHasKVOControllerNonRetaining:(BOOL)arg0;
- (BOOL)isCurrentViewControllerVisible;
- (void)adapterReloadDataInMainThread;
- (void)p_handleSelectedPhotoLibraryAuthorization:(BOOL)arg0;
- (BOOL)didViewDidlayoutSubview;
- (void)setDidViewDidlayoutSubview:(BOOL)arg0;
- (id)categoryContainer;
- (BOOL)needDisplayGreyModeCellWithAsset:(id)arg0;
- (void)updateFirstRenderStatusIfNeed;
- (BOOL)didLayoutOrAppeared;
- (void)setDidLayoutOrAppeared:(BOOL)arg0;
- (void)reloadDataAndScrollToBottom:(BOOL)arg0 withCompltion:(id /* block */)arg1;
- (id)customCellDataModel;
- (id)blankContentView;
- (id)sourceArr;
- (void)setBlockReloadData:(BOOL)arg0;
- (void)p_reloadVisibleCellExcept:(id)arg0;
- (long long)customDataCountForSectionModel:(id)arg0;
- (id)assetModelForIndex:(long long)arg0 sectionModel:(id)arg1;
- (BOOL)p_needShowSelectAssetIcon;
- (void)p_fetchPhotoData:(BOOL)arg0;
- (void)p_fetchPhotoData;
- (void)updateBlankViewWithPermission:(BOOL)arg0;
- (void)p_requestAuthorizationLessTheniOS14;
- (void)dismissLoadingIfNeeded;
- (void)setCategoryContainer:(id)arg0;
- (void)subscribleDataChange;
- (void)applyDataChangeWithResourceType:(unsigned long long)arg0 categoryContainer:(id)arg1 changes:(id)arg2;
- (void)setBlockUpdateCell:(BOOL)arg0;
- (long long)countForSectionModel:(id)arg0;
- (long long)indexForAssetModel:(id)arg0 sectionModel:(id)arg1;
- (BOOL)blockReloadData;
- (id)customCellForCollectionView:(id)arg0 atIndexPath:(id)arg1 reverseOrder:(BOOL)arg2;
- (id)assetCellForCollectionView:(id)arg0 atIndexPath:(id)arg1 reverseOrder:(BOOL)arg2;
- (BOOL)blockUpdateCell;
- (BOOL)shouldUsingFirstRenderMode;
- (void)p_didSelectedAssetWithCell:(id)arg0 isSelected:(BOOL)arg1;
- (void)p_scrollSelectAssetViewToNext;
- (void)p_didSelectedToPreview:(id)arg0 coverImage:(id)arg1 fromBottomView:(BOOL)arg2;
- (BOOL)isSelectedAsset:(id)arg0;
- (unsigned long long)contentTypeForCellLeftTopAreaWithAsset:(id)arg0 indexPath:(id)arg1;
- (void)setPreviewFromBottom:(BOOL)arg0;
- (void)p_didSelectedPhotoToPreview:(id)arg0 coverImage:(id)arg1 fromBottomView:(BOOL)arg2;
- (void)p_didSelectedVideoToPreview:(id)arg0 coverImage:(id)arg1 fromBottomView:(BOOL)arg2;
- (void)albumListScrollToAssetModel:(id)arg0;
- (BOOL)p_didSelectedAsset:(id)arg0 isSelected:(BOOL)arg1 fromPreivew:(BOOL)arg2;
- (void)presentPreviewViewController:(id)arg0;
- (void)p_updateMultiSelectModeListView;
- (void)setIsSelectAllMode:(BOOL)arg0;
- (BOOL)p_targetAlbum:(id)arg0 selectedAllAssets:(id)arg1;
- (BOOL)previewFromBottom;
- (void)configTrackerIfNeed;
- (void)p_updateDataChangeWithResourceType:(unsigned long long)arg0 albumAssetDataModel:(id)arg1 hasIncrementalChanges:(BOOL)arg2 removeIndexSet:(id)arg3 insertIndexSet:(id)arg4 changedIndexSet:(id)arg5;
- (id)convertIndexSetToIndexPath:(id)arg0 albumAssetDataModel:(id)arg1 needCheck:(BOOL)arg2 removeSet:(id)arg3;
- (void)previewControllerEarlyDidLoad:(id)arg0;
- (void)previewControllerDidLoad:(id)arg0 forAlbumAsset:(id)arg1 bottomView:(id)arg2;
- (void)previewControllerWillAppear:(id)arg0 forAlbumAsset:(id)arg1 bottomView:(id)arg2;
- (void)previewControllerDidDisappear:(id)arg0 forAlbumAsset:(id)arg1 bottomView:(id)arg2;
- (void)previewController:(id)arg0 scrollViewDidEndDeceleratingWithAlbumAsset:(id)arg1;
- (void)previewController:(id)arg0 didClickNextButton:(id)arg1;
- (void)previewController:(id)arg0 updateNextButtonTitle:(id)arg1;
- (void)previewController:(id)arg0 selectedAssetsViewdidDeleteAsset:(id)arg1;
- (void)previewController:(id)arg0 selectedAssetsViewDidClickAsset:(id)arg1;
- (void)previewController:(id)arg0 selectedAssetsViewDidChangeOrderWithDraggingAsset:(id)arg1;
- (void)previewController:(id)arg0 willBeginSetupPlayer:(id)arg1 status:(long long)arg2;
- (void)previewController:(id)arg0 didFinishFetchIcloudWithFetchDuration:(double)arg1 size:(long long)arg2;
- (void)previewController:(id)arg0 viewDidEndZoomingWithZoomIn:(BOOL)arg1 asset:(id)arg2;
- (BOOL)previewController:(id)arg0 shouldDisableSelectForCurrentSelectingIndex:(id)arg1;
- (BOOL)enableBottomViewShow;
- (void)setEnableBottomViewShow:(BOOL)arg0;
- (BOOL)enableSelectedAssetsViewShow;
- (void)setEnableSelectedAssetsViewShow:(BOOL)arg0;
- (void)updateAssetsMultiSelectMode;
- (void)scrollAssetToVisible:(id)arg0;
- (void)albumListShowTabDotIfNeed:(id /* block */)arg0;
- (void)selectAllAssets:(BOOL)arg0 complete:(id /* block */)arg1;
- (BOOL)isSelectAllAlbumAssets;
- (long long)latestAssetIndex;
- (BOOL)p_needShowGIFMark;
- (void)didSelectedToPreview:(id)arg0 coverImage:(id)arg1 fromBottomView:(BOOL)arg2;
- (void)setBlankContentView:(id)arg0;
- (void)setCustomCellDataModel:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previousPreHeatRect;
- (void)setPreviousPreHeatRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)setAspectRatio:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)isValidIndexPath:(id)arg0;
- (long long)numberOfItemsInSection:(long long)arg0;
- (id)dataSource;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (unsigned long long)resourceType;
- (void)viewDidLayoutSubviews;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setResourceType:(unsigned long long)arg0;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setCollectionView:(id)arg0;
- (void)reloadData;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (struct CGSize { double x0; double x1; })aspectRatio;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)viewModel;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (id)sectionModelForIndex:(unsigned long long)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg0;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (struct CGSize { double x0; double x1; })cellSize;
- (id)initWithResourceType:(unsigned long long)arg0;
- (void)showLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setTabIdentifier:(id)arg0;
- (id)tabIdentifier;

@end
