//
//     Generated by private class-dump
//

@interface IESLivePaidStreamLogPlugin : NSObject <IESLivePaidStreamPlugin>

- (void)paidStreamDidStop:(id)arg0;
- (void)paidStream:(id)arg0 willOpenPaidPanel:(unsigned long long)arg1;
- (void)paidStream:(id)arg0 didOpenPaidPanel:(unsigned long long)arg1;
- (void)paidStreamDidClose:(id)arg0;
- (void)paidStreamTrialWillStart:(id)arg0;
- (void)paidStreamTrialDidStart:(id)arg0;
- (void)paidStreamTrialDidStop:(id)arg0;
- (void)paidStream:(id)arg0 trialRemainingTimeDidChange:(double)arg1;
- (void)paidStream:(id)arg0 didFinishTrialWithReason:(unsigned long long)arg1;
- (void)paidStreamAuthWillStart:(id)arg0;
- (void)paidStream:(id)arg0 authDidStartWithReason:(unsigned long long)arg1;
- (void)paidStream:(id)arg0 authDidEndWithReason:(unsigned long long)arg1;
- (void)paidStreamAuthWillStartPolling:(id)arg0;
- (void)paidStreamAuthDidEndPolling:(id)arg0;
- (void)paidStreamAuthWillStartPromise:(id)arg0;
- (void)paidStream:(id)arg0 manualPromiseWithCompletionHandler:(id /* block */)arg1;
- (void)paidStream:(id)arg0 didEndPromiseWithError:(id)arg1;
- (void)paidStream:(id)arg0 didChangeAuthRetType:(unsigned long long)arg1 reason:(unsigned long long)arg2;
- (void)paidStream:(id)arg0 didChangeAuthPromiseType:(unsigned long long)arg1 reason:(unsigned long long)arg2;
- (void)paidStream:(id)arg0 willDisplayForBlockType:(unsigned long long)arg1;
- (void)paidStream:(id)arg0 didEndDisplayForBlockType:(unsigned long long)arg1;
- (void)paidStream:(id)arg0 actionForBlockType:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)paidStream:(id)arg0 willInstallSecurityType:(unsigned long long)arg1;
- (void)paidStreamWillStartScreenCaptured:(id)arg0;
- (void)paidStream:(id)arg0 screenCapturedDidChange:(BOOL)arg1;
- (void)paidStreamWillDisplayScreenCapturedAlert:(id)arg0;
- (void)paidStreamDidEndDisplayScreenCapturedAlert:(id)arg0;
- (void)paidStreamTrialDidPause:(id)arg0;
- (void)logPaidStream:(id)arg0 event:(id)arg1 extraParams:(id)arg2;
- (BOOL)paidStreamPluginShouldActive:(id)arg0;

@end
