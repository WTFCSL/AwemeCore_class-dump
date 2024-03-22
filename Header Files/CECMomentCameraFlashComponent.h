//
//     Generated by private class-dump
//

@class UIButton, NSString, CECMomentCameraFlashViewModel;
@protocol CECMomentCameraFlowService, CECMomentCameraService, CECMomentCameraSwitchTabService;

@interface CECMomentCameraFlashComponent : AFDMomentCameraBaseComponent <ACCRecorderEvent, CECMomentCameraLifeCircleEvent> {
    CECMomentCameraFlashViewModel *_viewModel;
    UIButton *_flashButton;
    id<CECMomentCameraService> _cameraService;
    id<CECMomentCameraFlowService> _flowService;
    id<CECMomentCameraSwitchTabService> _switchTabService;
}

@property (retain, nonatomic) CECMomentCameraFlashViewModel *viewModel;
@property (retain, nonatomic) UIButton *flashButton;
@property (retain, nonatomic) id<CECMomentCameraService> cameraService;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObserver;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidLoad;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (void)cameraService:(id)arg0 didTakeAction:(long long)arg1 error:(id)arg2 data:(id)arg3;
- (id)switchTabService;
- (void)setSwitchTabService:(id)arg0;
- (void)onWillStartVideoRecordWithRate:(double)arg0;
- (void)p_syncFlashButtonNormalState;
- (id)flashButton;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setFlashButton:(id)arg0;

@end