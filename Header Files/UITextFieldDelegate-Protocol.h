//
//     Generated by private class-dump
//

@protocol UITextFieldDelegate <NSObject>

@optional

- (BOOL)textFieldShouldClear:(id)arg0;
- (BOOL)textFieldShouldBeginEditing:(id)arg0;
- (BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementString:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg0;
- (BOOL)textFieldShouldEndEditing:(id)arg0;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (void)textFieldDidEndEditing:(id)arg0;
- (void)textFieldDidEndEditing:(id)arg0 reason:(long long)arg1;
- (void)textFieldDidChangeSelection:(id)arg0;
- (id)textField:(id)arg0 editMenuForCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 suggestedActions:(id)arg2;
- (void)textField:(id)arg0 willPresentEditMenuWithAnimator:(id)arg1;
- (void)textField:(id)arg0 willDismissEditMenuWithAnimator:(id)arg1;

@end