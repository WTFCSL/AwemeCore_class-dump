//
//     Generated by private class-dump
//

@class FMDatabaseQueue, TTTrackerCustomTable, NSSet;

@interface TTTrackerCustomEvent : NSObject {
    BOOL _isSending;
    FMDatabaseQueue *_databaseQueue;
    TTTrackerCustomTable *_table;
    NSSet *_unsupportTables;
}

@property (retain, nonatomic) FMDatabaseQueue *databaseQueue;
@property (nonatomic) BOOL isSending;
@property (retain, nonatomic) TTTrackerCustomTable *table;
@property (retain, nonatomic) NSSet *unsupportTables;

+ (id)sharedInstance;

- (void)clearAllEventData;
- (void)setUnsupportTables:(id)arg0;
- (id)unsupportTables;
- (void)onBatchEndWithResultSuccess:(BOOL)arg0;
- (void)collectCustomEvent:(id)arg0 data:(id)arg1;
- (id)allCustomEvents;
- (id)databaseQueue;
- (id)init;
- (void).cxx_destruct;
- (void)setTable:(id)arg0;
- (void)setDatabaseQueue:(id)arg0;
- (id)table;
- (void)dealloc;
- (BOOL)isSending;
- (void)setIsSending:(BOOL)arg0;

@end
