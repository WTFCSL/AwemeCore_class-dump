//
//     Generated by private class-dump
//

@class NSThread;

@interface RxRunLoopScheduler : RxScheduler {
    struct ReadWriteLock { void /* function */ **_vptr$NotCopyableInterface; struct MutexLock { void /* function */ **_vptr$LockingInterface; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _impl; } _mutex; struct ConditionVariable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _condition; } _condition; long long _reader; long long _writer; long long _pending; } _rwl;
    struct __CFRunLoop { } *_cfRunLoop;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_pthread;
    NSThread *_thread;
    struct __CFRunLoopSource { } *_wakeupSource;
    struct __CFRunLoopObserver { } *_autoreleasePoolPushObserver;
    struct __CFRunLoopObserver { } *_autoreleasePoolPopObserver;
}

@property (readonly, nonatomic) struct __CFRunLoop { } *cfRunLoop;

+ (BOOL)supportRunLoop;

- (id)after:(id)arg0 schedule:(id /* block */)arg1;
- (id)after:(id)arg0 repeatingEvery:(double)arg1 withLeeway:(double)arg2 schedule:(id /* block */)arg3;
- (struct __CFRunLoop { } *)cfRunloop;
- (struct __CFRunLoop { } *)cfRunLoop;
- (id)initWithName:(id)arg0 runloop:(id)arg1;
- (void)signal;
- (void).cxx_destruct;
- (id)schedule:(id /* block */)arg0;
- (void)dealloc;
- (id).cxx_construct;

@end
