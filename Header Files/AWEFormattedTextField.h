//
//     Generated by private class-dump
//

@class NSString, NSCharacterSet, AWEFormattedTextFieldDelegate;

@interface AWEFormattedTextField : UITextField {
    NSString *_formatString;
    NSCharacterSet *_allowedCharacterSet;
    AWEFormattedTextFieldDelegate *_textFieldDelegate;
}

@property (retain, nonatomic) AWEFormattedTextFieldDelegate *textFieldDelegate;
@property (copy, nonatomic) NSString *formatString;
@property (copy, nonatomic) NSCharacterSet *allowedCharacterSet;

+ (id)originalStringWithFormat:(id)arg0 inputString:(id)arg1;
+ (id)trimmedStringForString:(id)arg0 allowedCharacterSet:(id)arg1;
+ (id)formattedStringWithFormat:(id)arg0 inputString:(id)arg1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })originalRangeWithFormat:(id)arg0 formattedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })cursorRangeWithReplaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 stringLength:(unsigned long long)arg1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })cursorRangeWithFormat:(id)arg0 originCursorRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
+ (void)selectTextForInput:(id)arg0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;

- (id)originText;
- (void)setAllowedCharacterSet:(id)arg0;
- (void)setFormatString:(id)arg0;
- (id)formatString;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)textFieldDelegate;
- (void)setTextFieldDelegate:(id)arg0;
- (id)allowedCharacterSet;

@end