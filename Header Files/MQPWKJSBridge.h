//
//     Generated by private class-dump
//

@class NSString;
@protocol MQPJSBridgeURLHandler;

@interface MQPWKJSBridge : NSObject <WKScriptMessageHandler> {
    id<MQPJSBridgeURLHandler> _delegate;
}

@property (weak, nonatomic) id<MQPJSBridgeURLHandler> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1;

@end
