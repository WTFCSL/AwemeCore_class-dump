//
//     Generated by private class-dump
//

@interface IESLiveInteractionBattleAPI : HTSLiveApi

- (void)fetchPlayModeInfoWithRoomId:(id)arg0 callback:(id /* block */)arg1;
- (void)getTeamFightConfigWithType:(long long)arg0 completion:(id /* block */)arg1;
- (void)fetchAnnounceWithPlayMode:(int)arg0 RoomID:(id)arg1 completion:(id /* block */)arg2;
- (void)readPlayModeAnnounceWithRoomId:(id)arg0 announceIds:(id)arg1 completion:(id /* block */)arg2;

@end
