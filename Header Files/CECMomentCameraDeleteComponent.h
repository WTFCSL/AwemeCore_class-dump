//
//     Generated by private class-dump
//

@class CECMomentCameraMultiCameraViewModel, CECMomentCameraPreviewViewModel, CECExchangeCameraLocationViewModel, CECMomentCameraDeleteViewModel, CECExchangeRandomAlbumViewModel, UIButton;
@protocol CECMomentCameraFlowService;

@interface CECMomentCameraDeleteComponent : AFDMomentCameraBaseComponent {
    UIButton *_deleteButton;
    UIButton *_backButton;
    CECMomentCameraDeleteViewModel *_viewModel;
    CECMomentCameraMultiCameraViewModel *_secondPreviewViewModel;
    CECMomentCameraPreviewViewModel *_previewViewModel;
    CECExchangeCameraLocationViewModel *_locationViewModel;
    CECExchangeRandomAlbumViewModel *_randomAlbumViewModel;
    id<CECMomentCameraFlowService> _flowService;
}

@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) CECMomentCameraDeleteViewModel *viewModel;
@property (retain, nonatomic) CECMomentCameraMultiCameraViewModel *secondPreviewViewModel;
@property (retain, nonatomic) CECMomentCameraPreviewViewModel *previewViewModel;
@property (retain, nonatomic) CECExchangeCameraLocationViewModel *locationViewModel;
@property (retain, nonatomic) CECExchangeRandomAlbumViewModel *randomAlbumViewModel;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;

- (void)bindObserver;
- (void)componentDidLoad;
- (id)previewViewModel;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (void)didTapDeleteButton;
- (id)randomAlbumViewModel;
- (void)setPreviewViewModel:(id)arg0;
- (void)setRandomAlbumViewModel:(id)arg0;
- (id)secondPreviewViewModel;
- (void)setSecondPreviewViewModel:(id)arg0;
- (void)setDeleteButton:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)deleteButton;
- (id)viewModel;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (id)locationViewModel;
- (void)setLocationViewModel:(id)arg0;

@end
