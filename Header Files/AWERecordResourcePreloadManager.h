//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary;

@interface AWERecordResourcePreloadManager : NSObject {
    NSMutableDictionary *_taskQueue;
    NSArray *_allEffect;
}

@property (retain, nonatomic) NSMutableDictionary *taskQueue;
@property (retain, nonatomic) NSArray *allEffect;

+ (void)clearAllResourceDownloadTask;
+ (void)effectResourcePreloadWithIds:(id)arg0 effects:(id)arg1 requestExtraParam:(id)arg2;
+ (void)musicResourcePreloadWithId:(id)arg0 music:(id)arg1;
+ (void)executeRecordMusicProcessTaskWithExtraParam:(id)arg0;
+ (void)executeRecordEffectProcessTask;
+ (id)resourceResultHandler;
+ (BOOL)checkHasEffectResourceTaskWithEffectId:(id)arg0;
+ (BOOL)checkHasMusicResourceTaskWithMusicId:(id)arg0;
+ (id)defaultManager;

- (id)taskWithKey:(id)arg0;
- (void)removeTaskQueueWithKey:(id)arg0;
- (id)allEffect;
- (void)setAllEffect:(id)arg0;
- (id)recordNormalResourceAsyncHandler;
- (id)createDownloadTaskWithType:(unsigned long long)arg0 resourceModel:(id)arg1 completion:(id /* block */)arg2;
- (void)removeAllTaskQueue;
- (void)saveTaskQueueWithKey:(id)arg0 task:(id)arg1;
- (void).cxx_destruct;
- (void)setTaskQueue:(id)arg0;
- (id)taskQueue;

@end
