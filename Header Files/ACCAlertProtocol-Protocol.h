//
//     Generated by private class-dump
//

@protocol ACCAlertProtocol <NSObject>

- (void)showAlertWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 actionButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 actionBlock:(id /* block */)arg5 cancelBlock:(id /* block */)arg6;
- (void)showAlertController:(id)arg0 animated:(BOOL)arg1;
- (void)showAlertController:(id)arg0 fromView:(id)arg1;

@optional

- (id)alertActionWithTitle:(id)arg0 style:(long long)arg1 font:(id)arg2 handler:(id /* block */)arg3;
- (id)alertView;
- (id)alertActionWithTitle:(id)arg0 style:(long long)arg1 handler:(id /* block */)arg2;

@end
