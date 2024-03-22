//
//     Generated by private class-dump
//

@class UIButton, DYLoginNextActionButton, UILabel, DYVerificationCodeInputView, MASConstraint;

@interface DYRebindFillInOldCodeView : UIView {
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    DYVerificationCodeInputView *_codeInputView;
    DYLoginNextActionButton *_nextButton;
    UIButton *_phoneNotUsableButton;
    UILabel *_errorTipLabel;
    MASConstraint *_nextButtonTopConstraint;
}

@property (retain, nonatomic) UILabel *errorTipLabel;
@property (retain, nonatomic) MASConstraint *nextButtonTopConstraint;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) DYVerificationCodeInputView *codeInputView;
@property (retain, nonatomic) DYLoginNextActionButton *nextButton;
@property (retain, nonatomic) UIButton *phoneNotUsableButton;

- (id)errorTipLabel;
- (void)setErrorTipLabel:(id)arg0;
- (id)codeInputView;
- (void)setCodeInputView:(id)arg0;
- (void)showErrorHint:(id)arg0;
- (void)setNextButtonTopConstraint:(id)arg0;
- (id)nextButtonTopConstraint;
- (id)getButtonNormalTitle;
- (id)getButtonSuccessTitle;
- (id)phoneNotUsableButton;
- (void)setPhoneNotUsableButton:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)nextButton;
- (void)setNextButton:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;

@end