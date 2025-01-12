//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface ACCAuditAudioTaskQueue : NSObject <ACCAuditAudioTaskDelegate> {
    NSMutableDictionary *_tasks;
    long long _timerTag;
    double _retryInterval;
}

@property (retain, nonatomic) NSMutableDictionary *tasks;
@property (nonatomic) long long timerTag;
@property (nonatomic) double retryInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)delayStart;
+ (id)shared;

- (void)p_loadTasks;
- (void)p_finishTask:(id)arg0 error:(id)arg1 mainErrorCode:(long long)arg2;
- (void)p_safeAddTaskWithBuilder:(id)arg0;
- (void)p_startIfNeededImpl;
- (void)p_startTimerIfNeeded;
- (BOOL)p_shouldExecuteTask:(id)arg0;
- (void)p_finishTask:(id)arg0;
- (long long)timerTag;
- (void)setTimerTag:(long long)arg0;
- (id)p_trackExtraWithTask:(id)arg0;
- (void)addTaskWithBuilder:(id)arg0;
- (void)task:(id)arg0 didFinishWithError:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)didBecomeActive:(id)arg0;
- (void)dealloc;
- (id)tasks;
- (void)setTasks:(id)arg0;
- (void)startIfNeeded;
- (double)retryInterval;
- (void)setRetryInterval:(double)arg0;

@end
