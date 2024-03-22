//
//     Generated by private class-dump
//

@class NSString, ACCVideoEditMusicViewModel, ACCRecorSelectMusicSubscriber, UIView, ACCRecordSelectMusicPanel, ACCRecordSelectMusicServiceImpl;
@protocol ACCCameraService, ACCRecorderViewContainer, ACCScrollStringButtonProtocol, ACCRecordSwitchModeService, ACCRecordPropService;

@interface ACCRecordSelectMusicComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber> {
    BOOL _hasSelectMusic;
    UIView<ACCScrollStringButtonProtocol> *_selectMusicButton;
    ACCRecordSelectMusicServiceImpl *_viewModel;
    id<ACCRecorderViewContainer> _viewContainer;
    ACCVideoEditMusicViewModel *_editMusicViewModel;
    ACCRecorSelectMusicSubscriber *_serviceSubscriber;
    ACCRecordSelectMusicPanel *_musicPanelService;
    id<ACCCameraService> _cameraService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordPropService> _propService;
}

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) UIView<ACCScrollStringButtonProtocol> *selectMusicButton;
@property (retain, nonatomic) ACCRecordSelectMusicServiceImpl *viewModel;
@property (retain, nonatomic) ACCVideoEditMusicViewModel *editMusicViewModel;
@property (retain, nonatomic) ACCRecorSelectMusicSubscriber *serviceSubscriber;
@property (retain, nonatomic) ACCRecordSelectMusicPanel *musicPanelService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (nonatomic) BOOL hasSelectMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (void)componentDidDisappear;
- (void)loadComponentView;
- (void)bindServices:(id)arg0;
- (id)switchModeService;
- (void)switchModeServiceWillChangeToMode:(id)arg0 oldMode:(id)arg1;
- (void)setSwitchModeService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (id)serviceBindingArray;
- (void)componentDidChangeStatusBarOrientation;
- (id)selectMusicButton;
- (void)ACC_updateLayout;
- (void)setSelectMusicButton:(id)arg0;
- (unsigned long long)scrollStringAnimationType;
- (void)setHasSelectMusic:(BOOL)arg0;
- (BOOL)hasSelectMusic;
- (void)addSelectMusicButtonIfNeeded;
- (void)p_readExistData;
- (void)didClickSelectMusicButton;
- (void)configSelectMusicButtonEnable;
- (id)editMusicViewModel;
- (id)serviceSubscriber;
- (void)updateSelectMusic;
- (void)didClickCloseButtonOnMusicButton;
- (void)updateSelectMusicEnable;
- (void)updateSelectMusicButtonStatus;
- (void)startAsyncLoadingMusic;
- (void)endAsyncLoadingMusic;
- (BOOL)canShowMusicView;
- (id)musicPanelService;
- (void)updateMusicSelectButtonWithShowCloseButton:(BOOL)arg0;
- (void)updateView:(id)arg0 Hidden:(BOOL)arg1 duration:(double)arg2;
- (void)setEditMusicViewModel:(id)arg0;
- (void)setServiceSubscriber:(id)arg0;
- (void)setMusicPanelService:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
