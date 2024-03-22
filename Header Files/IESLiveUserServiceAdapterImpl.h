//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveUserServiceAdapterImpl : IESLiveBaseAdapter <IESLiveUserServiceAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSameWithUser:(id)arg0;
- (id)currentLoginUser;
- (BOOL)isCurrentLoginUserWithID:(id)arg0;
- (BOOL)isPhoneBinded;
- (void)unfollowUser:(id)arg0 completion:(id /* block */)arg1;
- (void)loginWithUserInfo:(id)arg0;
- (void)loginWithUserInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)syncUserWithRoomID:(id)arg0 completion:(id /* block */)arg1;
- (void)followUserByLogin:(id)arg0 completion:(id /* block */)arg1;
- (void)followUserByLogin:(id)arg0 trackParams:(id)arg1 completion:(id /* block */)arg2;
- (void)requestUserProfile:(id)arg0 secUid:(id)arg1 roomID:(id)arg2 anchorID:(id)arg3 secAnchorID:(id)arg4 requestFrom:(long long)arg5 completion:(id /* block */)arg6;
- (void)requestUserProfile:(id)arg0 secUid:(id)arg1 room:(id)arg2 requestFrom:(long long)arg3 completion:(id /* block */)arg4;
- (void)fetchUserSettingInfoWithSecTargetUserID:(id)arg0 anchorID:(id)arg1 roomID:(id)arg2 completion:(id /* block */)arg3;
- (void)updateUserSettingInfoWithUserID:(id)arg0 RoomID:(id)arg1 anchorID:(id)arg2 hasUserGiftSwitch:(BOOL)arg3 userGiftSwith:(id)arg4 hasProfileStyle:(BOOL)arg5 profileStyle:(id)arg6 completion:(id /* block */)arg7;
- (void)showBindMobileWithCompletion:(id /* block */)arg0;
- (unsigned long long)loginUserRoleInCurrentRoom;
- (BOOL)isCurrentRoomAnchor:(id)arg0;
- (id)registerFollowStatusChangedWithCallback:(id /* block */)arg0;
- (id)loginStatusChanged;
- (void)unfollowUser:(id)arg0 inRoom:(id)arg1 needSync:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)unfollowUser:(id)arg0 trackParams:(id)arg1 inRoom:(id)arg2 needSync:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)followUser:(id)arg0 inRoom:(id)arg1 needSync:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)followUser:(id)arg0 trackParams:(id)arg1 inRoom:(id)arg2 needSync:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)updatePayGrade:(id)arg0;
- (BOOL)isLoginWithLiveAuth;
- (BOOL)useHostInfo;

@end
