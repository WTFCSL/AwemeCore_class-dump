//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AWEPOITrackerService : HTSService <AWEPOITrackerService> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _interceptorReadWriteLock;
    NSMutableArray *_interceptors;
}

@property (retain, nonatomic) NSMutableArray *interceptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)injectBlockExecuteAfterServiceInit:(id /* block */)arg0;

- (void)onServiceInit;
- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)addInterceptor:(id)arg0;
- (id)interceptors;
- (void)setInterceptors:(id)arg0;
- (void)removeInterceptor:(id)arg0;
- (void)trackEvent:(id)arg0 params:(id)arg1 btmInfo:(id)arg2;
- (void)verifyEvent:(id)arg0 params:(id)arg1 checkTypes:(unsigned long long)arg2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
