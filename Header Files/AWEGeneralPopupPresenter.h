//
//     Generated by private class-dump
//

@interface AWEGeneralPopupPresenter : NSObject

- (BOOL)canShowPopupWithModel:(id)arg0 record:(id)arg1;
- (void)performActionAtIndex:(unsigned long long)arg0 withType:(long long)arg1 target:(id)arg2;
- (void)popupWillShowWithModel:(id)arg0;
- (void)showPopupWithModel:(id)arg0 onClose:(id /* block */)arg1;
- (void)updateDescripterWith:(id)arg0 record:(id)arg1;
- (void)showPopupWithModel:(id)arg0 withAlertView:(id)arg1 onClose:(id /* block */)arg2;
- (void)popupDidDismissWithModel:(id)arg0 withSelectionIndex:(unsigned long long)arg1 onClose:(id /* block */)arg2;

@end
