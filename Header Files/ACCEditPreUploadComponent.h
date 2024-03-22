//
//     Generated by private class-dump
//

@class NSString, AWEResourceUploadParametersResponseModel, AWEPublishBaseTask;
@protocol ACCEditServiceProtocol, ACCEditViewContainer, ACCSequenceEditServiceProtocol, AWEPublishTaskBusinessProtocol, ACCStickerPanelServiceProtocol, ACCQuickSaveService, ACCVideoEditFlowControlService, ACCEditClipV1ServiceProtocol, ACCEditMusicServiceProtocol, ACCTrimCropEditServiceProtocol, ACCEditCutMusicServiceProtocol;

@interface ACCEditPreUploadComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCPanelViewDelegate, ACCVideoEditFlowControlSubscriber, ACCPublishServiceMessage, ACCQuickSaveSubscriber, ACCTrimCropEditorListener> {
    BOOL _hasTriggerPreUploadOnce;
    BOOL _hasCancelled;
    BOOL _isAlCliping;
    AWEPublishBaseTask<AWEPublishTaskBusinessProtocol> *_preUploadTask;
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    id<ACCEditCutMusicServiceProtocol> _cutMusicService;
    id<ACCEditMusicServiceProtocol> _musicService;
    id<ACCEditViewContainer> _viewContainer;
    id<ACCVideoEditFlowControlService> _flowService;
    id<ACCStickerPanelServiceProtocol> _stickerPanelService;
    id<ACCQuickSaveService> _quickSaveService;
    id<ACCEditClipV1ServiceProtocol> _clipV1Service;
    id<ACCTrimCropEditServiceProtocol> _trimCropEditService;
    NSString *_lastVideoDataHash;
    NSString *_pendingAudioDataHash;
    AWEResourceUploadParametersResponseModel *_uploadParams;
}

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditCutMusicServiceProtocol> cutMusicService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) AWEPublishBaseTask<AWEPublishTaskBusinessProtocol> *preUploadTask;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (weak, nonatomic) id<ACCStickerPanelServiceProtocol> stickerPanelService;
@property (weak, nonatomic) id<ACCQuickSaveService> quickSaveService;
@property (weak, nonatomic) id<ACCEditClipV1ServiceProtocol> clipV1Service;
@property (weak, nonatomic) id<ACCTrimCropEditServiceProtocol> trimCropEditService;
@property (nonatomic) BOOL hasTriggerPreUploadOnce;
@property (nonatomic) BOOL hasCancelled;
@property BOOL isAlCliping;
@property (copy, nonatomic) NSString *lastVideoDataHash;
@property (copy, nonatomic) NSString *pendingAudioDataHash;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)componentDidUnmount;
- (id)musicService;
- (void)setMusicService:(id)arg0;
- (id)editService;
- (void)setEditService:(id)arg0;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (void)panelViewController:(id)arg0 willShowPanelView:(id)arg1;
- (void)panelViewController:(id)arg0 didShowPanelView:(id)arg1;
- (void)panelViewController:(id)arg0 didDismissPanelView:(id)arg1;
- (void)setFlowService:(id)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (void)setQuickSaveService:(id)arg0;
- (id)quickSaveService;
- (id)stickerService;
- (id)cutMusicService;
- (id)clipV1Service;
- (void)setCutMusicService:(id)arg0;
- (void)setClipV1Service:(id)arg0;
- (void)publishServiceWillStart;
- (void)willGoBackToRecordPageWithEditFlowService:(id)arg0;
- (void)willExitEditModeWithService:(id)arg0;
- (void)didFetchUploadParams:(id)arg0;
- (void)startEntrancePreuploadIfNeeded;
- (void)restartEditPreuploadIfNeeded;
- (void)setIsAlCliping:(BOOL)arg0;
- (void)p_cancelPreUpload;
- (id)trimCropEditService;
- (BOOL)hasTriggerPreUploadOnce;
- (id)uploadParams;
- (void)startEditPreUploadIfNeeded:(id)arg0;
- (void)setHasTriggerPreUploadOnce:(BOOL)arg0;
- (unsigned long long)cancelPreUploadIfNeeded;
- (void)setUploadParams:(id)arg0;
- (void)recordAudioDataHash;
- (id)pendingAudioDataHash;
- (void)setPendingAudioDataHash:(id)arg0;
- (id)preUploadTask;
- (BOOL)shouldSkipUploadWhenOfflineVideo;
- (unsigned long long)checkPreUploadable;
- (void)setPreUploadTask:(id)arg0;
- (BOOL)checkEditUploadPreCondition;
- (BOOL)checkEditUploadVideoEnable;
- (BOOL)checkEditUploadAudioEnable;
- (BOOL)disablePreUploadWithNetWorkCondition;
- (BOOL)isAlCliping;
- (id)lastVideoDataHash;
- (void)setLastVideoDataHash:(id)arg0;
- (void)willTriggerQuickSaveAction;
- (void)willEnterTrimCropEditor;
- (void)didFinishTrimCropEditor;
- (id)stickerPanelService;
- (void)setStickerPanelService:(id)arg0;
- (void)setTrimCropEditService:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setHasCancelled:(BOOL)arg0;
- (BOOL)hasCancelled;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end