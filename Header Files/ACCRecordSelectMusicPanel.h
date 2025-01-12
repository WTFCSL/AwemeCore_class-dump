//
//     Generated by private class-dump
//

@class UIView, NSString, ACCMusicPickerViewController, AWEVideoPublishViewModel, ACCVideoEditMusicViewModel, UIViewController, ACCRecordSelectMusicServiceImpl, ACCMusicPickerCreationBiz;
@protocol ACCRecordSwitchModeService, ACCRecordCutMusicServiceProtocol, ACCMusicPanelViewProtocol, ACCRecorderViewContainer, ACCRecordConfigService, ACCRecordPropService, ACCRecorderElementBindService, ACCAudioPlayerProtocol, ACCMusicModelProtocol, ACCRecordFlowService, ACCCameraService, IESServiceProvider;

@interface ACCRecordSelectMusicPanel : NSObject <ACCMusicCollectMessage, ACCPropRecommendMusicProtocol, ACCPanelViewDelegate, ACCMusicPickerViewControllerPresenter, ACCMusicListBizHandler, ACCMusicPickerViewControllerDelegate> {
    BOOL _shouldRefetchFavorites;
    id /* block */ _canShow;
    id /* block */ _cancleCompletion;
    id<ACCMusicModelProtocol> selectedMusic;
    UIViewController *_viewController;
    UIView<ACCMusicPanelViewProtocol> *_musicPanelView;
    id<IESServiceProvider> _serviceProvider;
    id<ACCRecorderViewContainer> _viewContainer;
    AWEVideoPublishViewModel *_repository;
    ACCRecordSelectMusicServiceImpl *_selectMusicViewModel;
    ACCVideoEditMusicViewModel *_editMusicViewModel;
    UIViewController *_selectMusicVC;
    id<ACCCameraService> _cameraService;
    id<ACCRecordFlowService> _flowService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecordConfigService> _recordConfigService;
    id<ACCRecordCutMusicServiceProtocol> _recordCutMusicService;
    id<ACCRecordPropService> _propService;
    id<ACCRecorderElementBindService> _recorderElementBindService;
    double _showMusicPanelTime;
    id<ACCAudioPlayerProtocol> _audioPlayer;
    ACCMusicPickerViewController *_musicPickerController;
    ACCMusicPickerCreationBiz *_musicPickerCreationBiz;
    struct _HTSAudioRange { double location; double length; } _clipAudioRange;
}

@property (nonatomic) struct _HTSAudioRange { double location; double length; } clipAudioRange;
@property (retain, nonatomic) UIView<ACCMusicPanelViewProtocol> *musicPanelView;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) ACCRecordSelectMusicServiceImpl *selectMusicViewModel;
@property (weak, nonatomic) ACCVideoEditMusicViewModel *editMusicViewModel;
@property (weak, nonatomic) UIViewController *selectMusicVC;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordConfigService> recordConfigService;
@property (weak, nonatomic) id<ACCRecordCutMusicServiceProtocol> recordCutMusicService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCRecorderElementBindService> recorderElementBindService;
@property (nonatomic) double showMusicPanelTime;
@property (retain, nonatomic) id<ACCAudioPlayerProtocol> audioPlayer;
@property (nonatomic) BOOL shouldRefetchFavorites;
@property (retain, nonatomic) ACCMusicPickerViewController *musicPickerController;
@property (retain, nonatomic) ACCMusicPickerCreationBiz *musicPickerCreationBiz;
@property (copy, nonatomic) id /* block */ canShow;
@property (copy, nonatomic) id /* block */ cancleCompletion;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) BOOL isPanelShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<ACCMusicModelProtocol> selectedMusic;

- (id /* block */)canShow;
- (void)onAppDidBecomeActive;
- (BOOL)isPanelShowing;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)onAppWillResignActive;
- (void)setCanShow:(id /* block */)arg0;
- (id)flowService;
- (id)switchModeService;
- (void)panelViewController:(id)arg0 willShowPanelView:(id)arg1;
- (void)panelViewController:(id)arg0 willDismissPanelView:(id)arg1;
- (void)panelViewController:(id)arg0 didDismissPanelView:(id)arg1;
- (void)setFlowService:(id)arg0;
- (void)setSwitchModeService:(id)arg0;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)configDelegateViewWithStatus:(unsigned long long)arg0;
- (void)setRecordConfigService:(id)arg0;
- (void)didToggleMusicCollectStateWithMusicId:(id)arg0 collect:(BOOL)arg1 sender:(id)arg2;
- (void)setSelectedMusic:(id)arg0;
- (BOOL)shouldRefetchFavorites;
- (void)setShouldRefetchFavorites:(BOOL)arg0;
- (id)musicPickerController;
- (id)musicPanelView;
- (void)showMusicPanel;
- (void)setMusicPanelView:(id)arg0;
- (void)dismissMusicPanelWithClip:(BOOL)arg0;
- (void)doSelectMusic:(id)arg0 error:(id)arg1;
- (id)selectedMusic;
- (double)showMusicPanelTime;
- (void)setShowMusicPanelTime:(double)arg0;
- (void)setMusicPickerController:(id)arg0;
- (id)musicPickerCreationBiz;
- (void)setMusicPickerCreationBiz:(id)arg0;
- (id)viewControllerPresentMusicPicker:(id)arg0;
- (id)panelViewControllerPresentMusicPicker:(id)arg0;
- (void)musicListClipMusic:(id)arg0;
- (void)musicListSelectMusicPlayable:(id)arg0 withUrl:(id)arg1;
- (void)musicListSelectMusicDownloaded:(id)arg0 withUrl:(id)arg1;
- (void)musicListDeselectMusic:(id)arg0;
- (void)picker:(id)arg0 didFinishPickingMusic:(id)arg1;
- (void)pickerShowMusicSearch:(id)arg0;
- (id)initWithRepository:(id)arg0 serviceProvider:(id)arg1;
- (void)setSelectMusicViewModel:(id)arg0;
- (id)selectMusicViewModel;
- (id)recordCutMusicService;
- (void)setRecordCutMusicService:(id)arg0;
- (id)recordConfigService;
- (id)recorderElementBindService;
- (void)setRecorderElementBindService:(id)arg0;
- (void)p_addPeriodicTimeObserverIfNeeded;
- (void)p_removeTimeObserver;
- (id)editMusicViewModel;
- (void)setCancleCompletion:(id /* block */)arg0;
- (void)handleDeselectMusic:(id)arg0 trackInfo:(id)arg1 updatMusicPanelData:(BOOL)arg2 updateUserCollectionData:(BOOL)arg3;
- (void)showSelectMusicPanelUI;
- (void)didChangeStatusBarOrientation;
- (void)updateCanDeselectMusicStatus;
- (void)bindSelectMusicViewModel:(id)arg0 editMusicViewModel:(id)arg1;
- (void)setEditMusicViewModel:(id)arg0;
- (void)observeNotification;
- (void)showMusicPanelViewWithClip:(BOOL)arg0;
- (void)setClipAudioRange:(struct _HTSAudioRange { double x0; double x1; })arg0;
- (struct _HTSAudioRange { double x0; double x1; })clipAudioRange;
- (void)p_changeMusicStartTime;
- (id)selectMusicVC;
- (void)setSelectMusicVC:(id)arg0;
- (void)handleSelectMusic:(id)arg0 autoPlay:(BOOL)arg1 error:(id)arg2 updatMusicPanelData:(BOOL)arg3 completeBlock:(id /* block */)arg4;
- (void)handleDeselectMusic:(id)arg0 updatMusicPanelData:(BOOL)arg1;
- (id /* block */)cancleCompletion;
- (void)playMusic:(id)arg0;
- (void)transToMusicPannel;
- (void)pauseMusicAndRelease:(BOOL)arg0;
- (void)showSelectMusicViewController;
- (BOOL)viewControllerIsPresenting;
- (BOOL)viewControllerIsTopVC;
- (void)handleUpdateBindMusic:(id)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)audioPlayer;
- (void)setServiceProvider:(id)arg0;
- (void)setRepository:(id)arg0;
- (id)serviceProvider;
- (id)repository;
- (void)setAudioPlayer:(id)arg0;
- (void)dealloc;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (void)showMusicPicker;

@end
