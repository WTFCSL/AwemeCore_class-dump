//
//     Generated by private class-dump
//

@class DYLoginNextActionButton, DYRouterModel, UILabel, MASConstraint, DYLoginInputView;

@interface DYResetPasswordFillInPasswordView : UIView {
    DYLoginInputView *_passwordInputView;
    DYLoginNextActionButton *_nextButton;
    DYRouterModel *_context;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_errorTipLabel;
    UILabel *_tipLabel;
    MASConstraint *_tipLabelTopConstraint;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *errorTipLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) MASConstraint *tipLabelTopConstraint;
@property (retain, nonatomic) DYLoginInputView *passwordInputView;
@property (retain, nonatomic) DYLoginNextActionButton *nextButton;
@property (retain, nonatomic) DYRouterModel *context;

- (id)passwordInputView;
- (void)setPasswordInputView:(id)arg0;
- (id)errorTipLabel;
- (void)setErrorTipLabel:(id)arg0;
- (void)showErrorHint:(id)arg0;
- (void)setTipLabelTopConstraint:(id)arg0;
- (id)tipLabelTopConstraint;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)context;
- (void)setTitleLabel:(id)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (void)setupUI;
- (id)nextButton;
- (void)setNextButton:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;

@end