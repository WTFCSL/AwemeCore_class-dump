//
//     Generated by private class-dump
//

@protocol AWEIMPOIInputViewControllerDelegate <NSObject>

- (void)inputViewController:(id)arg0 growingTextViewDidChange:(id)arg1;
- (void)inputViewControllerDidChangeHeight:(id)arg0;
- (void)didSendContent:(id)arg0 textView:(id)arg1 userInfo:(id)arg2 customToast:(id)arg3 trackParams:(id)arg4;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 inputViewType:(long long)arg1 oldInputViewType:(long long)arg2;
- (void)onLifePhotoButtonOnChatPanelClicked;
- (void)onLifeCameraButtonOnChatPanelClicked;
- (void)onLifeArticlesButtonOnChatPanelClicked;
- (void)onLifeOrdersButtonOnChatPanelClicked;

@end
