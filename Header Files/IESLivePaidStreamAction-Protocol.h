//
//     Generated by private class-dump
//

@protocol IESLivePaidStreamAction <NSObject>

@optional

- (void)paidStreamTrialDidStart:(long long)arg0;
- (void)paidStreamTrialDidStop:(long long)arg0;
- (void)paidStreamDidEndDisplayGrabFreeView:(long long)arg0;
- (void)paidStreamTrialRemainingTimeChangeTo:(double)arg0 scene:(long long)arg1;
- (void)paidStreamTrialDidFinish:(long long)arg0 reason:(unsigned long long)arg1;
- (void)paidStreamTrialDidPaid:(long long)arg0;
- (void)paidStreamTrialDidPromised:(long long)arg0;
- (void)paidStreamScreenCapturedDidChange:(BOOL)arg0 scene:(long long)arg1;
- (id)trialViewForPaidStreamWithScene:(long long)arg0;
- (id)trialContainerViewForPaidStreamWithScene:(long long)arg0;
- (void)paidStreamTrialDidInstall:(long long)arg0 reason:(unsigned long long)arg1;
- (void)paidStreamTrialDidClose:(long long)arg0;
- (void)paidStreamGrabFreeSucceed:(BOOL)arg0 scene:(long long)arg1;
- (void)paidStreamWillDisplayForBlockType:(unsigned long long)arg0 scene:(long long)arg1;
- (void)paidStreamDidEndDisplayForBlockType:(unsigned long long)arg0 scene:(long long)arg1;
- (void)paidStreamDidChangePaidStatusForOtherCamera:(id)arg0 scene:(long long)arg1;

@end
