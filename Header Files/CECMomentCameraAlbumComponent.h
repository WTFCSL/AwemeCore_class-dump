//
//     Generated by private class-dump
//

@class UIView, CAKModalTransitionDelegate, CECMomentCameraAlbumViewModel, UINavigationController, CECMomentCameraSubModeViewModel, NSString, UIButton, CECMomentCameraSwitchModeViewModel;
@protocol CECMomentCameraFlowService, CECMomentCameraSubModeService, ACCTextLoadingViewProtcol;

@interface CECMomentCameraAlbumComponent : AFDMomentCameraBaseComponent <CECMomentCameraSubModeSwitchServiceSubscriber> {
    UIButton *_albumButton;
    CECMomentCameraAlbumViewModel *_viewModel;
    CECMomentCameraSubModeViewModel *_subModeViewModel;
    CECMomentCameraSwitchModeViewModel *_switchModeViewModel;
    id<CECMomentCameraFlowService> _flowService;
    id<CECMomentCameraSubModeService> _subModeService;
    UIView<ACCTextLoadingViewProtcol> *_loadingView;
    UINavigationController *_albumNavigationController;
    CAKModalTransitionDelegate *_transitionDelegate;
}

@property (retain, nonatomic) UIButton *albumButton;
@property (retain, nonatomic) CECMomentCameraAlbumViewModel *viewModel;
@property (retain, nonatomic) CECMomentCameraSubModeViewModel *subModeViewModel;
@property (weak, nonatomic) CECMomentCameraSwitchModeViewModel *switchModeViewModel;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (weak, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (retain, nonatomic) UINavigationController *albumNavigationController;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidLoad;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (id)subModeViewModel;
- (id)switchModeViewModel;
- (void)setSwitchModeViewModel:(id)arg0;
- (void)setSubModeViewModel:(id)arg0;
- (id)subModeService;
- (void)componentWillAppear:(BOOL)arg0;
- (void)setSubModeService:(id)arg0;
- (void)p_openAlbumViewController;
- (void)showGoToSettingsAlertWithTitle:(id)arg0 content:(id)arg1 confirmText:(id)arg2 cancelText:(id)arg3 confirmBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (id)albumButton;
- (void)setAlbumButton:(id)arg0;
- (void)onAlbumButtonClick:(id)arg0;
- (void)p_bindObserver;
- (void)albumRequestForAuditingWithCallback:(id /* block */)arg0;
- (void)albumRequestAuthority:(id /* block */)arg0;
- (void)showRequestAlert;
- (id)albumNavigationController;
- (void)setAlbumNavigationController:(id)arg0;
- (void)componentWillDisappear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
