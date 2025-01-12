//
//     Generated by private class-dump
//

@class DYBindFillInCodeViewModel, NSString, DYRouterModel, DYFillInCodeView;

@interface DYBindFillInCodeViewController : UIViewController <AWEViewControllerProtocol, AWESecurityMessage> {
    DYBindFillInCodeViewModel *_viewModel;
    DYFillInCodeView *_uiView;
    DYRouterModel *_context;
}

@property (retain, nonatomic) DYBindFillInCodeViewModel *viewModel;
@property (retain, nonatomic) DYFillInCodeView *uiView;
@property (retain, nonatomic) DYRouterModel *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBinding;
- (void)backAction:(id)arg0;
- (void)securityCheckDidStart:(long long)arg0;
- (void)securityCheckDidEnd:(long long)arg0;
- (void)sendSMSCodeAction;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)fetchData;
- (long long)preferredStatusBarStyle;
- (void)setViewModel:(id)arg0;
- (id)context;
- (id)viewModel;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupConstraints;
- (void)setupUI;
- (void)nextAction;
- (void)track;
- (id)uiView;
- (void)setUiView:(id)arg0;

@end
