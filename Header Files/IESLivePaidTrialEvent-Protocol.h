//
//     Generated by private class-dump
//

@protocol IESLivePaidTrialEvent <NSObject>

- (void)paidTrialWillStart:(id)arg0 reason:(unsigned long long)arg1;
- (void)paidTrialDidStart:(id)arg0 reason:(unsigned long long)arg1;
- (void)paidTrialDidStop:(id)arg0;
- (void)paidTrial:(id)arg0 valueDidChange:(double)arg1;
- (void)paidTrial:(id)arg0 didFinishReason:(unsigned long long)arg1;

@end