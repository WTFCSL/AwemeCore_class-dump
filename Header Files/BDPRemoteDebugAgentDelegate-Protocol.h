//
//     Generated by private class-dump
//

@protocol BDPRemoteDebugAgentDelegate <NSObject>

- (void)webSocketDidReceiveEvent:(id)arg0;
- (void)webSocketDidReceiveMessage:(id)arg0;
- (void)webSocketDidReceiveCDPCallBackMessage:(id)arg0;
- (void)webSocketDidReceiveDomMessage:(id)arg0;

@optional

- (void)webSocketDidOpen:(id)arg0;
- (void)webSocketManager:(id)arg0 didFailWithError:(id)arg1;
- (void)webSocketManager:(id)arg0 didCloseWithCode:(long long)arg1 reason:(id)arg2 wasClean:(BOOL)arg3;

@end