//
//     Generated by private class-dump
//

@class DYLoginNextActionButton, DYVCDSMSVerifyStep1ViewModel, UILabel, DYPhoneNumberInputView;

@interface DYVCDSMSVerifyStep1ViewController : UIViewController {
    DYVCDSMSVerifyStep1ViewModel *_viewModel;
    UILabel *_titleLabel;
    UILabel *_hintLabel;
    DYPhoneNumberInputView *_phoneNumberInputView;
    DYLoginNextActionButton *_loginButton;
    id /* block */ _completion;
}

@property (retain, nonatomic) DYVCDSMSVerifyStep1ViewModel *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) DYPhoneNumberInputView *phoneNumberInputView;
@property (retain, nonatomic) DYLoginNextActionButton *loginButton;
@property (copy, nonatomic) id /* block */ completion;

+ (id)instanceWithViewModel:(id)arg0 completion:(id /* block */)arg1;

- (void)loginAction;
- (id)phoneNumberInputView;
- (void)setPhoneNumberInputView:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (id)titleLabel;
- (long long)preferredStatusBarStyle;
- (void)setViewModel:(id)arg0;
- (void)closeAction;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;
- (id)loginButton;
- (void)setLoginButton:(id)arg0;

@end