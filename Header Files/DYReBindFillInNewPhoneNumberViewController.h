//
//     Generated by private class-dump
//

@class NSString, DYRouterModel, DYReBindFillInNewPhoneNumberViewModel, DYFillInPhoneNumberView;

@interface DYReBindFillInNewPhoneNumberViewController : UIViewController <AWEViewControllerProtocol, AWESecurityMessage> {
    BOOL _isSecondChance;
    DYReBindFillInNewPhoneNumberViewModel *_viewModel;
    DYFillInPhoneNumberView *_uiView;
    DYRouterModel *_context;
}

@property (retain, nonatomic) DYFillInPhoneNumberView *uiView;
@property (retain, nonatomic) DYRouterModel *context;
@property BOOL isSecondChance;
@property (retain, nonatomic) DYReBindFillInNewPhoneNumberViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBinding;
- (void)backAction:(id)arg0;
- (void)securityCheckDidStart:(long long)arg0;
- (void)securityCheckDidEnd:(long long)arg0;
- (id)uidType;
- (void)closeRebindVC;
- (void)showNextPage;
- (id)initWithContext:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (long long)preferredStatusBarStyle;
- (void)setViewModel:(id)arg0;
- (id)context;
- (id)viewModel;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupConstraints;
- (void)setupUI;
- (void)nextAction;
- (void)setIsSecondChance:(BOOL)arg0;
- (BOOL)isSecondChance;
- (id)uiView;
- (void)setUiView:(id)arg0;

@end
