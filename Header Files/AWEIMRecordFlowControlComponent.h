//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCRecordSystemLivePhotoService, ACCRecordSwitchModeService, ACCRecordFlowService, ACCShootSourceService, ACCRecordFlowControlService, ACCRecordPropService, ACCRecorderViewContainer;

@interface AWEIMRecordFlowControlComponent : ACCFeatureComponent <ACCShootSourceServiceSubscriber, ACCRecordFlowControlServiceSubscriber> {
    id<ACCRecordFlowService> _flowService;
    id<ACCShootSourceService> _shootSourceService;
    id<ACCRecordFlowControlService> _flowControlService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordPropService> _propService;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCRecordSystemLivePhotoService> _systemLivePhotoService;
}

@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (id)switchModeService;
- (void)setFlowService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (id)flowControlService;
- (void)flowControlServiceWillStartRecordFlow:(unsigned long long)arg0;
- (void)flowControlServiceFlowTypeDidChange:(unsigned long long)arg0 from:(unsigned long long)arg1;
- (void)setFlowControlService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (id)shootSourceService;
- (id)systemLivePhotoService;
- (unsigned long long)flowTypeWithBeganSource:(id)arg0;
- (void)startFlowWithType:(unsigned long long)arg0 source:(id)arg1;
- (void)stopFlowWithType:(unsigned long long)arg0 source:(id)arg1;
- (unsigned long long)flowTypeWithHoldSource:(id)arg0;
- (unsigned long long)flowTypeWithEndedSource:(id)arg0;
- (unsigned long long)flowTypeWithCompleteSource:(id)arg0;
- (BOOL)systemLivePhoto;
- (void)shootSourceServiceStartTouch:(id)arg0;
- (void)shootSourceServiceStartHold:(id)arg0;
- (void)shootSourceServiceEndTouch:(id)arg0;
- (void)shootSourceServiceComplete:(id)arg0;
- (void)setShootSourceService:(id)arg0;
- (void)setSystemLivePhotoService:(id)arg0;
- (void).cxx_destruct;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
