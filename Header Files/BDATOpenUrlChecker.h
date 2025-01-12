//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableArray, NSRecursiveLock;

@interface BDATOpenUrlChecker : NSObject {
    NSDictionary *_showEvents;
    NSRecursiveLock *_lock;
    NSMutableArray *_openUrlQueue;
}

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableArray *openUrlQueue;
@property (copy, nonatomic) NSDictionary *showEvents;

+ (id)sharedChecker;

- (void)setOpenUrlQueue:(id)arg0;
- (id)openUrlQueue;
- (void)removeExpirationItem;
- (void)C2S_processAlert:(id)arg0;
- (void)matchingFailedWithUrl:(id)arg0 matchNumber:(long long)arg1;
- (id)showEvents;
- (void)addOpenUrlApp;
- (void)checkOpenUrlAppWithUrl:(id)arg0;
- (void)setShowEvents:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;

@end
