//
//     Generated by private class-dump
//

@class NSNumber;

@protocol IESLiveUIAspectProvider <NSObject>

@property (readonly, nonatomic) NSNumber *roomID;
@property (readonly, nonatomic) BOOL hideOthersNickname;

- (void)updateRoomAuth:(id)arg0;
- (id)addAvatar:(id)arg0 beforeAvatarlayout:(id)arg1 withUserID:(id)arg2 viewNormalLayoutBlock:(id /* block */)arg3;
- (BOOL)hideUserAvatar:(id)arg0;
- (BOOL)hideUserNickname:(id)arg0;
- (BOOL)hideUserNicknameBySecUserId:(id)arg0;
- (BOOL)hideAllUserNicknameExceptCurrentUser:(id)arg0;
- (BOOL)hideAllUserNicknameExceptCurrentUserSecId:(id)arg0;
- (BOOL)hideUserNicknameWhenAtUser;
- (BOOL)hideOthersNickname;
- (id)roomID;
- (id)initWithRoom:(id)arg0;

@end