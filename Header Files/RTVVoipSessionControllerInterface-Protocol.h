//
//     Generated by private class-dump
//

@protocol RTVVoipSessionControllerInterface <NSObject>

- (BOOL)supportInviteParticipator;
- (void)renderSession:(id)arg0;
- (id)participator;
- (id)isPrejoinRoomEnable;
- (BOOL)enableInviteParticipator;
- (id)participatorID;
- (id)prepareCalleeVoipInfoFromServer;
- (void)handleRTCOfflineOfUid:(id)arg0;
- (id)pollingRoomServiceModelWithReason:(long long)arg0;

@optional

- (void)handleRTCUserJoined:(id)arg0;

@end
