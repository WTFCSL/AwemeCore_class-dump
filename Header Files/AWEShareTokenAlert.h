//
//     Generated by private class-dump
//

@interface AWEShareTokenAlert : NSObject

+ (void)showAlertWithModel:(id)arg0 actionBlock:(id /* block */)arg1 cancelBlock:(id /* block */)arg2;
+ (void)showAlertWithModel:(id)arg0 checkboxModel:(id)arg1 actionBlock:(id /* block */)arg2 cancelBlock:(id /* block */)arg3;
+ (id)shareTitleWithText:(id)arg0;
+ (id)actionButtonTitleWithShareType:(id)arg0;
+ (id)bodyViewWithDesc:(id)arg0 andCheckboxModel:(id)arg1;
+ (void)openDestinationAppWithShareType:(id)arg0;

@end
