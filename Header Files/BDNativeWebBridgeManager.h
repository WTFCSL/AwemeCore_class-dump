//
//     Generated by private class-dump
//

@class NSMutableDictionary;
@protocol BDNativeWebBridgeManagerDelegate;

@interface BDNativeWebBridgeManager : NSObject {
    id<BDNativeWebBridgeManagerDelegate> _delegate;
    NSMutableDictionary *_invokeDic;
}

@property (retain, nonatomic) NSMutableDictionary *invokeDic;
@property (weak, nonatomic) id<BDNativeWebBridgeManagerDelegate> delegate;

- (id)invokeDic;
- (void)handleInvokeMessage:(id)arg0;
- (void)handleCallBackMessage:(id)arg0;
- (void)registerHandler:(id /* block */)arg0 forName:(id)arg1;
- (void)handleMixRenderMessage:(id)arg0;
- (void)registerHandler:(id /* block */)arg0 bridgeName:(id)arg1;
- (id)messageJSONStringByDic:(id)arg0;
- (void)setInvokeDic:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
