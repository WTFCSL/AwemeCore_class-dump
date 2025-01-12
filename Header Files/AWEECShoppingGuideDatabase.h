//
//     Generated by private class-dump
//

@class FMDatabaseQueue;

@interface AWEECShoppingGuideDatabase : NSObject {
    FMDatabaseQueue *_dbQueue;
}

@property (retain, nonatomic) FMDatabaseQueue *dbQueue;

+ (id)sharedInstance;

- (void)updateMessageWithModel:(id)arg0;
- (void)insertMessageWithModel:(id)arg0;
- (id)loadAllMessageModels;
- (void)insertOrUpdateMessageWithModel:(id)arg0;
- (void)deleteAllMessage;
- (id)tableName;
- (void).cxx_destruct;
- (void)open;
- (id)dbQueue;
- (void)setDbQueue:(id)arg0;

@end
