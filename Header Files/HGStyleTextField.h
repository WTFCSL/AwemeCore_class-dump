//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UITextField, UIButton;
@protocol HGTextFieldDelegate;

@interface HGStyleTextField : UIView <UITextFieldDelegate> {
    NSString *_text;
    id<HGTextFieldDelegate> _delegate;
    NSString *_placeholder;
    NSDictionary *_placeholderAttributes;
    UIButton *_clearButton;
    UITextField *_contentTextField;
}

@property (readonly, copy, nonatomic) NSString *text;
@property (weak, nonatomic) id<HGTextFieldDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 placeholder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 placeholder:(id)arg1 attributes:(id)arg2;
- (void)_textDidChanged:(id)arg0;
- (void)clearAction:(id)arg0;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (id)delegate;
- (id)text;
- (void)textFieldDidBeginEditing:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)textFieldDidEndEditing:(id)arg0;
- (void)setupUI;

@end
