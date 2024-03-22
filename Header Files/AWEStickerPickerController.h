//
//     Generated by private class-dump
//

@class UIView, NSString, AWEStickerPickerView, NSArray, UIButton, AWEStickerPickerModel, AWEStickerPickerSearchView, IESEffectModel, NSIndexPath;
@protocol ACCLoadingViewProtocol, ACCScrollStringButtonProtocol, AWEStickerPickerEffectErrorViewProtocol, AWEStickerPickerUIConfigurationProtocol, AWEStickerPickerEffectOverlayProtocol, AWEStickerPickerControllerDelegate;

@interface AWEStickerPickerController : UIViewController <AWEStickerViewLayoutManagerProtocol, ACCStickerPickerServiceSubscriber, AWEStickerPickerModelSearchDelegate, AWEStickerPickerViewDelegate, AWEStickerPickerControllerProtocol> {
    BOOL _dismissWhenTapInEmpty;
    BOOL _isOnRecordingPage;
    BOOL _isIMRecord;
    BOOL _isSearchViewKeyboardShown;
    BOOL _isSearchViewShown;
    AWEStickerPickerModel *_model;
    UIView *_contentView;
    AWEStickerPickerView *_panelView;
    AWEStickerPickerSearchView *_searchView;
    UIView *_roundShootButton;
    NSArray *_plugins;
    id<AWEStickerPickerControllerDelegate> _delegate;
    long long _defaultTabSelectedIndex;
    id /* block */ _generateRoundShootButtonBlock;
    NSIndexPath *_lastSelectIndexPath;
    UIView *_clearView;
    UIButton *_shootButton;
    UIView *_shootButtonView;
    UIView<AWEStickerPickerEffectOverlayProtocol> *_loadingView;
    id<ACCLoadingViewProtocol> _loadingView2;
    UIView<AWEStickerPickerEffectErrorViewProtocol> *_errorView;
    UIView *_errorViewContainer;
    UIView *_accessibilitySelectMusicView;
    UIView<ACCScrollStringButtonProtocol> *_selectMusicView;
    double _panelViewHeight;
    id<AWEStickerPickerUIConfigurationProtocol> _UIConfig;
    NSIndexPath *_selectIndexPath;
    NSIndexPath *_selectIndexPathForBuried;
    NSString *_enterMethodForBuried;
}

@property (retain, nonatomic) UIView *favoriteView;
@property (retain, nonatomic) UIView *greenScreenView;
@property (retain, nonatomic) UIView *greenScreenFinishSelectionView;
@property (retain, nonatomic) UIView *greenScreenVideoView;
@property (retain, nonatomic) UIView *collectionStickerView;
@property (retain, nonatomic) UIView *showcaseEntranceView;
@property (retain, nonatomic) UIView *securityTipsView;
@property (retain, nonatomic) UIView *sliderView;
@property (weak, nonatomic) UIView *cameraiconView;
@property (readonly, nonatomic) BOOL isExposedPanelLayoutManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *clearView;
@property (retain, nonatomic) AWEStickerPickerView *panelView;
@property (retain, nonatomic) AWEStickerPickerSearchView *searchView;
@property (retain, nonatomic) UIView *roundShootButton;
@property (retain, nonatomic) UIButton *shootButton;
@property (retain, nonatomic) UIView *shootButtonView;
@property (retain, nonatomic) UIView<AWEStickerPickerEffectOverlayProtocol> *loadingView;
@property (retain, nonatomic) id<ACCLoadingViewProtocol> loadingView2;
@property (retain, nonatomic) UIView<AWEStickerPickerEffectErrorViewProtocol> *errorView;
@property (retain, nonatomic) UIView *errorViewContainer;
@property (retain, nonatomic) UIView *accessibilitySelectMusicView;
@property (weak, nonatomic) UIView<ACCScrollStringButtonProtocol> *selectMusicView;
@property (retain, nonatomic) AWEStickerPickerModel *model;
@property (nonatomic) double panelViewHeight;
@property (retain, nonatomic) id<AWEStickerPickerUIConfigurationProtocol> UIConfig;
@property (retain, nonatomic) NSIndexPath *selectIndexPath;
@property (retain, nonatomic) NSIndexPath *selectIndexPathForBuried;
@property (nonatomic) BOOL isSearchViewKeyboardShown;
@property (nonatomic) BOOL isSearchViewShown;
@property (retain, nonatomic) NSString *enterMethodForBuried;
@property (readonly, copy, nonatomic) NSString *panelName;
@property (readonly, nonatomic) IESEffectModel *currentSticker;
@property (readonly, copy, nonatomic) NSArray *plugins;
@property (nonatomic, getter=isDismissWhenTapInEmpty) BOOL dismissWhenTapInEmpty;
@property (weak, nonatomic) id<AWEStickerPickerControllerDelegate> delegate;
@property (nonatomic) long long defaultTabSelectedIndex;
@property (nonatomic) BOOL isOnRecordingPage;
@property (nonatomic) BOOL isIMRecord;
@property (copy, nonatomic) id /* block */ generateRoundShootButtonBlock;
@property (retain, nonatomic) NSIndexPath *lastSelectIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, copy, nonatomic) NSString *controllerName;

- (void)hideErrorView;
- (void)setUIConfig:(id)arg0;
- (id)UIConfig;
- (void)setErrorViewContainer:(id)arg0;
- (id)errorViewContainer;
- (void)onErrorTap;
- (void)clearStickerApplyButtonClicked:(id)arg0;
- (id)panelView;
- (void)setPanelView:(id)arg0;
- (void)setShootButton:(id)arg0;
- (id)shootButton;
- (void)setSelectIndexPath:(id)arg0;
- (id)selectIndexPath;
- (BOOL)isIMRecord;
- (id)clearView;
- (void)setClearView:(id)arg0;
- (double)panelViewHeight;
- (void)setupPanelView;
- (id)currentTabName;
- (void)cancelSelect;
- (BOOL)shouldUseNewPropPanel;
- (id)stickerPickerService;
- (void)stickerPickerServiceDidBeginLoadCategories:(id)arg0;
- (void)stickerPickerServiceDidFinishLoadCategories:(id)arg0;
- (void)stickerPickerServiceDidFailLoadCategories:(id)arg0 withError:(id)arg1;
- (void)stickerPickerServiceDidSelectNewSticker:(id)arg0 oldSticker:(id)arg1;
- (void)stickerPickerService:(id)arg0 didBeginDownloadSticker:(id)arg1;
- (void)stickerPickerService:(id)arg0 didFinishDownloadSticker:(id)arg1;
- (void)stickerPickerService:(id)arg0 didFailDownloadSticker:(id)arg1 withError:(id)arg2;
- (void)stickerPickerService:(id)arg0 didBeginLoadStickersWithCategory:(id)arg1 tabIndex:(long long)arg2;
- (void)stickerPickerService:(id)arg0 didFinishLoadStickersWithCategory:(id)arg1 tabIndex:(long long)arg2;
- (void)stickerPickerService:(id)arg0 didFailLoadStickersWithCategory:(id)arg1 tabIndex:(long long)arg2 error:(id)arg3;
- (void)stickerPickerService:(id)arg0 didUpdateStickersWithCategory:(id)arg1 tabIndex:(long long)arg2;
- (BOOL)stickerPickerService:(id)arg0 shouldApplySticker:(id)arg1;
- (void)stickerPickerServiceDidUpdateSticker:(id)arg0 favoriteStatus:(BOOL)arg1 error:(id)arg2;
- (id)currentSticker;
- (void)loadStickerCategoryIfNeeded;
- (void)loadStickerCategory;
- (id)topRoundCornerShapeLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)removeCommerseEntranceView:(id)arg0;
- (void)addCommerseEntranceView:(id)arg0;
- (void)removeOriginStickerUserView:(id)arg0;
- (void)addOriginStickerUserView:(id)arg0;
- (void)removeGreenScreenView:(id)arg0 animated:(BOOL)arg1;
- (BOOL)isExposedPanelLayoutManager;
- (void)removeGreenScreenFinishSelectionView:(id)arg0;
- (BOOL)shouldShowGradientBackground;
- (void)addGreenScreenView:(id)arg0 animated:(BOOL)arg1;
- (void)addGreenScreenFinishSelectionView:(id)arg0;
- (void)showGreenbScreenView:(BOOL)arg0;
- (void)showGreenScreenFinishSelectionView:(BOOL)arg0;
- (void)showIconView:(BOOL)arg0;
- (void)showFavoriteView:(BOOL)arg0;
- (void)addGreenScreenVideoView:(id)arg0 animated:(BOOL)arg1;
- (void)removeGreenScreenVideoView:(id)arg0 animated:(BOOL)arg1;
- (void)addOriginStickerUserVerticalView:(id)arg0;
- (void)adjustPhotoPickerViewAlpha:(double)arg0;
- (void)shootButtonClicked;
- (void)setPanelViewHeight:(double)arg0;
- (void)setIsIMRecord:(BOOL)arg0;
- (void)updateIgnoreFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)lastSelectIndexPath;
- (id)currentStickerIndexPathForBuried;
- (void)setLastSelectIndexPath:(id)arg0;
- (void)showOnView:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateEnterMethodForBuried:(id)arg0;
- (id)roundShootButton;
- (void)setupSelectMusicView:(id)arg0;
- (void)updateShootButtonTitle:(BOOL)arg0;
- (void)showOnView:(id)arg0 animated:(BOOL)arg1 willAppear:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)initWithViewModel:(id)arg0 UIConfig:(id)arg1 plugins:(id)arg2;
- (void)setGenerateRoundShootButtonBlock:(id /* block */)arg0;
- (void)setIsOnRecordingPage:(BOOL)arg0;
- (BOOL)enableStickerSearch;
- (void)setDefaultTabSelectedIndex:(long long)arg0;
- (void)reloadSelectedCategoryListIfNeeded;
- (id)nextAutoDownloadSticker;
- (id)currentStickerIndexPath;
- (id)enterMethodForBuried;
- (void)handleSwipeGesture:(id)arg0;
- (id)DIYCategoryModel;
- (id)collectionStickerView;
- (id)greenScreenView;
- (id)greenScreenVideoView;
- (id)greenScreenFinishSelectionView;
- (void)setGreenScreenView:(id)arg0;
- (void)setGreenScreenFinishSelectionView:(id)arg0;
- (void)setGreenScreenVideoView:(id)arg0;
- (void)setCollectionStickerView:(id)arg0;
- (void)addFavoriteView:(id)arg0;
- (void)layoutFavoriteView:(id)arg0;
- (void)removeFavoriteView:(id)arg0;
- (void)addCollectionStickerView:(id)arg0 animated:(BOOL)arg1;
- (void)removeCollectionStickerView:(id)arg0 animated:(BOOL)arg1;
- (void)addStickerSlider:(id)arg0;
- (void)removeStickerSlider:(id)arg0 animated:(BOOL)arg1;
- (void)addSecurityTipsView:(id)arg0;
- (void)removeSecurityTipsView:(id)arg0;
- (void)addShowcaseEntranceView:(id)arg0;
- (void)removeShowcaseEntranceView:(id)arg0;
- (void)addSwitchCameraIcon:(id)arg0;
- (void)removeSwitchCameraIcon:(id)arg0;
- (void)updateFavoriteButtonLeftConstraint:(BOOL)arg0;
- (id)fadeInTimingFunction;
- (id)fadeOutTimingFunction;
- (BOOL)shouldShowSubviews;
- (void)moveSecurityTipsViewToRightTop;
- (BOOL)shouldShowBlurView;
- (BOOL)isOnRecordingPage;
- (id)favoriteView;
- (id)showcaseEntranceView;
- (id)securityTipsView;
- (id)cameraiconView;
- (void)setFavoriteView:(id)arg0;
- (void)p_layoutSubviews;
- (void)p_moveUpToolBarView:(id)arg0;
- (void)p_moveDownToolBarView:(id)arg0 completion:(id /* block */)arg1;
- (void)setShowcaseEntranceView:(id)arg0;
- (void)setSecurityTipsView:(id)arg0;
- (BOOL)shouldMoveSecurityTipsViewToTopRight;
- (void)setCameraiconView:(id)arg0;
- (BOOL)isSearchViewShown;
- (BOOL)isSearchViewKeyboardShown;
- (void)setupDismssBgView;
- (BOOL)shouldSupportSearchFeature;
- (void)setupSearchView;
- (BOOL)shouldDisableShootButtonForNewPanel;
- (BOOL)shouldUseRoundShootButton;
- (void)setupShootButtonRound;
- (void)setupConstraintsForAddShootButtonRound;
- (void)setupShootButton;
- (void)setupConstraintsForAddShootButton;
- (void)updateConterntViewFrameForShow;
- (void)applyHotCategoryFirstPropIfNeed;
- (void)setLoadingView2:(id)arg0;
- (id)loadingView2;
- (void)updateConterntViewFrameForDismiss;
- (void)loadSearchRecommendWords;
- (void)setupSelectMusicViewForAccessibility;
- (void)onClearBackgroundPress:(id)arg0;
- (BOOL)p_shouldApplyCornerRadiusToSearchOrPanelView;
- (void)setShootButtonView:(id)arg0;
- (id)shootButtonView;
- (id /* block */)generateRoundShootButtonBlock;
- (void)setRoundShootButton:(id)arg0;
- (double)shootButtonViewTotalHeight;
- (void)updateConterntViewFrame:(BOOL)arg0;
- (BOOL)isDismissWhenTapInEmpty;
- (long long)defaultTabSelectedIndex;
- (id)getIndexPathForBuriedWithCategoryModel:(id)arg0 indexPath:(id)arg1;
- (void)setSelectIndexPathForBuried:(id)arg0;
- (void)pickerViewDidSelectSticker:(id)arg0 category:(id)arg1 isAutoApply:(BOOL)arg2;
- (id)selectIndexPathForBuried;
- (void)prepareShowSearchViewAnimation;
- (void)setIsSearchViewShown:(BOOL)arg0;
- (void)setIsSearchViewKeyboardShown:(BOOL)arg0;
- (void)showSearchViewWithNotification:(id)arg0;
- (void)hideSearchViewWithNotification:(id)arg0;
- (void)remainOnSearchViewWithNotification:(id)arg0;
- (double)panelHeightIfKeyboardIsShown;
- (BOOL)p_shouldDecreaseSearchViewHeight;
- (id)selectMusicView;
- (id)accessibilitySelectMusicView;
- (void)updatePanelViewYOffset:(double)arg0;
- (void)panelBackToPosition;
- (void)stickerPickerModel:(id)arg0 trackWithEventName:(id)arg1 params:(id)arg2;
- (void)stickerPickerModel:(id)arg0 didTapHashtag:(id)arg1;
- (void)stickerPickerModelSendSearchCategoryModel:(id)arg0;
- (void)stickerPickerModelSendSearchSugList:(id)arg0;
- (void)stickerPickerModel:(id)arg0 showKeyboardWithNotification:(id)arg1;
- (void)stickerPickerModel:(id)arg0 hideKeyboardWithNotification:(id)arg1 source:(unsigned long long)arg2;
- (void)stickerPickerModel:(id)arg0 triggerKeyboardToShow:(BOOL)arg1;
- (void)stickerPickerModel:(id)arg0 triggerKeyboardToHide:(BOOL)arg1;
- (void)stickerPickerModel:(id)arg0 didSelectSticker:(id)arg1 category:(id)arg2 indexPath:(id)arg3;
- (void)stickerPickerModel:(id)arg0 willDisplaySticker:(id)arg1 indexPath:(id)arg2;
- (void)stickerPickerModel:(id)arg0 willDisplayLoadingView:(BOOL)arg1;
- (void)stickerPickerModelUpdateSearchViewToPackUp:(id)arg0;
- (void)stickerPickerView:(id)arg0 didSelectTabIndex:(long long)arg1;
- (BOOL)stickerPickerView:(id)arg0 isStickerSelected:(id)arg1;
- (void)stickerPickerView:(id)arg0 didSelectSticker:(id)arg1 category:(id)arg2 indexPath:(id)arg3;
- (void)stickerPickerViewDidClearSticker:(id)arg0;
- (BOOL)stickerPickerViewShouldSupportSearchFeature:(id)arg0;
- (void)stickerPickerView:(id)arg0 willDisplaySticker:(id)arg1 indexPath:(id)arg2;
- (void)stickerPickerView:(id)arg0 finishScrollingTopBottom:(BOOL)arg1;
- (void)stickerPickerView:(id)arg0 finishScrollingLeftRight:(BOOL)arg1;
- (void)stickerPickerViewDidShowFirstScreenStickerIcons:(id)arg0 averageDuration:(long long)arg1 isFirstScreen:(BOOL)arg2;
- (void)stickerPickerView:(id)arg0 handlePanGesture:(id)arg1;
- (id)initWithPanelName:(id)arg0 UIConfig:(id)arg1 currentSticker:(id)arg2 currentChildSticker:(id)arg3 plugins:(id)arg4;
- (void)setDismissWhenTapInEmpty:(BOOL)arg0;
- (void)setAccessibilitySelectMusicView:(id)arg0;
- (void)setSelectMusicView:(id)arg0;
- (void)setEnterMethodForBuried:(id)arg0;
- (id)sliderView;
- (void)setModel:(id)arg0;
- (void)selectDefaultCategory;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (double)contentHeight;
- (id)model;
- (void)reloadData;
- (id)contentView;
- (id)delegate;
- (void)setSliderView:(id)arg0;
- (void)setCurrentEffect:(id)arg0;
- (id)containerView;
- (void)dismissAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)loadView;
- (void)updateSubviewsAlpha:(double)arg0;
- (void)setupConstraints;
- (void)updateLayoutIfNeeded;
- (void)setContentView:(id)arg0;
- (id)plugins;
- (BOOL)isVisible:(id)arg0;
- (void)showLoadingView;
- (void)showErrorView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setupContentView;
- (id)errorView;
- (void)setErrorView:(id)arg0;
- (id)panelName;
- (void)hideLoadingView;
- (id)controllerName;
- (id)searchView;
- (void)setSearchView:(id)arg0;

@end
