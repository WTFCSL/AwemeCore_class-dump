//
//     Generated by private class-dump
//

@interface AWEAIGCAsyncTaskCacheManager : NSObject

+ (void)storeSucceedTaskId:(id)arg0 withDraftId:(id)arg1;
+ (void)storeTasks:(id)arg0 taskIds:(id)arg1;
+ (void)retrieveCacheWithInjectingMessenger:(id)arg0 completion:(id /* block */)arg1;
+ (void)removeSucceedTaskIdToDraftIdMappingWithTaskId:(id)arg0;
+ (void)removeSucceedTaskIdToDraftIdMappingWithDraftId:(id)arg0;
+ (id)queryDraftBySucceedTaskId:(id)arg0;

@end
