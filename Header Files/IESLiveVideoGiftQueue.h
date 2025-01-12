//
//     Generated by private class-dump
//

@class NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESLiveVideoGiftQueue : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
    NSMutableArray *_array;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (retain, nonatomic) NSMutableArray *array;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

- (void)enqueue_l:(id)arg0;
- (id)dequeueAll;
- (id)array;
- (id)init;
- (id)semaphore;
- (void).cxx_destruct;
- (void)setSemaphore:(id)arg0;
- (void)enqueue:(id)arg0;
- (void)setArray:(id)arg0;
- (void)dealloc;
- (id)dequeue:(unsigned long long)arg0;

@end
