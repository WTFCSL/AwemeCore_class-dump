//
//     Generated by private class-dump
//

@protocol CSJRewardedVideoDisplayDelegate <NSObject>

@optional

- (void)playerReadyToPlay:(id)arg0;
- (void)playerDidPlayFinish:(id)arg0 error:(id)arg1;
- (void)playerDidPlayedRewardTime:(id)arg0 duration:(double)arg1;
- (void)rewardedVideoClickDownload;
- (void)rewardedVideoClickSkip;
- (void)fullScreenImageAndInterstitialDidClose;
- (void)fullScreenInsertitalAdDisplayViewDidClick;

@end
