//
//     Generated by private class-dump
//

@class NSMapTable, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BDPNetworkPriorityManager : NSObject <BDPBootLifeCycleMessage, BDPWarmBootMessage, BDPNetworkPriorityManagerInterface> {
    long long _maxDeferQueueCount;
    double _deferQueueTimeout;
    NSObject<OS_dispatch_queue> *_lowQueue;
    NSMapTable *_deferMap;
    NSMapTable *_deferTimerMap;
    NSMutableSet *_activedAppid;
    NSObject<OS_dispatch_semaphore> *_sem;
}

@property (retain) NSObject<OS_dispatch_queue> *lowQueue;
@property (retain) NSMapTable *deferMap;
@property (retain) NSMapTable *deferTimerMap;
@property (retain) NSMutableSet *activedAppid;
@property (retain) NSObject<OS_dispatch_semaphore> *sem;
@property long long maxDeferQueueCount;
@property double deferQueueTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)cleanWarmCacheWithUniqueID:(id)arg0;
- (void)applicationLCPArrive:(id)arg0 timestamp:(double)arg1;
- (id)deferMap;
- (void)setLowQueue:(id)arg0;
- (id)lowQueue;
- (id)receiveRequest:(id)arg0;
- (void)setDeferMap:(id)arg0;
- (void)setActivedAppid:(id)arg0;
- (void)setMaxDeferQueueCount:(long long)arg0;
- (long long)maxDeferQueueCount;
- (void)setDeferQueueTimeout:(double)arg0;
- (BOOL)isDeferRequest:(id)arg0;
- (id)activedAppid;
- (double)deferQueueTimeout;
- (void)timeoutWithAppID:(id)arg0;
- (long long)execDeferTask:(id)arg0;
- (id)deferTimerMap;
- (void)setDeferTimerMap:(id)arg0;
- (id)sem;
- (id)init;
- (void).cxx_destruct;
- (void)setSem:(id)arg0;

@end
