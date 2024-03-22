//
//     Generated by private class-dump
//

@interface IESLiveChatChannelLinkmicAPI : HTSLiveApi

- (void)applyWithRoomID:(id)arg0 channelID:(id)arg1 extra:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelApplyWithRoomID:(id)arg0 channelID:(id)arg1 extra:(id)arg2 completion:(id /* block */)arg3;
- (void)replyApplyWithRoomID:(id)arg0 channelID:(id)arg1 secUserID:(id)arg2 permit:(BOOL)arg3 extra:(id)arg4 completion:(id /* block */)arg5;
- (void)inviteWithRoomID:(id)arg0 channelID:(id)arg1 secUserID:(id)arg2 extra:(id)arg3 completion:(id /* block */)arg4;
- (void)cancelInviteWithRoomID:(id)arg0 channelID:(id)arg1 secUserID:(id)arg2 extra:(id)arg3 completion:(id /* block */)arg4;
- (void)replyInviteWithRoomID:(id)arg0 channelID:(id)arg1 permit:(BOOL)arg2 extra:(id)arg3 completion:(id /* block */)arg4;
- (void)joinChannelWithRoomID:(id)arg0 channelID:(id)arg1 extra:(id)arg2 completion:(id /* block */)arg3;
- (void)exitChannelWithRoomID:(id)arg0 channelID:(id)arg1 extra:(id)arg2 completion:(id /* block */)arg3;
- (void)kickoutWithRoomID:(id)arg0 channelID:(id)arg1 secUserID:(id)arg2 extra:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchRTCInfoWithRoomID:(id)arg0 roomChannelID:(id)arg1 extra:(id)arg2 completion:(id /* block */)arg3;
- (void)silenceWithRoomID:(id)arg0 roomChannelID:(id)arg1 roomChannelOwnerSecID:(id)arg2 secUserID:(id)arg3 extra:(id)arg4 completion:(id /* block */)arg5;
- (void)unsilenceWithRoomID:(id)arg0 roomChannelID:(id)arg1 roomChannelOwnerSecID:(id)arg2 secUserID:(id)arg3 extra:(id)arg4 completion:(id /* block */)arg5;
- (void)checkLinkersWithRoomID:(id)arg0 roomChannelID:(id)arg1 requestSource:(id)arg2 linkmicIDList:(id)arg3 extra:(id)arg4 completion:(id /* block */)arg5;
- (void)checkAudienceLinkersWithRoomID:(id)arg0 roomChannelID:(id)arg1 silenceStatus:(BOOL)arg2 publishStatus:(int)arg3 extra:(id)arg4 completion:(id /* block */)arg5;

@end
