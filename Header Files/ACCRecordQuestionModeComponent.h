//
//     Generated by private class-dump
//

@class ACCScanQuestionMaskView, ACCScanFlashLightView, CMMotionManager, UIView, NSString;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService;

@interface ACCRecordQuestionModeComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCCameraScanEvent> {
    long long _prevOrientation;
    BOOL _appeared;
    BOOL _hasShownTipWhenSwitchTab;
    BOOL _needBanMotionDetect;
    BOOL _flashLightChanged;
    BOOL _recordHandlerCloseTorch;
    BOOL _currentFlashLightIsOn;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCCameraService> _cameraService;
    ACCScanQuestionMaskView *_maskView;
    ACCScanFlashLightView *_flashLightView;
    ACCScanFlashLightView *_bottomFlashLightView;
    ACCScanFlashLightView *_toolbarFlashLightView;
    UIView *_recordButton;
    CMMotionManager *_motionManager;
}

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (nonatomic) BOOL appeared;
@property (nonatomic) BOOL hasShownTipWhenSwitchTab;
@property (nonatomic) BOOL needBanMotionDetect;
@property (retain, nonatomic) ACCScanQuestionMaskView *maskView;
@property (retain, nonatomic) ACCScanFlashLightView *flashLightView;
@property (retain, nonatomic) ACCScanFlashLightView *bottomFlashLightView;
@property (retain, nonatomic) ACCScanFlashLightView *toolbarFlashLightView;
@property (weak, nonatomic) UIView *recordButton;
@property (nonatomic) BOOL flashLightChanged;
@property (nonatomic) BOOL recordHandlerCloseTorch;
@property (nonatomic) BOOL currentFlashLightIsOn;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentDidAppear;
- (void)componentWillAppear;
- (void)componentDidDisappear;
- (void)loadComponentView;
- (void)bindServices:(id)arg0;
- (id)switchModeService;
- (void)switchModeServiceWillChangeToMode:(id)arg0 oldMode:(id)arg1;
- (void)setSwitchModeService:(id)arg0;
- (id)albumLabel;
- (id)flashLightView;
- (void)setFlashLightView:(id)arg0;
- (void)onReceivedCameraBrightnessOpenFlashlightResult:(BOOL)arg0;
- (void)appEnterBackground;
- (void)openFlashlight:(BOOL)arg0;
- (id)bottomFlashLightView;
- (BOOL)flashLightChanged;
- (void)setFlashLightChanged:(BOOL)arg0;
- (BOOL)recordHandlerCloseTorch;
- (id)toolbarFlashLightView;
- (void)setRecordHandlerCloseTorch:(BOOL)arg0;
- (void)setCurrentFlashLightIsOn:(BOOL)arg0;
- (void)trackFlashLightBtnClick:(BOOL)arg0;
- (BOOL)currentFlashLightIsOn;
- (void)clickUnpermanentFlashLight;
- (void)clickPermanentFlashLight;
- (void)setBottomFlashLightView:(id)arg0;
- (void)setToolbarFlashLightView:(id)arg0;
- (void)hideQuestionUI;
- (void)prepareQuestionAI;
- (void)setNeedBanMotionDetect:(BOOL)arg0;
- (void)loadQuestionUI;
- (void)addMotionObserver;
- (void)setHasShownTipWhenSwitchTab:(BOOL)arg0;
- (void)adjustInteractionViewLayerPosition;
- (void)animationIndicatorWithOrientation:(long long)arg0;
- (id)scanQRCodeButton;
- (id)albumButton;
- (BOOL)enableUseMotionManager;
- (BOOL)needBanMotionDetect;
- (BOOL)hasShownTipWhenSwitchTab;
- (void)checkDeviceOrientationWithGx:(double)arg0 Gy:(double)arg1;
- (void)checkDeviceHorizontalDegree:(double)arg0;
- (double)deviceOrientationUpdateSensitivity;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformWithOrientation:(long long)arg0;
- (long long)scanHorizontalAngel;
- (void)changeFlashLightStatus;
- (void).cxx_destruct;
- (double)deviceMotionUpdateInterval;
- (id)maskView;
- (void)dealloc;
- (void)setMaskView:(id)arg0;
- (id)closeButton;
- (BOOL)appeared;
- (void)setAppeared:(BOOL)arg0;
- (id)motionManager;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (void)setMotionManager:(id)arg0;
- (id)recordButton;
- (void)setRecordButton:(id)arg0;
- (id)scanQRCodeLabel;

@end