//
//     Generated by private class-dump
//

@class NSString;

@interface TTVideoEngineKVStorage : NSObject {
    NSString *_path;
    NSString *_dbPath;
    NSString *_dataPath;
    NSString *_trashPath;
    struct sqlite3 { } *_db;
    struct __CFDictionary { } *_dbStmtCache;
    double _dbLastOpenErrorTime;
    unsigned long long _dbOpenErrorCount;
    BOOL _errorLogsEnabled;
    BOOL _disableLRU;
    unsigned long long _walSizeLimit;
}

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *dbPath;
@property (readonly, nonatomic) NSString *dbShmPath;
@property (readonly, nonatomic) NSString *dbWalPath;
@property (nonatomic) BOOL errorLogsEnabled;
@property unsigned long long walSizeLimit;
@property BOOL disableLRU;

- (BOOL)_dbOpen;
- (BOOL)_dbInitialize;
- (BOOL)_dbExecute:(id)arg0;
- (BOOL)_dbCheck;
- (struct sqlite3_stmt { } *)_dbPrepareStmt:(id)arg0;
- (BOOL)disableLRU;
- (id)_dbJoinedKeys:(id)arg0;
- (void)_dbBindJoinedKeys:(id)arg0 stmt:(struct sqlite3_stmt { } *)arg1 fromIndex:(int)arg2;
- (id)_dbGetItemFromStmt:(struct sqlite3_stmt { } *)arg0 excludeInlineData:(BOOL)arg1;
- (id)dbShmPath;
- (id)dbWalPath;
- (BOOL)_dbClose;
- (BOOL)_dbSaveWithKey:(id)arg0 value:(id)arg1;
- (BOOL)_dbDeleteItemWithKey:(id)arg0;
- (BOOL)_dbDeleteItemWithKeys:(id)arg0;
- (BOOL)_dbDeleteItemsWithSizeLargerThan:(int)arg0;
- (void)_dbCheckpoint;
- (BOOL)_dbDeleteItemsWithTimeEarlierThan:(int)arg0;
- (int)_dbGetTotalItemSize;
- (id)_dbGetItemSizeInfoOrderByTimeAscWithLimit:(int)arg0;
- (int)_dbGetTotalItemCount;
- (id)_dbGetItemWithKey:(id)arg0 excludeInlineData:(BOOL)arg1;
- (BOOL)_dbUpdateAccessTimeWithKey:(id)arg0;
- (id)_dbGetValueWithKey:(id)arg0;
- (id)_dbGetItemWithKeys:(id)arg0 excludeInlineData:(BOOL)arg1;
- (BOOL)_dbUpdateAccessTimeWithKeys:(id)arg0;
- (id)getItemForKeys:(id)arg0;
- (int)_dbGetItemCountWithKey:(id)arg0;
- (BOOL)removeItemForKeys:(id)arg0;
- (BOOL)removeItemsLargerThanSize:(int)arg0;
- (BOOL)removeItemsEarlierThanTime:(int)arg0;
- (BOOL)removeItemsToFitSize:(int)arg0;
- (void)removeAllItemsWithProgressBlock:(id /* block */)arg0 endBlock:(id /* block */)arg1;
- (id)getItemForKey:(id)arg0;
- (id)getItemInfoForKey:(id)arg0;
- (id)getItemInfoForKeys:(id)arg0;
- (id)getItemValueForKeys:(id)arg0;
- (BOOL)itemExistsForKey:(id)arg0;
- (int)getItemsCount;
- (void)tryTrimWAL;
- (BOOL)errorLogsEnabled;
- (void)setErrorLogsEnabled:(BOOL)arg0;
- (unsigned long long)walSizeLimit;
- (void)setWalSizeLimit:(unsigned long long)arg0;
- (void)setDisableLRU:(BOOL)arg0;
- (int)getItemsSize;
- (BOOL)removeItemsToFitCount:(int)arg0;
- (BOOL)saveItemWithKey:(id)arg0 value:(id)arg1;
- (id)getItemValueForKey:(id)arg0;
- (id)initWithPath:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)_reset;
- (id)path;
- (id)dbPath;
- (BOOL)saveItem:(id)arg0;
- (BOOL)removeAllItems;
- (void)dealloc;
- (BOOL)removeItemForKey:(id)arg0;

@end
