//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface BUDBSecurityTable : BUDBTable {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)_defaultQueue;

- (void)insert:(id)arg0 callback:(id /* block */)arg1;
- (void)update:(id)arg0 where:(id)arg1 callback:(id /* block */)arg2;
- (void)selectWithWhere:(id)arg0 orderBy:(struct { int x0; char *x1; })arg1 limit:(struct { int x0; int x1; })arg2 modleClass:(Class)arg3 callback:(id /* block */)arg4;
- (void)deleteWithWhere:(id)arg0 callback:(id /* block */)arg1;
- (id)initWithDatabasePath:(id)arg0 tableName:(id)arg1 sqlite:(struct sqlite3 { } *)arg2;
- (BOOL)update:(id)arg0 where:(id)arg1;
- (id)selectWithWhere:(id)arg0 orderBy:(struct { int x0; char *x1; })arg1 limit:(struct { int x0; int x1; })arg2 modelClass:(Class)arg3;
- (long long)selectAllCount;
- (BOOL)deleteWithWhere:(id)arg0;
- (BOOL)updateWithSqlString:(id)arg0 where:(id)arg1;
- (void).cxx_destruct;
- (BOOL)insert:(id)arg0;
- (id)queue;
- (BOOL)deleteAll;
- (void)setQueue:(id)arg0;

@end
