//
//     Generated by private class-dump
//

@class AWENewVideoCoverStickerHandler, UIView, NSIndexPath, AWEVideoCoverRecommendTextDataLoader, ACCStickerContainerView, AWEVideoCoverFontDataLoader, NSString, AWENewVideoCoverEditTemplateViewModel, ACCNLELayerService, AWENewCoverEditImageTemplateRenderServiceHelper, AWENewVideoCoverEditTemplateContainerView, ACCTextStickerServiceImpl;
@protocol ACCBusinessInputData, ACCEditTransitionServiceProtocol, ACCStickerServiceProtocol, ACCEditViewContainer, ACCTextStickerContainerConfigProtocol, ACCVideoCoverEditServiceProtocol, ACCEditServiceProtocol;

@interface AWENewVideoCoverEditImageTextTemplateComponent : ACCFeatureComponent <ACCPanelViewDelegate, AWEImageTemplateListViewDelegate, AWENewCoverEditImageTemplateRenderServiceHelperDelegate, ACCEditImageAlbumMixedMessageProtocol, ACCEditVideoCoverMixedMessageProtocol, ACCStickerServiceSubscriber, ACCDraftResourceRecoverProtocol, AWENewVideoCoverStickerHandlerDelegate, AWEVideoCoverImageTemplateListViewDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate> {
    BOOL _hasLoadRecommendText;
    id<ACCEditViewContainer> _viewContainer;
    id<ACCEditServiceProtocol> _editService;
    id<ACCVideoCoverEditServiceProtocol> _videoCoverEditService;
    id<ACCStickerServiceProtocol> _stickerService;
    AWENewVideoCoverEditTemplateViewModel *_viewModel;
    AWENewCoverEditImageTemplateRenderServiceHelper *_renderServiceHelper;
    ACCStickerContainerView *_stickerContainer;
    ACCNLELayerService *_NLEImageService;
    AWENewVideoCoverEditTemplateContainerView *_templatesContainerView;
    id<ACCBusinessInputData> _inputData;
    id<ACCEditTransitionServiceProtocol> _transitionService;
    id<ACCTextStickerContainerConfigProtocol> _configService;
    AWENewVideoCoverStickerHandler *_stickerHandler;
    ACCTextStickerServiceImpl *_textStickerServiceImpl;
    UIView *_revertButton;
    long long _stickerViewHierarchyIdCounter;
    NSIndexPath *_lastCurrentSelectedTemplateIndexPath;
    AWEVideoCoverRecommendTextDataLoader *_recommendTextDataLoader;
    AWEVideoCoverFontDataLoader *_fontDataLoader;
}

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCVideoCoverEditServiceProtocol> videoCoverEditService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) AWENewVideoCoverEditTemplateViewModel *viewModel;
@property (retain, nonatomic) AWENewCoverEditImageTemplateRenderServiceHelper *renderServiceHelper;
@property (weak, nonatomic) ACCStickerContainerView *stickerContainer;
@property (retain, nonatomic) ACCNLELayerService *NLEImageService;
@property (retain, nonatomic) AWENewVideoCoverEditTemplateContainerView *templatesContainerView;
@property (weak, nonatomic) id<ACCBusinessInputData> inputData;
@property (retain, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (retain, nonatomic) id<ACCTextStickerContainerConfigProtocol> configService;
@property (retain, nonatomic) AWENewVideoCoverStickerHandler *stickerHandler;
@property (retain, nonatomic) ACCTextStickerServiceImpl *textStickerServiceImpl;
@property (retain, nonatomic) UIView *revertButton;
@property (nonatomic) long long stickerViewHierarchyIdCounter;
@property (retain, nonatomic) NSIndexPath *lastCurrentSelectedTemplateIndexPath;
@property (retain, nonatomic) AWEVideoCoverRecommendTextDataLoader *recommendTextDataLoader;
@property (nonatomic) BOOL hasLoadRecommendText;
@property (retain, nonatomic) AWEVideoCoverFontDataLoader *fontDataLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)viewConstrutor;
+ (id /* block */)viewConfigConstrutor;
+ (id)draftResourceIDsToDownloadForPublishViewModel:(id)arg0;
+ (void)updateWithDownloadedEffects:(id)arg0 publishViewModel:(id)arg1 completion:(id /* block */)arg2;
+ (id)recoverBlocksForPublishModel:(id)arg0;
+ (BOOL)ifTemplateCacheIsClearedFor:(id)arg0;
+ (id)transferCacheDicToTemplateInfo:(id)arg0 taskID:(id)arg1;
+ (id)catchResources:(id)arg0;

- (void)clickAction;
- (void)bindViewModel;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentWillDisappear;
- (unsigned long long)preferredLoadPhase;
- (id)transitionService;
- (void)setTransitionService:(id)arg0;
- (id)commonTrackParams;
- (id)editService;
- (id)serviceBinding;
- (void)setEditService:(id)arg0;
- (void)bindServices:(id)arg0;
- (void)panelViewController:(id)arg0 willShowPanelView:(id)arg1;
- (void)panelViewController:(id)arg0 willDismissPanelView:(id)arg1;
- (id)stickerContainer;
- (void)setStickerService:(id)arg0;
- (long long)currentImageEditorIndex;
- (id)stickerService;
- (void)setStickerContainer:(id)arg0;
- (id)configService;
- (void)setConfigService:(id)arg0;
- (void)showEditView:(BOOL)arg0 animation:(BOOL)arg1;
- (id)stickerHandler;
- (void)setStickerHandler:(id)arg0;
- (id)NLEImageService;
- (void)setNLEImageService:(id)arg0;
- (id)videoCoverEditService;
- (id)currentImageItemModel;
- (void)onImageEditorRecoveredAtIndex:(long long)arg0;
- (void)setVideoCoverEditService:(id)arg0;
- (void)setApplyTemplateLockWithShouldLocked:(BOOL)arg0;
- (void)clearImageTemplate;
- (void)templateListView:(id)arg0 checkBeforeSelectIdxPath:(id)arg1 isInvertSelect:(BOOL)arg2 resumeAction:(id /* block */)arg3;
- (void)retryFetchingTemplateList;
- (void)selectImageTemplateWithMediaID:(id)arg0 templateID:(id)arg1 tabName:(id)arg2;
- (id)renderServiceHelper;
- (long long)recoveryLayerViewWithStickerInfos:(id)arg0;
- (id)getNLEImageWrapper;
- (BOOL)ifNoTemplate;
- (void)resetImageWithTemplatePath:(id)arg0 restoreInfo:(id)arg1;
- (void)renderImageTemplateIfSuccess:(BOOL)arg0;
- (void)setupStickerModuleWithMediaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 containerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)setRenderServiceHelper:(id)arg0;
- (BOOL)userVideoCoverRenderOptimize;
- (id)nleLayerForStickerView:(id)arg0;
- (id)textOfLayer:(id)arg0;
- (void)commandStackHasCommand:(BOOL)arg0;
- (id)getNleImageAlbumEditor;
- (id)geometryModelWithLayer:(id)arg0 fromNLEImageWrapper:(id)arg1 mediaSize:(struct CGSize { double x0; double x1; })arg2 albumData:(id)arg3;
- (id)textStickerServiceImpl;
- (void)setupInputDataAction;
- (void)requestDataIfNeeded;
- (id)templatesContainerView;
- (id)revertButton;
- (void)loadRecommendTextData;
- (void)setFontDataLoader:(id)arg0;
- (id)fontDataLoader;
- (void)setHasLoadRecommendText:(BOOL)arg0;
- (void)updateCoverWithExportData:(id)arg0;
- (BOOL)useVideoCoverImageTemplate;
- (void)renderImageTemplateWithTemplateStickerInfos:(id)arg0 needRecordRender:(BOOL)arg1;
- (void)trackSelectTemplate:(id)arg0;
- (BOOL)isFromCoverTemplateForStickerView:(id)arg0;
- (id)realMainLayer;
- (BOOL)isFromCoverTemplateForNLELayer:(id)arg0;
- (id)lastCurrentSelectedTemplateIndexPath;
- (id)recoverOriginSizeWithImageTemplateJsonInfo:(id)arg0;
- (void)setLastCurrentSelectedTemplateIndexPath:(id)arg0;
- (BOOL)hasLoadRecommendText;
- (id)recommendTextDataLoader;
- (void)editRevert;
- (BOOL)hasTextLayer;
- (void)updateEditStickerShowContent:(id)arg0;
- (void)stickerDidStartEdit:(id)arg0;
- (void)stickerDidEndEdit:(id)arg0;
- (void)stickerDidUpdateShowContent:(id)arg0;
- (void)stickerDidSelectNLELayerView:(id)arg0 layer:(id)arg1;
- (void)stickerHintDoDelete:(id)arg0;
- (void)additionalCommandDidRevert;
- (id)stickerEditInView;
- (void)stickerCommandListUpdate:(BOOL)arg0;
- (void)stickerPanelDidFinishEdit;
- (void)markStickerEdit;
- (void)stickerDidSelectFont:(id)arg0;
- (void)stickerDidSelectColor:(id)arg0;
- (void)stickerTextView:(id)arg0 selectRecommendItem:(id)arg1;
- (id)tabContext;
- (id)coverNLEImageAlbumEditor;
- (id)coverNLEImageWrapper;
- (id)coverNLEImageService;
- (void)templateListView:(id)arg0 checkSelectIndexPath:(id)arg1 isInvertSelect:(BOOL)arg2 resumeAction:(id /* block */)arg3;
- (void)onTemplateAdd;
- (void)p_onStickerApplySuccess;
- (long long)nextStickerViewHierarchyId;
- (void)setTemplatesContainerView:(id)arg0;
- (void)setTextStickerServiceImpl:(id)arg0;
- (void)setRevertButton:(id)arg0;
- (long long)stickerViewHierarchyIdCounter;
- (void)setStickerViewHierarchyIdCounter:(long long)arg0;
- (void)setRecommendTextDataLoader:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)rootView;
- (void)updateWithImage:(id)arg0;
- (id)inputData;
- (void)setInputData:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end