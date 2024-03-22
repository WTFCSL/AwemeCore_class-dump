//
//     Generated by private class-dump
//

@class NSString, ACCSearchStickerViewController, UIView, ACCStickerSearchViewModel;
@protocol ACCStickerServiceProtocol, ACCStickerPanelServiceProtocol, ACCVideoEditFlowControlService;

@interface ACCSearchStickerComponent : ACCFeatureComponent <ACCStickerPannelObserver, ACCStickerPannelAnimationVCDelegate, ACCSearchStickerVCDelegate, ACCStickerPannelFilterDataSource> {
    BOOL _showingSearchVC;
    id<ACCStickerPanelServiceProtocol> _stickerPanelService;
    id<ACCStickerServiceProtocol> _stickerService;
    id<ACCVideoEditFlowControlService> _flowControlService;
    ACCStickerSearchViewModel *_viewModel;
    ACCSearchStickerViewController *_searchVC;
    UIView *_searchStickerBgView;
    id /* block */ _dismissPanelHandle;
}

@property (weak, nonatomic) id<ACCStickerPanelServiceProtocol> stickerPanelService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowControlService;
@property (retain, nonatomic) ACCStickerSearchViewModel *viewModel;
@property (weak, nonatomic) ACCSearchStickerViewController *searchVC;
@property (weak, nonatomic) UIView *searchStickerBgView;
@property (nonatomic) BOOL showingSearchVC;
@property (copy, nonatomic) id /* block */ dismissPanelHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rootVC;
- (void)componentDidMount;
- (id)serviceBinding;
- (id)searchVC;
- (void)setSearchVC:(id)arg0;
- (id)flowControlService;
- (void)setFlowControlService:(id)arg0;
- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (id)stickerPanelService;
- (void)setStickerPanelService:(id)arg0;
- (void)stickerPannelVCDidDismiss;
- (unsigned long long)stikerPriority;
- (BOOL)handleSelectSticker:(id)arg0 fromTab:(id)arg1 willSelectHandle:(id /* block */)arg2 dismissPanelHandle:(id /* block */)arg3;
- (id /* block */)dismissPanelHandle;
- (void)setDismissPanelHandle:(id /* block */)arg0;
- (void)startShowSearchVC;
- (id)searchStickerBgView;
- (BOOL)showingSearchVC;
- (void)setShowingSearchVC:(BOOL)arg0;
- (void)searchStickerCollectionViewControllerWillShow;
- (void)searchTrackEvent:(id)arg0 extraParams:(id)arg1;
- (void)searchStickerCollectionViewControllerDismiss;
- (void)setSearchStickerBgView:(id)arg0;
- (void)searchStickerCollectionViewController:(id)arg0 didSelectSticker:(id)arg1 indexPath:(id)arg2 downloadProgressBlock:(id /* block */)arg3 downloadedBlock:(id /* block */)arg4;
- (void)searchStickerCollectionViewControllerWillExit;
- (BOOL)canOpenLiveSticker;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end