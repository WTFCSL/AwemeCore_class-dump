//
//     Generated by private class-dump
//

@class UILabel, UITextField, NSString;

@protocol ACCTextInputAlertViewProtocol <NSObject>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextField *textField;
@property (copy, nonatomic) NSString *defaultValue;
@property (copy, nonatomic) NSString *emptyToast;
@property (nonatomic) long long textMaxLength;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void)showOnView:(id)arg0;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg0;
- (void)setTextMaxLength:(long long)arg0;
- (long long)textMaxLength;
- (void)setConfirmButtonEnabled:(BOOL)arg0;
- (id)emptyToast;
- (void)setEmptyToast:(id)arg0;
- (void)setDefaultValue:(id)arg0;
- (id)defaultValue;
- (void)setTextField:(id)arg0;
- (id)textField;
- (void)dismiss;
- (id /* block */)cancelBlock;
- (id)titleLabel;
- (void)setCancelBlock:(id /* block */)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setConfirmButtonTitle:(id)arg0;

@end
