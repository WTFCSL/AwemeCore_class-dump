//
//     Generated by private class-dump
//

@class NSString, CECMomentCameraDownloadViewModel, CECExchangeRandomAlbumViewModel, UIButton;
@protocol CECMomentCameraFlowService, CECMomentCameraSubModeService;

@interface CECMomentCameraDownloadComponent : AFDMomentCameraBaseComponent <CECMomentCameraFlowServiceSubscriber> {
    UIButton *_downloadButton;
    UIButton *_downloadButtonForExchangeRandom;
    UIButton *_userSettingButton;
    CECMomentCameraDownloadViewModel *_viewModel;
    CECExchangeRandomAlbumViewModel *_randomViewModel;
    id<CECMomentCameraFlowService> _flowService;
    id<CECMomentCameraSubModeService> _subModeService;
}

@property (retain, nonatomic) UIButton *downloadButton;
@property (retain, nonatomic) UIButton *downloadButtonForExchangeRandom;
@property (retain, nonatomic) UIButton *userSettingButton;
@property (retain, nonatomic) CECMomentCameraDownloadViewModel *viewModel;
@property (retain, nonatomic) CECExchangeRandomAlbumViewModel *randomViewModel;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObserver;
- (void)componentDidLoad;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (id)subModeService;
- (void)flowServiceWillChangeToState:(long long)arg0 fromState:(long long)arg1;
- (void)setSubModeService:(id)arg0;
- (void)setDownloadButtonForExchangeRandom:(id)arg0;
- (id)downloadButtonForExchangeRandom;
- (void)setUserSettingButton:(id)arg0;
- (id)userSettingButton;
- (void)showUserSettingViewController;
- (id)randomViewModel;
- (void)setRandomViewModel:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)downloadButton;
- (void)setDownloadButton:(id)arg0;

@end
