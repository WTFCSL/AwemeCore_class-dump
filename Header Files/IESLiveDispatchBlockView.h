//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, IESLiveGCDTimer, NSDictionary, NSMutableArray, NSDateFormatter, NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface IESLiveDispatchBlockView : NSObject <IESLiveDispatchSamplingService> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
    long long _overviewLevel;
    NSDictionary *_dispatchCenter;
    NSMapTable *_taskContainer;
    NSMapTable *_dispatchGroupQueues;
    NSMutableDictionary *_blockOverviewSnapshot;
    NSMutableArray *_mainQueue;
    NSObject<OS_dispatch_queue> *_handlerBlockQueue;
    NSDateFormatter *_dateFormatter;
    NSDictionary *_liveDispatchMetrics;
    long long _limitCount;
    IESLiveGCDTimer *_autoTriggerTimer;
}

@property (retain, nonatomic) NSMapTable *taskContainer;
@property (retain, nonatomic) NSMapTable *dispatchGroupQueues;
@property (retain, nonatomic) NSMutableDictionary *blockOverviewSnapshot;
@property (retain, nonatomic) NSMutableArray *mainQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerBlockQueue;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDictionary *liveDispatchMetrics;
@property (nonatomic) long long limitCount;
@property (retain, nonatomic) IESLiveGCDTimer *autoTriggerTimer;
@property (readonly, nonatomic) long long overviewLevel;
@property (readonly, nonatomic) NSDictionary *dispatchCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)setMainQueue:(id)arg0;
- (void)reportDispatchInfo;
- (void)startAutoSampling;
- (void)stopAutoSampling;
- (id)dispatchGroupQueues;
- (id)taskContainer;
- (long long)overviewLevel;
- (id)liveDispatchMetrics;
- (void)autoTriggerDispatchSampling;
- (void)setAutoTriggerTimer:(id)arg0;
- (id)autoTriggerTimer;
- (id)blockOverviewSnapshot;
- (id)handlerBlockQueue;
- (id)getMaxMetrics:(id)arg0 metrics:(id)arg1;
- (id)getTopMetrics:(id)arg0;
- (void)handlerDispatchNode:(id)arg0 subsummary:(id)arg1;
- (void)dispatchMainBlockNode:(id)arg0;
- (void)dispatchSubBlockNode:(id)arg0;
- (long long)maxQueues;
- (void)enmainqueue:(id)arg0;
- (void)demainqueue;
- (void)setTaskContainer:(id)arg0;
- (void)setDispatchGroupQueues:(id)arg0;
- (void)setBlockOverviewSnapshot:(id)arg0;
- (void)setHandlerBlockQueue:(id)arg0;
- (void)setLiveDispatchMetrics:(id)arg0;
- (long long)limitCount;
- (id)dispatchQueues;
- (id)init;
- (void).cxx_destruct;
- (void)setDateFormatter:(id)arg0;
- (id)dateFormatter;
- (void)dequeue;
- (void)setLimitCount:(long long)arg0;
- (id)mainQueue;
- (void)enqueue:(id)arg0;
- (id)dispatchCenter;
- (void)clean;

@end
