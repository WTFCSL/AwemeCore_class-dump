//
//     Generated by private class-dump
//

@class ACCAnimatedButton, NSString, ACCRecordDeleteTrackSender;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService, ACCRecordFlowService, ACCShootSourceService;

@interface ACCRecordDeleteComponent : ACCFeatureComponent <ACCRecorderViewContainerItemsHideShowObserver> {
    ACCAnimatedButton *_deleteButton;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCCameraService> _cameraService;
    id<ACCRecordFlowService> _flowService;
    id<ACCShootSourceService> _shootSourceService;
    ACCRecordDeleteTrackSender *_trackSender;
}

@property (retain, nonatomic) ACCAnimatedButton *deleteButton;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (retain, nonatomic) ACCRecordDeleteTrackSender *trackSender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)loadComponentView;
- (id)flowService;
- (id)switchModeService;
- (void)shouldItemsShow:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setFlowService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (id)serviceBindingArray;
- (id)shootSourceService;
- (void)setShootSourceService:(id)arg0;
- (id)trackSender;
- (void)setTrackSender:(id)arg0;
- (void)clickDeleteBtn:(id)arg0;
- (void)updateDeleteButtonHidden:(BOOL)arg0;
- (BOOL)blockBackupPopupIfNeed;
- (void)setDeleteButton:(id)arg0;
- (void).cxx_destruct;
- (id)deleteButton;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end