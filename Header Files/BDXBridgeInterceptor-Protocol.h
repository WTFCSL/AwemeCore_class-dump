//
//     Generated by private class-dump
//

@protocol BDXBridgeInterceptor <NSObject>

@optional

- (void)xBridge:(id)arg0 setUpWithContainer:(id)arg1;
- (void)updateBridgeContext:(id)arg0 forMethod:(id)arg1 container:(id)arg2 params:(id)arg3;
- (void)xBridgeWillHandleMethod:(id)arg0 container:(id)arg1 params:(id)arg2;
- (void)xBridgeDidHandleMethod:(id)arg0 container:(id)arg1 paramsModel:(id)arg2;
- (void)xBridgeWillCallbackMethod:(id)arg0 container:(id)arg1 statusCode:(long long)arg2 message:(id)arg3 resultModel:(id)arg4;
- (void)xBridgeDidCallbackMethod:(id)arg0 container:(id)arg1 statusCode:(long long)arg2 message:(id)arg3 result:(id)arg4 callOnMainThread:(BOOL)arg5;

@end
