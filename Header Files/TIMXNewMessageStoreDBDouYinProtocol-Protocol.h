//
//     Generated by private class-dump
//

@protocol TIMXNewMessageStoreDBDouYinProtocol <NSObject>

+ (id)dbDouYin_conversationTables;
+ (id)dbDouYin_otherTables;
+ (id)dbDouYin_messageTables;

- (void)dbDouYin_closeDB;
- (id)dbDouYin_databasePath:(id)arg0 tag:(long long)arg1;
- (id)dbDouYin_databasePaths:(id)arg0 tag:(long long)arg1;
- (float)dbDouYin_dbRelatedFileSizeWithDBPath:(id)arg0;
- (float)dbDouYin_messageDBSizeWithUserID:(id)arg0;
- (void)dbDouYin_setup;
- (id)dbDouYin_currentUserDatabase:(long long)arg0 conversationID:(id)arg1;
- (id)dbDouYin_currentMessageDatabaseWithDBIndex:(long long)arg0;
- (id)dbDouYin_allMessageDatabase;
- (void)dbDouYin_closeDatabaseForUser:(id)arg0 completion:(id /* block */)arg1;
- (void)dbDouYin_userDidLogout:(id)arg0;
- (void)dbDouYin_appWillBeTerminated;
- (id)dbDouYin_setupDabtabseWithUserID:(id)arg0;
- (long long)dbDouYin_conversationIDToMessageDBIndex:(id)arg0;
- (void)dbDouYin_cleanDatabaseCache:(id)arg0;
- (void)dbDouYin_configWithDatabase:(id)arg0;

@end