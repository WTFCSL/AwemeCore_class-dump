//
//     Generated by private class-dump
//

@class FMDatabaseQueue;

@interface HGKVDatabase : NSObject {
    FMDatabaseQueue *_dbQueue;
}

@property (retain, nonatomic) FMDatabaseQueue *dbQueue;

- (id)initWithDBWithPath:(id)arg0;
- (id)storageForName:(id)arg0;
- (BOOL)dropStorage:(id)arg0;
- (void).cxx_destruct;
- (void)close;
- (id)dbQueue;
- (void)setDbQueue:(id)arg0;

@end
