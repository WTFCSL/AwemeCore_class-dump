//
//     Generated by private class-dump
//

@class NSString, ACCFansInteractionStickerPannelViewModel, UIView, AWEVideoEditFansInteractionStickersViewController;
@protocol ACCEditViewContainer, ACCEditServiceProtocol, ACCVideoEditFlowControlService;

@interface ACCFansInteractionStickerPannelComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCStickerPannelAnimationVCDelegate, AWEVideoEditFansInteractionStickersVCDelegate> {
    id<ACCEditViewContainer> _viewContainer;
    id<ACCEditServiceProtocol> _editService;
    id<ACCVideoEditFlowControlService> _flowControlService;
    UIView *_stickerBgView;
    AWEVideoEditFansInteractionStickersViewController *_stickerViewController;
    ACCFansInteractionStickerPannelViewModel *_viewModel;
}

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowControlService;
@property (retain, nonatomic) UIView *stickerBgView;
@property (retain, nonatomic) AWEVideoEditFansInteractionStickersViewController *stickerViewController;
@property (retain, nonatomic) ACCFansInteractionStickerPannelViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rootVC;
- (void)p_bindViewModel;
- (void)componentDidMount;
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
- (id)commonTrackInfoDic;
- (void)removeStickerPannelWithAlphaAnimated:(BOOL)arg0 selectedSticker:(id)arg1;
- (void)removeStickerPannelWithAlphaAnimated:(BOOL)arg0;
- (id)stickerBgView;
- (void)configPannelVC:(BOOL)arg0;
- (void)showStickerPannelWithAlphaAnimated:(BOOL)arg0;
- (long long)p_totalStickers;
- (void)trackEnterPanel;
- (void)showStickerPannel;
- (void)removeStickerPannel;
- (void)stickerPannelVCDidDismiss;
- (void)videoEditFansInteractionStickersVC:(id)arg0 didSelectSticker:(id)arg1 downloadTrigger:(id /* block */)arg2;
- (void)setStickerBgView:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)stickerViewController;
- (void)setStickerViewController:(id)arg0;

@end
