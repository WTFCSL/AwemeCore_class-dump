//
//     Generated by private class-dump
//

@interface AWEAccountSwitchStep : AWEWorkflowStep

- (void)p_dismissViewControllerCompletion:(id /* block */)arg0 cancel:(id /* block */)arg1 diffUid:(BOOL)arg2;
- (void)p_switchToNewUserWithUser:(id)arg0;
- (void)p_strategyConductWithPushUserId:(id)arg0 afterManualLogin:(BOOL)arg1 multiLogin:(BOOL)arg2;
- (void)p_editConditionAlertShowWithConfirmBlock:(id /* block */)arg0 cancelBlock:(id /* block */)arg1;
- (void)onStep:(id)arg0 linkSession:(id)arg1;

@end
