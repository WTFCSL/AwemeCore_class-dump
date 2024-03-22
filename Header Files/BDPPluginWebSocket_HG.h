//
//     Generated by private class-dump
//

@class NSString, BDPUniqueID, NSMutableDictionary;
@protocol BDPTTNetWSPluginDelegate;

@interface BDPPluginWebSocket_HG : BDPBridgeInstancePlugin <BDPBindingWebSocketDelegate, BDPPluginTTNetWSCustomImplDelegate, BDPAPIInterruptionMessage> {
    id<BDPTTNetWSPluginDelegate> _ttnetWSPlugin;
    BDPUniqueID *_uniqueID;
    NSMutableDictionary *_socketTypeDict;
    NSMutableDictionary *_socketCloseInfoDict;
}

@property (weak, nonatomic) id<BDPTTNetWSPluginDelegate> ttnetWSPlugin;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startInterruptingSubscribeHandler:(id)arg0;
- (void)onSocketTaskStateChange:(id)arg0 withMessage:(id)arg1 error:(id)arg2;
- (id)ttnetWSPlugin;
- (long long)generateTaskID;
- (void)ttnetWebSocket:(unsigned long long)arg0 withProtocol:(id)arg1 didOpenWithHeader:(id)arg2;
- (void)ttnetWebSocket:(unsigned long long)arg0 withProtocol:(id)arg1 didCloseWithError:(id)arg2;
- (void)ttnetWebSocket:(unsigned long long)arg0 withProtocol:(id)arg1 didReceiveStringMessage:(id)arg2;
- (void)ttnetWebSocket:(unsigned long long)arg0 withProtocol:(id)arg1 didReceiveBinaryMessage:(id)arg2;
- (void)createSocketTaskWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)operateSocketTaskWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setTtnetWSPlugin:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)dealloc;

@end
