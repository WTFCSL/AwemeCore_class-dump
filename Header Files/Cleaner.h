//
//     Generated by private class-dump
//

@class NSString, Detecter, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface Cleaner : NSObject {
    struct sqlite3 { } *sqlite;
    BOOL _isStop;
    Detecter *_detecter;
    NSString *_DBPath;
    NSMutableArray *_keyList;
    NSObject<OS_dispatch_semaphore> *_wait_clean_sem;
}

@property (retain) Detecter *detecter;
@property (copy) NSString *DBPath;
@property (retain) NSMutableArray *keyList;
@property BOOL isStop;
@property (retain) NSObject<OS_dispatch_semaphore> *wait_clean_sem;

- (BOOL)isStop;
- (void)setIsStop:(BOOL)arg0;
- (void)stopClean;
- (void)startClean;
- (void)tryLoadKeyFromDB;
- (id)detecter;
- (id)wait_clean_sem;
- (void)cleanCompleted;
- (id)DBPath;
- (void)setDetecter:(id)arg0;
- (void)setDBPath:(id)arg0;
- (void)setWait_clean_sem:(id)arg0;
- (void)setKeyList:(id)arg0;
- (BOOL)openDataBase;
- (id)initWithDatabasePath:(id)arg0;
- (void).cxx_destruct;
- (void)stop;
- (id)keyList;
- (void)dealloc;
- (void)startSync;

@end