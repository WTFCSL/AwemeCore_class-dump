//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface HMDStoreMemoryDB : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _memoryDBMutex;
    NSMutableDictionary *_databaseDic;
}

@property (retain, nonatomic) NSMutableDictionary *databaseDic;

- (id)tableWithTableName:(id)arg0 appID:(id)arg1;
- (id)databaseDic;
- (BOOL)insertObjects:(id)arg0 into:(id)arg1 appID:(id)arg2;
- (id)getAllObjectsWithTableName:(id)arg0 appID:(id)arg1;
- (id)getObjectsWithTableName:(id)arg0 appID:(id)arg1 limit:(long long)arg2;
- (void)deleteAllObjectsFromTable:(id)arg0 appID:(id)arg1;
- (void)deleteObjectsFromTable:(id)arg0 appID:(id)arg1 count:(long long)arg2;
- (long long)recordCountForTable:(id)arg0 appID:(id)arg1;
- (void)setDatabaseDic:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
