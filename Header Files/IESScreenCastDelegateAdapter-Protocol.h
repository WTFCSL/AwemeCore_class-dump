//
//     Generated by private class-dump
//

@protocol IESScreenCastDelegateAdapter <NSObject>

@optional

- (void)castPlayProgressInfoChanged:(id)arg0;
- (void)castPlayStatusChanged:(unsigned long long)arg0;
- (void)connectToDevice:(id)arg0 onError:(id)arg1;
- (void)didConnectToDevice:(id)arg0;
- (void)castPlayDidClosed;
- (void)startConnectToDevice:(id)arg0;
- (void)castPlayClarityChooseButtonClicked;
- (void)castPlayAttemptToShowToastWithTitle:(id)arg0;
- (void)castPlayNotSupportClarity:(id)arg0;
- (void)castExtraParams:(id)arg0 complectionBlock:(id /* block */)arg1;

@end