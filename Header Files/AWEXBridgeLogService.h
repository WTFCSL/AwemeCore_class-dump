//
//     Generated by private class-dump
//

@class NSString;

@interface AWEXBridgeLogService : NSObject <BDXBridgeLogServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportADLogWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)reportAppLogWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)reportMonitorLogWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;

@end
