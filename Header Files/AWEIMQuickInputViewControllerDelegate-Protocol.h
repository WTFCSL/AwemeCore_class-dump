//
//     Generated by private class-dump
//

@protocol AWEIMQuickInputViewControllerDelegate <NSObject>

@optional

- (BOOL)shouldSendContent:(id)arg0 textView:(id)arg1 userInfo:(id)arg2;
- (void)didSendContent:(id)arg0 textView:(id)arg1 userInfo:(id)arg2;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 inputViewType:(long long)arg1;
- (void)inputViewController:(id)arg0 inputViewTypeDidChange:(long long)arg1;
- (void)inputViewController:(id)arg0 growingTextViewDidChange:(id)arg1;
- (void)inputViewControllerDidChangeHeight:(id)arg0;
- (id)inputViewControllerEmptyStateButton;
- (void)inputViewControllerDidClearButton:(id)arg0;
- (void)startStoryVideo:(id /* block */)arg0;

@end
