//
//     Generated by private class-dump
//

@protocol BDPPluginTTNetWSCustomImplDelegate <NSObject>

@optional

- (void)ttnetWebSocket:(unsigned long long)arg0 withProtocol:(id)arg1 didOpenWithHeader:(id)arg2;
- (void)ttnetWebSocket:(unsigned long long)arg0 withProtocol:(id)arg1 didCloseWithError:(id)arg2;
- (void)ttnetWebSocket:(unsigned long long)arg0 withProtocol:(id)arg1 didReceiveStringMessage:(id)arg2;
- (void)ttnetWebSocket:(unsigned long long)arg0 withProtocol:(id)arg1 didReceiveBinaryMessage:(id)arg2;
- (void)ttnetWebSocket:(unsigned long long)arg0 withProtocol:(id)arg1 didConnectionError:(id)arg2;

@end
