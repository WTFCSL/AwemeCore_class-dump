//
//     Generated by private class-dump
//

@protocol RTVFeedSessionObsever <RTVInteractionSessionObserver>

@optional

- (void)feedSession:(id)arg0 didReceiveCommand:(id)arg1;
- (void)feedSession:(id)arg0 shareWillFinishWithReason:(long long)arg1;
- (void)feedSessionShareDidFinish:(id)arg0 reason:(long long)arg1;
- (void)feedSession:(id)arg0 didSendCommand:(id)arg1;
- (void)feedSession:(id)arg0 didInitiateRoomSettingsWithShareModel:(id)arg1;

@end
