//
//     Generated by private class-dump
//

@protocol AWEPublishService <HTSService>

- (BOOL)hasTaskExecuting;
- (void)executeTask;
- (BOOL)hasAsyncTaskExecuting;
- (id)firstShowProgressTask;
- (id)secondShowProgressTaskWithFilterBlock:(id /* block */)arg0;
- (BOOL)checkConflicts;
- (void)retryRetryTask:(id)arg0;
- (void)retryRetryTaskWithTaskId:(id)arg0 taskConfigBlock:(id /* block */)arg1;
- (void)removeRetryTask;
- (void)removeCachedTaskID:(id)arg0;
- (id)cachedTaskIds;
- (BOOL)isContainQuickSharePublishTask;
- (BOOL)isContainQuickSharePublishTaskWithFeedType:(long long)arg0;
- (id)retryTaskId;
- (long long)normalFlowTaskCount;
- (id)taskInQueueWithTaskId:(id)arg0;
- (id)taskInQueueWithCreateId:(id)arg0;
- (void)taskExistsWithTaskId:(id)arg0 completion:(id /* block */)arg1;
- (id)currentTask;
- (id)allTasks;
- (BOOL)addTask:(id)arg0;

@end
