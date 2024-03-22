//
//     Generated by private class-dump
//

@class NSString;
@protocol RxInjector;

@interface RTVAWELongConnectionBridge : NSObject <AWERTVLongConnectionMessage, RTVJetWebSocketBridgeInterface> {
    id /* block */ onMessageReceived;
    id<RxInjector> _injector;
    unsigned long long _connectionState;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (nonatomic) unsigned long long connectionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ onMessageReceived;

- (BOOL)sendPushMessage:(id)arg0;
- (void)aweRTVLongConnectionStateChanged:(unsigned long long)arg0 url:(id)arg1;
- (void)aweRTVLongConnectionDidReceiveMsg:(id)arg0;
- (id /* block */)onMessageReceived;
- (void)p_handleDidReceiveLongconnectionWithMsg:(id)arg0;
- (void)setOnMessageReceived:(id /* block */)arg0;
- (unsigned long long)connectionState;
- (id)init;
- (void).cxx_destruct;
- (id)injector;
- (void)setConnectionState:(unsigned long long)arg0;
- (void)dealloc;

@end
