//
//     Generated by private class-dump
//

@class ACCLightningRecordButton, ACCNewCaptureAnimationView, ACCRecordMode, NSString, UIButton;
@protocol ACCRecordSwitchModeService, ACCRecordFlowControlService, ACCRecordPropService, ACCRecorderViewContainer, ACCRecordDualService, ACCShootSourceService, ACCVideoConfigProtocol, ACCRecordFlowService, ACCRecordButtonService, ACCCameraService;

@interface ACCLightningRecordButtonComponent : ACCFeatureComponent <ACCNewCaptureAnimationViewDelegate, ACCRecordButtonServiceSubscriber, ACCRecordFlowServiceSubscriber, ACCRecordConfigDurationHandler, ACCRecordSwitchModeServiceSubscriber> {
    UIButton *_placeHoldRecordButton;
    ACCNewCaptureAnimationView *_recordAnimationView;
    ACCLightningRecordButton *_recordButton;
    ACCRecordMode *_recordMode;
    id<ACCRecordButtonService> _recordButtonService;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCShootSourceService> _shootSourceService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordButtonService> _buttonService;
    id<ACCRecordFlowService> _flowService;
    id<ACCVideoConfigProtocol> _videoConfig;
    id<ACCRecordDualService> _dualService;
    id<ACCCameraService> _cameraService;
    id<ACCRecordFlowControlService> _flowControlService;
    id<ACCRecordPropService> _propService;
}

@property (retain, nonatomic) UIButton *placeHoldRecordButton;
@property (retain, nonatomic) ACCNewCaptureAnimationView *recordAnimationView;
@property (retain, nonatomic) ACCLightningRecordButton *recordButton;
@property (retain, nonatomic) ACCRecordMode *recordMode;
@property (retain, nonatomic) id<ACCRecordButtonService> recordButtonService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordButtonService> buttonService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (retain, nonatomic) id<ACCRecordDualService> dualService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)videoConfig;
- (void)setVideoConfig:(id)arg0;
- (id)recordMode;
- (void)setRecordMode:(id)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)loadComponentView;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (id)switchModeService;
- (id)recordAnimationView;
- (void)updateProgressAndMarksDisplay;
- (void)flowServiceDidUpdateDuration:(double)arg0;
- (void)flowServiceDidMarkDuration:(double)arg0;
- (void)flowServiceDidRemoveLastSegment:(BOOL)arg0;
- (void)flowServiceDidRemoveAllSegment;
- (void)flowServiceDurationHasRestored;
- (BOOL)needBlockAnimationTouches:(id)arg0;
- (void)switchModeServiceWillChangeToMode:(id)arg0 oldMode:(id)arg1;
- (void)didSetMaxDuration:(double)arg0;
- (void)setRecordAnimationView:(id)arg0;
- (void)setFlowService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (id)flowControlService;
- (void)setFlowControlService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)componentDidChangeStatusBarOrientation;
- (id)shootSourceService;
- (void)setShootSourceService:(id)arg0;
- (void)updateButtonState;
- (id)dualService;
- (void)setDualService:(id)arg0;
- (id)recordButtonService;
- (void)recordButtonServiceStateDidChange;
- (void)setRecordButtonService:(id)arg0;
- (BOOL)recordModeIsStandVideo:(id)arg0;
- (BOOL)recordModeIsLongVideo:(id)arg0;
- (BOOL)isSwitchVideoLengthOnly:(id)arg0;
- (id)placeHoldRecordButton;
- (id)buttonService;
- (void)handleComponentMountCompleted;
- (void)captureAnimationViewTouchBegan:(id)arg0;
- (void)captureAnimationViewTouchMoved:(id)arg0;
- (void)captureAnimationViewTouchEnd:(id)arg0;
- (void)setPlaceHoldRecordButton:(id)arg0;
- (void)setButtonService:(id)arg0;
- (void).cxx_destruct;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)recordButton;
- (void)setRecordButton:(id)arg0;
- (void)updateProgressBar;

@end
