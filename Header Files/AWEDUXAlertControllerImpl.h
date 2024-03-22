//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDUXAlertControllerImpl : NSObject <DUXAlertDialogDelegate, ACCDUXAlertControllerProtocol> {
    id /* block */ _dismissedBlock;
}

@property (copy, nonatomic) id /* block */ dismissedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alertDialogDidDismiss:(id)arg0;
- (void)setDismissedBlock:(id /* block */)arg0;
- (id /* block */)dismissedBlock;
- (id)showAlertWithTitle:(id)arg0 body:(id)arg1 image:(id)arg2 actionButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 actionBlock:(id /* block */)arg5 cancelBlock:(id /* block */)arg6 dismissedBlock:(id /* block */)arg7;
- (id)showAlertWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 forbidDismissByClickMask:(BOOL)arg3 actionButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5 actionBlock:(id /* block */)arg6 cancelBlock:(id /* block */)arg7 dismissedBlock:(id /* block */)arg8;
- (id)showAlertWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 actionButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 actionBlock:(id /* block */)arg5 cancelBlock:(id /* block */)arg6 dismissedBlock:(id /* block */)arg7;
- (id)showAlertWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 forbidDismissByClickMask:(BOOL)arg3 actionButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5 actionBlock:(id /* block */)arg6 cancelBlock:(id /* block */)arg7 dismissedBlock:(id /* block */)arg8 onViewController:(id)arg9;
- (void).cxx_destruct;
- (void)dealloc;

@end
