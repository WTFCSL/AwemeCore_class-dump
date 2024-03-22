//
//     Generated by private class-dump
//

@class UIButton, NSString;
@protocol ACCPropPickerService, ACCSideslipPropService, ACCRecorderViewContainer, ACCCameraService, ACCRecordSwitchModeService, ACCRecordUIHiddenStrategyService;

@interface ACCSideslipPropExitComponent : ACCFeatureComponent <ACCSideslipPropServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver> {
    UIButton *_exitButton;
    id<ACCSideslipPropService> _sideslipPropService;
    id<ACCPropPickerService> _propPickerService;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCCameraService> _cameraService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordUIHiddenStrategyService> _hiddenStrategyService;
}

@property (retain, nonatomic) UIButton *exitButton;
@property (retain, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (retain, nonatomic) id<ACCPropPickerService> propPickerService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exitButton;
- (void)updateItemsHiddenWithAnimation:(BOOL)arg0;
- (void)setExitButton:(id)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (void)componentDidAppear;
- (void)bindServices:(id)arg0;
- (id)switchModeService;
- (void)shouldItemsShow:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setSwitchModeService:(id)arg0;
- (id)hiddenStrategyService;
- (void)setHiddenStrategyService:(id)arg0;
- (id)sideslipPropService;
- (void)setSideslipPropService:(id)arg0;
- (id)propPickerService;
- (void)setPropPickerService:(id)arg0;
- (void)sideslipPropService:(id)arg0 willChangeShowState:(unsigned long long)arg1;
- (void)p_updateExitBtnShowIfNeed:(BOOL)arg0;
- (void)onExitBtnClick:(id)arg0;
- (void).cxx_destruct;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end