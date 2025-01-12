//
//     Generated by private class-dump
//

@class NSString, RTVJetWebSocketNotifyHandler, NSObject;
@protocol OS_dispatch_queue, RTVJetWebSocketBridgeInterface, RxInjector;

@interface RTVJetWebSocketClient : NSObject {
    struct unordered_map<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *, BDHLCKeyHashID, BDHLCKeyEqualID, std::allocator<std::pair<NSString *const, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>>> { struct __hash_table<std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, BDHLCKeyHashID, BDHLCKeyEqualID>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, BDHLCKeyEqualID, BDHLCKeyHashID>, std::allocator<std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, BDHLCKeyHashID, BDHLCKeyEqualID>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, RxDeferred<id<RTVJetWebSocketMessageProtocol>> *>, BDHLCKeyEqualID, BDHLCKeyHashID>> { float __value_; } __p3_; } __table_; } _callbacks;
    struct Mutex { int _type; union { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _plain; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _recursive; } ; } _lock;
    id<RTVJetWebSocketBridgeInterface> _webSocketBridge;
    id<RxInjector> _injector;
    NSObject<OS_dispatch_queue> *_messageSendQueue;
    NSObject<OS_dispatch_queue> *_messageReceiveQueue;
    NSString *_businessTag;
    RTVJetWebSocketNotifyHandler *_notifyHandler;
}

@property (retain, nonatomic) id<RTVJetWebSocketBridgeInterface> webSocketBridge;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageSendQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy, nonatomic) NSString *businessTag;
@property (readonly, nonatomic) RTVJetWebSocketNotifyHandler *notifyHandler;

+ (id)rxInjectorCreateWithArgs:(id)arg0 injector:(id)arg1;

- (void)rxAwakeFromPropertyInjection;
- (void)registerNotifyHandler:(id)arg0 ofService:(int)arg1;
- (id)webSocketBridge;
- (void)setWebSocketBridge:(id)arg0;
- (void)unregisterNotifyHandler:(id)arg0 ofService:(int)arg1;
- (id)initWithBusinessTag:(id)arg0;
- (id)businessTag;
- (id)messageSendQueue;
- (void)__storeRequestCallback:(id)arg0 forKey:(id)arg1;
- (void)__removeRequestCallbackForKey:(id)arg0;
- (id)callbackAndRemoveForKey:(id)arg0;
- (void).cxx_destruct;
- (id)messageReceiveQueue;
- (id)injector;
- (id)enqueue:(id)arg0;
- (void)handleMessage:(id)arg0;
- (id).cxx_construct;
- (id)notifyHandler;

@end
