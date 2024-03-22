//
//     Generated by private class-dump
//

@class IESBridgeMethodRegistry, NSArray, NSMutableDictionary, NSHashTable;
@protocol IESBridgeEngineInterceptor, BDHMWebViewJSBMonitorAdapterProtocol, IESBridgeEngineDelegate, IESBridgeExecutor;

@interface IESBridgeEngine : NSObject {
    id<IESBridgeEngineDelegate> _delegate;
    id<IESBridgeEngineInterceptor> _interceptor;
    id<IESBridgeExecutor> _executor;
    NSArray *_methods;
    IESBridgeMethodRegistry *_methodRegistry;
    NSMutableDictionary *_invokeMethodCallbacks;
    NSMutableDictionary *_messageMap;
    long long _uniqueID;
    NSMutableDictionary *_protocolVersions;
    long long _bridgeObjectsDeleted;
}

@property (class, readonly, nonatomic) NSHashTable *interceptors;

@property (readonly, copy, nonatomic) NSArray *bridgeMethods;
@property (weak, nonatomic) id<BDHMWebViewJSBMonitorAdapterProtocol> bdhm_jsbDelegate;
@property (retain, nonatomic) NSMutableDictionary *invokeMethodCallbacks;
@property (retain, nonatomic) NSMutableDictionary *messageMap;
@property (nonatomic) long long uniqueID;
@property (retain, nonatomic) NSMutableDictionary *protocolVersions;
@property (nonatomic) long long bridgeObjectsDeleted;
@property (weak, nonatomic) id<IESBridgeEngineDelegate> delegate;
@property (weak, nonatomic) id<IESBridgeEngineInterceptor> interceptor;
@property (readonly, weak, nonatomic) id<IESBridgeExecutor> executor;
@property (readonly, copy, nonatomic) NSArray *methods;
@property (retain, nonatomic) IESBridgeMethodRegistry *methodRegistry;

+ (void)bdx_engineReady;
+ (void)addInterceptor:(id)arg0;
+ (id)interceptors;
+ (void)removeInterceptor:(id)arg0;
+ (void)p_bridgeEngine:(id)arg0 willHandleBridgeMessage:(id)arg1;
+ (void)p_bridgeEngine:(id)arg0 willCallbackWithMessage:(id)arg1;
+ (void)p_bridgeEngine:(id)arg0 didCallbackWithMessage:(id)arg1;
+ (void)p_bridgeEngine:(id)arg0 didHandleBridgeMessage:(id)arg1;

- (void)setInterceptor:(id)arg0;
- (id)interceptor;
- (void)setMessageMap:(id)arg0;
- (id)messageMap;
- (void)invokeCallbackWithMessage:(id)arg0 statusCode:(long long)arg1 resultBlock:(id /* block */)arg2;
- (BOOL)canHandleMessage:(id)arg0;
- (id)bridgeMethods;
- (void)fireEvent:(id)arg0 withParams:(id)arg1 callback:(id /* block */)arg2;
- (void)invokeJSWithCallbackID:(id)arg0 statusCode:(long long)arg1 params:(id)arg2;
- (void)setCompletionHandler:(id /* block */)arg0 forKey:(id)arg1;
- (void)handlerJS2NativeBridgeMessage:(id)arg0;
- (void)fireEvent:(id)arg0 withParams:(id)arg1;
- (void)registerHandler:(id /* block */)arg0 forJSMethod:(id)arg1 authType:(unsigned long long)arg2;
- (void)handleBridgeMessage:(id)arg0 completionHandler:(id /* block */)arg1;
- (id)bdx_legacy_monitorInitWithExecutor:(id)arg0;
- (void)bdx_invokeJSWithCallbackID:(id)arg0 statusCode:(long long)arg1 params:(id)arg2;
- (void)fireEvent:(id)arg0 withParams:(id)arg1 status:(long long)arg2 callback:(id /* block */)arg3;
- (void)bdx_fireEvent:(id)arg0 withParams:(id)arg1 status:(long long)arg2 callback:(id /* block */)arg3;
- (id)bdx_completionHandlerMaps;
- (id)methodRegistry;
- (id)completionHandlerMaps;
- (void)registerHandler:(id /* block */)arg0 forJSMethod:(id)arg1 authType:(unsigned long long)arg2 methodNamespace:(id)arg3;
- (void)registerJS2NativeHandlerBlock:(id /* block */)arg0 forJSMethod:(id)arg1 authType:(unsigned long long)arg2 methodNamespace:(id)arg3;
- (id)protocolVersions;
- (void)_callbackWithBridgeMessage:(id)arg0 resultBlock:(id /* block */)arg1 statusCode:(long long)arg2;
- (void)_willFireEventWithMessage:(id)arg0;
- (void)_invokeJSHandleMessageFromAppMethodWithMessage:(id)arg0 callback:(id /* block */)arg1;
- (void)_willHandleBridgeMessage:(id)arg0;
- (id)invokeMethodCallbacks;
- (void)executeMethodWithMessage:(id)arg0;
- (id)bridgeMethodForJS2NativeMessage:(id)arg0 statusCode:(long long *)arg1;
- (id)callBackBridgeMessageForBridgeMessage:(id)arg0 statusCode:(long long)arg1;
- (void)authorizeMessage:(id)arg0 method:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)isAuthorizeMethodUsingInternalAuthManagerForJS2NativeMessage:(id)arg0 method:(id)arg1;
- (void)_willFetchQueueWithInfo:(id)arg0;
- (void)handleBridgeMessage:(id)arg0;
- (void)_didFetchQueueWithInfo:(id)arg0;
- (void)trackService:(id)arg0 statusCode:(long long)arg1 category:(id)arg2 version:(id)arg3;
- (void)deleteAllPipers;
- (void)setBridgeObjectsDeleted:(long long)arg0;
- (void)executeMethod:(id)arg0 withMessage:(id)arg1;
- (void)_didHandleBridgeMessage:(id)arg0;
- (void)_willCallbackWithMessage:(id)arg0;
- (void)_didCallbackWithMessage:(id)arg0;
- (void)_didFireEventWithMessage:(id)arg0;
- (void)_preprocessMessage:(id)arg0;
- (void)_enumerateInterceptorsUsingSelector:(SEL)arg0 WithBridgeMessage:(id)arg1;
- (void)flushBridgeMessagesFromURL:(id)arg0;
- (void)setMethodRegistry:(id)arg0;
- (void)setInvokeMethodCallbacks:(id)arg0;
- (void)setProtocolVersions:(id)arg0;
- (long long)bridgeObjectsDeleted;
- (id)bdhm_jsbDelegate;
- (void)setBdhm_jsbDelegate:(id)arg0;
- (void)puzzle_registerJS2NativeHandlerBlock:(id /* block */)arg0 forJSMethod:(id)arg1 authType:(unsigned long long)arg2 methodNamespace:(id)arg3;
- (void)puzzle_addBridgeMethodSync:(id)arg0;
- (void)puzzle_registerHandler:(id /* block */)arg0 forJSMethod:(id)arg1 authType:(unsigned long long)arg2 methodNamespace:(id)arg3;
- (void).cxx_destruct;
- (long long)uniqueID;
- (id)initWithExecutor:(id)arg0;
- (void)setUniqueID:(long long)arg0;
- (id)executor;
- (id)delegate;
- (id)methods;
- (void)setDelegate:(id)arg0;

@end
