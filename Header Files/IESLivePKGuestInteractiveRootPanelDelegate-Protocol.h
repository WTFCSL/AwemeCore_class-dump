//
//     Generated by private class-dump
//

@protocol IESLivePKGuestInteractiveRootPanelDelegate <NSObject>

- (void)pkGuestInteractiveRootPanel:(id)arg0 permitApplicationOfUser:(id)arg1 extraInfo:(id)arg2;
- (void)pkGuestInteractiveRootPanel:(id)arg0 inviteWithUserID:(id)arg1 secUserID:(id)arg2 sourcePage:(id)arg3;

@optional

- (void)pkGuestInteractiveRootPanel:(id)arg0 inviteWithUserID:(id)arg1 secUserID:(id)arg2 sourcePage:(id)arg3 params:(id)arg4;
- (void)pkGuestInteractiveRootPanelNeedToResetWaitingApplications:(id)arg0;
- (void)pkGuestInteractiveRootPanel:(id)arg0 fetchInvitableFriendsListWithCount:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)pkGuestInteractiveRootPanel:(id)arg0 shareWithClickScene:(id)arg1 shareScene:(id)arg2;
- (void)pkGuestInteractiveRootPanelAdminApply:(id)arg0;
- (void)pkGuestInteractiveRootPanel:(id)arg0 onTabShowWithType:(id)arg1;
- (void)pkGuestInteractiveRootPanelEndInteract:(id)arg0;
- (void)pkGuestInteractiveRootPanelOnGuestAutoLinkMic:(id)arg0 completion:(id /* block */)arg1;
- (void)pkGuestInteractiveRootPanel:(id)arg0 inviteFriendWithUserID:(id)arg1;
- (void)pkGuestInteractiveRootPanel:(id)arg0 searchAudienceListWithSearchText:(id)arg1;
- (void)pkGuestInteractiveRootPanelInviteMoreFriends:(id)arg0;
- (void)pkGuestInteractiveRootPanel:(id)arg0 editMicAtIndex:(unsigned long long)arg1;

@end