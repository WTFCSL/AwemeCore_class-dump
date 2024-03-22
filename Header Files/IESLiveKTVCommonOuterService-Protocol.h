//
//     Generated by private class-dump
//

@protocol IESLiveKTVCommonOuterService <IESLiveInteractionModuleKTVInterface>

@optional

- (BOOL)isSinging;
- (BOOL)isInKTVMode;
- (BOOL)isKTVPanelShowing;
- (id)currentSingerUserID;
- (id)feedbackExtraParams;
- (BOOL)isSupportedInteractiveKTV;
- (BOOL)showKtvLotteryPipIfNeeded;
- (id)getCurrentMusicModel;
- (id)orderlist;
- (id)onlineUserWrapper:(id)arg0;
- (unsigned long long)currentKTVState;
- (void)showKTVPanelFrom:(id)arg0 forceOrder:(BOOL)arg1;
- (void)hideKTVPanelWithCompletion:(id /* block */)arg0;
- (void)stopCurrentPlayingMusicWithParams:(id)arg0;
- (void)hideMusicListFeedbackViewWithAnimated:(BOOL)arg0;
- (void)showKTVFastCutSongPopupWithMusic:(id)arg0;
- (BOOL)isKTVController;
- (id)orderSongForUser:(id)arg0;
- (void)updateScoreModeWithSwitch:(BOOL)arg0;
- (void)checkAuthorizationPermission:(id /* block */)arg0;
- (void)applyConnectionWithEventExtra:(id)arg0 afterFollow:(BOOL)arg1 applySource:(unsigned long long)arg2 requestPage:(id)arg3;
- (id)childTrackerContext;
- (void)rebuildTrackContextForPlayMode;
- (id)isInSongOrder;
- (void)trackKsongIconClick;
- (id)feedBackMusicProcessInfo;
- (void)updateEarphoneTurnedOnFlag:(BOOL)arg0;
- (id)recentSelfOrderMusicListString;
- (BOOL)isPaused;
- (BOOL)isPlaying;
- (void)fastStartSelectedOrderTabWithTabName:(id)arg0 enterFrom:(id)arg1;

@end