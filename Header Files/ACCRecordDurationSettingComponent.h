//
//     Generated by private class-dump
//

@class NSString, ACCRecordDurationSettingButton, UIImageView, ACCBarItem, ACCGroupedPredicate, UIButton;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCRecordUIHiddenStrategyService, ACCRecordConfigService, ACCRecordSidebarService, ACCRecordDurationService, ACCRecordFlowService, ACCCameraService, ACCRecordHintService;

@interface ACCRecordDurationSettingComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCRecordFlowServiceSubscriber, ACCSubviewLayoutProtocol, ACCRecorderViewContainerItemsHideShowObserver> {
    BOOL _didAppear;
    ACCBarItem *_barItem;
    ACCRecordDurationSettingButton *_durationButton;
    UIImageView *_iconView;
    ACCGroupedPredicate *_hideDurationButtonPredicate;
    UIButton *_durationNewButton;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordHintService> _hintService;
    id<ACCRecordDurationService> _durationService;
    id<ACCCameraService> _cameraService;
    id<ACCRecordFlowService> _flowService;
    id<ACCRecordSidebarService> _toolbarService;
    id<ACCRecordUIHiddenStrategyService> _hiddenStrategyService;
    id<ACCRecordConfigService> _recordConfigService;
}

@property (retain, nonatomic) ACCBarItem *barItem;
@property (retain, nonatomic) ACCRecordDurationSettingButton *durationButton;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) BOOL didAppear;
@property (retain, nonatomic) ACCGroupedPredicate *hideDurationButtonPredicate;
@property (retain, nonatomic) UIButton *durationNewButton;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordHintService> hintService;
@property (retain, nonatomic) id<ACCRecordDurationService> durationService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordSidebarService> toolbarService;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) id<ACCRecordConfigService> recordConfigService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateItemsHiddenWithAnimation:(BOOL)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)setDidAppear:(BOOL)arg0;
- (void)loadComponentView;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (id)switchModeService;
- (void)flowServiceDidRemoveFragment:(id)arg0;
- (void)flowServiceDidRemoveAllSegment;
- (void)shouldItemsShow:(BOOL)arg0 animated:(BOOL)arg1;
- (void)switchModeServiceDidChangeMode:(id)arg0 oldMode:(id)arg1;
- (void)setFlowService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (id)hiddenStrategyService;
- (void)setHiddenStrategyService:(id)arg0;
- (void)setRecordConfigService:(id)arg0;
- (id)barItem;
- (void)setBarItem:(id)arg0;
- (id)recordConfigService;
- (id)hintService;
- (void)setHintService:(id)arg0;
- (id)p_createBarItemTitleView;
- (void)addDurationNewButton;
- (void)configDurationBarItem;
- (void)configDurationButtonPredicate;
- (void)updateDuraionButtonVisible;
- (void)hideBarItemLabel;
- (void)hideBarItemLabelViewIfNeed;
- (id)durationService;
- (long long)durationWithIndex:(unsigned long long)arg0;
- (void)updateDurationButtonTitle:(id)arg0;
- (long long)durationStateWithIndex:(unsigned long long)arg0;
- (id)durationButton;
- (long long)segmentDurationABType;
- (id)toolbarService;
- (id)durationNewButton;
- (id)hideDurationButtonPredicate;
- (void)durationButtonDidClick;
- (void)showBarItemLabel;
- (void)layoutContainer:(id)arg0 subview:(id)arg1;
- (void)setDurationButton:(id)arg0;
- (void)setHideDurationButtonPredicate:(id)arg0;
- (void)setDurationNewButton:(id)arg0;
- (void)setDurationService:(id)arg0;
- (void)setToolbarService:(id)arg0;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (BOOL)didAppear;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
