//
//     Generated by private class-dump
//

@class __RxKVOObserverCollector, NSMutableSet;

@interface __RxBlockKVOController : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    __RxKVOObserverCollector *_collector;
    NSMutableSet *_tokens;
}

- (void)__removeToken:(id)arg0;
- (void)__addToken:(id)arg0;
- (id)addObserver:(id)arg0 owner:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
