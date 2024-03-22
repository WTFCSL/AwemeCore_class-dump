//
//     Generated by private class-dump
//

@class UILabel, IESLiveChargeKeyBoardView, NSString, UIImageView, UITextField, IESLiveChargeCustomViewModel, NSNumber, IESLiveBaseChargeAgreementView;

@interface IESLiveChargeCustomView : UIView <IESLiveCustomViewReaction> {
    NSNumber *_amount;
    IESLiveChargeCustomViewModel *_viewModel;
    UITextField *_inputTextFiled;
    UILabel *_tipLabel;
    UIImageView *_tipIcon;
    UILabel *_chargeRemindLabel;
    UILabel *_amountLabel;
    IESLiveChargeKeyBoardView *_keyboardView;
    IESLiveBaseChargeAgreementView *_agreementView;
}

@property (retain, nonatomic) IESLiveChargeCustomViewModel *viewModel;
@property (retain, nonatomic) UITextField *inputTextFiled;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *tipIcon;
@property (retain, nonatomic) UILabel *chargeRemindLabel;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) IESLiveChargeKeyBoardView *keyboardView;
@property (retain, nonatomic) IESLiveBaseChargeAgreementView *agreementView;
@property (retain, nonatomic) NSNumber *amount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectRange;
- (id)agreementView;
- (void)setAgreementView:(id)arg0;
- (id)tipIcon;
- (void)setTipIcon:(id)arg0;
- (id)inputTextFiled;
- (id)chargeRemindLabel;
- (void)updateAmountStringWithChargeModel:(id)arg0;
- (void)setNewSelectRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (void)setInputTextFiled:(id)arg0;
- (void)setChargeRemindLabel:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)keyboardView;
- (void)setKeyboardView:(id)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (id)amount;
- (void)setAmount:(id)arg0;
- (void)setupUI;
- (id)amountLabel;
- (void)setAmountLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;
- (void)updateInputString:(id)arg0;

@end