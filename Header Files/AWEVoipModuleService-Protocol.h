//
//     Generated by private class-dump
//

@protocol AWEVoipModuleService <NSObject>

- (BOOL)isVoipEnable;
- (BOOL)isFeedSharing;
- (id)feedShareChatConversationID;
- (BOOL)isSwitchLayoutAnimating;
- (BOOL)shouldDisplayIMPushOfSender:(id)arg0 convID:(id)arg1;
- (void)invokeVoipWithTargetUserID:(id)arg0 type:(long long)arg1 enterFrom:(long long)arg2 extraAction:(unsigned long long)arg3 trackDict:(id)arg4 succeed:(id /* block */)arg5 sessionCompletion:(id /* block */)arg6;
- (void)invokeVoIPWithTargetUserID:(id)arg0 targetStickerID:(id)arg1 selfStickerID:(id)arg2 enterFrom:(long long)arg3 trackDict:(id)arg4;
- (void)invokeGroupVoipWithParticipatorIMIDs:(id)arg0 conversationID:(id)arg1 type:(long long)arg2 enterFrom:(long long)arg3 extraAction:(unsigned long long)arg4 selfStickerID:(id)arg5 sessionCompletion:(id /* block */)arg6;
- (void)selectAndInvokeGroupVoipWithRoomID:(id)arg0 conversationID:(id)arg1 type:(long long)arg2 enterFrom:(long long)arg3 extraAction:(unsigned long long)arg4 selfStickerID:(id)arg5 callback:(id /* block */)arg6;
- (id)voip1v1InvokeOperationWithTargetUserID:(id)arg0 type:(long long)arg1 enterFrom:(long long)arg2;
- (id)voipGroupInvokeOperationWithInviteUserIDs:(id)arg0 type:(long long)arg1 enterFrom:(long long)arg2;
- (void)invokeVoipWithOperation:(id)arg0 invokeCallback:(id /* block */)arg1 sessionCompletion:(id /* block */)arg2;
- (void)invokeVoipWithJSDictionary:(id)arg0 invokeCallback:(id /* block */)arg1;
- (void)joinGroupVoipWithRoomID:(id)arg0 enterFrom:(long long)arg1 sessionCompletion:(id /* block */)arg2;
- (void)joinGroupVoipWithRoomID:(id)arg0 cameraOff:(id)arg1 enterFrom:(long long)arg2 sessionCompletion:(id /* block */)arg3;
- (void)joinGroupVoipWithRoomID:(id)arg0 cameraOff:(id)arg1 enterFrom:(long long)arg2 roomBusinessAction:(unsigned long long)arg3 trackContext:(id)arg4 sessionCompletion:(id /* block */)arg5;
- (id)joinOperationWithRoomID:(id)arg0 enterFrom:(long long)arg1;
- (void)joinGroupVoipWithOperation:(id)arg0;
- (id)inviteUser:(id)arg0 inActiveRoom:(id)arg1;
- (BOOL)ignoreRelationCheckWithInvokeVoipWithUserID:(id)arg0;
- (BOOL)isNeedForbiddenPush;
- (void)observeRoom:(BOOL)arg0 withRoomID:(id)arg1 callback:(id /* block */)arg2;
- (void)roomInfoWithRoomID:(id)arg0 callback:(id /* block */)arg1;
- (BOOL)isInVoip;
- (BOOL)isUserInVoip:(id)arg0;
- (BOOL)isVoipFeedShareCaller;
- (id)voipRoomID;
- (BOOL)voipViewIsNarrowVisible;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentNarrowViewFrame;
- (void)checkVoipRoomAliveWithID:(id)arg0 callback:(id /* block */)arg1;

@end
