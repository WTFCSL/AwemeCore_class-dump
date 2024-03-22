//
//     Generated by private class-dump
//

@class NSString, DYReBindFillInOldPhoneNumberViewModel, DYRouterModel, DYRebindFillInOldPhoneNumberView;

@interface DYReBindFillInOldPhoneNumberViewController : UIViewController <AWEViewControllerProtocol, AWEUserMessage, AWESecurityMessage> {
    DYReBindFillInOldPhoneNumberViewModel *_viewModel;
    DYRebindFillInOldPhoneNumberView *_uiView;
    DYRouterModel *_routerModel;
}

@property (retain, nonatomic) DYRebindFillInOldPhoneNumberView *uiView;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (retain, nonatomic) DYReBindFillInOldPhoneNumberViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogout;
- (void)didFinishBindPhone;
- (void)setupBinding;
- (void)backAction:(id)arg0;
- (id)routerModel;
- (void)setRouterModel:(id)arg0;
- (void)securityCheckDidStart:(long long)arg0;
- (void)securityCheckDidEnd:(long long)arg0;
- (id)uidType;
- (void)closeRebindVC;
- (void)showNewPhoneNumberPage:(id)arg0;
- (void)forgetPhoneAction;
- (void)showNextPage;
- (id)initWithContext:(id)arg0;
- (id)init;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupConstraints;
- (void)setupUI;
- (void)nextAction;
- (id)uiView;
- (void)setUiView:(id)arg0;

@end