//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXDataMigration : NSObject <TIMXInstanceScopeSingleton> {
    BOOL _hasFinishMigration;
    TIMXSDKInstance *_r;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) BOOL hasFinishMigration;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasFinishMigration;
- (void)removeOldFilesIfNeeded;
- (BOOL)hasMigrateFailureCountOver;
- (void)removeSplitFilesIfNeeded;
- (BOOL)isOldDBExist;
- (double)oldDBFileSize;
- (void)migrateDBData;
- (void)removeDBFilesWithDBPath:(id)arg0;
- (void)handleInitNewDBError:(id)arg0;
- (void)migrateMsgVersion;
- (void)migrationStrangerWithOriginalDB:(id)arg0;
- (unsigned long long)migrationNormalDBWithOriginalDB:(id)arg0 messageStore:(id)arg1 tables:(id)arg2 convIDs:(id)arg3 userID:(id)arg4 dbTag:(long long)arg5 trackParams:(id)arg6;
- (unsigned long long)newMigrationMessageDataWithOriginalDB:(id)arg0 messageStore:(id)arg1 userID:(id)arg2 trackParams:(id)arg3;
- (unsigned long long)migrationMessageDataWithOriginalDB:(id)arg0 messageStore:(id)arg1 userID:(id)arg2 trackParams:(id)arg3;
- (long long)messageDBIndexToTag:(long long)arg0;
- (void)copyMsgFile:(id)arg0 toPath:(id)arg1 error:(id *)arg2;
- (id)getVersionValueWithInbox:(int)arg0 versionType:(long long)arg1 pullerIndexType:(long long)arg2;
- (double)allDBFileSizeWithDBPath:(id)arg0;
- (id)allDBFilesWithDBPath:(id)arg0;
- (unsigned long long)oldMigrationMessageDataWithOriginalDB:(id)arg0 messageStore:(id)arg1 userID:(id)arg2 trackParams:(id)arg3;
- (void)setHasFinishMigration:(BOOL)arg0;
- (id)userID;
- (void).cxx_destruct;
- (double)fileSize:(id)arg0;
- (void)migrateIfNeeded;
- (id)queue;
- (void)setQueue:(id)arg0;
- (BOOL)canMigrate;
- (id)initWithRootObject:(id)arg0;

@end