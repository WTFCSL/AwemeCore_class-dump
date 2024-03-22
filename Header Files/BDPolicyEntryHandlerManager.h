//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface BDPolicyEntryHandlerManager : NSObject {
    NSMutableArray *_handlers;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
}

@property (retain, nonatomic) NSMutableArray *handlers;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;

+ (id)sharedInstance;

- (void)addEntryHandler:(id)arg0;
- (id)getHandlers;
- (void)removeEntryHandler:(id)arg0;
- (void)setHandlers:(id)arg0;
- (id)handlers;
- (id)init;
- (void).cxx_destruct;
- (struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })lock;
- (void)dealloc;
- (void)setLock:(struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })arg0;
- (void)removeAllHandlers;

@end
