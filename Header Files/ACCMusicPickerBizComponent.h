//
//     Generated by private class-dump
//

@class NSString, ACCMusicPickerCreationBiz, ACCVideoEditMusicViewModel, ACCMusicPanelView, AWEVideoPublishViewModel, ACCMusicPickerViewController, ACCMusicVolumeViewModel;
@protocol IESServiceProvider, ACCStickerServiceProtocol, ACCEditVoiceChangerServiceProtocol, ACCSelectTemplateServiceProtocol, ACCEditCutMusicServiceProtocol, ACCAutoCaptionServiceProtocol, ACCSequencePlayControlServiceProtocol, ACCAdvanceEditServiceProtocol, ACCLivePhotoEditServiceProtocol, ACCMusicPickerBizComponentDelegate, ACCMusicModelProtocol, ACCLyricsStickerServiceProtocol, ACCEditClipV1ServiceProtocol, ACCSequenceEditServiceProtocol, ACCEditServiceProtocol;

@interface ACCMusicPickerBizComponent : NSObject <ACCPanelViewDelegate, ACCMusicPickerViewControllerPresenter, ACCMusicListBizHandler, ACCMusicPickerViewControllerDelegate> {
    BOOL _shouldRefetchFavorites;
    id<ACCMusicModelProtocol> selectedMusic;
    id<ACCMusicPickerBizComponentDelegate> _delegate;
    id<IESServiceProvider> _serviceProvider;
    ACCVideoEditMusicViewModel *_viewModel;
    ACCMusicPanelView *_musicPanelView;
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    id<ACCEditCutMusicServiceProtocol> _cutMusicService;
    id<ACCStickerServiceProtocol> _stickerService;
    id<ACCAutoCaptionServiceProtocol> _autoCaptionService;
    id<ACCEditVoiceChangerServiceProtocol> _voiceChangerService;
    id<ACCSequencePlayControlServiceProtocol> _sequencePlayControl;
    id<ACCLyricsStickerServiceProtocol> _lyricsStickerService;
    id<ACCEditClipV1ServiceProtocol> _clipV1Service;
    id<ACCSelectTemplateServiceProtocol> _selectTemplateService;
    id<ACCAdvanceEditServiceProtocol> _advanceEditService;
    id<ACCLivePhotoEditServiceProtocol> _livePhotoEditService;
    double _showMusicPanelTime;
    ACCMusicPickerViewController *_musicPickerController;
    ACCMusicPickerCreationBiz *_musicPickerCreationBiz;
    ACCMusicVolumeViewModel *_volumeViewModel;
}

@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) ACCVideoEditMusicViewModel *viewModel;
@property (retain, nonatomic) ACCMusicPanelView *musicPanelView;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditCutMusicServiceProtocol> cutMusicService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCAutoCaptionServiceProtocol> autoCaptionService;
@property (weak, nonatomic) id<ACCEditVoiceChangerServiceProtocol> voiceChangerService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControl;
@property (weak, nonatomic) id<ACCLyricsStickerServiceProtocol> lyricsStickerService;
@property (weak, nonatomic) id<ACCEditClipV1ServiceProtocol> clipV1Service;
@property (weak, nonatomic) id<ACCSelectTemplateServiceProtocol> selectTemplateService;
@property (weak, nonatomic) id<ACCAdvanceEditServiceProtocol> advanceEditService;
@property (weak, nonatomic) id<ACCLivePhotoEditServiceProtocol> livePhotoEditService;
@property (nonatomic) BOOL shouldRefetchFavorites;
@property (nonatomic) double showMusicPanelTime;
@property (retain, nonatomic) ACCMusicPickerViewController *musicPickerController;
@property (retain, nonatomic) ACCMusicPickerCreationBiz *musicPickerCreationBiz;
@property (retain, nonatomic) ACCMusicVolumeViewModel *volumeViewModel;
@property (weak, nonatomic) id<ACCMusicPickerBizComponentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<ACCMusicModelProtocol> selectedMusic;

- (id)publishModel;
- (void)setupBinding;
- (id)editService;
- (void)setEditService:(id)arg0;
- (void)panelViewController:(id)arg0 willShowPanelView:(id)arg1;
- (void)panelViewController:(id)arg0 didShowPanelView:(id)arg1;
- (void)panelViewController:(id)arg0 willDismissPanelView:(id)arg1;
- (void)panelViewController:(id)arg0 didDismissPanelView:(id)arg1;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (void)didToggleMusicCollectStateWithMusicId:(id)arg0 collect:(BOOL)arg1 sender:(id)arg2;
- (void)updateChallenge;
- (void)p_initialForLVAudioFrame;
- (void)setSelectedMusic:(id)arg0;
- (BOOL)shouldRefetchFavorites;
- (void)setShouldRefetchFavorites:(BOOL)arg0;
- (id)musicPickerController;
- (id)musicPanelView;
- (id)cutMusicService;
- (id)clipV1Service;
- (void)p_deselectMusic;
- (BOOL)preconditionDisablePlayMusic;
- (id)selectTemplateService;
- (void)setMusicPanelView:(id)arg0;
- (void)dismissMusicPanelWithClip:(BOOL)arg0;
- (void)doDeselectMusic:(id)arg0 autoPlay:(BOOL)arg1;
- (void)doSelectMusic:(id)arg0 error:(id)arg1;
- (id)selectedMusic;
- (double)showMusicPanelTime;
- (void)setShowMusicPanelTime:(double)arg0;
- (void)setMusicPickerController:(id)arg0;
- (void)setupMusicPickerCreationBiz;
- (id)musicPickerCreationBiz;
- (void)setMusicPickerCreationBiz:(id)arg0;
- (id)viewControllerPresentMusicPicker:(id)arg0;
- (id)panelViewControllerPresentMusicPicker:(id)arg0;
- (void)musicListClipMusic:(id)arg0;
- (void)musicListSelectMusicPlayable:(id)arg0 withUrl:(id)arg1;
- (void)musicListSelectMusicDownloaded:(id)arg0 withUrl:(id)arg1;
- (void)musicListDeselectMusic:(id)arg0;
- (BOOL)musicListShouldEnableClipForMusic:(id)arg0;
- (void)picker:(id)arg0 didFinishPickingMusic:(id)arg1;
- (void)pickerShowMusicSearch:(id)arg0;
- (id)sequencePlayControl;
- (void)setCutMusicService:(id)arg0;
- (void)setClipV1Service:(id)arg0;
- (void)setSelectTemplateService:(id)arg0;
- (void)setSequencePlayControl:(id)arg0;
- (void)repoMusicDidChange;
- (void)dismissMusicPicker;
- (id)voiceChangerService;
- (void)setVoiceChangerService:(id)arg0;
- (id)advanceEditService;
- (void)setAdvanceEditService:(id)arg0;
- (id)p_reactedBGMAsset;
- (id)lyricsStickerService;
- (void)setLyricsStickerService:(id)arg0;
- (id)initWithService:(id)arg0 serviceProvider:(id)arg1;
- (void)didSelectToolBarModel:(id)arg0;
- (id)volumeViewModel;
- (void)setVolumeViewModel:(id)arg0;
- (void)setupSelectedMusicBinding;
- (id)livePhotoEditService;
- (void)showMusicSearch;
- (void)setupMusicPanelView;
- (void)showMusicPickerViewController;
- (id)autoCaptionService;
- (void)setAutoCaptionService:(id)arg0;
- (void)setLivePhotoEditService:(id)arg0;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (void)setup;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)serviceProvider;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)volumeView;
- (void)showMusicPicker;

@end
