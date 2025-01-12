//
//     Generated by private class-dump
//

@class UIButton, AWEECHalfPostDataController, UILabel, AWEUILoadingView, ACCVideoEditFlowControlViewModel;
@protocol ACCEditViewContainer, ACCEditServiceProtocol, ACCEditMusicServiceProtocol;

@interface AWEECommerceEditFlowControlComponent : ACCFeatureComponent {
    id<ACCEditViewContainer> _viewContainer;
    id<ACCEditServiceProtocol> _editService;
    id<ACCEditMusicServiceProtocol> _musicService;
    ACCVideoEditFlowControlViewModel *_viewModel;
    AWEUILoadingView *_loadingView;
    UILabel *_titleLabel;
    UILabel *_commentLabel;
    UIButton *_confirmButton;
    AWEECHalfPostDataController *_dataController;
}

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (retain, nonatomic) ACCVideoEditFlowControlViewModel *viewModel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *commentLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) AWEECHalfPostDataController *dataController;

- (void)setDataController:(id)arg0;
- (void)dismissLoadingView;
- (void)componentDidMount;
- (id)musicService;
- (void)setMusicService:(id)arg0;
- (void)backButtonDidClicked:(id)arg0;
- (id)viewMasTop;
- (id)editService;
- (void)confirmButtonDidClicked:(id)arg0;
- (void)loadComponentView;
- (void)adaptSinglePicDuration;
- (void)setupCommerceInfoRelatedView:(id)arg0;
- (id)serviceBinding;
- (void)setEditService:(id)arg0;
- (void).cxx_destruct;
- (id)containerViewController;
- (id)titleLabel;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setTitleLabel:(id)arg0;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (void)showLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)commentLabel;
- (void)setCommentLabel:(id)arg0;
- (void)upload;

@end
