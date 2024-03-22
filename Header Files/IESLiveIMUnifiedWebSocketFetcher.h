//
//     Generated by private class-dump
//

@interface IESLiveIMUnifiedWebSocketFetcher : IESLiveIMWebSocketFetcher {
    BOOL _isConnectting;
    BOOL _isTimeout;
    id /* block */ _registeredBusinessArray;
    double _startConnectTime;
}

@property (nonatomic) double startConnectTime;
@property (nonatomic) BOOL isConnectting;
@property (nonatomic) BOOL isTimeout;
@property (copy, nonatomic) id /* block */ registeredBusinessArray;

- (void)onFrontierMessageReceived:(id)arg0 message:(id)arg1;
- (void)onConnectionStateChanged:(id)arg0 connectionState:(unsigned long long)arg1 url:(id)arg2;
- (void)asyncAckWithPacket:(id)arg0;
- (void)fetchWithContext:(id)arg0 state:(id /* block */)arg1 data:(id /* block */)arg2;
- (void)setRegisteredBusinessArray:(id /* block */)arg0;
- (void)setIsConnectting:(BOOL)arg0;
- (BOOL)isConnectting;
- (void)trackUnifiedWsConnectStatus:(BOOL)arg0;
- (void)setStartConnectTime:(double)arg0;
- (id)getAckParamsFromPacket:(id)arg0;
- (id /* block */)registeredBusinessArray;
- (id)customDataWithKey:(id)arg0 value:(id)arg1;
- (double)startConnectTime;
- (void)checkConnectState;
- (void).cxx_destruct;
- (void)setIsTimeout:(BOOL)arg0;
- (BOOL)isTimeout;

@end
