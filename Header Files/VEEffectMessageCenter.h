//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface VEEffectMessageCenter : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _rw_lock;
    void *_effectMgr;
    NSMutableArray *_observerRefs;
}

@property (nonatomic) void *effectMgr;
@property (retain, nonatomic) NSMutableArray *observerRefs;

+ (id)defaultCenter;

- (id)observerRefs;
- (void)setObserverRefs:(id)arg0;
- (void)p_lockForRW:(id /* block */)arg0;
- (BOOL)p_handleEffectMessageWithID:(unsigned int)arg0 arg1:(int)arg1 arg2:(int)arg2 arg3:(const char *)arg3;
- (void *)effectMgr;
- (void)setEffectMgr:(void *)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)registerObserver:(id)arg0;
- (void)dealloc;
- (void)removeObserver:(id)arg0;

@end