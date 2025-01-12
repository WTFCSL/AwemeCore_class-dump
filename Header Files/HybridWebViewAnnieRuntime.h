//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface HybridWebViewAnnieRuntime : NSObject <HybridRuntimeProtocol> {
    NSMutableDictionary *_globalProps;
}

@property (retain, nonatomic) NSMutableDictionary *globalProps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)arg0 params:(id)arg1;
- (void)sendEvent:(id)arg0 params:(id)arg1 callback:(id /* block */)arg2;
- (void)setGlobalProps:(id)arg0;
- (id)globalProps;
- (BOOL)falconSchemeHandlerEnable:(id)arg0;
- (id)bridgeMethodInstanceWithName:(id)arg0;
- (void)setUpBridgeWithViewInstance:(id)arg0;
- (void)setupFalconWithUUID:(id)arg0 webview:(id)arg1;
- (void)registerBridgeMethods:(id)arg0;
- (void)registerBridgeMethodInstances:(id)arg0;
- (id /* block */)wrappedDecisionHandlerWithContext:(id)arg0 webView:(id)arg1 navigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)updateGlobalProps:(id)arg0 withView:(id)arg1;
- (void)configGlobalProps:(id)arg0 withView:(id)arg1;
- (id)supportedBridges;
- (void)setupGlobalFalconEnv;
- (void)setupSchemeHandlerWithView:(id)arg0 params:(id)arg1;
- (id)initWithDecisionHandler:(id /* block */)arg0 navigateHandler:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)containerID;
- (long long)runtimeType;

@end
