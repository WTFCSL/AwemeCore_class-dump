//
//     Generated by private class-dump
//

@class NSString;
@protocol RxInjector, RTVJetMonitorProtocol, RTVJetHTTPRetryableValidatorInterface, RTVJetHttpWebAccessProtocol, RTVJetWebSocketBridgeInterface, RTVJetConfigOptionsProtocol;

@interface RTVAWEJetConfig : NSObject <RTVJetConfigManagerInterface> {
    id<RTVJetHttpWebAccessProtocol> _httpWebAccess;
    id<RTVJetHTTPRetryableValidatorInterface> _httpRetryableValidator;
    id<RTVJetWebSocketBridgeInterface> _webSocketBridge;
    id<RTVJetConfigOptionsProtocol> _config;
    id<RTVJetMonitorProtocol> _monitor;
    id<RxInjector> _injector;
}

@property (retain, nonatomic) id<RTVJetHttpWebAccessProtocol> httpWebAccess;
@property (retain, nonatomic) id<RTVJetHTTPRetryableValidatorInterface> httpRetryableValidator;
@property (retain, nonatomic) id<RTVJetWebSocketBridgeInterface> webSocketBridge;
@property (retain, nonatomic) id<RTVJetConfigOptionsProtocol> config;
@property (retain, nonatomic) id<RTVJetMonitorProtocol> monitor;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rxInjectorInitializer;

- (void)rxAwakeFromPropertyInjection;
- (id)httpWebAccess;
- (id)httpRetryableValidator;
- (id)initWithHttpWebAccess:(id)arg0 httpRetryableValidator:(id)arg1 webSocketBridge:(id)arg2 monitor:(id)arg3;
- (id)webSocketBridge;
- (void)setHttpWebAccess:(id)arg0;
- (void)setHttpRetryableValidator:(id)arg0;
- (void)setWebSocketBridge:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)monitor;
- (id)config;
- (void)setMonitor:(id)arg0;
- (id)injector;

@end
