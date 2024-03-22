//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCRecorderViewContainer, ACCRecordFlowService, ACCCameraService, ACCRecordUIHiddenStrategyService;

@interface ACCRecordUIHiddenStrategyComponent : ACCFeatureComponent <ACCPanelViewDelegate, ACCRecorderEvent, ACCRecordFlowServiceSubscriber> {
    BOOL _isWillShowPanel;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCCameraService> _cameraService;
    id<ACCRecordFlowService> _flowService;
    id<ACCRecordUIHiddenStrategyService> _hiddenStrategyService;
}

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (nonatomic) BOOL isWillShowPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (id)flowService;
- (void)flowServiceStateDidChanged:(unsigned long long)arg0 preState:(unsigned long long)arg1;
- (void)panelViewController:(id)arg0 willShowPanelView:(id)arg1;
- (void)panelViewController:(id)arg0 willDismissPanelView:(id)arg1;
- (void)setFlowService:(id)arg0;
- (id)hiddenStrategyService;
- (void)setHiddenStrategyService:(id)arg0;
- (void)onRecorderStateDidChange:(unsigned long long)arg0 preState:(unsigned long long)arg1;
- (BOOL)isWillShowPanel;
- (void)setIsWillShowPanel:(BOOL)arg0;
- (void).cxx_destruct;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
