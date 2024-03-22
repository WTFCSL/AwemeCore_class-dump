//
//     Generated by private class-dump
//

@class AWEIMRecorderImageRecognizeModel, AWEStudioIMIRTaskInputData, NSString, UILabel, AWEIMRecorderImageRecognizeIndicatorView;
@protocol ACCRecorderViewContainer, ACCCameraService, ACCSideslipPropPanelService, ACCRecordSwitchModeService, ACCRecordPropService;

@interface AWEIMRecorderImageRecognizeComponent : ACCFeatureComponent <ACCEffectEvent, ACCRecordPropServiceSubscriber, ACCRecordVideoEventHandler> {
    BOOL _effectHadReceivedMessage;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCCameraService> _cameraService;
    id<ACCRecordPropService> _propService;
    id<ACCSideslipPropPanelService> _sideslipPropPanelService;
    id<ACCRecordSwitchModeService> _switchModeService;
    UILabel *_sceneLabel;
    AWEIMRecorderImageRecognizeIndicatorView *_indicatorView;
    AWEIMRecorderImageRecognizeModel *_viewModel;
    AWEStudioIMIRTaskInputData *_taskData;
}

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) UILabel *sceneLabel;
@property (retain, nonatomic) AWEIMRecorderImageRecognizeIndicatorView *indicatorView;
@property (retain, nonatomic) AWEIMRecorderImageRecognizeModel *viewModel;
@property (retain, nonatomic) AWEStudioIMIRTaskInputData *taskData;
@property (nonatomic) BOOL effectHadReceivedMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)taskData;
- (void)setTaskData:(id)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidUnmount;
- (void)componentDidAppear;
- (void)componentWillAppear;
- (void)bindServices:(id)arg0;
- (id)switchModeService;
- (void)setSwitchModeService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)handleArg2:(long long)arg0 arg3:(id)arg1;
- (void)handleTaskId:(long long)arg0 json:(id)arg1;
- (void)onEffectMessageReceived:(id)arg0;
- (id)sideslipPropPanelService;
- (id)sceneLabel;
- (void)__addSceneLabel;
- (void)__refreshSceneLabelLayout;
- (void)setEffectHadReceivedMessage:(BOOL)arg0;
- (void)__addIndicatorViewIfNeeded;
- (BOOL)effectHadReceivedMessage;
- (void)sendMissionToEffect;
- (void)propServiceDidApplyProp:(id)arg0 success:(BOOL)arg1;
- (id)recordVideoEvent;
- (void)componentDidChangeStatusBarOrientation;
- (void)setSideslipPropPanelService:(id)arg0;
- (void)setSceneLabel:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)indicatorView;
- (id)viewModel;
- (void)setIndicatorView:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
