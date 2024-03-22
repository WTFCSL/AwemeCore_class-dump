//
//     Generated by private class-dump
//

@class ACCEditorSpecialFilterHandler, UIView, ACCEditorSpecialBeautyHandler, NSString, UIImageView, UIButton, ACCEditorOneClickBeautyViewModel, ACCBarItem;
@protocol ACCLoadingViewProtocol, ACCEditViewContainer, ACCSequenceEditServiceProtocol, ACCEditServiceProtocol, ACCEditClipV1ServiceProtocol, ACCEditSpecialEffectServiceProtocol, ACCEditPreviewProtocol, ACCSelectTemplateServiceProtocol;

@interface ACCEditOneClickBeautyComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCFeatureComponentReloadableProtocol, ACCDraftResourceRecoverProtocol, ACCBarItemContainerViewSubscriber, ACCPanelViewDelegate> {
    UIButton *_beautyButton;
    UIButton *_switchFilterButton;
    ACCBarItem *_beautyBarItem;
    UIImageView *_iconView;
    ACCEditorOneClickBeautyViewModel *_viewModel;
    UIView<ACCLoadingViewProtocol> *_loadingView;
    ACCEditorSpecialBeautyHandler *_beautyHandler;
    ACCEditorSpecialFilterHandler *_colorHandler;
    id<ACCEditViewContainer> _viewContainer;
    id<ACCEditServiceProtocol> _editService;
    id<ACCEditPreviewProtocol> _previewService;
    id<ACCSequenceEditServiceProtocol> _sequenceService;
    id<ACCEditSpecialEffectServiceProtocol> _specialEffectService;
    id<ACCSelectTemplateServiceProtocol> _selectTemplateService;
    id<ACCEditClipV1ServiceProtocol> _clipService;
}

@property (retain, nonatomic) UIButton *beautyButton;
@property (retain, nonatomic) UIButton *switchFilterButton;
@property (retain, nonatomic) ACCBarItem *beautyBarItem;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) ACCEditorOneClickBeautyViewModel *viewModel;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) ACCEditorSpecialBeautyHandler *beautyHandler;
@property (retain, nonatomic) ACCEditorSpecialFilterHandler *colorHandler;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditPreviewProtocol> previewService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (weak, nonatomic) id<ACCSelectTemplateServiceProtocol> selectTemplateService;
@property (weak, nonatomic) id<ACCEditClipV1ServiceProtocol> clipService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)draftResourceIDsToDownloadForPublishViewModel:(id)arg0;

- (void)dismissLoading;
- (id)draftService;
- (void)componentDidMount;
- (void)componentWillDisappear;
- (unsigned long long)preferredLoadPhase;
- (id)editService;
- (void)loadComponentView;
- (id)serviceBinding;
- (void)setEditService:(id)arg0;
- (void)panelViewController:(id)arg0 willShowPanelView:(id)arg1;
- (id)beautyButton;
- (void)enterSingleMode;
- (void)exitSingleMode;
- (void)firstRenderWithEditService:(id)arg0;
- (void)sensorialRenderWithEditService:(id)arg0;
- (id)clipService;
- (id)selectTemplateService;
- (void)setClipService:(id)arg0;
- (void)setSelectTemplateService:(id)arg0;
- (id)sequenceService;
- (void)componentWillReload;
- (void)componentDidReload;
- (void)setSequenceService:(id)arg0;
- (id)specialEffectService;
- (void)setSpecialEffectService:(id)arg0;
- (void)setPreviewService:(id)arg0;
- (id)previewService;
- (id)colorHandler;
- (void)setColorHandler:(id)arg0;
- (id)beautyBarItem;
- (void)setBeautyHandler:(id)arg0;
- (id)beautyHandler;
- (void)removeSwitchButton;
- (void)closeSmartBeauty;
- (void)closeSmartBeautyWhenLoading;
- (id)switchFilterButton;
- (id)createBarItemTitleHintView;
- (void)beautyButtonDidClick;
- (void)updateToolbarLabel:(id)arg0;
- (void)switchFilterButtonDidClick;
- (void)removeBarItemHintView;
- (void)p_trackSmartBeauty:(BOOL)arg0;
- (void)p_trackApplyPerf:(long long)arg0 status:(BOOL)arg1 error:(id)arg2 trackInfo:(id)arg3;
- (void)showSwitchButton;
- (void)handlersPreloadDataIfNeeded;
- (void)barItemContainer:(id)arg0 didClickMoreButton:(BOOL)arg1;
- (void)setBeautyButton:(id)arg0;
- (void)setSwitchFilterButton:(id)arg0;
- (void)setBeautyBarItem:(id)arg0;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
