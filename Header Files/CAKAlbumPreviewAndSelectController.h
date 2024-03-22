//
//     Generated by private class-dump
//

@class UIImageView, NSCache, UILabel, CAKAlbumViewModel, UIVisualEffectView, CAKGradientView, NSObject, UICollectionView, AVPlayerLayer, UIButton, UIView, CAKAlbumAssetModel, NSString, NSArray, AVPlayer, NSValue;
@protocol CAKCategoryContainerProtocol, CAKCommonConfigProtocol, CAKSelectedAssetsViewProtocol, CAKTextLoadingViewProtocol, CAKAlbumPreviewAndSelectControllerDelegate, CAKAlbumPreviewPageBottomViewProtocol, CAKAlbumPreviewPageTopViewSelectBtnProtocol;

@interface CAKAlbumPreviewAndSelectController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CAKAlbumZoomTransitionInnerContextProvider> {
    BOOL _greyMode;
    BOOL _currentAssetModelSelected;
    BOOL _enableSelectBtnOnTop;
    BOOL _isDragging;
    BOOL _showLeftToast;
    BOOL _showRightToast;
    BOOL _fromBottomView;
    BOOL _isShowingPurePreview;
    BOOL _selectPhotoUserInteractive;
    BOOL _isLeavingPageByCancel;
    BOOL _couldTrack;
    BOOL _errorOccur;
    long long _currentIndex;
    CAKAlbumAssetModel *_exitAssetModel;
    NSCache *_coverImageCache;
    UIButton<CAKAlbumPreviewPageTopViewSelectBtnProtocol> *_selectAssetBtn;
    NSArray *_selectedAssetModelArray;
    NSArray *_originDataSource;
    id<CAKAlbumPreviewAndSelectControllerDelegate> _delegate;
    id /* block */ _willDismissBlock;
    id /* block */ _didClickedTopRightIcon;
    id /* block */ _videoLoadHandlerBlock;
    unsigned long long _assetsSelectedIconStyle;
    NSValue *_videoSize;
    AVPlayer *_avPlayer;
    AVPlayerLayer *_avPlayerLayer;
    UIButton *_backButton;
    UICollectionView *_collectionView;
    CAKAlbumAssetModel *_currentAssetModel;
    unsigned long long _resourceType;
    UIView<CAKTextLoadingViewProtocol> *_loadingView;
    UIView *_selectPhotoView;
    UIVisualEffectView *_topMaskView;
    UIVisualEffectView *_bottomMaskView;
    CAKGradientView *_topMaskGradientView;
    CAKGradientView *_bottomGradientView;
    UIImageView *_unCheckImageView;
    UILabel *_numberLabel;
    UIImageView *_numberBackGroundImageView;
    UILabel *_selectHintLabel;
    UIButton *_nextButton;
    UIView<CAKSelectedAssetsViewProtocol> *_selectedAssetsView;
    UIVisualEffectView *_selectedAssetsViewMaskView;
    UIView *_seperatorLineView;
    double _currentScale;
    UILabel *_repeatSelectHintLabel;
    UIView<CAKAlbumPreviewPageBottomViewProtocol> *_bottomView;
    UIView<CAKAlbumPreviewPageBottomViewProtocol> *_customBottomView;
    CAKAlbumViewModel *_viewModel;
    NSObject<CAKCategoryContainerProtocol> *_assetDataModel;
    id<CAKCommonConfigProtocol> _commonConfig;
}

@property (retain, nonatomic) NSValue *videoSize;
@property (retain, nonatomic) AVPlayer *avPlayer;
@property (retain, nonatomic) AVPlayerLayer *avPlayerLayer;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) CAKAlbumAssetModel *currentAssetModel;
@property (retain, nonatomic) CAKAlbumAssetModel *exitAssetModel;
@property (nonatomic) BOOL isDragging;
@property (nonatomic) BOOL showLeftToast;
@property (nonatomic) BOOL showRightToast;
@property (nonatomic) BOOL fromBottomView;
@property (nonatomic) BOOL isShowingPurePreview;
@property (nonatomic) unsigned long long resourceType;
@property (retain, nonatomic) UIView<CAKTextLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIView *selectPhotoView;
@property (retain, nonatomic) UIVisualEffectView *topMaskView;
@property (retain, nonatomic) UIVisualEffectView *bottomMaskView;
@property (retain, nonatomic) CAKGradientView *topMaskGradientView;
@property (retain, nonatomic) CAKGradientView *bottomGradientView;
@property (retain, nonatomic) UIImageView *unCheckImageView;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UIImageView *numberBackGroundImageView;
@property (retain, nonatomic) UILabel *selectHintLabel;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UIView<CAKSelectedAssetsViewProtocol> *selectedAssetsView;
@property (retain, nonatomic) UIVisualEffectView *selectedAssetsViewMaskView;
@property (retain, nonatomic) UIView *seperatorLineView;
@property (nonatomic) double currentScale;
@property (retain, nonatomic) UILabel *repeatSelectHintLabel;
@property (retain, nonatomic) UIView<CAKAlbumPreviewPageBottomViewProtocol> *bottomView;
@property (retain, nonatomic) UIView<CAKAlbumPreviewPageBottomViewProtocol> *customBottomView;
@property (nonatomic) BOOL selectPhotoUserInteractive;
@property (nonatomic) BOOL isLeavingPageByCancel;
@property (nonatomic) BOOL couldTrack;
@property (nonatomic) BOOL errorOccur;
@property (weak, nonatomic) CAKAlbumViewModel *viewModel;
@property (retain, nonatomic) NSObject<CAKCategoryContainerProtocol> *assetDataModel;
@property (retain, nonatomic) id<CAKCommonConfigProtocol> commonConfig;
@property (nonatomic) BOOL greyMode;
@property (readonly, nonatomic) BOOL currentAssetModelSelected;
@property (weak, nonatomic) NSCache *coverImageCache;
@property (nonatomic) BOOL enableSelectBtnOnTop;
@property (retain, nonatomic) UIButton<CAKAlbumPreviewPageTopViewSelectBtnProtocol> *selectAssetBtn;
@property (retain, nonatomic) NSArray *selectedAssetModelArray;
@property (retain, nonatomic) NSArray *originDataSource;
@property (weak, nonatomic) id<CAKAlbumPreviewAndSelectControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ willDismissBlock;
@property (copy, nonatomic) id /* block */ didClickedTopRightIcon;
@property (copy, nonatomic) id /* block */ videoLoadHandlerBlock;
@property (nonatomic) unsigned long long assetsSelectedIconStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (id)zoomTransitionEndView;
- (long long)zoomTransitionItemOffset;
- (void)setWillDismissBlock:(id /* block */)arg0;
- (id /* block */)willDismissBlock;
- (id)selectHintLabel;
- (void)setSelectHintLabel:(id)arg0;
- (void)updatePhotoSelected:(id)arg0 greyMode:(BOOL)arg1;
- (void)setCustomBottomView:(id)arg0;
- (void)removePlayer;
- (void)setCommonConfig:(id)arg0;
- (id)commonConfig;
- (void)bindViewModel;
- (id)topMaskView;
- (id)bottomMaskView;
- (void)setTopMaskView:(id)arg0;
- (void)setBottomMaskView:(id)arg0;
- (id)originDataSource;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrame;
- (BOOL)greyMode;
- (void)setGreyMode:(BOOL)arg0;
- (void)setupBottomGradientView;
- (id)seperatorLineView;
- (void)setSeperatorLineView:(id)arg0;
- (void)setAssetsSelectedIconStyle:(unsigned long long)arg0;
- (id)customBottomView;
- (void)setSelectPhotoView:(id)arg0;
- (id)selectPhotoView;
- (id)unCheckImageView;
- (id)numberBackGroundImageView;
- (void)setUnCheckImageView:(id)arg0;
- (void)setNumberBackGroundImageView:(id)arg0;
- (id)selectedAssetModelArray;
- (void)setSelectedAssetModelArray:(id)arg0;
- (id)currentAssetModel;
- (void)setCurrentAssetModel:(id)arg0;
- (id)assetDataModel;
- (void)setUpPlayer:(id)arg0;
- (void)playAfterCheck;
- (void)runLoopTheMovie:(id)arg0;
- (void)selectPhotoButtonClick:(id)arg0;
- (unsigned long long)assetsSelectedIconStyle;
- (void)setAssetDataModel:(id)arg0;
- (BOOL)fromBottomView;
- (void)setFromBottomView:(BOOL)arg0;
- (id)coverImageCache;
- (void)setCoverImageCache:(id)arg0;
- (id)initWithViewModel:(id)arg0 anchorAssetModel:(id)arg1 fromBottomView:(BOOL)arg2;
- (void)setDidClickedTopRightIcon:(id /* block */)arg0;
- (void)setVideoLoadHandlerBlock:(id /* block */)arg0;
- (void)setupWithViewModel:(id)arg0 anchorAssetModel:(id)arg1 fromBottomView:(BOOL)arg2;
- (void)setEnableSelectBtnOnTop:(BOOL)arg0;
- (void)setSelectAssetBtn:(id)arg0;
- (void)setOriginDataSource:(id)arg0;
- (long long)indexForAssetModel:(id)arg0;
- (void)setupBackBtn;
- (void)setupTopMaskView;
- (void)setupBottomMaskView;
- (void)setupSelectedAssetsViewMaskView;
- (void)setupSelectedViewForPreviewPage;
- (void)setupSeperatorLineView;
- (void)setupNextButton;
- (void)setupSelectPhotoView;
- (void)setupSelectBtnOnTopIfNeed;
- (void)didClickPreviewView;
- (void)setupCustomBottomView;
- (void)setupTopMaskGradientView;
- (void)p_previewCollectionViewScrollToCurrentModelIndex;
- (void)dealWithPhotoChange;
- (BOOL)isLeavingPageByCancel;
- (void)excuteBackTask;
- (id)selectedAssetsView;
- (void)setIsLeavingPageByCancel:(BOOL)arg0;
- (void)selectAssetCollectionViewScrollToCurrentModelIndex;
- (void)playLivePhotoIfNeed:(id)arg0;
- (void)reloadSelectedStateWithGrayMode:(BOOL)arg0;
- (void)reloadSelectedStateWithGrayMode:(BOOL)arg0 withMediaType:(long long)arg1;
- (void)updateTitleForButton:(id)arg0;
- (BOOL)p_enableSelectedAssetsView;
- (BOOL)p_shouldHideSelectedViewWhenNotSelect;
- (void)setIsShowingPurePreview:(BOOL)arg0;
- (void)updateSelectedAssetsViewHidden;
- (void)updateTopAndBottomViewHidden;
- (void)updateSelectedCellStatus;
- (void)updateCustomBottomViewIfNeed;
- (void)setTopMaskGradientView:(id)arg0;
- (id)topMaskGradientView;
- (BOOL)enableSelectBtnOnTop;
- (id)selectAssetBtn;
- (void)updateTopMaskViewWithAlpha:(double)arg0;
- (void)setSelectPhotoUserInteractive:(BOOL)arg0;
- (void)setSelectedAssetsView:(id)arg0;
- (BOOL)shouldAdjustDockForRepeatSelect;
- (void)p_updateSelectViewHighlightIndex:(long long)arg0;
- (void)configDeleteAssetBlockForSelectedAssetView;
- (void)configChangeOrderBlockForSelectedAssetView;
- (void)configTouchAssetBlockForSelectedAssetView;
- (id)selectedAssetsViewMaskView;
- (long long)p_currentSelectViewHighlightIndex;
- (BOOL)containsAssetModel:(id)arg0;
- (id)getToastTextWithAssetModel:(id)arg0;
- (void)p_scrollSelectCollectionViewToCurrentForRepeatSelect;
- (void)setSelectedAssetsViewMaskView:(id)arg0;
- (void)updateBottomMaskViewWithAlpha:(double)arg0;
- (BOOL)isShowingPurePreview;
- (void)showWidgets;
- (void)hideWidgetsWithIsZooming:(BOOL)arg0;
- (BOOL)autoSelectCurrentAsset;
- (void)setExitAssetModel:(id)arg0;
- (long long)originDataSourceCount;
- (id)repeatSelectHintLabel;
- (long long)p_currentIndexSelectCollectionViewWillScrollTo;
- (long long)p_numberOfItemsInSelectCollectionView;
- (void)setShowLeftToast:(BOOL)arg0;
- (void)setShowRightToast:(BOOL)arg0;
- (id)assetModelForIndex:(long long)arg0;
- (BOOL)showLeftToast;
- (BOOL)showRightToast;
- (void)trackMonitor;
- (id /* block */)videoLoadHandlerBlock;
- (void)setCouldTrack:(BOOL)arg0;
- (void)setErrorOccur:(BOOL)arg0;
- (void)selectAsset:(id)arg0 progressHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (BOOL)couldTrack;
- (BOOL)errorOccur;
- (Class)getClassFromType:(long long)arg0;
- (void)p_updateRepeatSelected:(id)arg0 greyMode:(BOOL)arg1;
- (BOOL)selectPhotoUserInteractive;
- (id /* block */)didClickedTopRightIcon;
- (void)p_doRepeatSelectAnimationIfNeed;
- (BOOL)p_checkCurrentIndexValid;
- (id)initWithViewModel:(id)arg0 anchorAssetModel:(id)arg1;
- (id)exitAssetModel;
- (BOOL)currentAssetModelSelected;
- (void)setRepeatSelectHintLabel:(id)arg0;
- (void)scrollViewWillBeginDecelerating:(id)arg0;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (unsigned long long)resourceType;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (long long)currentIndex;
- (void)setResourceType:(unsigned long long)arg0;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (BOOL)isDragging;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setCollectionView:(id)arg0;
- (void)setCurrentIndex:(long long)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)viewModel;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (id)bottomView;
- (double)currentScale;
- (void)setCurrentScale:(double)arg0;
- (id)nextButton;
- (void)setNextButton:(id)arg0;
- (void)setBottomView:(id)arg0;
- (id)avPlayer;
- (id)avPlayerLayer;
- (void)setAvPlayer:(id)arg0;
- (void)setAvPlayerLayer:(id)arg0;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)back:(id)arg0;
- (void)setIsDragging:(BOOL)arg0;
- (id)videoSize;
- (void)setVideoSize:(id)arg0;
- (id)numberLabel;
- (void)setNumberLabel:(id)arg0;
- (void)goToNextPage:(id)arg0;
- (void)showLoading;

@end
