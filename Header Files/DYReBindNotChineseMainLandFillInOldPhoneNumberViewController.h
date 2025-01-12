//
//     Generated by private class-dump
//

@class DYReBindNotChineseMainLandFillInOldPhoneNumberViewModel, NSString, DYRouterModel, DYFillInPhoneNumberView;

@interface DYReBindNotChineseMainLandFillInOldPhoneNumberViewController : UIViewController <AWEViewControllerProtocol> {
    DYReBindNotChineseMainLandFillInOldPhoneNumberViewModel *_viewModel;
    DYFillInPhoneNumberView *_uiView;
    DYRouterModel *_context;
}

@property (retain, nonatomic) DYFillInPhoneNumberView *uiView;
@property (retain, nonatomic) DYRouterModel *context;
@property (retain, nonatomic) DYReBindNotChineseMainLandFillInOldPhoneNumberViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBinding;
- (void)backAction:(id)arg0;
- (void)skipAction;
- (void)closeVC;
- (void)callBackWithParams:(id)arg0;
- (void)handleSwipeFrom:(id)arg0;
- (void)showNewPhoneNumberPage;
- (void)showNextPage;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (id)context;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setupConstraints;
- (void)setupUI;
- (void)nextAction;
- (id)uiView;
- (void)setUiView:(id)arg0;

@end
