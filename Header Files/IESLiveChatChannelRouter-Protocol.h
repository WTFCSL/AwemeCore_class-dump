//
//     Generated by private class-dump
//

@protocol IESLiveChatChannelRouter <IESLiveMessageInteractionModuleChannelInterface>

- (BOOL)isLandScape;
- (void)refreshMessageChannelUnreadTipView;
- (BOOL)messageChannelEnableExtentHeight;
- (id)interactContainer;
- (id)publicScreenInfoWithPublicScreenID:(id)arg0;
- (BOOL)isLandscapeScreenOpened;
- (id)currentLinkmicRouter;
- (BOOL)enableChatChannel;
- (BOOL)canCreateChatChannel;
- (BOOL)isTabMode;
- (id)chatChannelSettingModels;
- (id)settingModelWithChannelID:(id)arg0;
- (BOOL)enableAudioChatWithChannelID:(id)arg0;
- (void)updateSettingModel:(id)arg0 withChannelID:(id)arg1;
- (BOOL)messageChannelHideAnimationEffect;
- (void)setEnablePublicScreenSpeedStrategy:(BOOL)arg0;
- (void)assignChatAuth:(BOOL)arg0;
- (void)createChatChannel;
- (void)replyAccessChatChannelWithChannelID:(id)arg0 secUid:(id)arg1 isPermit:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)kickOutUser:(id)arg0 withChannelID:(id)arg1;
- (void)openChatChannelMemberListPanelWithChannelInfo:(id)arg0;
- (void)openInviteFriendsPanelWithChannelID:(id)arg0;
- (void)insertContainerToLandscapeScreen:(id)arg0;
- (void)quitChatChannelWithChannelID:(id)arg0;
- (void)disbandChatChannelWithChannelID:(id)arg0;
- (void)setChatChannelSettingsWithRoomID:(id)arg0 channelID:(id)arg1 settingModel:(id)arg2 completion:(id /* block */)arg3;
- (void)clearChatChannelWithChannelID:(id)arg0;
- (BOOL)isLinkmicFloatingStatusViewHidden;
- (void)inviteFriendsToChatChannel:(id)arg0;
- (void)openLandscapeChatChannelPanel;
- (void)hideRightBottomView;
- (id)currentChannelScreenInfo;
- (void)setFloatingLinkmicStatusViewHidden:(BOOL)arg0;
- (void)setFloatingLinkmicStatusViewHidden:(BOOL)arg0 animated:(BOOL)arg1;
- (double)chatChannelPanelHeight;
- (double)chatChannelPanelCornerRadii;
- (void)focusOnFakeChatTabInPadFullScreen;
- (BOOL)enableShowGreetStatus;
- (BOOL)inGreetStatus;
- (id)chatChannelGreetModels;
- (void)didClickedGreetWithModel:(id)arg0;
- (id)chatChannelInviteFriendsTrackParams;
- (void)trackEvent:(id)arg0 prarams:(id)arg1 publicScreenInfoModel:(id)arg2;
- (void)trackEvent:(id)arg0 prarams:(id)arg1 channelID:(id)arg2;
- (void)trackEventForCurrentChannel:(id)arg0 prarams:(id)arg1;
- (void)traceChatChannelCommentWithStatusCode:(id)arg0 commentType:(id)arg1 startTime:(double)arg2;
- (id)animationContainer;

@end
