//
//     Generated by private class-dump
//

@protocol TTBridgeInterceptor <NSObject>

+ (BOOL)bridgeEngine:(id)arg0 shouldHandleGlobalBridgeCommand:(id)arg1;
+ (BOOL)bridgeEngine:(id)arg0 shouldHandleLocalBridgeCommand:(id)arg1;
+ (void)bridgeEngine:(id)arg0 willExecuteBridgeCommand:(id)arg1;
+ (BOOL)bridgeEngine:(id)arg0 shouldCallbackUnregisteredCommand:(id)arg1;
+ (void)bridgeEngine:(id)arg0 willCallbackBridgeCommand:(id)arg1;
+ (BOOL)bridgeEngine:(id)arg0 shouldUseExternalAuthorizeForCommand:(id)arg1;

@optional

- (BOOL)bridgeEngine:(id)arg0 shouldHandleGlobalBridgeCommand:(id)arg1;
- (BOOL)bridgeEngine:(id)arg0 shouldHandleLocalBridgeCommand:(id)arg1;
- (void)bridgeEngine:(id)arg0 willExecuteBridgeCommand:(id)arg1;
- (BOOL)bridgeEngine:(id)arg0 shouldCallbackUnregisteredCommand:(id)arg1;
- (void)bridgeEngine:(id)arg0 willCallbackBridgeCommand:(id)arg1;
- (BOOL)bridgeEngine:(id)arg0 shouldUseExternalAuthorizeForCommand:(id)arg1;

@end
