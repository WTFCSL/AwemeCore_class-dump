//
//     Generated by private class-dump
//

@class NSString, ACCStickerPannelViewModel, UIView, ACCStickerPannelAnimationVC, UIPanGestureRecognizer;
@protocol ACCInfoStickerServiceProtocol, ACCSequencePlayControlServiceProtocol, ACCEditViewContainer, ACCEditServiceProtocol, ACCStickerGestureComponentProtocol, ACCStickerPannelLogger, ACCVideoEditFlowControlService, ACCStickerPannelFilter, AWEVideoEditStickerVCProtocol, ACCCameraService;

@interface ACCStickerPannelComponent : ACCFeatureComponent <AWEVideoEditStickersVCDelegate, ACCStickerPannelAnimationVCDelegate, ACCEditSessionLifeCircleEvent, ACCStickerPannelFilterDataSource, ACCFeatureComponentReloadableProtocol, UIGestureRecognizerDelegate> {
    BOOL _isVerticalPan;
    BOOL _isTeenUpgradeEnable;
    BOOL _hasPreloadPannel;
    UIView *_stickerBgView;
    ACCStickerPannelAnimationVC<AWEVideoEditStickerVCProtocol> *_stickerViewController;
    id<ACCEditViewContainer> _viewContainer;
    id<ACCEditServiceProtocol> _editService;
    id<ACCStickerGestureComponentProtocol> _stickerGestureComponent;
    id<ACCInfoStickerServiceProtocol> _infoStickerService;
    id<ACCVideoEditFlowControlService> _flowControlService;
    id<ACCSequencePlayControlServiceProtocol> _playControlService;
    id<ACCCameraService> _cameraService;
    id<ACCStickerPannelLogger> _pannelLogger;
    id<ACCStickerPannelFilter> _pannelFilter;
    ACCStickerPannelViewModel *_viewModel;
    UIPanGestureRecognizer *_panGesture;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _gestureResponseArea;
}

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) UIView *stickerBgView;
@property (retain, nonatomic) ACCStickerPannelAnimationVC<AWEVideoEditStickerVCProtocol> *stickerViewController;
@property (weak, nonatomic) id<ACCStickerGestureComponentProtocol> stickerGestureComponent;
@property (weak, nonatomic) id<ACCInfoStickerServiceProtocol> infoStickerService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowControlService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> playControlService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCStickerPannelLogger> pannelLogger;
@property (retain, nonatomic) id<ACCStickerPannelFilter> pannelFilter;
@property (retain, nonatomic) ACCStickerPannelViewModel *viewModel;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gestureResponseArea;
@property (nonatomic) BOOL isVerticalPan;
@property (nonatomic) BOOL isTeenUpgradeEnable;
@property (nonatomic) BOOL hasPreloadPannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rootVC;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)p_bindViewModel;
- (void)componentDidMount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (id)editService;
- (void)loadComponentView;
- (id)serviceBinding;
- (void)setEditService:(id)arg0;
- (void)bindServices:(id)arg0;
- (id)flowControlService;
- (void)setFlowControlService:(id)arg0;
- (id)stickerService;
- (void)firstRenderWithEditService:(id)arg0;
- (id)barItem;
- (void)componentWillReload;
- (void)componentDidReload;
- (void)removeStickerPannelWithAlphaAnimated:(BOOL)arg0 selectedSticker:(id)arg1;
- (void)removeStickerPannelWithAlphaAnimated:(BOOL)arg0;
- (id)stickerBgView;
- (void)configPannelVC:(BOOL)arg0;
- (void)showStickerPannelWithAlphaAnimated:(BOOL)arg0;
- (void)showStickerPannel;
- (void)removeStickerPannel;
- (void)stickerPannelVCDidDismiss;
- (void)setStickerBgView:(id)arg0;
- (id)playControlService;
- (void)setPlayControlService:(id)arg0;
- (void)componentDidReceiveMemoryWarning:(unsigned long long)arg0;
- (id)infoStickerService;
- (void)setInfoStickerService:(id)arg0;
- (id)stickerGestureComponent;
- (void)setStickerGestureComponent:(id)arg0;
- (void)setGestureResponseArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })gestureResponseArea;
- (BOOL)canOpenLiveSticker;
- (long long)addSearchInfoSticker:(id)arg0;
- (void)configStickerPanGesture:(id)arg0;
- (void)preFetchStickerPannel;
- (void)panShowStickerPanel:(id)arg0;
- (void)addStickerPanelGestureForView:(id)arg0 gestureResponseArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)setIsVerticalPan:(BOOL)arg0;
- (void)handleStartVerticalPan;
- (BOOL)isVerticalPan;
- (void)handleVerticalPanWithOffset:(double)arg0 velocity:(double)arg1 finished:(BOOL)arg2;
- (void)handleCancelledVeritcalPan;
- (id)pannelLogger;
- (BOOL)isTeenUpgradeEnable;
- (void)trackEnterPanelWithEntrance:(id)arg0;
- (BOOL)shouldUseModernStickerPannel;
- (void)setIsTeenUpgradeEnable:(BOOL)arg0;
- (void)prepareUIConfigForModernSticker:(id)arg0;
- (id)pannelFilter;
- (void)setPannelFilter:(id)arg0;
- (void)prepareDataConfigForModernSticker:(id)arg0;
- (BOOL)showStickerPanelShouldBegin;
- (BOOL)hasPreloadPannel;
- (void)setHasPreloadPannel:(BOOL)arg0;
- (void)stickerViewController:(id)arg0 didSelectSticker:(id)arg1 fromTab:(id)arg2 downloadTrigger:(id /* block */)arg3;
- (void)stickerViewControllerDidSelectSearch:(id)arg0;
- (void)stickerViewController:(id)arg0 didSelectThirdPartySticker:(id)arg1 fromTab:(id)arg2 downloadTrigger:(id /* block */)arg3;
- (void)setPannelLogger:(id)arg0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)setViewModel:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)viewModel;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)stickerViewController;
- (void)setStickerViewController:(id)arg0;

@end
