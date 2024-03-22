//
//     Generated by private class-dump
//

@class ACCRecordViewControllerInputData, ACCCameraSubscription, UIImageView, ACCBarItem, NSString, UIButton;
@protocol ACCRecordSwitchModeService, ACCRecordPropService, ACCRecordUploadButtonService, ACCRecordSystemLivePhotoService, ACCRecorderViewContainer, ACCRecordFrameRatioService, CKBeautyService, ACCRecordSidebarService, ACCCameraService, ACCRecordFlowService, ACCRecordHintService, ACCRecorderProtocol;

@interface ACCSystemLivePhotoComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCRecordPropServiceSubscriber, ACCCameraControlEvent, ACCRecordFlowServiceSubscriber, CKBeautyServiceSubscriberProtocol, ACCRecordSystemLivePhotoServiceSubscriber, ACCRecordFrameRatioServiceSubscriber, ACCCameraLifeCircleEvent> {
    BOOL _showHintView;
    BOOL _isFirstRenderFinish;
    BOOL _isBeautyPanelAppear;
    BOOL _hasValidAppliedBeautyItems;
    BOOL _isWillResignActive;
    BOOL _isDidEnterGameMode;
    BOOL _isVideoBGPixaloopSticker;
    BOOL _isRecordModeTakePicture;
    BOOL _isfirstEnter;
    BOOL _isDidAppear;
    id<ACCCameraService> _cameraService;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordHintService> _hintService;
    id<ACCRecordPropService> _propService;
    id<ACCRecordFlowService> _flowService;
    id<CKBeautyService> _beautyService;
    id<ACCRecordSystemLivePhotoService> _systemLivePhotoService;
    id<ACCRecorderProtocol> _recorder;
    id<ACCRecordUploadButtonService> _uploadButtonService;
    id<ACCRecordSidebarService> _sidebarService;
    id<ACCRecordFrameRatioService> _frameRatioService;
    ACCBarItem *_barItem;
    UIButton *_systemLivephotoButton;
    UIImageView *_iconView;
    ACCRecordViewControllerInputData *_inputData;
    ACCCameraSubscription *_subscription;
}

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordHintService> hintService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<CKBeautyService> beautyService;
@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (weak, nonatomic) id<ACCRecorderProtocol> recorder;
@property (weak, nonatomic) id<ACCRecordUploadButtonService> uploadButtonService;
@property (weak, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (retain, nonatomic) id<ACCRecordFrameRatioService> frameRatioService;
@property (retain, nonatomic) ACCBarItem *barItem;
@property (retain, nonatomic) UIButton *systemLivephotoButton;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (nonatomic) BOOL showHintView;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) BOOL isFirstRenderFinish;
@property (nonatomic) BOOL isBeautyPanelAppear;
@property (nonatomic) BOOL hasValidAppliedBeautyItems;
@property (nonatomic) BOOL isWillResignActive;
@property (nonatomic) BOOL isDidEnterGameMode;
@property (nonatomic) BOOL isVideoBGPixaloopSticker;
@property (nonatomic) BOOL isRecordModeTakePicture;
@property (nonatomic) BOOL isfirstEnter;
@property (nonatomic) BOOL isDidAppear;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (void)componentDidDisappear;
- (void)componentWillUnmount;
- (void)loadComponentView;
- (void)bindServices:(id)arg0;
- (void)addApplicationActiveNotification;
- (id)flowService;
- (id)switchModeService;
- (void)removeApplicationActiveNotification;
- (void)switchModeServiceDidChangeMode:(id)arg0 oldMode:(id)arg1;
- (void)onCreateCameraCompleteWithCamera:(id)arg0;
- (void)setFlowService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (id)beautyService;
- (void)setBeautyService:(id)arg0;
- (void)setIsDidAppear:(BOOL)arg0;
- (BOOL)isDidAppear;
- (BOOL)modeValid;
- (id)propService;
- (id)uploadButtonService;
- (void)setPropService:(id)arg0;
- (void)setUploadButtonService:(id)arg0;
- (void)propServiceWillApplyProp:(id)arg0 propSource:(long long)arg1;
- (void)propServiceDidApplyProp:(id)arg0 success:(BOOL)arg1;
- (void)propServiceDidEnterGameMode;
- (void)propServiceDidExitGameMode;
- (id)systemLivePhotoService;
- (void)setSystemLivePhotoService:(id)arg0;
- (id)barItem;
- (BOOL)isVideoBGPixaloopSticker;
- (void)setFrameRatioService:(id)arg0;
- (void)setBarItem:(id)arg0;
- (id)frameRatioService;
- (id)sidebarService;
- (void)setSidebarService:(id)arg0;
- (void)onDidSwitchToCameraPosition:(long long)arg0;
- (BOOL)isModeMix;
- (void)showHintView:(BOOL)arg0;
- (void)updateButtonAccessibilityLabel;
- (id)hintService;
- (void)setHintService:(id)arg0;
- (void)bindTrackEvent;
- (BOOL)isFirstRenderFinish;
- (void)setIsFirstRenderFinish:(BOOL)arg0;
- (void)willChangeBeautyApplyingState:(BOOL)arg0;
- (void)sidebarFloatingViewDidAppear;
- (void)sidebarFloatingViewDidDisappear;
- (void)beautyPanelViewDidAppear;
- (void)beautyPanelViewDidDisappear;
- (void)didFinishDownloadingAllItems;
- (id)p_createBarItemTitleView;
- (void)p_removeBubbleView;
- (BOOL)showHintView;
- (void)setShowHintView:(BOOL)arg0;
- (void)recordFrameRatioDidSwitchTo:(long long)arg0;
- (void)recordSystemLivePhotoEnableStateChanged:(BOOL)arg0 preState:(BOOL)arg1;
- (void)clearDraftData;
- (void)p_startRecord;
- (void)p_closeSystemLivePhotoRecordingIsClearData:(BOOL)arg0;
- (void)configLivePhotoBarItem;
- (void)initSystemLivePhotoData;
- (void)p_setLivePhotoTimeMaxDuration;
- (id)systemLivephotoButton;
- (BOOL)p_needShowLivePhotoBarItem;
- (void)setIsBeautyPanelAppear:(BOOL)arg0;
- (void)setHasValidAppliedBeautyItems:(BOOL)arg0;
- (void)setIsVideoBGPixaloopSticker:(BOOL)arg0;
- (void)setIsDidEnterGameMode:(BOOL)arg0;
- (void)setIsWillResignActive:(BOOL)arg0;
- (BOOL)isWillResignActive;
- (void)P_startLivePhotoRecording;
- (BOOL)isDidEnterGameMode;
- (BOOL)isfirstEnter;
- (void)setIsRecordModeTakePicture:(BOOL)arg0;
- (void)setIsfirstEnter:(BOOL)arg0;
- (BOOL)isRecordModeTakePicture;
- (void)p_resetLivePhotoCache;
- (BOOL)isBeautyPanelAppear;
- (BOOL)hasValidAppliedBeautyItems;
- (BOOL)isLivephotoDisableEffects:(id)arg0;
- (void)rememberState;
- (void)clickLivePhotoBtn;
- (void)setSystemLivephotoButton:(id)arg0;
- (void)applicationWillResignActive:(id)arg0;
- (void).cxx_destruct;
- (id)iconView;
- (id)recorder;
- (void)setIconView:(id)arg0;
- (void)applicationDidBecomeActive:(id)arg0;
- (void)setSubscription:(id)arg0;
- (void)setRecorder:(id)arg0;
- (id)subscription;
- (id)inputData;
- (void)setInputData:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
