//
//     Generated by private class-dump
//

@protocol CSJRewardedVideoAdDelegate <NSObject>

@optional

- (void)rewardedVideoAdWillVisible:(id)arg0;
- (void)rewardedVideoAdDidVisible:(id)arg0;
- (void)rewardedVideoAdDidClick:(id)arg0;
- (void)rewardedVideoAdDidPlayFinish:(id)arg0 didFailWithError:(id)arg1;
- (void)rewardedVideoAdServerRewardDidSucceed:(id)arg0 verify:(BOOL)arg1;
- (void)rewardedVideoAdServerRewardDidFail:(id)arg0 error:(id)arg1;
- (void)rewardedVideoAdDidClickSkip:(id)arg0;
- (void)rewardedVideoAdCallback:(id)arg0 withType:(unsigned long long)arg1;
- (void)rewardedVideoAdDidLoad:(id)arg0;
- (void)rewardedVideoAd:(id)arg0 didFailWithError:(id)arg1;
- (void)rewardedVideoAdVideoDidLoad:(id)arg0;
- (void)rewardedVideoAdWillClose:(id)arg0;
- (void)rewardedVideoAdDidClose:(id)arg0;

@end
