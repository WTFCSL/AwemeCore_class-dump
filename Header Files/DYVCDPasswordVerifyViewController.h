//
//     Generated by private class-dump
//

@class DYVCDPasswordVerifyViewModel, DYLoginNextActionButton, UILabel, DYPhoneNumberInputView, DYLoginInputView;

@interface DYVCDPasswordVerifyViewController : UIViewController {
    UILabel *_titleLabel;
    UILabel *_hintLabel;
    DYPhoneNumberInputView *_phoneNumberInputView;
    DYLoginInputView *_passwordView;
    DYLoginNextActionButton *_loginButton;
    DYVCDPasswordVerifyViewModel *_viewModel;
    id /* block */ _completion;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) DYPhoneNumberInputView *phoneNumberInputView;
@property (retain, nonatomic) DYLoginInputView *passwordView;
@property (retain, nonatomic) DYLoginNextActionButton *loginButton;
@property (retain, nonatomic) DYVCDPasswordVerifyViewModel *viewModel;
@property (copy, nonatomic) id /* block */ completion;

+ (id)instanceWithViewModel:(id)arg0 completion:(id /* block */)arg1;

- (void)loginAction;
- (void)setPasswordView:(id)arg0;
- (id)phoneNumberInputView;
- (void)setPhoneNumberInputView:(id)arg0;
- (void)resetNextButtonStatus;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (id)titleLabel;
- (void)setViewModel:(id)arg0;
- (void)closeAction;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;
- (id)loginButton;
- (void)setLoginButton:(id)arg0;
- (id)passwordView;

@end
