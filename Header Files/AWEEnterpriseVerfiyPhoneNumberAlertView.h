//
//     Generated by private class-dump
//

@class NSTimer, UIView, NSString, AWEEnterprisePhoneNumberVerifyModel, UIImageView, UIButton, UITextField, UILabel;

@interface AWEEnterpriseVerfiyPhoneNumberAlertView : UIView <UITextFieldDelegate> {
    id /* block */ _getCodeBlock;
    id /* block */ _submitBlock;
    id /* block */ _codeCallbackBlock;
    id /* block */ _autoGetPhoneBlock;
    id /* block */ _setPhoneNumberBlock;
    NSString *_phoneNumber;
    NSString *_codeNumber;
    UIView *_backView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UITextField *_phoneTextField;
    UITextField *_codeTextField;
    UIImageView *_cancelBtn;
    UIButton *_getCodeBtn;
    UIButton *_autoGetPhoneBtn;
    UIButton *_submitBtn;
    UIView *_phoneBackView;
    UIView *_codeBackView;
    NSTimer *_codeTimer;
    long long _countDown;
    AWEEnterprisePhoneNumberVerifyModel *_model;
    UILabel *_policyLabel;
}

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextField *phoneTextField;
@property (retain, nonatomic) UITextField *codeTextField;
@property (retain, nonatomic) UIImageView *cancelBtn;
@property (retain, nonatomic) UIButton *getCodeBtn;
@property (retain, nonatomic) UIButton *autoGetPhoneBtn;
@property (retain, nonatomic) UIButton *submitBtn;
@property (retain, nonatomic) UIView *phoneBackView;
@property (retain, nonatomic) UIView *codeBackView;
@property (retain, nonatomic) NSTimer *codeTimer;
@property (nonatomic) long long countDown;
@property (retain, nonatomic) AWEEnterprisePhoneNumberVerifyModel *model;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *codeNumber;
@property (retain, nonatomic) UILabel *policyLabel;
@property (copy, nonatomic) id /* block */ getCodeBlock;
@property (copy, nonatomic) id /* block */ submitBlock;
@property (copy, nonatomic) id /* block */ codeCallbackBlock;
@property (copy, nonatomic) id /* block */ autoGetPhoneBlock;
@property (copy, nonatomic) id /* block */ setPhoneNumberBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCountDown:(long long)arg0;
- (void)setSubmitBlock:(id /* block */)arg0;
- (id /* block */)submitBlock;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg0;
- (void)p_setupUI;
- (id)submitBtn;
- (void)setSubmitBtn:(id)arg0;
- (id /* block */)setPhoneNumberBlock;
- (void)setAutoGetPhoneBlock:(id /* block */)arg0;
- (void)setGetCodeBlock:(id /* block */)arg0;
- (void)p_makeContrains;
- (void)p_addObserver;
- (id)convertSpecailFormateWithPhoneNumber:(id)arg0;
- (id)phoneTextField;
- (void)setSetPhoneNumberBlock:(id /* block */)arg0;
- (void)p_clearTimer;
- (id)phoneBackView;
- (id)codeBackView;
- (id)getCodeBtn;
- (id)autoGetPhoneBtn;
- (id)policyLabel;
- (void)codeTextFieldDidChange;
- (id)codeTimer;
- (void)p_updateCodeBtnTitle;
- (void)setCodeTimer:(id)arg0;
- (void)p_resetGetCode;
- (void)setCodeCallbackBlock:(id /* block */)arg0;
- (id /* block */)getCodeBlock;
- (id /* block */)codeCallbackBlock;
- (id /* block */)autoGetPhoneBlock;
- (id)codeNumber;
- (void)tapCancelAction;
- (void)tapGetCodeAction;
- (void)tapAutoGetPhone;
- (void)tapSubmitInfoAction;
- (void)setCodeNumber:(id)arg0;
- (void)setPhoneTextField:(id)arg0;
- (void)setGetCodeBtn:(id)arg0;
- (void)setAutoGetPhoneBtn:(id)arg0;
- (void)setPhoneBackView:(id)arg0;
- (void)setCodeBackView:(id)arg0;
- (void)setPolicyLabel:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setBackView:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg0;
- (id)titleLabel;
- (id)contentView;
- (id)backView;
- (BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementString:(id)arg2;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (long long)countDown;
- (id)codeTextField;
- (void)setCodeTextField:(id)arg0;

@end