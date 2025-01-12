//
//     Generated by private class-dump
//

@class NSString, UITextField, UILabel, UIButton;

@interface IESLiveMultiKTVChallengeCustomTargetPanel : UIView <UITextFieldDelegate> {
    id /* block */ _cancelCallback;
    id /* block */ _confirmCallback;
    unsigned long long _minValue;
    unsigned long long _maxValue;
    UIButton *_cancelBtn;
    UIButton *_confirmBtn;
    UILabel *_titleLabel;
    UILabel *_tipsLabel;
    UITextField *_textField;
}

@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UITextField *textField;
@property (copy, nonatomic) id /* block */ cancelCallback;
@property (copy, nonatomic) id /* block */ confirmCallback;
@property (nonatomic) unsigned long long minValue;
@property (nonatomic) unsigned long long maxValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startInput;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (id)confirmBtn;
- (id)cancelBtn;
- (void)setConfirmBtn:(id)arg0;
- (void)setCancelBtn:(id)arg0;
- (void)setCancelCallback:(id /* block */)arg0;
- (id /* block */)cancelCallback;
- (void)setConfirmCallback:(id /* block */)arg0;
- (id /* block */)confirmCallback;
- (void)didCancelBtnClicked;
- (void)didConfirmBtnClicked;
- (void)setTextField:(id)arg0;
- (id)textField;
- (void).cxx_destruct;
- (unsigned long long)maxValue;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (unsigned long long)minValue;
- (BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementString:(id)arg2;
- (void)setMinValue:(unsigned long long)arg0;
- (void)setMaxValue:(unsigned long long)arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)setupSubviews;
- (void)textFieldDidChange:(id)arg0;

@end
