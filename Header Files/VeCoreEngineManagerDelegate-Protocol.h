//
//     Generated by private class-dump
//

@protocol VeCoreEngineManagerDelegate <NSObject>

- (void)engineManager:(id)arg0 onError:(unsigned long long)arg1;
- (void)engineManager:(id)arg0 onRemoteMccStatus:(unsigned long long)arg1 channelId:(id)arg2;
- (void)firstRemoteVideoFrameArrivedFromEngineManager:(id)arg0;
- (void)engineManager:(id)arg0 receivedBinaryMessage:(id)arg1;
- (void)engineManager:(id)arg0 onReceiveMessage:(id)arg1;
- (void)engineManager:(id)arg0 operationDelay:(long long)arg1;
- (void)engineManager:(id)arg0 onAudioRouteChanged:(unsigned long long)arg1;
- (void)engineManager:(id)arg0 onUserLeave:(unsigned long long)arg1;
- (void)engineManager:(id)arg0 connectionChangedToState:(unsigned long long)arg1;
- (void)engineManager:(id)arg0 onRemoteStreamStats:(id)arg1;
- (void)engineManager:(id)arg0 mediaStreamError:(unsigned long long)arg1;

@end