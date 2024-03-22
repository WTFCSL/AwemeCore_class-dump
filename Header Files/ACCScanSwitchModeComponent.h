//
//     Generated by private class-dump
//

@class ACCRecordSwitchModeViewModel, NSString, ACCGroupedPredicate, AWESwitchRecordModeView;
@protocol ACCRecorderViewContainer, ACCRecordSwitchModeService, ACCRecordModeFactory, ACCRecordSwitchModeFrozeService;

@interface ACCScanSwitchModeComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCSubviewLayoutProtocol> {
    BOOL _isFirstAppear;
    ACCGroupedPredicate *_shouldShowSwitchModeView;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCRecordModeFactory> _modeFactory;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordSwitchModeFrozeService> _switchModeFrozeService;
    ACCRecordSwitchModeViewModel *_viewModel;
    AWESwitchRecordModeView *_switchModeView;
}

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordModeFactory> modeFactory;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordSwitchModeFrozeService> switchModeFrozeService;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) ACCRecordSwitchModeViewModel *viewModel;
@property (retain, nonatomic) AWESwitchRecordModeView *switchModeView;
@property (readonly, nonatomic) ACCGroupedPredicate *shouldShowSwitchModeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)switchModeView;
- (void)updateItemsHiddenWithAnimation:(BOOL)arg0;
- (void)setIsFirstAppear:(BOOL)arg0;
- (void)bindViewModel;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (void)bindServices:(id)arg0;
- (id)switchModeService;
- (void)shouldItemsShow:(BOOL)arg0 animated:(BOOL)arg1;
- (void)switchModeServiceWillChangeToMode:(id)arg0 oldMode:(id)arg1;
- (void)modeArrayDidChanged;
- (void)tabConfigDidUpdatedWithModeId:(long long)arg0;
- (void)setSwitchModeService:(id)arg0;
- (id)modeFactory;
- (void)setModeFactory:(id)arg0;
- (void)updateSwitchModeViewHiddenWithFade:(BOOL)arg0;
- (void)setSwitchModeView:(id)arg0;
- (void)layoutContainer:(id)arg0 subview:(id)arg1;
- (id)switchModeFrozeService;
- (void)setSwitchModeFrozeService:(id)arg0;
- (id)shouldShowSwitchModeView;
- (void)updateSwitchModeViewHiddenIfNeed;
- (void)updateSwitchModeViewHidden:(BOOL)arg0;
- (void)updateSwitchModeViewHiddenWithFade:(BOOL)arg0 currentMode:(id)arg1;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setupUI;
- (BOOL)isFirstAppear;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
