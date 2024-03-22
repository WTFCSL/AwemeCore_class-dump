//
//     Generated by private class-dump
//

@protocol IESLiveMultiAudioAudienceRouter <IESLiveInteractionModuleMultiAudioInterface, IESLiveMultiAudioAudienceOrderSongRouter>

- (BOOL)isEnlargeGuest;
- (id)enlargeGuestUserId;
- (void)stopConnectionWithRequestSource:(id)arg0;
- (id)onlineUserWrapper:(id)arg0;
- (void)checkAuthorizationPermission:(id /* block */)arg0;
- (void)muteAllRemoteAudioStreams:(BOOL)arg0 reason:(id)arg1;
- (id)userByUserId:(id)arg0;
- (void)stopConnectionWithRequestSource:(id)arg0 extra:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelApplication;
- (id)guestBattleUIAdaptor;
- (void)muteSelf:(BOOL)arg0;
- (void)muteSelfForKTVSing:(BOOL)arg0;
- (void)leave:(id)arg0 directly:(BOOL)arg1 completed:(id /* block */)arg2;
- (BOOL)enableInteractDistribute;
- (BOOL)adminRightEnable;
- (void)showSelfInteractPanelWithSource:(id)arg0;
- (int)getListUserRoleWithUserID:(id)arg0;
- (id)teamFightDelegate;
- (BOOL)isJoinChannelAfterFollow;
- (void)clearJoinChannelAfterFollow;
- (void)askForStopConnectionAction:(id /* block */)arg0;
- (void)checkForWaitingOffsetInfoWithCompletion:(id /* block */)arg0;
- (void)checkForWaitingResponseInfoWithCompletion:(id /* block */)arg0;
- (unsigned long long)currentSceneWithRoom:(id)arg0;
- (BOOL)isSelfLinked;
- (BOOL)isSelfWaiting;
- (BOOL)containAudienceInteractiveItem;
- (id)audienceInteractiveItemView;
- (void)inviteFriendWithSecID:(id)arg0 userID:(id)arg1 sourcePage:(id)arg2;
- (void)didClickPreLinkWithPosition:(id)arg0;
- (void)adminAcceptConnnectionWithUserID:(id)arg0 requestSource:(id)arg1;
- (void)adminAcceptConnnectionWithWaitingListUser:(id)arg0 requestSource:(id)arg1;
- (id)createRootPanelViewModelConfigWithSource:(id)arg0;
- (void)didClickSelfWithPosition:(id)arg0 requestSource:(id)arg1;
- (void)showInviteInterestedListPanelWithSource:(id)arg0;
- (BOOL)isCloseBySelf;
- (void)didClickInviteView;
- (unsigned long long)currentScene;

@end
