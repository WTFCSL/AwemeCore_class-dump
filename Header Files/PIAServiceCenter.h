//
//     Generated by private class-dump
//

@class NSMapTable;

@interface PIAServiceCenter : NSObject {
    NSMapTable *protocolClassTable;
    NSMapTable *singletonTable;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } protoClzLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } singletonLock;
}

@property (retain, nonatomic) NSMapTable *protocolClassTable;
@property (retain, nonatomic) NSMapTable *singletonTable;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } protoClzLock;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } singletonLock;

+ (void)bindProtocol:(id)arg0 service:(Class)arg1;
+ (id)defaultCenter;
+ (id)getService:(id)arg0;

- (void)bindProtocol:(id)arg0 service:(Class)arg1;
- (void)unbindProtocol:(id)arg0;
- (void)setProtocolClassTable:(id)arg0;
- (void)setSingletonTable:(id)arg0;
- (Class)getServiceClassWithProtocol:(id)arg0;
- (id)protocolClassTable;
- (id)singletonTable;
- (struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })protoClzLock;
- (void)setProtoClzLock:(struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })arg0;
- (struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })singletonLock;
- (void)setSingletonLock:(struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })arg0;
- (id)init;
- (void).cxx_destruct;
- (void)removeService:(id)arg0;
- (id)getService:(id)arg0;

@end
