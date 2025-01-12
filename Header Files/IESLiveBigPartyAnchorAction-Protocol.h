//
//     Generated by private class-dump
//

@protocol IESLiveBigPartyAnchorAction <NSObject>

- (void)startBigParty;
- (void)startBigPartyWithEnterFrom:(id)arg0 source:(id)arg1 extra:(id)arg2;
- (void)startBigPartyWithLayout:(id)arg0;
- (void)startBigPartyWithLayout:(id)arg0 enterFrom:(id)arg1 source:(id)arg2 extra:(id)arg3;
- (void)startBigPartyWithLayout:(id)arg0 enterFrom:(id)arg1 source:(id)arg2 isFromAudienceLinkmic:(BOOL)arg3 extra:(id)arg4;
- (void)startBigPartyWithEnterFrom:(id)arg0 source:(id)arg1 extra:(id)arg2 scene:(unsigned long long)arg3 autoSelectScene:(BOOL)arg4;
- (void)startBigPartyKTV;
- (void)resumeWithModel:(id)arg0;
- (void)endBigParty;
- (void)endBigPartyWithRequestSource:(id)arg0;
- (void)endBigPartyWithRequestSource:(id)arg0 extra:(id)arg1;
- (void)endBigPartyWithRequestSource:(id)arg0 extra:(id)arg1 completion:(id /* block */)arg2;
- (void)inviteWithUserID:(id)arg0 secUserID:(id)arg1 sourcePage:(id)arg2;
- (void)inviteWithUserID:(id)arg0 secUserID:(id)arg1 seatIndex:(long long)arg2 sourcePage:(id)arg3;
- (void)inviteWithUserID:(id)arg0 secUserID:(id)arg1 seatIndex:(long long)arg2 sourcePage:(id)arg3 extraParams:(id)arg4;
- (void)preInviteWithUserID:(id)arg0 requsetPage:(id)arg1;
- (void)permitUser:(id)arg0 extraInfo:(id)arg1;
- (void)kickOutUserID:(id)arg0 secUserID:(id)arg1 requestSource:(id)arg2;
- (void)muteGuest:(id)arg0;
- (void)unMuteGuest:(id)arg0;
- (void)muteOtherRoom:(id)arg0;
- (void)unMuteOtherRoom:(id)arg0;
- (void)getInviteFriendsList:(id)arg0 callback:(id /* block */)arg1;
- (void)showInviteButtonWithScene:(id)arg0;
- (void)clickInviteButtonWithScene:(id)arg0;
- (void)controlGuestCameraWithUserID:(id)arg0 cameraOpen:(BOOL)arg1;

@optional

- (void)localSmallWindowSessionCreated:(id)arg0;

@end
