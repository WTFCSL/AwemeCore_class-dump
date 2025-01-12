//
//     Generated by private class-dump
//

@class NSMutableOrderedSet;
@protocol AppMonitorTask;

@interface AppMonitorTaskPool : NSThread {
    NSMutableOrderedSet<AppMonitorTask> *taskList;
    float miniInterval;
}

+ (id)sharedAppMonitorTaskPool;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;

- (void)addTask:(id)arg0 forKey:(id)arg1;
- (void)startMainLoop;
- (id)init;
- (void)main;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)dealloc;
- (void)removeTaskForKey:(id)arg0;

@end
