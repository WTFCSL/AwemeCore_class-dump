//
//     Generated by private class-dump
//

@class NSString, ACCRecordSelectMusicPanel, AWEVideoPublishViewModel, ACCRecordSelectMusicServiceImpl;
@protocol ACCRecorderViewContainer, IESServiceProvider, ACCRecordUIHiddenStrategyService, ACCCameraService, ACCRecordDurationService, ACCRecordFlowService, AWERedPackThemeService, ACCRecordPropService, ACCMusicModelProtocol, ACCRecordConfigService, ACCVideoConfigProtocol, ACCRecordSwitchModeService, ACCRecordScanModelFlowService, ACCRecordSidebarService;

@interface ACCRecorSelectMusicSubscriber : NSObject <ACCCameraLifeCircleEvent, ACCRecordFlowServiceSubscriber, ACCRecordSwitchModeServiceSubscriber, ACCRecordPropServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCRecordScanModelFlowSubscriber, ACCRecordFlowServiceSubscriber, ACCRecordDurationServiceSubscriber, AWERedPackThemeServiceSubscriber> {
    id<IESServiceProvider> _serviceProvider;
    id<ACCRecorderViewContainer> _viewContainer;
    AWEVideoPublishViewModel *_repository;
    ACCRecordSelectMusicServiceImpl *_selectMusicViewModel;
    ACCRecordSelectMusicPanel *_musicPanelService;
    id<ACCCameraService> _cameraService;
    id<ACCRecordFlowService> _flowService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordPropService> _propService;
    id<ACCRecordSidebarService> _sidebarService;
    id<ACCRecordDurationService> _durationService;
    id<ACCRecordUIHiddenStrategyService> _hiddenStragyService;
    id<ACCRecordScanModelFlowService> _scanToScanService;
    id<ACCRecordConfigService> _recordConfigService;
    id<ACCVideoConfigProtocol> _config;
    id<AWERedPackThemeService> _redPackThemeService;
    id<ACCMusicModelProtocol> _scanToScanRecordMusic;
}

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) ACCRecordSelectMusicServiceImpl *selectMusicViewModel;
@property (weak, nonatomic) ACCRecordSelectMusicPanel *musicPanelService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (retain, nonatomic) id<ACCRecordDurationService> durationService;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStragyService;
@property (retain, nonatomic) id<ACCRecordScanModelFlowService> scanToScanService;
@property (retain, nonatomic) id<ACCRecordConfigService> recordConfigService;
@property (retain, nonatomic) id<ACCVideoConfigProtocol> config;
@property (retain, nonatomic) id<AWERedPackThemeService> redPackThemeService;
@property (retain, nonatomic) id<ACCMusicModelProtocol> scanToScanRecordMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateItemsHiddenWithAnimation:(BOOL)arg0;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (id)flowService;
- (id)switchModeService;
- (void)flowServiceDidMarkDuration:(double)arg0;
- (void)flowServiceDidRemoveLastSegment:(BOOL)arg0;
- (void)flowServiceDidRemoveAllSegment;
- (void)flowServiceDidTakePicture:(id)arg0 error:(id)arg1;
- (void)flowServiceWillEnterNextPageWithMode:(id)arg0;
- (void)shouldItemsShow:(BOOL)arg0 animated:(BOOL)arg1;
- (void)switchModeServiceDidChangeMode:(id)arg0 oldMode:(id)arg1;
- (void)onCreateCameraCompleteWithCamera:(id)arg0;
- (void)cameraService:(id)arg0 startRecordWithError:(id)arg1;
- (void)setFlowService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)propServiceWillApplyProp:(id)arg0 propSource:(long long)arg1;
- (void)propServiceDidSelectForceBindingMusic:(id)arg0 oldMusic:(id)arg1;
- (void)propServiceDidSelectEternalForceBindingMusic:(id)arg0;
- (void)propServiceDidFinishFetchRecommendMusicListForPropID:(id)arg0;
- (void)setRecordConfigService:(id)arg0;
- (id)initWithRepository:(id)arg0 serviceProvider:(id)arg1;
- (void)setSelectMusicViewModel:(id)arg0;
- (id)selectMusicViewModel;
- (id)sidebarService;
- (void)setSidebarService:(id)arg0;
- (id)recordConfigService;
- (void)flowServiceWillEnterScanMode;
- (void)flowServiceDidExitScanMode;
- (id)scanToScanService;
- (void)setScanToScanService:(id)arg0;
- (void)recordDurationServiceDurationDidChange;
- (id)durationService;
- (void)setDurationService:(id)arg0;
- (id)redPackThemeService;
- (void)redPackThemeServiceApplySticker:(id)arg0;
- (void)setRedPackThemeService:(id)arg0;
- (void)addAllSubscriber;
- (id)musicPanelService;
- (void)bindSelectMusicViewModel:(id)arg0 musicPanelService:(id)arg1;
- (void)setMusicPanelService:(id)arg0;
- (id)hiddenStragyService;
- (void)setHiddenStragyService:(id)arg0;
- (void)setScanToScanRecordMusic:(id)arg0;
- (id)scanToScanRecordMusic;
- (void)p_updateAudioRange;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setServiceProvider:(id)arg0;
- (void)setRepository:(id)arg0;
- (id)serviceProvider;
- (id)repository;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end