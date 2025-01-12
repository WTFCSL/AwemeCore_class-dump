//
//     Generated by private class-dump
//

@protocol IESLiveMultiAudioSceneControllerProtocol <IESLiveInteractionStage>

- (id)allSeatProviderViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfSlotView;
- (id)emojiContainerForUserID:(id)arg0;
- (void)updateAnchorInfo:(id)arg0;
- (void)sceneWillUnload;
- (void)updateRootPanelViewModel:(id)arg0;
- (void)sceneControllerInit;
- (void)updateGuestListWithAppData:(id)arg0;
- (BOOL)couldChangePosition;
- (void)didClickTopRightBtn;
- (void)sceneWillLoad;
- (void)updateGuestList:(id)arg0;
- (void)setLayout:(id)arg0;
- (id)initWithDataSource:(id)arg0 delegate:(id)arg1;

@optional

- (void)linkmicDidStart;
- (id)guestBattleUIAdaptor;
- (id)teamFightDelegate;
- (void)updateSeatName;
- (id)emojiSeatAnimationViewsForUserID:(id)arg0;
- (void)triggerInvitationGuideAnimation;
- (void)stopInteractiveMode:(BOOL)arg0;
- (void)updateWithSeatInfos:(id)arg0;
- (void)guestCanAcceptGiftAuthorityDidChange:(BOOL)arg0;
- (void)startGuideAnimationWithEndBlock:(id /* block */)arg0 threshold:(long long)arg1 animationData:(id)arg2;
- (void)updateWithAudienceLinkMicStatus:(long long)arg0;
- (void)linkmicDidLeaveChannel;
- (void)liveDidPause:(BOOL)arg0;
- (BOOL)hasEmptySeat;
- (void)onAuthenticationViewShow:(BOOL)arg0;
- (double)balancedLoudnessValue;
- (void)showAllGuestsViewFromPanel;

@end
