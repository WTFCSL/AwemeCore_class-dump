//
//     Generated by private class-dump
//

@class IESLiveEffectsDownloadQueue, NSMutableArray, NSMutableDictionary;

@interface IESLiveEffectsDownloadTaskStore : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _concurrentCountLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _taskLock;
    long long _conCurrentCount;
    long long _maxConCurrentCount;
    id /* block */ _nodeDequeueBlock;
    IESLiveEffectsDownloadQueue *_queue;
    NSMutableArray *_taskArray;
    NSMutableDictionary *_idToTaskSetMap;
}

@property (retain, nonatomic) IESLiveEffectsDownloadQueue *queue;
@property (retain, nonatomic) NSMutableArray *taskArray;
@property (retain, nonatomic) NSMutableDictionary *idToTaskSetMap;
@property (nonatomic) long long conCurrentCount;
@property (nonatomic) long long maxConCurrentCount;
@property (copy, nonatomic) id /* block */ nodeDequeueBlock;

- (id)taskArray;
- (void)setTaskArray:(id)arg0;
- (void)startQueue;
- (void)processTask:(id)arg0;
- (void)cancelDownloadTaskWithPriority:(unsigned long long)arg0;
- (void)setMaxConCurrentCount:(long long)arg0;
- (void)setNodeDequeueBlock:(id /* block */)arg0;
- (void)notifyLoopNextWithModel:(id)arg0 status:(unsigned long long)arg1;
- (id)idToTaskSetMap;
- (void)monitorDownloadTask:(id)arg0;
- (long long)conCurrentCount;
- (long long)maxConCurrentCount;
- (void)setConCurrentCount:(long long)arg0;
- (id /* block */)nodeDequeueBlock;
- (void)setIdToTaskSetMap:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)queue;
- (void)setQueue:(id)arg0;
- (void)startTask:(id)arg0;

@end
