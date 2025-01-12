//
//     Generated by private class-dump
//

@class NSString, AWEStickerSwitchImageView, UILabel, ACCRecordSelectPropViewModel, UIButton;
@protocol ACCRecordSwitchModeService, ACCRecordPropService, ACCRecorderViewContainer, ACCRecordAuthService, ACCRecordScanModelFlowService, ACCRecordUIHiddenStrategyService, ACCSideslipPropService, ACCRecorderStickerServiceProtocol, ACCRecordGestureService, ACCRecordFlowService, AWERedPackThemeService, ACCCameraService;

@interface ACCRecordSelectPropComponent : ACCFeatureComponent <ACCRecordScanModelFlowSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCRecordSwitchModeServiceSubscriber, ACCRecordGestureServiceSubscriber> {
    BOOL _hasCameraAndMicAuthorized;
    BOOL _hasContainerVCAppeared;
    ACCRecordSelectPropViewModel *_viewModel;
    UIButton *_stickerSwitchButton;
    AWEStickerSwitchImageView *_stickerSwitchImageView;
    UILabel *_stickerSwitchLabel;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCCameraService> _cameraService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordPropService> _propService;
    id<ACCRecordAuthService> _authService;
    id<AWERedPackThemeService> _themeService;
    id<ACCRecordScanModelFlowService> _scanService;
    id<ACCRecordUIHiddenStrategyService> _hiddenStrategyService;
    id<ACCSideslipPropService> _sideslipPropService;
    id<ACCRecordFlowService> _flowService;
    id<ACCRecorderStickerServiceProtocol> _stickerService;
    id<ACCRecordGestureService> _gestureService;
}

@property (nonatomic) BOOL hasCameraAndMicAuthorized;
@property (nonatomic) BOOL hasContainerVCAppeared;
@property (retain, nonatomic) UIButton *stickerSwitchButton;
@property (retain, nonatomic) AWEStickerSwitchImageView *stickerSwitchImageView;
@property (retain, nonatomic) UILabel *stickerSwitchLabel;
@property (retain, nonatomic) ACCRecordSelectPropViewModel *viewModel;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordAuthService> authService;
@property (retain, nonatomic) id<AWERedPackThemeService> themeService;
@property (retain, nonatomic) id<ACCRecordScanModelFlowService> scanService;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<ACCRecorderStickerServiceProtocol> stickerService;
@property (retain, nonatomic) id<ACCRecordGestureService> gestureService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateItemsHiddenWithAnimation:(BOOL)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)p_bindViewModel;
- (void)componentDidMount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (void)loadComponentView;
- (id)serviceBinding;
- (void)longPressGestureDidRecognized:(id)arg0;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (id)switchModeService;
- (void)shouldItemsShow:(BOOL)arg0 animated:(BOOL)arg1;
- (void)switchModeServiceWillChangeToMode:(id)arg0 oldMode:(id)arg1;
- (void)setFlowService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (void)onCameraDidStartRender:(id)arg0;
- (id)authService;
- (void)setAuthService:(id)arg0;
- (id)hiddenStrategyService;
- (void)setHiddenStrategyService:(id)arg0;
- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (id)gestureService;
- (void)setGestureService:(id)arg0;
- (id)sideslipPropService;
- (id)propService;
- (id)stickerSwitchButton;
- (id)stickerSwitchLabel;
- (void)p_updateIcon:(id)arg0;
- (id)stickerSwitchImageView;
- (void)p_updatePropButtonCornerRadius;
- (id)stickerSwitchLabelText;
- (void)setPropService:(id)arg0;
- (void)setSideslipPropService:(id)arg0;
- (void)setStickerSwitchButton:(id)arg0;
- (void)setStickerSwitchImageView:(id)arg0;
- (void)setStickerSwitchLabel:(id)arg0;
- (void)clickStickersBtn;
- (id)scanService;
- (void)flowServiceWillEnterScanMode;
- (void)flowServiceWillExitScanMode;
- (void)setScanService:(id)arg0;
- (void)p_readExistData;
- (id)themeService;
- (void)setThemeService:(id)arg0;
- (void)preloadFirstHotSticker;
- (BOOL)hasContainerVCAppeared;
- (void)setHasContainerVCAppeared:(BOOL)arg0;
- (void)showSuperEntranceBubbleIfNeeded;
- (void)setLongPressOpenSticker;
- (void)p_updatePropInfo:(id)arg0;
- (void)p_applyEffectWithPack:(id)arg0;
- (void)p_updatePropIconShowState;
- (void)p_updateIconForProp:(id)arg0;
- (void)setHasCameraAndMicAuthorized:(BOOL)arg0;
- (void)p_setLabelTextWithPropName:(id)arg0;
- (void)p_uploadByteBenchFeature:(id)arg0;
- (void)p_updateDyanmicIconStatus:(id)arg0;
- (id)getServerEffectLabels:(id)arg0;
- (void)trackSendGiftClickStickerBtns;
- (BOOL)hasCameraAndMicAuthorized;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)dealloc;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
