//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, NSArray, IESLiveVisibleScopeFriendsDataController, NSMutableDictionary, HTSLiveApi, NSMutableArray, IESLiveVisibleScopeHistoryDataController, IESLiveVisibleScopeFansDataController;

@interface AWEVisibleScopeManager : NSObject {
    BOOL _isRequestOnAir;
    unsigned long long _currentDetailPageType;
    NSMutableArray *_selectedUidList;
    NSMutableArray *_selectedUserList;
    NSString *_curUserID;
    NSArray *_originSelectedUserList;
    NSMutableDictionary *_trackClickSource;
    NSMutableArray *_strangerList;
    IESLiveVisibleScopeHistoryDataController *_historyDataController;
    IESLiveVisibleScopeFriendsDataController *_friendsDataController;
    IESLiveVisibleScopeFansDataController *_fansDataController;
    IESLiveVisibleScopeFansDataController *_followingDataController;
    HTSLiveApi *_api;
    HTSEventContext *_trackContext;
}

@property (retain, nonatomic) NSString *curUserID;
@property (retain, nonatomic) NSMutableArray *selectedUidList;
@property (retain, nonatomic) NSMutableArray *selectedUserList;
@property (retain, nonatomic) NSArray *originSelectedUserList;
@property (nonatomic) unsigned long long currentDetailPageType;
@property (nonatomic) BOOL isRequestOnAir;
@property (retain, nonatomic) NSMutableDictionary *trackClickSource;
@property (retain, nonatomic) NSMutableArray *strangerList;
@property (retain, nonatomic) IESLiveVisibleScopeHistoryDataController *historyDataController;
@property (retain, nonatomic) IESLiveVisibleScopeFriendsDataController *friendsDataController;
@property (retain, nonatomic) IESLiveVisibleScopeFansDataController *fansDataController;
@property (retain, nonatomic) IESLiveVisibleScopeFansDataController *followingDataController;
@property (retain, nonatomic) HTSLiveApi *api;
@property (retain, nonatomic) HTSEventContext *trackContext;

+ (id)p_keyWithUserID:(id)arg0;
+ (id)liveUserForRequestLiveInfo:(id)arg0;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (BOOL)isUserSelected:(id)arg0;
- (void)setFriendsDataController:(id)arg0;
- (id)friendsDataController;
- (void)p_fetchFriendsData:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)p_fetchFansData:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)fansDataController;
- (void)setFansDataController:(id)arg0;
- (id)selectedUserList;
- (void)setSelectedUserList:(id)arg0;
- (id)initWithType:(unsigned long long)arg0 AwemeID:(id)arg1 trackContext:(id)arg2;
- (void)updateInitialSelectedUsers:(id)arg0;
- (id)selectedUidList;
- (void)uploadFullSelectedUserListWithType:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (BOOL)checkAndAddOrRemoveUser:(id)arg0 source:(unsigned long long)arg1;
- (BOOL)isStrangerListContainsUser:(id)arg0;
- (id)toastStrOfPrivateAccount;
- (void)trackSelectedUsers:(unsigned long long)arg0;
- (id)correctSelectUidListWithUpdateFailedList:(id)arg0 cancelFailedList:(id)arg1;
- (void)updateVisibleUserListOf:(unsigned long long)arg0;
- (BOOL)isAwemeUserSelected:(id)arg0;
- (id)dataControllerForType:(unsigned long long)arg0;
- (id)userListForType:(unsigned long long)arg0;
- (void)refreshAllUserList:(id /* block */)arg0;
- (void)loadMoreAllUserListWithCurrentType:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (id)originSelectedUserList;
- (id)historyDataController;
- (void)setOriginSelectedUserList:(id)arg0;
- (void)p_checkAndRemoveSelectedStrangerUser;
- (id)strangerList;
- (void)fetchLastChoiceUsers:(id /* block */)arg0;
- (BOOL)isUserStranger:(id)arg0;
- (unsigned long long)currentDetailPageType;
- (void)setSelectedUidList:(id)arg0;
- (BOOL)canAddSelectedUser;
- (void)p_markSelectedSource:(unsigned long long)arg0;
- (id)trackClickSource;
- (void)p_fetchFollowingData:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)followingDataController;
- (void)p_updateVisibleUserListOf:(unsigned long long)arg0 isUpdate:(BOOL)arg1 userList:(id)arg2;
- (id)curUserID;
- (id)requestParamsWithType:(unsigned long long)arg0;
- (id)uidListStr:(id)arg0;
- (void)setCurrentDetailPageType:(unsigned long long)arg0;
- (void)setCurUserID:(id)arg0;
- (void)setTrackClickSource:(id)arg0;
- (void)setStrangerList:(id)arg0;
- (void)setHistoryDataController:(id)arg0;
- (void)setFollowingDataController:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)api;
- (void)removeUserWithUserID:(id)arg0;
- (void)setApi:(id)arg0;

@end
