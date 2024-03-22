//
//     Generated by private class-dump
//

@class NSString;
@protocol UITextFieldDelegate;

@interface AWEFormattedTextFieldDelegate : NSObject <UITextFieldDelegate> {
    id<UITextFieldDelegate> _textFieldDelegate;
}

@property (weak, nonatomic) id<UITextFieldDelegate> textFieldDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldClear:(id)arg0;
- (void).cxx_destruct;
- (BOOL)textFieldShouldBeginEditing:(id)arg0;
- (BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementString:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg0;
- (BOOL)textFieldShouldEndEditing:(id)arg0;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (void)textFieldDidEndEditing:(id)arg0;
- (id)textFieldDelegate;
- (void)setTextFieldDelegate:(id)arg0;

@end
