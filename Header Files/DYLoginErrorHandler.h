//
//     Generated by private class-dump
//

@interface DYLoginErrorHandler : NSObject

+ (void)showToastWithError:(id)arg0;
+ (BOOL)handleError:(id)arg0 platform:(unsigned long long)arg1;
+ (id)errorMsgFromError:(id)arg0;
+ (void)showConfirmAlertWithMessage:(id)arg0;
+ (BOOL)handleError:(id)arg0 platform:(unsigned long long)arg1 isFromH5:(BOOL)arg2;
+ (BOOL)handleForbidChangeErrorWithMessage:(id)arg0;
+ (void)showAccountLockedMessage:(id)arg0;
+ (id)defaultErrorTip;
+ (BOOL)handleAlertError:(id)arg0;

@end