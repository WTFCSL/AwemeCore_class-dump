//
//     Generated by private class-dump
//

@class NSString;

@interface BUDBTable : NSObject {
    struct sqlite3 { } *_handler;
    NSString *_tableName;
    NSString *_path;
}

@property (copy, nonatomic) NSString *tableName;
@property (copy, nonatomic) NSString *path;

- (void)_pbu_logWithCurrentQueueWithSel:(SEL)arg0;
- (void)_pbu_table_errorlogWithSql:(id)arg0 errorMsg:(id)arg1;
- (BOOL)_clostDB;
- (id)_orderBy:(struct { int x0; char *x1; })arg0;
- (id)_limit:(struct { int x0; int x1; })arg0;
- (id)initWithDatabasePath:(id)arg0 tableName:(id)arg1 sqlite:(struct sqlite3 { } *)arg2;
- (BOOL)update:(id)arg0 where:(id)arg1;
- (id)selectWithWhere:(id)arg0 orderBy:(struct { int x0; char *x1; })arg1 limit:(struct { int x0; int x1; })arg2 modelClass:(Class)arg3;
- (long long)selectAllCount;
- (BOOL)deleteWithWhere:(id)arg0;
- (BOOL)updateWithSqlString:(id)arg0 where:(id)arg1;
- (void)setPath:(id)arg0;
- (id)tableName;
- (void).cxx_destruct;
- (id)path;
- (BOOL)insert:(id)arg0;
- (void)setTableName:(id)arg0;
- (BOOL)_openDB;
- (BOOL)deleteAll;

@end