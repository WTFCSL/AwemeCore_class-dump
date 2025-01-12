//
//     Generated by private class-dump
//

@protocol IESLiveMultiKTVStageActions <NSObject>

@optional

- (void)updateCurrentSinger:(id)arg0;
- (void)updateListenerPlayingTime:(double)arg0;
- (void)updateShowingTheme:(id)arg0;
- (BOOL)isHonorListPanelShowing;
- (BOOL)isMidiFeedBackShowing;
- (void)didSingChallengeStarted;
- (void)didSingChallengeClosed;
- (id)playingUser;
- (void)didVideoInfoDictAdd:(id)arg0;
- (void)updateState:(unsigned long long)arg0;
- (void)shouldColdRecommendPanelHideWithCompletion:(id /* block */)arg0;
- (BOOL)isSingChallengeLastGameUncompleted;
- (void)shouldHonorListHideWithCompletion:(id /* block */)arg0;
- (void)updateListenerCurrentPlayingTime:(double)arg0;
- (void)shouldHonorListShow:(id)arg0 hideAfter:(long long)arg1 completion:(id /* block */)arg2;
- (void)didHonorListPanelHide;
- (void)didColdRecommendPanelShow;
- (void)updateSingingMode:(int)arg0;
- (void)stageBeatComponentDidActive;
- (void)updateSingerSongPlayingTime:(double)arg0;
- (void)didEnterChallengeMode;
- (void)didHonorListPanelShow;
- (void)stageBeatComponentDidHide;
- (void)didColdRecommendPanelHide;
- (BOOL)isColdRecommendPanelShowing;

@end
