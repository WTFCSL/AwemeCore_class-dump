//
//     Generated by private class-dump
//

@class DYRebindFillInOldCodeView, NSString, DYRouterModel, DYReBindFillInOldCodeViewModel;

@interface DYReBindFillInOldCodeViewController : UIViewController <AWEViewControllerProtocol, AWESecurityMessage> {
    BOOL _shouldIgnorButtonClick;
    DYReBindFillInOldCodeViewModel *_viewModel;
    DYRebindFillInOldCodeView *_uiView;
    DYRouterModel *_context;
}

@property (retain, nonatomic) DYRebindFillInOldCodeView *uiView;
@property (retain, nonatomic) DYRouterModel *context;
@property (nonatomic) BOOL shouldIgnorButtonClick;
@property (retain, nonatomic) DYReBindFillInOldCodeViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBinding;
- (void)backAction:(id)arg0;
- (void)securityCheckDidStart:(long long)arg0;
- (void)securityCheckDidEnd:(long long)arg0;
- (void)sendSMSCodeAction;
- (id)uidType;
- (void)showNextPage:(id)arg0;
- (void)setShouldIgnorButtonClick:(BOOL)arg0;
- (void)requestUnbind;
- (void)phoneNotUsableAction;
- (BOOL)shouldIgnorButtonClick;
- (id)initWithContext:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
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
- (void)showAlert:(BOOL)arg0;
- (id)uiView;
- (void)setUiView:(id)arg0;

@end