//
//     Generated by private class-dump
//

@class UITextView, NSString, UILabel, UIView;

@interface DUXTextArea : UIView <UITextViewDelegate> {
    BOOL _showMaxLength;
    BOOL _prohibitCutOrCopyAction;
    NSString *_placeholder;
    NSString *_text;
    long long _maxLength;
    double _cornerRadius;
    UIView *_inputAccessoryView;
    long long _keyboardAppearance;
    id /* block */ _didBeginInput;
    id /* block */ _didChangeText;
    id /* block */ _didCompletedInput;
    UITextView *_textView;
    UILabel *_lengthLabel;
}

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UILabel *lengthLabel;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL showMaxLength;
@property (nonatomic) long long maxLength;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) BOOL prohibitCutOrCopyAction;
@property (copy, nonatomic) id /* block */ didBeginInput;
@property (copy, nonatomic) id /* block */ didChangeText;
@property (copy, nonatomic) id /* block */ didCompletedInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDidCompletedInput:(id /* block */)arg0;
- (void)setDidChangeText:(id /* block */)arg0;
- (void)setDidBeginInput:(id /* block */)arg0;
- (void)setShowMaxLength:(BOOL)arg0;
- (id)lengthLabel;
- (BOOL)prohibitCutOrCopyAction;
- (BOOL)showMaxLength;
- (id /* block */)didCompletedInput;
- (id /* block */)didBeginInput;
- (id /* block */)didChangeText;
- (void)updateLengthLabelText;
- (void)updateTextViewContainerInset;
- (void)setProhibitCutOrCopyAction:(BOOL)arg0;
- (void)setLengthLabel:(id)arg0;
- (id)textView;
- (void)setKeyboardAppearance:(long long)arg0;
- (void)setAutocorrectionType:(long long)arg0;
- (BOOL)isFirstResponder;
- (id)inputAccessoryView;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setInputAccessoryView:(id)arg0;
- (long long)autocorrectionType;
- (double)cornerRadius;
- (BOOL)endEditing:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)keyboardAppearance;
- (void)setMaxLength:(long long)arg0;
- (void)setTextView:(id)arg0;
- (void)setPlaceholder:(id)arg0;
- (id)text;
- (BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1;
- (id)placeholder;
- (void)setCornerRadius:(double)arg0;
- (long long)maxLength;
- (void)textViewDidBeginEditing:(id)arg0;
- (void)textViewDidEndEditing:(id)arg0;
- (void)textViewDidChange:(id)arg0;

@end
