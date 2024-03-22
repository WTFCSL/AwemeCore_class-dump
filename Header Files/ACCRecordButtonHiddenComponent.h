//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol ACCRecordUIHiddenStrategyService, ACCRecorderViewContainer, ACCRecordSwitchModeService;

@interface ACCRecordButtonHiddenComponent : ACCFeatureComponent <ACCRecorderViewContainerItemsHideShowObserver, ACCRecordSwitchModeServiceSubscriber> {
    UIView *_animationView;
    UIView *_placeHolderRecordButton;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCRecordUIHiddenStrategyService> _hiddenStrategyService;
    id<ACCRecordSwitchModeService> _switchModeService;
}

@property (weak, nonatomic) UIView *animationView;
@property (weak, nonatomic) UIView *placeHolderRecordButton;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateItemsHiddenWithAnimation:(BOOL)arg0;
- (void)bindViewModel;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)arg0;
- (id)switchModeService;
- (void)shouldItemsShow:(BOOL)arg0 animated:(BOOL)arg1;
- (void)switchModeServiceWillChangeToMode:(id)arg0 oldMode:(id)arg1;
- (void)setSwitchModeService:(id)arg0;
- (id)hiddenStrategyService;
- (void)setHiddenStrategyService:(id)arg0;
- (void)showRecordButtonIfNeededWithAnimated:(BOOL)arg0;
- (void)setPlaceHolderRecordButton:(id)arg0;
- (id)placeHolderRecordButton;
- (void).cxx_destruct;
- (id)animationView;
- (void)setAnimationView:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end