//
//     Generated by private class-dump
//

@class ACCImageAlbumStickerServiceImpl, NSString, ACCImageAlbumEditStickerHandler;
@protocol ACCImageAlbumStickerFeatureServiceProtocol, ACCEditViewContainer, ACCVideoEditFlowControlService, ACCStickerPanelServiceProtocol, ACCEditServiceProtocol;

@interface ACCImageAlbumEditStickerComponent : ACCFeatureComponent <ACCStickerServiceSubscriber, ACCVideoEditFlowControlSubscriber, ACCPublishServiceMessage> {
    BOOL _isDraftFirstAppear;
    id<ACCEditViewContainer> _viewContainer;
    ACCImageAlbumStickerServiceImpl *_stickerService;
    ACCImageAlbumEditStickerHandler *_stickerHandler;
    id<ACCStickerPanelServiceProtocol> _stickerPanelService;
    id<ACCVideoEditFlowControlService> _flowService;
    id<ACCEditServiceProtocol> _editService;
    id<ACCImageAlbumStickerFeatureServiceProtocol> _featureService;
}

@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) ACCImageAlbumStickerServiceImpl *stickerService;
@property (retain, nonatomic) ACCImageAlbumEditStickerHandler *stickerHandler;
@property (weak, nonatomic) id<ACCStickerPanelServiceProtocol> stickerPanelService;
@property (retain, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCImageAlbumStickerFeatureServiceProtocol> featureService;
@property (nonatomic) BOOL isDraftFirstAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (void)componentDidMount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (id)editService;
- (void)setEditService:(id)arg0;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (id)stickerHandler;
- (id)serviceBindingArray;
- (void)setStickerHandler:(id)arg0;
- (void)firstRenderWithEditService:(id)arg0;
- (void)publishServiceWillStart;
- (void)publishServiceWillSaveDraft;
- (void)willExitEditModeWithService:(id)arg0;
- (void)willSwitchImageAlbumEditModeWithEditFlowService:(id)arg0;
- (void)synchronizeRepositoryWithEditFlowService:(id)arg0;
- (void)newCoverEditPageDidSave:(id)arg0;
- (id)stickerPanelService;
- (void)setStickerPanelService:(id)arg0;
- (id)featureService;
- (void)setIsDraftFirstAppear:(BOOL)arg0;
- (void)configLogger;
- (BOOL)isDraftFirstAppear;
- (void)setFeatureService:(id)arg0;
- (void)applyExpressStickersIfNeed;
- (void)p_applyExpressInfoStickers:(id)arg0;
- (void)p_applyExpressTextStickers:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObserver;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end