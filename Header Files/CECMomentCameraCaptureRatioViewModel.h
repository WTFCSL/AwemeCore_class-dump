//
//     Generated by private class-dump
//

@class CECMomentCameraPreviewViewModel, NSString, UIImage, CECMomentCameraSubModeViewModel;
@protocol CECMomentCameraSwitchTabService, CECMomentCameraFlowService, CECMomentCameraSubModeService, CECMomentCameraService;

@interface CECMomentCameraCaptureRatioViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraFlowServiceSubscriber, CECMomentCameraSubModeSwitchServiceSubscriber> {
    BOOL _isLargerCaptureRatio;
    BOOL _userInteractionEnabled;
    BOOL _isDisabled;
    BOOL _hidden;
    UIImage *_captureRatioIcon;
    NSString *_ratioButtonAccessibilityLabel;
    id<CECMomentCameraService> _cameraService;
    id<CECMomentCameraSubModeService> _subModeService;
    id<CECMomentCameraFlowService> _flowService;
    id<CECMomentCameraSwitchTabService> _switchTabService;
    id /* block */ _didSwitchDeviceBlock;
}

@property (nonatomic) BOOL isLargerCaptureRatio;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL isDisabled;
@property (retain, nonatomic) UIImage *captureRatioIcon;
@property (weak, nonatomic) id<CECMomentCameraService> cameraService;
@property (retain, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (readonly, weak, nonatomic) CECMomentCameraPreviewViewModel *previewViewModel;
@property (readonly, weak, nonatomic) CECMomentCameraSubModeViewModel *subModeViewModel;
@property (copy, nonatomic) id /* block */ didSwitchDeviceBlock;
@property (copy, nonatomic) NSString *ratioButtonAccessibilityLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)bindObserver;
- (void)setIsLargerCaptureRatio:(BOOL)arg0;
- (BOOL)isLargerCaptureRatio;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (id)previewViewModel;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (id)subModeViewModel;
- (id)captureRatioIcon;
- (void)didTapCaptureRatioButton;
- (id)switchTabService;
- (void)setSwitchTabService:(id)arg0;
- (id)subModeService;
- (void)flowServiceDidChangeToState:(long long)arg0 fromState:(long long)arg1;
- (void)subModeServiceWillChangeToMode:(id)arg0 fromMode:(id)arg1;
- (void)setSubModeService:(id)arg0;
- (id)initWithViewModelFactory:(id)arg0;
- (void)setDidSwitchDeviceBlock:(id /* block */)arg0;
- (id /* block */)didSwitchDeviceBlock;
- (void)p_configRatioButtonAccessibility;
- (void)setRatioButtonAccessibilityLabel:(id)arg0;
- (void)setCaptureRatioIcon:(id)arg0;
- (void)updateCaptureRatio;
- (void)p_switchRatioBlock;
- (void)trackSelectCaptureRatioSwitch;
- (void)p_changeRatioWhenModeSwitch;
- (id)ratioButtonAccessibilityLabel;
- (void)setIsDisabled:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)arg0;
- (BOOL)isDisabled;
- (BOOL)userInteractionEnabled;
- (void)setHidden:(BOOL)arg0;
- (BOOL)hidden;

@end
