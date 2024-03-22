//
//     Generated by private class-dump
//

@protocol IESLCConnectManagerProtocol;

@protocol IESLCConnectService <NSObject>

@property (nonatomic, weak) id<IESLCConnectManagerProtocol> connectManager;

@optional

- (id)connectManager;
- (void)ieslc_onConnectionStateChanged:(id)arg0 connectionState:(unsigned long long)arg1 url:(id)arg2;
- (void)ieslc_onConnectionStateChanged:(id)arg0 connectionState:(unsigned long long)arg1 url:(id)arg2;
- (void)ieslc_onConnectionErrorWithState:(id)arg0 connectionState:(unsigned long long)arg1 url:(id)arg2 errorStr:(id)arg3 errorDict:(id)arg4;
- (void)ieslc_onConnectionErrorWithState:(id)arg0 connectionState:(unsigned long long)arg1 url:(id)arg2 errorStr:(id)arg3 errorDict:(id)arg4;
- (void)setConnectManager:(id)arg0;
- (void)ieslc_onConnectionStop:(id)arg0;
- (void)ieslc_onConnectionStop:(id)arg0;

@end