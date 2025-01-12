//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEOFGBridgeCenter : NSObject {
    NSMutableDictionary *_bridgeMethods;
}

@property (retain, nonatomic) NSMutableDictionary *bridgeMethods;

+ (id)defaultCenter;

- (void)handleBridgeMessage:(id)arg0 preActionBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)bridgeMethodForMethodName:(id)arg0;
- (void)registerBridgeMethod:(id)arg0;
- (void)setBridgeMethods:(id)arg0;
- (id)bridgeMethods;
- (void)preActionUsingBlock:(id /* block */)arg0 method:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void).cxx_destruct;

@end
