//
//     Generated by private class-dump
//

@class AWEJSBridge, NSString;

@interface AWELiveInjectedJSBridgeHandler : NSObject <IESLivePiperHandlerProtocol> {
    AWEJSBridge *_aweJSBridge;
}

@property (retain, nonatomic) AWEJSBridge *aweJSBridge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)arg0;
- (void)setAweJSBridge:(id)arg0;
- (id)aweJSBridge;
- (void).cxx_destruct;

@end
