//
//     Generated by private class-dump
//

@interface AWEOFGJSBridgeManager : NSObject

+ (id)sharedManager;

- (BOOL)handleIESBridgeWithContextInfo:(id)arg0;
- (BOOL)handleTTBridgeWithContextInfo:(id)arg0;
- (BOOL)handleMessage:(id)arg0 exector:(id)arg1 resultHandler:(id /* block */)arg2;
- (id /* block */)responseHandlerWithContextInfo:(id)arg0;

@end
