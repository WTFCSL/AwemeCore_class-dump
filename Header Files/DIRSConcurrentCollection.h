//
//     Generated by private class-dump
//

@interface DIRSConcurrentCollection : NSObject {
    id raw;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
}

+ (id)collectionWithRaw:(id)arg0;

- (void)operate:(id /* block */)arg0;
- (id)access:(id /* block */)arg0;
- (void)addObserver:(id)arg0 forKeyPath:(id)arg1 options:(unsigned long long)arg2 context:(void *)arg3;
- (void)removeObserver:(id)arg0 forKeyPath:(id)arg1 context:(void *)arg2;
- (id)init;
- (void).cxx_destruct;
- (id)rawValue;
- (void)dealloc;

@end