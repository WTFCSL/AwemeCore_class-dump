//
//     Generated by private class-dump
//

@class NSString, DYResetPasswordFillInPasswordView, DYRouterModel, DYResetPasswordFillInPasswordViewModel;

@interface DYResetPasswordFillInPasswordViewController : UIViewController <AWEViewControllerProtocol> {
    DYResetPasswordFillInPasswordViewModel *_viewModel;
    DYRouterModel *_context;
    DYResetPasswordFillInPasswordView *_uiView;
}

@property (retain, nonatomic) DYResetPasswordFillInPasswordViewModel *viewModel;
@property (retain, nonatomic) DYResetPasswordFillInPasswordView *uiView;
@property (retain, nonatomic) DYRouterModel *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)inLoginProcedure;
- (void)setupBinding;
- (void)backAction:(id)arg0;
- (void)trackSubmitChangePassword;
- (void)trackChangePasswordResult:(id)arg0;
- (void)verifyTicketLogin:(id)arg0;
- (void)showNextPage;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)context;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setupConstraints;
- (void)setupUI;
- (void)nextAction;
- (void)track;
- (id)uiView;
- (void)setUiView:(id)arg0;

@end
