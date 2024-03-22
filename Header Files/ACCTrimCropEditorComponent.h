//
//     Generated by private class-dump
//

@class ACCTrimCropEditViewModel, ACCTrimCropEditorViewController, ACCCameraSubscription, ACCTrimCropZoomTransitionDelegate, NSString;
@protocol ACCSequencePlayControlServiceProtocol, ACCEditViewContainer, ACCSequenceEditServiceProtocol, ACCTrimCropEditorFlagProtocol, ACCEditVoiceChangerServiceProtocol, ACCEditServiceProtocol, ACCStickerServiceProtocol, ACCEditSpecialEffectServiceProtocol, IESServiceProvider, ACCSlidesBeatsServiceProtocol, ACCEditTransitionServiceProtocol;

@interface ACCTrimCropEditorComponent : ACCFeatureComponent <ACCTrimCropEditorExitServiceProtocol, ACCTrimCropEditorConfigProtocol, ACCTrimCropZoomTransitionContextProvider, ACCTrimCropEditServiceProtocol, ACCFeatureComponentReloadableProtocol> {
    BOOL _lastIsTrimEditorVC;
    id<ACCEditViewContainer> _viewContainer;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    id<ACCSequencePlayControlServiceProtocol> _sequencePlayControl;
    id<ACCEditServiceProtocol> _editService;
    id<ACCEditVoiceChangerServiceProtocol> _voiceChangerService;
    id<ACCEditTransitionServiceProtocol> _transitionService;
    id<ACCTrimCropEditorFlagProtocol> _trimCropEditorFlagService;
    id<ACCStickerServiceProtocol> _stickerService;
    id<ACCEditSpecialEffectServiceProtocol> _specialEffectService;
    ACCTrimCropEditViewModel *_viewModel;
    ACCTrimCropZoomTransitionDelegate *_transitionDelegate;
    ACCTrimCropEditorViewController *_trimCropEditorVC;
    id<IESServiceProvider> _trimCropEditorContainer;
    id<ACCSlidesBeatsServiceProtocol> _slidesBeatsService;
    ACCCameraSubscription *_editorSubscription;
}

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControl;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditVoiceChangerServiceProtocol> voiceChangerService;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (weak, nonatomic) id<ACCTrimCropEditorFlagProtocol> trimCropEditorFlagService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (retain, nonatomic) ACCTrimCropEditViewModel *viewModel;
@property (retain, nonatomic) ACCTrimCropZoomTransitionDelegate *transitionDelegate;
@property (retain, nonatomic) ACCTrimCropEditorViewController *trimCropEditorVC;
@property (weak, nonatomic) id<IESServiceProvider> trimCropEditorContainer;
@property (weak, nonatomic) id<ACCSlidesBeatsServiceProtocol> slidesBeatsService;
@property (retain, nonatomic) ACCCameraSubscription *editorSubscription;
@property (nonatomic) BOOL lastIsTrimEditorVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isTrimEnabled;
@property (readonly, nonatomic) BOOL isTrimAdderEnabled;
@property (readonly, nonatomic) BOOL isCropEnabled;
@property (readonly, nonatomic) BOOL isAutoPlay;
@property (readonly, nonatomic) BOOL isHidden;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetViewFrame;
- (id)zoomTransitionStartView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (id)transitionService;
- (void)setTransitionService:(id)arg0;
- (id)editService;
- (void)loadComponentView;
- (id)serviceBinding;
- (void)setEditService:(id)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (id)sequencePlayControl;
- (void)setSequencePlayControl:(id)arg0;
- (BOOL)isTrimEnabled;
- (BOOL)isTrimAdderEnabled;
- (BOOL)isCropEnabled;
- (void)addBarItemToToolBar;
- (void)p_removeTimeMachineReverseEffect;
- (void)p_removeVoiceConversionEffect;
- (id)voiceChangerService;
- (void)componentWillReload;
- (void)componentDidReload;
- (void)setVoiceChangerService:(id)arg0;
- (id)trimCropEditorContainer;
- (void)bindGenericTemplateSingal;
- (void)updateCropStatus;
- (id)specialEffectService;
- (id)editorSubscription;
- (id)trimBarItem;
- (id)cropBarItem;
- (BOOL)needShowTrimCropBar;
- (BOOL)needTrimZoomTranstionIn;
- (void)barItemActionWithBarItemEnable:(BOOL)arg0 isTrim:(BOOL)arg1;
- (id)trimCropEditorVC;
- (void)resetSequenceMediaContainerView;
- (id)trimCropEditorFlagService;
- (void)resetSlidesBeatsStatus;
- (void)dismissTrimCropEditorWithCompletion:(id /* block */)arg0;
- (void)checkUpdateEditCanvasStateIfNeeded;
- (BOOL)useMultiStageMode;
- (id)slidesBeatsService;
- (void)updatePerfTrackStatus:(BOOL)arg0 isTrim:(BOOL)arg1;
- (void)setLastIsTrimEditorVC:(BOOL)arg0;
- (id)generateTrimCropBusinessContainerFromTrim:(BOOL)arg0;
- (void)setTrimCropEditorContainer:(id)arg0;
- (void)setTrimCropEditorVC:(id)arg0;
- (void)removeIncompatibleEditingEffectsWithNextAction:(id /* block */)arg0;
- (void)exitEditorWhenCancle:(id)arg0;
- (void)exitEditorWhenFinish:(id)arg0;
- (BOOL)shouldEnterSingleModeWhenDismiss;
- (BOOL)lastIsTrimEditorVC;
- (BOOL)isSinglePhotoModel;
- (BOOL)isLivePhotoModel;
- (BOOL)hasTimeMachineReverseEffect;
- (BOOL)hasVoiceConversionEffect;
- (BOOL)needTrimZoomTranstionOut;
- (void)setTrimCropEditorFlagService:(id)arg0;
- (void)setSpecialEffectService:(id)arg0;
- (void)setSlidesBeatsService:(id)arg0;
- (void)setEditorSubscription:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)dealloc;
- (BOOL)isHidden;
- (void)addSubscriber:(id)arg0;
- (void)removeSubscriber:(id)arg0;
- (id)bottomView;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (void)willTransitionIn;
- (BOOL)isAutoPlay;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
