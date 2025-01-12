//
//     Generated by private class-dump
//

@class NSLock, NSString, NSMutableDictionary;

@interface HGOnlineTimeReportedTaskManager : NSObject <HGWarmBootMessage> {
    NSLock *_lock;
    NSMutableDictionary *_tasks;
}

@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)removeTaskWithUniqueId:(id)arg0;
- (id)getTaskWithUniqueId:(id)arg0;
- (void)addTask:(id)arg0 uniqueId:(id)arg1;
- (void)cleanWarmCacheWithUniqueID:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)dealloc;
- (void)setLock:(id)arg0;

@end
