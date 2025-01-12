//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface BCAABundleServiceCenter : NSObject {
    struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } *_servicelock;
    NSMutableDictionary *_bindedServiceMap;
    struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } *_listenerlock;
    NSMutableDictionary *_serviceListeners;
}

+ (id)defaultCenter;

- (id)getBundleNameOfService:(id)arg0;
- (id)getInstanceService:(id)arg0 fromBundle:(id)arg1;
- (Class)getClassService:(id)arg0 fromBundle:(id)arg1;
- (BOOL)registerService:(id)arg0 toClass:(Class)arg1 forBundle:(id)arg2 instancePointer:(id)arg3;
- (BOOL)isServiceRegistered:(id)arg0;
- (BOOL)bindService:(id)arg0 toBundle:(id)arg1;
- (void)broadcastServiceRegistration:(id)arg0;
- (void)addServiceListener:(id)arg0 forService:(id)arg1;
- (void)removeServiceListener:(id)arg0 forService:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
