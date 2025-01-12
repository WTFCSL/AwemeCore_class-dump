//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_group, IESLiveMonitor;

@interface IESLiveCommonDownloadQueue : NSObject {
    BOOL _higherNewPriorityTaskCanBlockRuningLower;
    unsigned long long _maxConcurrentOperationCount;
    NSString *_identifier;
    NSMutableDictionary *_allTaskMap;
    NSMutableDictionary *_taskListMap;
    NSMutableArray *_currentTasks;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_allTaskCompletionList;
    NSObject *_downloadToken;
    id<IESLiveMonitor> _monitor;
    unsigned long long _extraConcurrentOperationCount;
    NSObject<OS_dispatch_group> *_downLoadGroup;
}

@property (retain, nonatomic) NSMutableDictionary *taskListMap;
@property (retain, nonatomic) NSMutableArray *currentTasks;
@property (retain, nonatomic) NSMutableDictionary *allTaskMap;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSMutableArray *allTaskCompletionList;
@property (retain, nonatomic) NSObject *downloadToken;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) unsigned long long extraConcurrentOperationCount;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *downLoadGroup;
@property (nonatomic) unsigned long long maxConcurrentOperationCount;
@property (nonatomic) BOOL higherNewPriorityTaskCanBlockRuningLower;
@property (copy, nonatomic) NSString *identifier;

- (id)currentTasks;
- (void)addTask:(id)arg0 priority:(long long)arg1;
- (void)cancelTask:(id)arg0 includeRunning:(BOOL)arg1;
- (void)cancelAllWithIncludeRunning:(BOOL)arg0;
- (void)addTasks:(id)arg0 priority:(long long)arg1 front:(BOOL)arg2;
- (id)downLoadGroup;
- (void)p_addTaskRemoveObserver:(id)arg0;
- (id)allTaskMap;
- (void)p_logDownloadWithString:(id)arg0;
- (id)taskListWithPriority:(long long)arg0;
- (void)p_startNewTaskIfNeeded;
- (void)p_higherNewPriorityTaskReplaceBlockRuningLowerIfNeeded;
- (void)setExtraConcurrentOperationCount:(unsigned long long)arg0;
- (void)p_monitorDownloadStatus:(id)arg0;
- (void)p_executeAllTaskCompletionListIfNeeded;
- (void)addTasks:(id)arg0 priority:(long long)arg1;
- (id)taskListMap;
- (void)cancelTask:(id)arg0 priority:(long long)arg1 includeRunning:(BOOL)arg2;
- (void)cancelAllWithPriority:(long long)arg0 includeRunning:(BOOL)arg1;
- (unsigned long long)p_realdMaxConcurrentOperationCount;
- (id)p_descendingPriorities;
- (void)p_startTask:(id)arg0;
- (BOOL)higherNewPriorityTaskCanBlockRuningLower;
- (void)p_startExtraConcurrentOperationIfNeeded;
- (void)p_moveRuningTaskToWaiting:(id)arg0;
- (void)p_startSuspendTaskIfNeeded;
- (id)allTaskCompletionList;
- (unsigned long long)extraConcurrentOperationCount;
- (void)suspendAndIncludeRunning:(BOOL)arg0;
- (void)changeTask:(id)arg0 toPriority:(long long)arg1 front:(BOOL)arg2;
- (void)addAllTaskCompletion:(id /* block */)arg0;
- (void)setHigherNewPriorityTaskCanBlockRuningLower:(BOOL)arg0;
- (void)setAllTaskMap:(id)arg0;
- (void)setTaskListMap:(id)arg0;
- (void)setCurrentTasks:(id)arg0;
- (void)setAllTaskCompletionList:(id)arg0;
- (void)setDownLoadGroup:(id)arg0;
- (void)setDownloadToken:(id)arg0;
- (id)downloadToken;
- (id)init;
- (void)setOperationQueue:(id)arg0;
- (void)resume;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;
- (id)identifier;
- (id)operationQueue;
- (void)setMaxConcurrentOperationCount:(unsigned long long)arg0;
- (unsigned long long)maxConcurrentOperationCount;
- (void)setIdentifier:(id)arg0;

@end
