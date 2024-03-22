//
//     Generated by private class-dump
//

@interface HTSLiveUserAPI : HTSLiveApi {
    id /* block */ _userCallBack;
}

@property (copy, nonatomic) id /* block */ userCallBack;

- (void)fetchUserAdminOperationInfoWithUserID:(id)arg0 roomID:(id)arg1 actionType:(long long)arg2 completion:(id /* block */)arg3;
- (void)applyCustomerServiceForAdminOperationWithUserID:(id)arg0 actionType:(long long)arg1 roomID:(id)arg2 scene:(id)arg3 completion:(id /* block */)arg4;
- (void)requestMyLiveTabWithTabID:(id)arg0 queryIndex:(long long)arg1 completion:(id /* block */)arg2;
- (void)managerAnonymousUserWithRoomID:(id)arg0 didSilence:(BOOL)arg1 finished:(id /* block */)arg2;
- (void)fetchUserSettingInfoWithSecTargetUserID:(id)arg0 anchorID:(id)arg1 roomID:(id)arg2 completion:(id /* block */)arg3;
- (void)updateUserSettingInfoWithUserID:(id)arg0 RoomID:(id)arg1 anchorID:(id)arg2 hasUserGiftSwitch:(BOOL)arg3 userGiftSwith:(id)arg4 hasProfileStyle:(BOOL)arg5 profileStyle:(id)arg6 completion:(id /* block */)arg7;
- (void)updateUserSettingInfoWithUserID:(id)arg0 RoomID:(id)arg1 anchorID:(id)arg2 hasUserRelationSwitch:(BOOL)arg3 userRelationSwith:(id)arg4 completion:(id /* block */)arg5;
- (void)fetchAllSortedFansGroup:(id)arg0 roomId:(id)arg1 complection:(id /* block */)arg2;
- (id /* block */)userCallBack;
- (void)fetchUserInfoWithParams:(id)arg0 tintTags:(id)arg1 finished:(id /* block */)arg2;
- (id)transformUserProfileExtraToUserExtra:(id)arg0;
- (void)fetchBanUsers:(id)arg0 offset:(id)arg1 count:(id)arg2 completion:(id /* block */)arg3;
- (void)banUser:(id)arg0 secUid:(id)arg1 roomID:(id)arg2 finished:(id /* block */)arg3;
- (void)unbanUser:(id)arg0 secUid:(id)arg1 roomID:(id)arg2 finished:(id /* block */)arg3;
- (void)changeAdministrateStatus:(id)arg0 secUserId:(id)arg1 setAdmin:(BOOL)arg2 roomID:(id)arg3 anchorID:(id)arg4 enterFromMerge:(id)arg5 enterMethod:(id)arg6 finished:(id /* block */)arg7;
- (void)fetchAdministrators:(id)arg0 secAnchorID:(id)arg1 roomID:(id)arg2 completion:(id /* block */)arg3;
- (void)kickout:(id)arg0 secUserId:(id)arg1 roomID:(id)arg2 finished:(id /* block */)arg3;
- (void)fetchKickOutInfos:(id)arg0 offset:(id)arg1 count:(id)arg2 completion:(id /* block */)arg3;
- (void)unKickout:(id)arg0 roomID:(id)arg1 finished:(id /* block */)arg2;
- (void)fetchUserInfo:(id)arg0 secTargetUid:(id)arg1 roomID:(id)arg2 anchorID:(id)arg3 secAnchorID:(id)arg4 requestFrom:(id)arg5 fromRoomEnter:(BOOL)arg6 targetDisplayRole:(long long)arg7 tintTags:(id)arg8 finished:(id /* block */)arg9;
- (void)fetchUserProfileWithParamsModel:(id)arg0 completion:(id /* block */)arg1;
- (void)changeFollowStatusToUser:(id)arg0 secToUser:(id)arg1 roomID:(id)arg2 isFollow:(BOOL)arg3 secAnchorID:(id)arg4 anchorID:(id)arg5 extraParams:(id)arg6 completion:(id /* block */)arg7;
- (void)selectUserProfileStyle:(id)arg0 profileStyle:(long long)arg1 smartSwitchEnabled:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setUserCallBack:(id /* block */)arg0;
- (void).cxx_destruct;

@end
