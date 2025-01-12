//
//     Generated by private class-dump
//

@class UIBezierPath, ACCLightningRecordHandsFreeView, NSString;
@protocol ACCRecorderViewContainer, ACCCameraService, ACCRecordFlowControlService, ACCShootSourceService, ACCRecordSwitchModeService, ACCRecordPropService;

@interface ACCRecordHandsFreeComponent : ACCFeatureComponent <ACCShootSourceServiceSubscriber, ACCRecordFlowControlServiceSubscriber> {
    BOOL _holding;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCShootSourceService> _shootSourceService;
    id<ACCRecordFlowControlService> _flowControlService;
    id<ACCCameraService> _cameraService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordPropService> _propService;
    ACCLightningRecordHandsFreeView *_handsFreeView;
    UIBezierPath *_handsFreeHotAera;
}

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) ACCLightningRecordHandsFreeView *handsFreeView;
@property (retain, nonatomic) UIBezierPath *handsFreeHotAera;
@property (nonatomic, getter=isHolding) BOOL holding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (void)loadComponentView;
- (void)bindServices:(id)arg0;
- (id)switchModeService;
- (void)setSwitchModeService:(id)arg0;
- (id)flowControlService;
- (void)flowControlServiceWillStartRecordFlow:(unsigned long long)arg0;
- (void)flowControlServiceFlowTypeDidChange:(unsigned long long)arg0 from:(unsigned long long)arg1;
- (void)setFlowControlService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (id)shootSourceService;
- (void)shootSourceServiceStartTouch:(id)arg0;
- (void)shootSourceServiceStartHold:(id)arg0;
- (void)shootSourceServiceEndTouch:(id)arg0;
- (void)shootSourceServiceMoveTouch:(id)arg0;
- (void)shootSourceServiceEndTouchIntercepter:(id)arg0;
- (void)setShootSourceService:(id)arg0;
- (void)setHandsFreeHotAera:(id)arg0;
- (id)handsFreeHotAera;
- (id)handsFreeView;
- (id)handsFreeTrackModeName;
- (void)updateAssistantButtonState:(id)arg0;
- (void)setHandsFreeView:(id)arg0;
- (void)setHolding:(BOOL)arg0;
- (void)updateHansfreeViewVisible;
- (void).cxx_destruct;
- (BOOL)isHolding;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
