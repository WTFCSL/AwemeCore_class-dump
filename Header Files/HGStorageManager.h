//
//     Generated by private class-dump
//

@class FMDatabaseQueue, HGKVStorage;

@interface HGStorageManager : NSObject {
    BOOL _oldPkgTableExists;
    BOOL _usageTableExist;
    BOOL _inuseTableExist;
    BOOL _updateTableExist;
    BOOL _extensionTableExist;
    BOOL _usageRecordTableExist;
    BOOL _preloadInfoTableExist;
    FMDatabaseQueue *_dbQueue;
    HGKVStorage *_storage;
    FMDatabaseQueue *_oldDBQueue;
    HGKVStorage *_subsribeHistoryStorage;
}

@property (retain, nonatomic) FMDatabaseQueue *oldDBQueue;
@property (retain, nonatomic) HGKVStorage *storage;
@property (retain, nonatomic) HGKVStorage *subsribeHistoryStorage;
@property (nonatomic) BOOL oldPkgTableExists;
@property (retain, nonatomic) FMDatabaseQueue *dbQueue;

+ (long long)maxFileSizeForAppID:(id)arg0;
+ (id)appModelFromData:(id)arg0;
+ (id)modelDataFromAppModel:(id)arg0;
+ (id)appModelExtensionFromData:(id)arg0;
+ (id)modelExtensionDataFromAppModel:(id)arg0;
+ (id)dateFromTimestamp:(long long)arg0;
+ (id)sharedManager;
+ (long long)currentTimestamp;
+ (void)clearSharedManager;

- (id)queryPkgReadTypeOfAppId:(id)arg0 versionMark:(id)arg1 name:(id)arg2;
- (void)replaceInToPkgInfoWithAppId:(id)arg0 name:(id)arg1 versionMark:(id)arg2 readType:(unsigned long long)arg3;
- (void)deleteDebugAppModelOfAppId:(id)arg0;
- (void)setInuseAppModel:(id)arg0 forAppID:(id)arg1;
- (void)setUpdateAppModel:(id)arg0 forAppID:(id)arg1;
- (void)deletePkgInfoOfAppId:(id)arg0 versionMark:(id)arg1;
- (void)deletePkgInfosOfAppId:(id)arg0;
- (BOOL)oldPkgTableExists;
- (id)queryOldPkgNamesWithAppId:(id)arg0;
- (void)deleteOldPkgNameWithAppId:(id)arg0;
- (id)schemaUrlsOfPreloadInfoTable;
- (id)installedAppIds;
- (void)batchDeleteProtectionRecordNotInAppIds:(id)arg0;
- (id)selectAllProtectedAppIds;
- (void)batchInsertProtections:(id)arg0 updateProtections:(id)arg1;
- (id)queryProtectionWithAppId:(id)arg0;
- (void)updateProtection:(id)arg0 withAppId:(id)arg1;
- (id)getExtensionAppModelForAppID:(id)arg0;
- (void)setExtensionAppModel:(id)arg0 forAppID:(id)arg1;
- (long long)getLastLaunchTimeForAppID:(id)arg0;
- (void)updateUserInfoWithAppId:(id)arg0 newUser:(BOOL)arg1 duration:(int)arg2;
- (void)insertUserInfoWithAppId:(id)arg0 did:(id)arg1 aid:(id)arg2 newUser:(BOOL)arg3 duration:(int)arg4;
- (void)findNewUserWithAppId:(id)arg0 completion:(id /* block */)arg1;
- (id)getUpdateAppModelsForAppIDs:(id)arg0;
- (id)getInuseAppModelsForAppIDs:(id)arg0;
- (void)removeAllMetaAndPkgInfoWithAppId:(id)arg0;
- (double)queryRecentAccessTimeOfAppId:(id)arg0;
- (void)removeAllMetaModelForAppId:(id)arg0;
- (id)queryDebugAppModelOfAppId:(id)arg0;
- (void)updateDebugAppModel:(id)arg0;
- (id)appIdsOfPkgBeyondLimit:(unsigned long long)arg0 withReadType:(unsigned long long)arg1;
- (id)appIdsOfPkgBeyondLimit:(unsigned long long)arg0 withExcludedReadTypes:(id)arg1;
- (id)appIDsInPreloadInfoTable;
- (id)appIdsFromUsageInfoOfTypes:(id)arg0 limit:(unsigned long long)arg1;
- (BOOL)hasInUseAppModelWithId:(id)arg0;
- (id)allInuseAppIDs;
- (void)setBatchInuseAppModels:(id)arg0;
- (BOOL)isExistedOldVersionDB;
- (void)removeOldVersionDB;
- (void)setLastLaunchTime:(long long)arg0 forAppID:(id)arg1 type:(long long)arg2 limit:(unsigned long long)arg3;
- (void)clearAllTable;
- (id)appIdsOfPkgReadType:(unsigned long long)arg0 withCount:(unsigned long long)arg1;
- (void)replaceIntoPreloadInfoWithSchemaUrls:(id)arg0;
- (id)appIDsInPreloadInfoBeforeTime:(long long)arg0;
- (void)deletePreloadInfoWithAppIDs:(id)arg0;
- (id)appIDsInPreloadInfoBeyondLimit:(long long)arg0;
- (void)setOldPkgTableExists:(BOOL)arg0;
- (long long)getLatestLaunchTimeForWebApp;
- (long long)getUsageAppCount;
- (id)getLatestLaunchGamesWithLimit:(unsigned long long)arg0;
- (void)clearUsageInfoTable;
- (id)allInuseAppModel;
- (void)clearInuseInfoTable;
- (id)allUpdateAppModel;
- (void)clearUpdateInfoTable;
- (id)allExtensionAppModel;
- (void)clearExtensionInfoTable;
- (void)clearDebugAppTable;
- (long long)queryCountOfPkgInfoWithAppId:(id)arg0 versionMark:(id)arg1 readType:(unsigned long long)arg2;
- (void)updatePkgInfoAcessTimeWithAppId:(id)arg0 versionMark:(id)arg1 name:(id)arg2 readType:(unsigned long long)arg3;
- (void)deletePkgInfoOfAppId:(id)arg0 versionMark:(id)arg1 name:(id)arg2;
- (void)clearPkgInfoTable;
- (id)oldDBQueue;
- (void)setOldDBQueue:(id)arg0;
- (id)subsribeHistoryStorage;
- (void)setSubsribeHistoryStorage:(id)arg0;
- (void)createUsageRecordWithAppID:(id)arg0 startTime:(long long)arg1 duration:(long long)arg2 scene:(id)arg3 subScene:(id)arg4;
- (id)getUsageRecordByAppIDs:(id)arg0;
- (void)deleteExpireUsageRecordByStartTime:(long long)arg0;
- (void)deleteOldUsageTableIfNeed;
- (void)setStorage:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)storage;
- (void)dealloc;
- (id)dbQueue;
- (void)setDbQueue:(id)arg0;

@end