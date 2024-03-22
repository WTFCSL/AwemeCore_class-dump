//
//     Generated by private class-dump
//

@class UIImageView, ACCVideoEditBottomControlViewModel, NSString;
@protocol ACCEditServiceProtocol, ACCEditViewContainer, ACCSequenceEditServiceProtocol, ACCRichTextEditorServiceProtocol, ACCStickerServiceProtocol, ACCQuickStoryShareServiceProtocol, ACCVideoEditFlowControlService, ACCEditPublishSettingsServiceProtocol, ACCQuickStoryIMServiceProtocol;

@interface ACCVideoEditBottomControlComponent : ACCFeatureComponent <ACCVideoEditBottomControlLayoutDelegate, ACCEditPublishSettingsServiceSubscriberProtocol, ACCQuickStoryIMServiceDelegate, ACCQuickStoryShareDelegate, ACCEditSessionLifeCircleEvent> {
    id<ACCEditViewContainer> _viewContainer;
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    id<ACCStickerServiceProtocol> _stickerService;
    id<ACCVideoEditFlowControlService> _flowService;
    id<ACCRichTextEditorServiceProtocol> _richTextEditorService;
    ACCVideoEditBottomControlViewModel *_viewModel;
    id<ACCQuickStoryShareServiceProtocol> _shareService;
    id<ACCQuickStoryIMServiceProtocol> _IMService;
    UIImageView *_gradientImageView;
    id<ACCEditPublishSettingsServiceProtocol> _publishSettingsService;
    id<ACCSequenceEditServiceProtocol> _sequenceService;
}

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (weak, nonatomic) id<ACCRichTextEditorServiceProtocol> richTextEditorService;
@property (retain, nonatomic) ACCVideoEditBottomControlViewModel *viewModel;
@property (retain, nonatomic) id<ACCQuickStoryShareServiceProtocol> shareService;
@property (retain, nonatomic) id<ACCQuickStoryIMServiceProtocol> IMService;
@property (retain, nonatomic) UIImageView *gradientImageView;
@property (retain, nonatomic) id<ACCEditPublishSettingsServiceProtocol> publishSettingsService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shareService;
- (void)componentDidMount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (id)editService;
- (void)loadComponentView;
- (id)serviceBinding;
- (void)setEditService:(id)arg0;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (void)p_dismissWithCompletion:(id /* block */)arg0;
- (void)setShareService:(id)arg0;
- (void)quickStoryIMServiceSendIMDidFinish;
- (void)quickStoryIMServiceSendIMWillStart;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (void)setStickerService:(id)arg0;
- (id)getBottomButtons;
- (void)shareServiceBackToHomePage;
- (void)shareServiceWillExecuteIMTask;
- (id)stickerService;
- (void)sensorialRenderWithEditService:(id)arg0;
- (id)sequenceService;
- (void)setSequenceService:(id)arg0;
- (void)privacySettingsDismiss;
- (id)richTextEditorService;
- (id)publishSettingsService;
- (void)setPublishSettingsService:(id)arg0;
- (void)setRichTextEditorService:(id)arg0;
- (BOOL)p_shouldShareAsPhoto;
- (void)p_updatePanel;
- (void)updateBottomButtonInteraction:(BOOL)arg0;
- (void)p_addShareBarItem;
- (void)forbidSequenceBottomGesture;
- (void)p_clickShareButtonWithButton:(id)arg0;
- (id)IMService;
- (BOOL)p_shouldVideoSaveAsPhoto;
- (void)bottomControlDidLayout;
- (void)bottomControlLayout:(id)arg0 didTap:(id)arg1 type:(long long)arg2;
- (void)setIMService:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)dealloc;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)gradientImageView;
- (void)setGradientImageView:(id)arg0;

@end