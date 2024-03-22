//
//     Generated by private class-dump
//

@class NSString, DYRouterModel, DYFillInCodeView, DYResetPasswordFillInCodeViewModel;

@interface DYResetPasswordFillInCodeViewController : UIViewController <AWEViewControllerProtocol, AWESecurityMessage> {
    DYResetPasswordFillInCodeViewModel *_viewModel;
    DYFillInCodeView *_uiView;
    NSString *_password;
    DYRouterModel *_context;
}

@property (retain, nonatomic) DYResetPasswordFillInCodeViewModel *viewModel;
@property (retain, nonatomic) DYFillInCodeView *uiView;
@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) DYRouterModel *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)inLoginProcedure;
- (void)setupBinding;
- (void)backAction:(id)arg0;
- (void)securityCheckDidStart:(long long)arg0;
- (void)securityCheckDidEnd:(long long)arg0;
- (id)initWithPassword:(id)arg0 context:(id)arg1;
- (void)sendSMSCodeAction;
- (void).cxx_destruct;
- (id)password;
- (void)setPassword:(id)arg0;
- (void)setContext:(id)arg0;
- (void)fetchData;
- (void)setViewModel:(id)arg0;
- (id)context;
- (id)viewModel;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupConstraints;
- (void)setupUI;
- (void)nextAction;
- (id)uiView;
- (void)setUiView:(id)arg0;

@end
