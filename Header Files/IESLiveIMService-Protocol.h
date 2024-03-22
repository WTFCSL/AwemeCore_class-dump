//
//     Generated by private class-dump
//

@protocol IESLiveIMService <NSObject>

- (void)transferToMessageVCWithConversationID:(id)arg0 conversationType:(long long)arg1 fromVC:(id)arg2 extension:(id)arg3 completion:(id /* block */)arg4;
- (void)joinConversation:(id)arg0 shortId:(long long)arg1 bizExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)createFansGroupChatWithOtherParticipants:(id)arg0 type:(long long)arg1 bizExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)sendVideoWithLocalURL:(id)arg0 coverImage:(id)arg1 conversationId:(id)arg2 followedTextMessage:(id)arg3 completion:(id /* block */)arg4;
- (void)transferToFansGroupAdminVCWithConversationID:(id)arg0 completion:(id /* block */)arg1;

@optional

- (void)setIMCustomServiceDelegate:(id)arg0;
- (void)asyncGetCurrentUnReadCount:(id)arg0 role:(long long)arg1 completion:(id /* block */)arg2;
- (void)openIMCustomServiceChat:(id)arg0 extra:(id)arg1 completion:(id /* block */)arg2;
- (void)openIMCustomServiceMessageList:(id)arg0 extra:(id)arg1;
- (void)dismissTopIMCustomServiceVCIfNeeded;
- (void)getIMFriendsModelWithCompletion:(id /* block */)arg0;
- (double)currentEditAreaHeightForNavigationController:(id)arg0;
- (BOOL)enableAnnouncementFansGroupShare;
- (void)getIMFriendsAndRecommendModelWithCompletion:(id /* block */)arg0;
- (void)followUserWithLiveIMShareModel:(id)arg0;
- (id)recommendDisplayRecommendReasonWithShareModel:(id)arg0;
- (void)trackFollow:(id)arg0 bind:(id)arg1;
- (void)trackFollowCard:(id)arg0 eventType:(id)arg1 bind:(id)arg2;
- (void)configUIForViewController:(id)arg0 configuration:(id)arg1;
- (void)hideIMPushView;
- (void)getIMFriendsListFirstAvatarWithCompletion:(id /* block */)arg0;
- (void)showPerfPushView:(id)arg0 title:(id)arg1;
- (void)showAnchorLiveStableModePushView:(long long)arg0 reason:(id)arg1 detail:(id)arg2 action:(id)arg3;
- (void)showLiveLocalPush:(id)arg0;
- (void)pauseIMAbility:(id)arg0;
- (void)resumeIMAbility:(id)arg0;

@end
