//
//     Generated by private class-dump
//

@class CECMomentCameraFlipViewModel, NSString, CECMomentCameraSwitchModeViewModel, CECMomentCameraTopViewModel;
@protocol AFDMomentCameraPerformanceTrackService, CECMomentCameraSwitchTabService, CECMomentCameraFlowService, CECMomentCameraService;

@interface CECMomentCameraCaptureViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraLifeCircleEvent> {
    BOOL _shouldShowCaptureButton;
    BOOL _isDisabled;
    BOOL _userInteractionEnabled;
    BOOL _canStartCapture;
    CECMomentCameraFlipViewModel *_flipViewModel;
    CECMomentCameraSwitchModeViewModel *_switchModeViewModel;
    CECMomentCameraTopViewModel *_topViewModel;
    id<CECMomentCameraService> _cameraService;
    id<CECMomentCameraSwitchTabService> _switchTabService;
    id<CECMomentCameraFlowService> _flowService;
    id<AFDMomentCameraPerformanceTrackService> _trackService;
}

@property (nonatomic) BOOL shouldShowCaptureButton;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL userInteractionEnabled;
@property (weak, nonatomic) CECMomentCameraFlipViewModel *flipViewModel;
@property (weak, nonatomic) CECMomentCameraSwitchModeViewModel *switchModeViewModel;
@property (retain, nonatomic) CECMomentCameraTopViewModel *topViewModel;
@property (nonatomic) BOOL canStartCapture;
@property (weak, nonatomic) id<CECMomentCameraService> cameraService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (id)flowService;
- (id)trackService;
- (void)setFlowService:(id)arg0;
- (void)setTrackService:(id)arg0;
- (void)cameraService:(id)arg0 didTakeAction:(long long)arg1 error:(id)arg2 data:(id)arg3;
- (id)switchModeViewModel;
- (void)setSwitchModeViewModel:(id)arg0;
- (id)switchTabService;
- (void)setSwitchTabService:(id)arg0;
- (void)didTapCaptureButton;
- (BOOL)shouldShowCaptureButton;
- (void)p_updateWithState:(long long)arg0;
- (id)flipViewModel;
- (BOOL)canStartCapture;
- (void)setCanStartCapture:(BOOL)arg0;
- (void)setShouldShowCaptureButton:(BOOL)arg0;
- (void)setFlipViewModel:(id)arg0;
- (id)topViewModel;
- (void)setTopViewModel:(id)arg0;
- (void)setIsDisabled:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)arg0;
- (BOOL)isDisabled;
- (BOOL)userInteractionEnabled;

@end
