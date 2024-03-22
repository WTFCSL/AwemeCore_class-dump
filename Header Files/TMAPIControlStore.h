//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface TMAPIControlStore : NSObject {
    NSMutableDictionary *_storage;
}

@property (retain, nonatomic) NSMutableDictionary *storage;

- (id)tm_fetchContext;
- (void)tm_saveResult:(id)arg0;
- (id)tm_fetchTaskRecords;
- (id)tm_fetchResult;
- (id)fetchObjectWithKey:(id)arg0;
- (void)saveObject:(id)arg0 withKey:(id)arg1;
- (void)tm_saveStack:(id)arg0;
- (void)tm_saveContext:(id)arg0;
- (void)tm_saveContext:(id)arg0 withTaskIdentity:(id)arg1;
- (id)tm_fetchStack;
- (void)tm_addTaskRecord:(id)arg0;
- (void)setStorage:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)storage;
- (void)cleanup;
- (void)setup;

@end