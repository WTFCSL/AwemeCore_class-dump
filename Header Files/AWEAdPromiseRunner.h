//
//     Generated by private class-dump
//

@class AWEAdPromise, NSArray, NSString, RxPromise, AWEAdPromiseContext;

@interface AWEAdPromiseRunner : HTSService <AWEAdPromiseExecuteProtocol, AWEAdPromiseRunnerProtocol> {
    BOOL _isTaskTypeRunnerSuccess;
    BOOL _finishWhenSuccess;
    BOOL _isAsyncTaskGroup;
    BOOL _isTaskTypeRunner;
    NSArray *_runningTasks;
    NSArray *_taskTypes;
    AWEAdPromiseContext *_context;
    AWEAdPromise *_runnerResult;
    id /* block */ _errorTask;
    RxPromise *_asyncTaskGroupResult;
}

@property (nonatomic) BOOL isAsyncTaskGroup;
@property (nonatomic) BOOL isTaskTypeRunner;
@property (retain, nonatomic) RxPromise *asyncTaskGroupResult;
@property (retain, nonatomic) NSArray *runningTasks;
@property (retain, nonatomic) NSArray *taskTypes;
@property (retain, nonatomic) AWEAdPromiseContext *context;
@property (readonly, nonatomic) AWEAdPromise *runnerResult;
@property (copy, nonatomic) id /* block */ errorTask;
@property (nonatomic) BOOL isTaskTypeRunnerSuccess;
@property (nonatomic) BOOL finishWhenSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)runTasks:(id)arg0 withContext:(id /* block */)arg1;
+ (id)runTasks:(id)arg0 withRawContext:(id)arg1;
+ (id)availableTaskFilter:(id)arg0;
+ (id)taskTypeGroup:(id)arg0;
+ (id)asyncTaskGroup:(id)arg0;

- (id)runnerResult;
- (id)performWhenFinished:(id /* block */)arg0 scheduler:(id)arg1;
- (void)whenCancelled:(id /* block */)arg0;
- (void)setRunningTasks:(id)arg0;
- (void)setErrorTask:(id /* block */)arg0;
- (void)runTaskWithContext:(id)arg0;
- (id /* block */)errorTask;
- (void)setIsAsyncTaskGroup:(BOOL)arg0;
- (void)setTaskTypes:(id)arg0;
- (void)setFinishWhenSuccess:(BOOL)arg0;
- (void)setIsTaskTypeRunner:(BOOL)arg0;
- (id)taskTypes;
- (id)taskForType:(long long)arg0 context:(id)arg1;
- (BOOL)isTaskTypeRunner;
- (void)buildTaskTypeRunner;
- (BOOL)isAsyncTaskGroup;
- (void)asyncRunAllTask;
- (void)runTaskAtIndex:(long long)arg0;
- (void)setAsyncTaskGroupResult:(id)arg0;
- (id)asyncTaskGroupResult;
- (BOOL)finishWhenSuccess;
- (id)configFinishWhenSuccess:(BOOL)arg0;
- (BOOL)isTaskTypeRunnerSuccess;
- (void)setIsTaskTypeRunnerSuccess:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)finish;
- (void)setContext:(id)arg0;
- (id)scheduler;
- (id)context;
- (void)cancel;
- (id)promise;
- (id)runningTasks;

@end