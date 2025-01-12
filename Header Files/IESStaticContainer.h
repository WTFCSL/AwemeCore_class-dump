//
//     Generated by private class-dump
//

@class NSMutableSet, NSMutableDictionary;

@interface IESStaticContainer : IESContainer <CameraKit.ServiceContainerType> {
    NSMutableSet *_registeredStaticServices;
    NSMutableDictionary *_multiRegisteredService;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableSet *registeredStaticServices;
@property (retain, nonatomic) NSMutableDictionary *multiRegisteredService;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;

- (void)registerService:(id /* block */)arg0 to:(id)arg1;
- (id)initWithParentContainer:(id)arg0;
- (id)resolveCurrentContainerObject:(id)arg0;
- (void)registerServiceArray:(id /* block */)arg0 to:(id)arg1;
- (id)resolveViaStaticProviders:(id)arg0;
- (id)handleSingleMethod:(SEL)arg0 withProtocols:(id)arg1 isOldMethod:(BOOL)arg2;
- (id)handleNormalMethod:(SEL)arg0 withProtocols:(id)arg1 isOldMethod:(BOOL)arg2;
- (id)handleWeakMethod:(SEL)arg0 withProtocols:(id)arg1 isOldMethod:(BOOL)arg2;
- (id)multiRegisteredService;
- (id)performSelector:(SEL)arg0 withparameterCount:(unsigned long long)arg1;
- (id)registeredStaticServices;
- (void)setRegisteredStaticServices:(id)arg0;
- (void)setMultiRegisteredService:(id)arg0;
- (void).cxx_destruct;
- (struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })lock;
- (void)setLock:(struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })arg0;

@end
