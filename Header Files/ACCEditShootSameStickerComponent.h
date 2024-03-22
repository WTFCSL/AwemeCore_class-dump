//
//     Generated by private class-dump
//

@class ACCEditShootSameStickerViewModel, NSString, ACCEditStickerSelectTimeManager;
@protocol ACCEditClipServiceProtocol, ACCEditTransitionServiceProtocol, ACCStickerServiceProtocol, ACCGlobalStickerServiceProtocol, ACCVideoEditFlowControlService, ACCEditServiceProtocol;

@interface ACCEditShootSameStickerComponent : ACCFeatureComponent <ACCEditClipServiceSubscriber, ACCShootSameStickerConfigDelegation, ACCVideoEditFlowControlSubscriber> {
    id<ACCEditServiceProtocol> _editService;
    id<ACCVideoEditFlowControlService> _flowService;
    id<ACCStickerServiceProtocol> _stickerService;
    id<ACCGlobalStickerServiceProtocol> _globalStickerService;
    id<ACCEditTransitionServiceProtocol> _transitionService;
    id<ACCEditClipServiceProtocol> _clipService;
    ACCEditShootSameStickerViewModel *_viewModel;
    ACCEditStickerSelectTimeManager *_selectTimeManager;
}

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCGlobalStickerServiceProtocol> globalStickerService;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (weak, nonatomic) id<ACCEditClipServiceProtocol> clipService;
@property (retain, nonatomic) ACCEditShootSameStickerViewModel *viewModel;
@property (retain, nonatomic) ACCEditStickerSelectTimeManager *selectTimeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)componentWillDisappear;
- (void)componentWillAppear;
- (id)transitionService;
- (void)setTransitionService:(id)arg0;
- (id)editService;
- (void)setEditService:(id)arg0;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (id)clipService;
- (void)setClipService:(id)arg0;
- (void)willGoBackToRecordPageWithEditFlowService:(id)arg0;
- (id)globalStickerService;
- (void)setGlobalStickerService:(id)arg0;
- (BOOL)supportCommentSticker;
- (void)p_subscribe;
- (void)p_setStickerDuration:(id)arg0;
- (id)selectTimeManager;
- (void)willRemoveAllEdits;
- (void)didRemoveAllEdits;
- (void)didTapPreview:(id)arg0;
- (unsigned long long)componentLoadState;
- (void)setSelectTimeManager:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end