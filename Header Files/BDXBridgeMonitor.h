//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeMonitor : NSObject <BDXBridgeInterceptor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setup;

- (void)xBridgeWillHandleMethod:(id)arg0 container:(id)arg1 params:(id)arg2;
- (void)xBridgeDidHandleMethod:(id)arg0 container:(id)arg1 paramsModel:(id)arg2;
- (void)xBridgeDidCallbackMethod:(id)arg0 container:(id)arg1 statusCode:(long long)arg2 message:(id)arg3 result:(id)arg4 callOnMainThread:(BOOL)arg5;
- (void)__monitorErrorWithMethod:(id)arg0 container:(id)arg1 code:(long long)arg2 message:(id)arg3;
- (void)__monitorPVWithMethod:(id)arg0 container:(id)arg1 statusCode:(long long)arg2 callOnMainThread:(BOOL)arg3;
- (void)__monitorBridgePerf:(id)arg0 perfData:(id)arg1 container:(id)arg2;
- (id)__paramsWithContainer:(id)arg0;
- (id)__monitorWithContainer:(id)arg0;
- (void)__getMonitorInfoWithContainer:(id)arg0 completion:(id /* block */)arg1;
- (id)__viewPathWithContainer:(id)arg0;

@end