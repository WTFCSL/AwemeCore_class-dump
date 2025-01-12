//
//     Generated by private class-dump
//

@protocol BDLUtilProtocol <NSObject>

+ (id)sharedInstance;

@optional

- (void)trackData:(id)arg0 logTypeStr:(id)arg1;
- (void)event:(id)arg0 params:(id)arg1;
- (void)trackService:(id)arg0 value:(float)arg1 extra:(id)arg2;
- (void)monitorEventName:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (void)reportLogWithFetchStartTime:(double)arg0 fetchEndTime:(double)arg1 scene:(id)arg2;
- (void)openSchema:(id)arg0;
- (void)keyLog:(id)arg0;
- (void)error:(id)arg0;
- (void)info:(id)arg0;

@end
