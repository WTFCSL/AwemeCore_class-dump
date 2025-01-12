//
//     Generated by private class-dump
//

@class NSString, BDECIMClientConfig, BDECIMWebSocket;
@protocol IESLCMessageHandlerProtocol, IESLCConnectManagerProtocol;

@interface BDECIMWebSocketBridge : NSObject <ECOMTIMLongConnectionClientUnderlayingWebSocket, TIMXLongConnectionClientUnderlayingWebSocket, IESLCConnectService, IESLCMessageHandlerService> {
    id /* block */ notifyNewMessageCallback;
    BDECIMWebSocket *_webSocket;
    BDECIMClientConfig *_config;
}

@property (retain, nonatomic) BDECIMWebSocket *webSocket;
@property (retain, nonatomic) BDECIMClientConfig *config;
@property (copy, nonatomic) id /* block */ notifyNewMessageCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCConnectManagerProtocol> connectManager;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

- (void)ieslc_messageHandler:(id)arg0 didReceiveMsg:(id)arg1;
- (void)ieslc_onConnectionStateChanged:(id)arg0 connectionState:(unsigned long long)arg1 url:(id)arg2;
- (void)setupLongConnectionServiceWithToken:(id)arg0 config:(id)arg1;
- (void)openLongConnection;
- (void)closeLongConnection;
- (BOOL)asyncSendMessage:(id)arg0;
- (BOOL)webSocketBreak;
- (void)setWebSocket:(id)arg0;
- (void)setupWebsock:(id)arg0 token:(id)arg1;
- (void)onWSMessageDidReceive:(id)arg0;
- (void)onLongConnectionStateChanged:(id)arg0;
- (id)webSocket;
- (id)addCustomHeadersToOriginalMessageHedaers:(id)arg0;
- (id /* block */)notifyNewMessageCallback;
- (void)postBizCustomMethodsEvent:(id)arg0 method:(long long)arg1 service:(long long)arg2;
- (id)generateNextMessage;
- (void)setNotifyNewMessageCallback:(id /* block */)arg0;
- (id)init;
- (void)setConfig:(id)arg0;
- (BOOL)sendMessage:(id)arg0;
- (void).cxx_destruct;
- (id)config;

@end
