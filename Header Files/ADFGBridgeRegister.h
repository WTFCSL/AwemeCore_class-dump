//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface ADFGBridgeRegister : NSObject {
    NSMutableDictionary *_methodDic;
}

+ (id)sharedRegister;

- (BOOL)respondsToBridge:(id)arg0;
- (void)_registerBridge:(id)arg0 handler:(id /* block */)arg1;
- (id)methodInfoForBridge:(id)arg0;
- (void)registerBridge:(id /* block */)arg0;
- (void)unregisterBridge:(id)arg0;
- (void)executeCommand:(id)arg0 engine:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void).cxx_destruct;

@end
