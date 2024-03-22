//
//     Generated by private class-dump
//

@class UITextView, NSString, UIColor, UILabel, UIView;

@interface LSIMTextArea : UIView <UITextViewDelegate> {
    BOOL _showPlaceholder;
    BOOL _showMaxLength;
    BOOL _prohibitCutOrCopyAction;
    BOOL _isEditing;
    UIColor *_placeHolderTextColor;
    NSString *_placeholder;
    NSString *_text;
    long long _maxLength;
    double _cornerRadius;
    UIView *_inputAccessoryView;
    long long _keyboardAppearance;
    long long _keyboardReturnKeyType;
    long long _maxNumberOfLines;
    long long _minNumberOfLines;
    id /* block */ _shouldBeginInput;
    id /* block */ _didBeginInput;
    id /* block */ _didChangeText;
    id /* block */ _didCompletedInput;
    UITextView *_textView;
    UILabel *_lengthLabel;
    long long _currentNumberOfLines;
}

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UILabel *lengthLabel;
@property (nonatomic) BOOL showPlaceholder;
@property (nonatomic) long long currentNumberOfLines;
@property (nonatomic) BOOL isEditing;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) UIColor *placeHolderTextColor;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL showMaxLength;
@property (nonatomic) long long maxLength;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardReturnKeyType;
@property (nonatomic) BOOL prohibitCutOrCopyAction;
@property (nonatomic) long long maxNumberOfLines;
@property (nonatomic) long long minNumberOfLines;
@property (copy, nonatomic) id /* block */ shouldBeginInput;
@property (copy, nonatomic) id /* block */ didBeginInput;
@property (copy, nonatomic) id /* block */ didChangeText;
@property (copy, nonatomic) id /* block */ didCompletedInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)maxNumberOfLines;
- (void)setMaxNumberOfLines:(long long)arg0;
- (void)setMinNumberOfLines:(long long)arg0;
- (long long)minNumberOfLines;
- (void)setDidCompletedInput:(id /* block */)arg0;
- (void)setDidChangeText:(id /* block */)arg0;
- (void)setDidBeginInput:(id /* block */)arg0;
- (void)setShowMaxLength:(BOOL)arg0;
- (void)setKeyboardReturnKeyType:(long long)arg0;
- (void)setShouldBeginInput:(id /* block */)arg0;
- (id)lengthLabel;
- (BOOL)prohibitCutOrCopyAction;
- (BOOL)showMaxLength;
- (unsigned long long)getTrueTextLength;
- (long long)currentNumberOfLines;
- (void)setCurrentNumberOfLines:(long long)arg0;
- (id)placeHolderTextColor;
- (id /* block */)shouldBeginInput;
- (id /* block */)didCompletedInput;
- (void)showPlaceholderIfNeeded;
- (id)textViewPrimaryColor;
- (id /* block */)didBeginInput;
- (id /* block */)didChangeText;
- (void)updateLengthLabelText;
- (void)adjustTextViewHeight;
- (void)updateTextViewContainerInset;
- (void)adjustMaxNumberOfLines;
- (void)setPlaceHolderTextColor:(id)arg0;
- (long long)keyboardReturnKeyType;
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
- (void)setShowPlaceholder:(BOOL)arg0;
- (BOOL)isEditing;
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
- (BOOL)showPlaceholder;
- (void)textViewDidBeginEditing:(id)arg0;
- (BOOL)textViewShouldBeginEditing:(id)arg0;
- (void)textViewDidEndEditing:(id)arg0;
- (void)textViewDidChange:(id)arg0;
- (BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (void)setIsEditing:(BOOL)arg0;

@end