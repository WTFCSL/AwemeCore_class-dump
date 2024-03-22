//
//     Generated by private class-dump
//

@class NSString, AWEStickerPickerController, NSMutableDictionary, AWELiveDuetPostureViewController, AWEStickerPicckerDataSource, IESEffectModel, ACCGroupedPredicate, NSNumber, ACCPropPickerViewModel;
@protocol ACCRecordCameraPreviewService, ACCRecorderViewContainer, ACCRecordDualService, ACCCameraService, ACCRecordFlowService, ACCRecordAuthService, AWERedPackThemeService, ACCRecordPropService, ACCSideslipPropService, ACCRecordScanModeService, ACCRecordSwitchModeService, ACCRecordSidebarService, ACCRecordGestureService, ACCRecordButtonService;

@interface ACCPropPickerComponent : ACCFeatureComponent <ACCRecordPropServiceSubscriber, UIGestureRecognizerDelegate, ACCRecordGestureServiceSubscriber, AWEStickerPickerControllerDelegate, AWELiveDuetPostureViewControllerDelegate, ACCRouterServiceSubscriber, ACCCameraControlEvent, ACCPropPickerServiceSubscriber, ACCStickerPickerServiceSubscriber, ACCBarItemContainerViewSubscriber> {
    BOOL _hasAppliedFirstHotProp;
    BOOL _isClickingSelectMusicPanel;
    BOOL _shouldReloadData;
    AWEStickerPickerController *_stickerPickerController;
    ACCGroupedPredicate *_skipStickerPredicate;
    ACCGroupedPredicate *_skipCategoryPredicate;
    ACCGroupedPredicate *_ignoreSelectStickerPredicate;
    ACCGroupedPredicate *_ignoreShowPanelWhenApplyProp;
    ACCGroupedPredicate *_ignoreShowPanelWhenClickSelectProp;
    ACCPropPickerViewModel *_viewModel;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCCameraService> _cameraService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordPropService> _propService;
    id<ACCRecordCameraPreviewService> _cameraPreviewService;
    id<ACCRecordAuthService> _authService;
    id<AWERedPackThemeService> _themeService;
    id<ACCRecordFlowService> _flowService;
    id<ACCRecordButtonService> _recordButtonService;
    id<ACCRecordSidebarService> _sidebarService;
    id<ACCRecordGestureService> _gestureService;
    id<ACCSideslipPropService> _sideslipPropService;
    id<ACCRecordDualService> _dualService;
    NSString *_dismissTrackStr;
    NSMutableDictionary *_downloadStickerStartTimeDictionary;
    NSNumber *_downloadCategoriesStartTime;
    NSMutableDictionary *_downloadStickerListStartTimeDictionary;
    AWELiveDuetPostureViewController *_liveDuetPostureViewController;
    IESEffectModel *_needRestoredParentProp;
    id<ACCRecordScanModeService> _scanModeService;
    double _clickStickerEntranceButtonTime;
}

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCRecordCameraPreviewService> cameraPreviewService;
@property (retain, nonatomic) id<ACCRecordAuthService> authService;
@property (retain, nonatomic) id<AWERedPackThemeService> themeService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<ACCRecordButtonService> recordButtonService;
@property (weak, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (retain, nonatomic) id<ACCRecordGestureService> gestureService;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (retain, nonatomic) id<ACCRecordDualService> dualService;
@property (retain, nonatomic) AWEStickerPickerController *stickerPickerController;
@property (copy, nonatomic) NSString *dismissTrackStr;
@property (nonatomic) BOOL hasAppliedFirstHotProp;
@property (nonatomic) BOOL isClickingSelectMusicPanel;
@property (nonatomic) BOOL shouldReloadData;
@property (retain, nonatomic) NSMutableDictionary *downloadStickerStartTimeDictionary;
@property (retain, nonatomic) NSNumber *downloadCategoriesStartTime;
@property (retain, nonatomic) NSMutableDictionary *downloadStickerListStartTimeDictionary;
@property (retain, nonatomic) AWELiveDuetPostureViewController *liveDuetPostureViewController;
@property (retain, nonatomic) IESEffectModel *needRestoredParentProp;
@property (retain, nonatomic) ACCGroupedPredicate *skipCategoryPredicate;
@property (retain, nonatomic) ACCGroupedPredicate *skipStickerPredicate;
@property (retain, nonatomic) ACCGroupedPredicate *ignoreSelectStickerPredicate;
@property (retain, nonatomic) ACCGroupedPredicate *ignoreShowPanelWhenApplyProp;
@property (retain, nonatomic) ACCGroupedPredicate *ignoreShowPanelWhenClickSelectProp;
@property (retain, nonatomic) id<ACCRecordScanModeService> scanModeService;
@property (nonatomic) double clickStickerEntranceButtonTime;
@property (retain, nonatomic) ACCPropPickerViewModel *viewModel;
@property (readonly, nonatomic) AWEStickerPicckerDataSource *stickerDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)updateSelectedIndex:(long long)arg0;
- (void)componentDidMount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)componentDidDisappear;
- (void)loadComponentView;
- (id)serviceBinding;
- (id)gesturesWillAdded;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (id)switchModeService;
- (void)setFlowService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (id)authService;
- (void)setAuthService:(id)arg0;
- (void)showPanelWithEnterMethod:(id)arg0;
- (id)skipStickerPredicate;
- (id)gestureService;
- (void)setGestureService:(id)arg0;
- (id)sideslipPropService;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)setSideslipPropService:(id)arg0;
- (BOOL)propServiceShouldApplyProp:(id)arg0 propSource:(long long)arg1 propIndexPath:(id)arg2;
- (void)propServiceWillApplyProp:(id)arg0 propSource:(long long)arg1;
- (void)propServiceCustomPropDidSelectVideo:(id)arg0;
- (void)propServiceDidSelectBgPhoto:(id)arg0 photoSource:(id)arg1;
- (void)propServiceDidSelectBgPhotos:(id)arg0;
- (void)AIConsumingPropDidStartGenerating;
- (void)propServiceDidSelectBgVideo:(id)arg0 videoSource:(id)arg1;
- (void)propServiceDidEnterGameMode;
- (void)propServiceDidExitGameMode;
- (void)propServiceRearDidSelectedInsertProps:(id)arg0;
- (void)propServiceRearFinishedDownloadProp:(id)arg0 parentProp:(id)arg1;
- (void)propServiceRearFinishedPropDownloadFailed:(id)arg0 error:(id)arg1;
- (id)processedTargetVCInputDataFromData:(id)arg0;
- (void)stickerPickerServiceDidBeginLoadCategories:(id)arg0;
- (void)stickerPickerServiceDidFinishLoadCategories:(id)arg0;
- (void)stickerPickerServiceDidFailLoadCategories:(id)arg0 withError:(id)arg1;
- (void)stickerPickerService:(id)arg0 didBeginDownloadSticker:(id)arg1;
- (void)stickerPickerService:(id)arg0 didFinishDownloadSticker:(id)arg1;
- (void)stickerPickerService:(id)arg0 didFailDownloadSticker:(id)arg1 withError:(id)arg2;
- (void)stickerPickerService:(id)arg0 didBeginLoadStickersWithCategory:(id)arg1 tabIndex:(long long)arg2;
- (void)stickerPickerService:(id)arg0 didFinishLoadStickersWithCategory:(id)arg1 tabIndex:(long long)arg2;
- (void)stickerPickerService:(id)arg0 didFailLoadStickersWithCategory:(id)arg1 tabIndex:(long long)arg2 error:(id)arg3;
- (BOOL)stickerPickerService:(id)arg0 shouldApplySticker:(id)arg1;
- (void)stickerPickerControllerDidTapClearStickerButton:(id)arg0;
- (void)stickerPickerController:(id)arg0 didSelectCategory:(id)arg1;
- (BOOL)stickerPickerControllerShouldApplyFirstHotSticker:(id)arg0;
- (void)stickerPickerController:(id)arg0 willSelectSticker:(id)arg1 willDownload:(BOOL)arg2 additionalParams:(id)arg3;
- (void)stickerPickerController:(id)arg0 didDeselectSticker:(id)arg1;
- (void)stickerPickerController:(id)arg0 willDisplaySticker:(id)arg1 atIndexPath:(id)arg2 additionalParams:(id)arg3;
- (void)stickerPickerController:(id)arg0 trackWithEventName:(id)arg1 params:(id)arg2;
- (id)sidebarService;
- (void)setSidebarService:(id)arg0;
- (id)createDataSource;
- (BOOL)shouldReloadData;
- (void)setShouldReloadData:(BOOL)arg0;
- (void)onDidSwitchToCameraPosition:(long long)arg0;
- (id)dualService;
- (void)setDualService:(id)arg0;
- (void)p_bindViewModels;
- (void)barItemContainerDidLayoutUI:(id)arg0;
- (id)recordButtonService;
- (void)setRecordButtonService:(id)arg0;
- (void)p_fetchPrioritizedStickers;
- (void)p_showPanelForLocalStickerIfNeeded;
- (BOOL)shouldShowLiveDuetPostureViewController;
- (void)setStickerPickerController:(id)arg0;
- (id)liveDuetPostureViewController;
- (void)setLiveDuetPostureViewControllerDismissBlockIfNeeded;
- (id)stickerPickerController;
- (BOOL)swipeUpGestureEnabled;
- (void)handlePropSwipeGesture:(id)arg0;
- (id)stickerDataSource;
- (void)addDataContainer:(id)arg0;
- (id)ignoreShowPanelWhenClickSelectProp;
- (void)setClickStickerEntranceButtonTime:(double)arg0;
- (id)ignoreShowPanelWhenApplyProp;
- (void)setNeedRestoredParentProp:(id)arg0;
- (id)needRestoredParentProp;
- (void)setIsClickingSelectMusicPanel:(BOOL)arg0;
- (void)p_updateStickerPickerControllerIgnoreFrameIfNeeded;
- (id)dismissTrackStr;
- (void)setDismissTrackStr:(id)arg0;
- (id)createStickerPickerConfig;
- (BOOL)filterStickerIfNeed:(id)arg0 category:(id)arg1;
- (id)skipCategoryPredicate;
- (BOOL)isExchangeRedPacketPathWithPublishViewModel:(id)arg0;
- (void)setDownloadCategoriesStartTime:(id)arg0;
- (void)p_saveFirstHotPropForUserRetainStrategy:(id)arg0;
- (id)downloadCategoriesStartTime;
- (BOOL)p_shouldApplyProp:(id)arg0;
- (id)downloadStickerStartTimeDictionary;
- (id)downloadStickerListStartTimeDictionary;
- (void)p_showItemsIfNeeded;
- (BOOL)isClickingSelectMusicPanel;
- (void)dismissPanelWithTrackKey:(id)arg0 completion:(id /* block */)arg1;
- (void)p_handleStickerPickerDismissOnGestureRecognizer:(id)arg0;
- (id)themeService;
- (BOOL)hasAppliedFirstHotProp;
- (void)setHasAppliedFirstHotProp:(BOOL)arg0;
- (id)ignoreSelectStickerPredicate;
- (void)p_trackPropSkipWithStickerPickerController:(id)arg0;
- (double)clickStickerEntranceButtonTime;
- (id)scanModeService;
- (void)p_resetCurrentStickerIfNeed:(id)arg0;
- (void)applyExposePanelPropSelection:(id)arg0;
- (id)cameraPreviewService;
- (void)stickerPickerControllerDidTapDismissBackgroundView:(id)arg0;
- (void)stickerPickerControllerWillDismiss:(id)arg0;
- (void)stickerPickerController:(id)arg0 handleDismissTapGestureRecognizer:(id)arg1;
- (void)stickerPickerControllerDidClickShootButton:(id)arg0;
- (void)stickerPickerController:(id)arg0 didSelectSticker:(id)arg1;
- (void)stickerPickerController:(id)arg0 didShowStickerIconsWithAverageDuration:(long long)arg1 isFirstScreen:(BOOL)arg2;
- (void)stickerPickerController:(id)arg0 panelTopYDidChange:(double)arg1;
- (void)stickerPickerController:(id)arg0 panelBackToPosition:(double)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })liveDuetCameraSwapButtonFrame;
- (void)propPickerService:(id)arg0 didChangeStickerPickerService:(id)arg1;
- (void)updateStickerPickerModelWithCurrentProp:(id)arg0;
- (void)setSkipStickerPredicate:(id)arg0;
- (void)setSkipCategoryPredicate:(id)arg0;
- (void)setIgnoreSelectStickerPredicate:(id)arg0;
- (void)setIgnoreShowPanelWhenApplyProp:(id)arg0;
- (void)setIgnoreShowPanelWhenClickSelectProp:(id)arg0;
- (void)setCameraPreviewService:(id)arg0;
- (void)setThemeService:(id)arg0;
- (void)setDownloadStickerStartTimeDictionary:(id)arg0;
- (void)setDownloadStickerListStartTimeDictionary:(id)arg0;
- (void)setLiveDuetPostureViewController:(id)arg0;
- (void)setScanModeService:(id)arg0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)dealloc;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end