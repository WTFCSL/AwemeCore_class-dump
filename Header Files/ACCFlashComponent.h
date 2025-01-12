//
//     Generated by private class-dump
//

@class ACCScreenSimulatedTorchView, AWEFlashModeSwitchButton, NSString;
@protocol ACCRecorderViewContainer, ACCCameraService, ACCRecordSwitchModeService, ACCRecordTrackService, ACCRecordPropService, ACCRecordSidebarService;

@interface ACCFlashComponent : ACCFeatureComponent <ACCCameraLifeCircleEvent, ACCRecordSwitchModeServiceSubscriber, ACCRecordPropServiceSubscriber, ACCRecorderEvent> {
    BOOL _isFirstAppear;
    BOOL _shouldShowTorchButton;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCCameraService> _cameraService;
    id<ACCRecordTrackService> _trackService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordPropService> _propService;
    id<ACCRecordSidebarService> _sidebarService;
    AWEFlashModeSwitchButton *_flashSwitchButton;
    ACCScreenSimulatedTorchView *_frontCameraTorch;
}

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordTrackService> trackService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL shouldShowTorchButton;
@property (retain, nonatomic) AWEFlashModeSwitchButton *flashSwitchButton;
@property (retain, nonatomic) ACCScreenSimulatedTorchView *frontCameraTorch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsFirstAppear:(BOOL)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)loadComponentView;
- (void)bindServices:(id)arg0;
- (id)switchModeService;
- (id)trackService;
- (void)switchModeServiceDidChangeMode:(id)arg0 oldMode:(id)arg1;
- (void)onCreateCameraCompleteWithCamera:(id)arg0;
- (void)setTrackService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (void)cameraService:(id)arg0 didTakeAction:(long long)arg1 error:(id)arg2 data:(id)arg3;
- (void)p_bindViewModelObserver;
- (id)propService;
- (void)setPropService:(id)arg0;
- (id)sidebarService;
- (void)setSidebarService:(id)arg0;
- (void)onWillStartVideoRecordWithRate:(double)arg0;
- (void)configFlashBarItem;
- (id)flashSwitchButton;
- (BOOL)shouldShowTorchButton;
- (void)setFrontCameraTorch:(id)arg0;
- (void)updateTorchSwitchButtonStateForCameraChange;
- (void)syncViewStateWithViewModel;
- (void)p_updateFlashButtonsEnableStateForModeSwitch;
- (void)p_handleTorchModeOnStartWithBlock:(id /* block */)arg0;
- (void)clickTorchSwitchBtn:(id)arg0;
- (void)setShouldShowTorchButton:(BOOL)arg0;
- (void)setFlashSwitchButton:(id)arg0;
- (id)frontCameraTorch;
- (void).cxx_destruct;
- (BOOL)isFirstAppear;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
