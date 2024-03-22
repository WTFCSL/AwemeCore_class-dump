//
//     Generated by private class-dump
//

@class NSMapTable, NSArray, NSHashTable, NSObject;
@protocol CKDDData, OS_dispatch_semaphore;

@interface CKDDManager : NSObject {
    id<CKDDData> _data;
    id /* block */ _recorderCreator;
    NSHashTable *_subscribers;
    NSMapTable *_keypathObservers;
    NSMapTable *_triggerObservers;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSMapTable *_executors;
    NSMapTable *_delayExecutors;
    NSArray *_invocationQueue;
}

@property (retain, nonatomic) id<CKDDData> data;
@property (copy, nonatomic) id /* block */ recorderCreator;
@property (retain) NSHashTable *subscribers;
@property (retain) NSMapTable *keypathObservers;
@property (retain) NSMapTable *triggerObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain) NSMapTable *executors;
@property (retain) NSMapTable *delayExecutors;
@property (retain) NSArray *invocationQueue;

- (void)setExecutors:(id)arg0;
- (id)observeKeypath:(id)arg0 block:(id /* block */)arg1;
- (id)interfaceOf:(id)arg0;
- (id)initWith:(id)arg0 modules:(id)arg1;
- (void)addImplementation:(id /* block */)arg0 forActions:(id)arg1;
- (id)observeKeypaths:(id)arg0 keys:(id)arg1 block:(id /* block */)arg2;
- (void)addImplementation:(id /* block */)arg0 forActions:(id)arg1 into:(id)arg2;
- (id)delayExecutors;
- (void)setDelayExecutors:(id)arg0;
- (id /* block */)recorderCreator;
- (void)mergeAndNotify:(id)arg0;
- (id)keypathObservers;
- (id)triggerObservers;
- (void)setTriggerObservers:(id)arg0;
- (void)setKeypathObservers:(id)arg0;
- (id)observeTriggers:(id)arg0 block:(id /* block */)arg1;
- (id)observeKeypaths:(id)arg0 block:(id /* block */)arg1;
- (void)setRecorderCreator:(id /* block */)arg0;
- (id)data;
- (id)semaphore;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)setSemaphore:(id)arg0;
- (id)subscribers;
- (id)invocationQueue;
- (void)setInvocationQueue:(id)arg0;
- (void)addSubscriber:(id)arg0;
- (void)removeSubscriber:(id)arg0;
- (id)executors;
- (void)setSubscribers:(id)arg0;

@end