//
//     Generated by private class-dump
//

@class NSString;

@interface SECTTBridgeBPEAPlugin : NSObject <TTBridgeInterceptor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)enablePlugin:(BOOL)arg0;

- (void)bridgeEngine:(id)arg0 willExecuteBridgeCommand:(id)arg1;
- (void)bridgeEngine:(id)arg0 willCallbackBridgeCommand:(id)arg1;

@end
