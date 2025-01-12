//
//     Generated by private class-dump
//

@class NSString, FMDatabase;

@interface BDUGSyncDBBase : NSObject {
    int _version;
    NSString *_path;
    FMDatabase *_db;
}

@property (copy, nonatomic) NSString *path;
@property (nonatomic) int version;
@property (retain, nonatomic) FMDatabase *db;

- (void)configureDB;
- (void)createTable;
- (void)upgradeFrom:(int)arg0 to:(int)arg1;
- (void)downgradeFrom:(int)arg0 to:(int)arg1;
- (void)setPath:(id)arg0;
- (void)setDb:(id)arg0;
- (id)init;
- (id)db;
- (void)setVersion:(int)arg0;
- (void).cxx_destruct;
- (BOOL)open;
- (BOOL)close;
- (id)path;
- (int)version;
- (id)initWithPath:(id)arg0 version:(int)arg1;

@end
