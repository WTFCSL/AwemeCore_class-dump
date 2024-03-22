//
//     Generated by private class-dump
//

@class ACCAnimatedButton, NSString, ACCRecordCloseViewModel;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService, ACCRecordFlowService, ACCRecordUIHiddenStrategyService, ACCRecordCloseHandlerProtocol;

@interface ACCOpenRecordCloseComponent : ACCFeatureComponent <ACCRecorderViewContainerItemsHideShowObserver> {
    BOOL _isFirstAppear;
    ACCAnimatedButton *_closeButton;
    id<ACCRecordCloseHandlerProtocol> _themeHandler;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCCameraService> _cameraService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordFlowService> _flowService;
    ACCRecordCloseViewModel *_viewModel;
    id<ACCRecordUIHiddenStrategyService> _hiddenStrategyService;
}

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) ACCRecordCloseViewModel *viewModel;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) ACCAnimatedButton *closeButton;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) id<ACCRecordCloseHandlerProtocol> themeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateItemsHiddenWithAnimation:(BOOL)arg0;
- (void)setIsFirstAppear:(BOOL)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (void)loadComponentView;
- (id)serviceBinding;
- (id)flowService;
- (id)switchModeService;
- (void)shouldItemsShow:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setFlowService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (void)p_bindViewModelObserver;
- (id)hiddenStrategyService;
- (void)setHiddenStrategyService:(id)arg0;
- (void)clickBackBtn:(id)arg0;
- (BOOL)shouldRemoveAllSegments;
- (id)themeHandler;
- (void)resetDurationWhenExitCreationTool;
- (void)trackExitCameraEvent;
- (void)setThemeHandler:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (void)removeAllSegments;
- (id)viewModel;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)updateCloseButtonVisibility;
- (BOOL)isFirstAppear;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end