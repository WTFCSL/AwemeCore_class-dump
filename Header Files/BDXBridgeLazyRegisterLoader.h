//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeLazyRegisterLoader : NSObject <TTBridgeInterceptor, BDXBridgeMethodLazyRegister>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bdx_engineReady;
+ (BOOL)bridgeEngine:(id)arg0 shouldCallbackUnregisteredCommand:(id)arg1;
+ (BOOL)tryRegisterWithMethodName:(id)arg0;
+ (BOOL)_lazyRegisterBridgeWithName:(id)arg0;
+ (id)bcaaSectionInfo;

@end