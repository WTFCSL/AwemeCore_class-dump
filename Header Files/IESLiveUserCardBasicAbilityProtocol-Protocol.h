//
//     Generated by private class-dump
//

@protocol IESLiveUserCardBasicAbilityProtocol <NSObject>

- (void)processAdminOperationTypeResponse:(id)arg0 userID:(id)arg1 actionType:(long long)arg2 backupAction:(id /* block */)arg3 cancelAction:(id /* block */)arg4 scene:(id)arg5;
- (BOOL)isGuestUser:(id)arg0;
- (void)managerAnonymousUserWithSilence:(BOOL)arg0;
- (void)kickoutUserAlertWithUserID:(id)arg0 secUserId:(id)arg1;
- (void)reportUser:(id)arg0 config:(id)arg1 myRole:(unsigned long long)arg2 itsRole:(unsigned long long)arg3;
- (void)actionMute:(id)arg0;
- (void)showAdministrateSheet:(id)arg0 config:(id)arg1 myRole:(unsigned long long)arg2 itsRole:(unsigned long long)arg3;
- (void)actionAt:(long long)arg0 toRole:(long long)arg1 currentUser:(id)arg2 userSuitId:(id)arg3 config:(id)arg4;
- (void)onMoreTapped:(id)arg0 fromRole:(long long)arg1 toRole:(long long)arg2 currentUser:(id)arg3 myRole:(unsigned long long)arg4 itsRole:(unsigned long long)arg5 previewConfig:(id)arg6;
- (void)handleUrl:(id)arg0 fromRole:(long long)arg1 toRole:(long long)arg2 currentUser:(id)arg3 myRole:(unsigned long long)arg4 itsRole:(unsigned long long)arg5 previewConfig:(id)arg6;
- (void)handleLikeButtonTappedInMore:(id)arg0 currentUser:(id)arg1;
- (void)handleAdventureInviteEntry:(id)arg0 currentUser:(id)arg1;
- (void)beginUploadDiggMessage:(id)arg0 scene:(id)arg1;
- (void)setDiggCount;
- (void)endUploadDiggMessage;
- (void)selectUserProfileStyle:(long long)arg0 smartSwitchEnabled:(BOOL)arg1 needUpdate:(BOOL)arg2 config:(id)arg3 currentUser:(id)arg4;
- (id)parseLiveText:(id)arg0;

@end
