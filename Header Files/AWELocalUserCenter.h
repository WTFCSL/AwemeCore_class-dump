//
//     Generated by private class-dump
//

@class NSString, AWELocalUserCenterTableConfig, NSMutableDictionary, NSDictionary, AWELocalUserCenterDatabaseManager, NSMutableSet, NSNumber, AWELocalUserCenterDataController;
@protocol IESLCMessageHandlerProtocol;

@interface AWELocalUserCenter : NSObject <IESLCMessageHandlerService, AWEUserMessage> {
    NSMutableSet *_checkedAwemeSet;
    AWELocalUserCenterDatabaseManager *_databaseManager;
    AWELocalUserCenterDataController *_dataController;
    NSDictionary *_tableConfigs;
    AWELocalUserCenterTableConfig *_familiarTableConfig;
    AWELocalUserCenterTableConfig *_friendTableConfig;
    AWELocalUserCenterTableConfig *_userTableConfig;
    AWELocalUserCenterTableConfig *_colorRingTableConfig;
    NSMutableDictionary *_needDeleteUidDict;
    NSMutableDictionary *_updateUserDict;
    NSNumber *_currentFriendsCount;
}

@property (retain, nonatomic) AWELocalUserCenterDatabaseManager *databaseManager;
@property (retain, nonatomic) AWELocalUserCenterDataController *dataController;
@property (retain, nonatomic) NSDictionary *tableConfigs;
@property (retain, nonatomic) AWELocalUserCenterTableConfig *familiarTableConfig;
@property (retain, nonatomic) AWELocalUserCenterTableConfig *friendTableConfig;
@property (retain, nonatomic) AWELocalUserCenterTableConfig *userTableConfig;
@property (retain, nonatomic) AWELocalUserCenterTableConfig *colorRingTableConfig;
@property (retain, nonatomic) NSMutableDictionary *needDeleteUidDict;
@property (retain, nonatomic) NSMutableDictionary *updateUserDict;
@property (retain, nonatomic) NSNumber *currentFriendsCount;
@property (retain, nonatomic) NSMutableSet *checkedAwemeSet;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearDB;
+ (id)sharedCenter;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishTapTAIsFriendWithUser:(id)arg0 isFriend:(BOOL)arg1;
- (void)didFinishCloseFriendsWithUser:(id)arg0 status:(long long)arg1;
- (void)didFinishSetRemarkWithUser:(id)arg0;
- (void)willStartSwitchAccountWithUser:(id)arg0;
- (void)didFinishRemoveFansWithUser:(id)arg0;
- (void)didDislikeUserWithContext:(id)arg0 error:(id)arg1;
- (void)ieslc_messageHandler:(id)arg0 didReceiveMsg:(id)arg1;
- (void)setDataController:(id)arg0;
- (void)fetchUserCenterDataWhenColdLaunch;
- (id)getAllUsersFromTable:(id)arg0;
- (void)updateUsers:(id)arg0 andDeleteUsers:(id)arg1 tableName:(id)arg2 completion:(id /* block */)arg3;
- (id)getUserWithUid:(id)arg0 tableName:(id)arg1;
- (BOOL)enableFetchData;
- (void)setCheckedAwemeSet:(id)arg0;
- (id)colorRingTableConfig;
- (void)addTableConfig:(id)arg0;
- (id)familiarTableConfig;
- (id)friendTableConfig;
- (id)userTableConfig;
- (id)tableConfigs;
- (void)setTableConfigs:(id)arg0;
- (void)fetchDataWithSource:(long long)arg0;
- (void)fetchDataWithTables:(id)arg0 source:(long long)arg1;
- (id)colorRingQueryParam;
- (id)commonQueryParam;
- (void)processTableWithModel:(id)arg0 tableConfig:(id)arg1 tables:(id)arg2 source:(long long)arg3;
- (id)updateUserDict;
- (id)needDeleteUidDict;
- (void)getAllUsersFromTable:(id)arg0 checkValidation:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)getAllUsersFromTable:(id)arg0 checkValidation:(BOOL)arg1;
- (id)getTableConfig:(id)arg0;
- (id)currentFriendsCount;
- (void)setCurrentFriendsCount:(id)arg0;
- (void)reportUserCenterWithTableName:(id)arg0 isFrontier:(BOOL)arg1;
- (id)getUserWithUid:(id)arg0 tableName:(id)arg1 checkValidation:(BOOL)arg2;
- (void)friendCountChangedNotification;
- (void)colorRingChangedNotificationWithUpdateUsers:(id)arg0 deletedUsers:(id)arg1;
- (void)updateUsers:(id)arg0 andDeleteUsers:(id)arg1 tableName:(id)arg2 shouldSendNoti:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)deleteUsers:(id)arg0 tableName:(id)arg1 forceDelete:(BOOL)arg2;
- (void)setNeedDeleteUidDict:(id)arg0;
- (void)setUpdateUserDict:(id)arg0;
- (void)disableCurrentDataController;
- (void)deleteUser:(id)arg0 tableName:(id)arg1;
- (void)unfollowUser:(id)arg0 table:(id)arg1;
- (void)updateLocalUsers:(id)arg0 tableName:(id)arg1;
- (void)compensateUserCenterWithTableName:(id)arg0 userIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)getAllRelatedModels:(id)arg0 checkValidation:(BOOL)arg1;
- (void)updateFriendTableWithProfileUser:(id)arg0;
- (id)checkedAwemeSet;
- (void)setFamiliarTableConfig:(id)arg0;
- (void)setFriendTableConfig:(id)arg0;
- (void)setUserTableConfig:(id)arg0;
- (void)setColorRingTableConfig:(id)arg0;
- (id)init;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (void)setDatabaseManager:(id)arg0;
- (id)friendsCount;
- (void)applicationDidEnterBackground:(id)arg0;
- (id)databaseManager;
- (id)getAllTables;
- (void)dealloc;
- (id)dataController;
- (void)setupConfig;

@end