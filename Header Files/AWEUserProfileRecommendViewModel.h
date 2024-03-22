//
//     Generated by private class-dump
//

@class NSArray, NSMutableSet, AWEUserModel;

@interface AWEUserProfileRecommendViewModel : NSObject {
    BOOL _preloadsProfileUser;
    BOOL _isRequestOnAir;
    AWEUserModel *_user;
    NSArray *_realUserList;
    long long _relationType;
    long long _commonUserCount;
    NSMutableSet *_trackUserSet;
}

@property (nonatomic) BOOL isRequestOnAir;
@property (retain, nonatomic) NSMutableSet *trackUserSet;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSArray *realUserList;
@property (nonatomic) BOOL preloadsProfileUser;
@property (nonatomic) long long relationType;
@property (nonatomic) long long commonUserCount;

- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (void)setRelationType:(long long)arg0;
- (id)URLForNetworkService;
- (void)followUser:(id)arg0 completion:(id /* block */)arg1;
- (id)paramsForNetworkService;
- (void)unfollowUser:(id)arg0 completion:(id /* block */)arg1;
- (void)trackFollow:(id)arg0;
- (void)trackQuickReplyWithEventType:(id)arg0;
- (BOOL)canLightInteractUser:(id)arg0;
- (void)lightInteractUser:(id)arg0 followButton:(id)arg1 avatarView:(id)arg2 cellView:(id)arg3;
- (void)impressionLightInteractUser:(id)arg0;
- (id)lightInteractTitleForUser:(id)arg0;
- (id)lightInteractIcon;
- (long long)commonUserCount;
- (void)setCommonUserCount:(long long)arg0;
- (id)realUserList;
- (void)transferToProfileForUser:(id)arg0;
- (void)showEditAliasAlertForUser:(id)arg0;
- (void)setRealUserList:(id)arg0;
- (void)monitorReasonSameCheck:(id)arg0;
- (void)p_filterRealUserList:(id)arg0 type:(long long)arg1;
- (void)setTrackUserSet:(id)arg0;
- (BOOL)p_shouldRecommendDisplayContactsName:(id)arg0;
- (void)setAliasForUser:(id)arg0 alias:(id)arg1 completion:(id /* block */)arg2;
- (id)p_liteUserToUser:(id)arg0;
- (void)trackFollowCancel:(id)arg0;
- (void)monitorContactCheck:(id)arg0;
- (id)trackUserSet;
- (BOOL)preloadsProfileUser;
- (void)setPreloadsProfileUser:(BOOL)arg0;
- (void)setUser:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (id)initWithUser:(id)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (long long)relationType;

@end
