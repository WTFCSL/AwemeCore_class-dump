//
//     Generated by private class-dump
//

@class NSString, UITextField, UILabel, UIView, ACCAnimatedButton;

@interface ACCMusicTextEditAlertView : UIView <UITextFieldDelegate> {
    BOOL _isAnimating;
    id /* block */ _confirmAction;
    id /* block */ _cancelAction;
    UIView *_containerView;
    UILabel *_titleLabel;
    ACCAnimatedButton *_confirmButton;
    ACCAnimatedButton *_cancelButton;
    UIView *_textBackgroundView;
    UITextField *_textField;
    ACCAnimatedButton *_clearButton;
    UIView *_horizontalLine;
    UIView *_verticalLine;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) ACCAnimatedButton *confirmButton;
@property (retain, nonatomic) ACCAnimatedButton *cancelButton;
@property (retain, nonatomic) UIView *textBackgroundView;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) ACCAnimatedButton *clearButton;
@property (retain, nonatomic) UIView *horizontalLine;
@property (retain, nonatomic) UIView *verticalLine;
@property (nonatomic) BOOL isAnimating;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showAlertOnView:(id)arg0 withTitle:(id)arg1 confirmButtonTitle:(id)arg2 cancelButtonTitle:(id)arg3 confirmBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;

- (void)didClickConfirmButton;
- (void)showOnView:(id)arg0;
- (id)verticalLine;
- (void)setHorizontalLine:(id)arg0;
- (void)setVerticalLine:(id)arg0;
- (void)handleKeyboardShowNoti:(id)arg0;
- (void)handleKeyboardHideNoti:(id)arg0;
- (void)didClickCancelButton;
- (void)p_dismiss;
- (void)didUpdateKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 willShowKeyboard:(BOOL)arg1;
- (void)handleTapViewGes:(id)arg0;
- (void)handlePanViewGes:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 withTitle:(id)arg1 confirmButtonTitle:(id)arg2 cancelButtonTitle:(id)arg3 confirmBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (void)clickClearBtn;
- (BOOL)isAnimating;
- (void)setTextField:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (id)textField;
- (void)setCancelAction:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)cancelButton;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (id /* block */)cancelAction;
- (void)textFieldDidBeginEditing:(id)arg0;
- (void)dealloc;
- (id)clearButton;
- (void)setTitleLabel:(id)arg0;
- (void)textFieldDidEndEditing:(id)arg0;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setupUI;
- (id /* block */)confirmAction;
- (void)setConfirmAction:(id /* block */)arg0;
- (void)textFieldDidChange:(id)arg0;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (void)setClearButton:(id)arg0;
- (id)horizontalLine;
- (id)textBackgroundView;
- (void)setTextBackgroundView:(id)arg0;
- (void)p_removeObservers;
- (void)p_addObservers;

@end
