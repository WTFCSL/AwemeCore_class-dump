//
//     Generated by private class-dump
//

@interface BDPSlardarCenter : NSObject

+ (void)monitorService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
+ (void)bootstrapLaunch;
+ (void)monitorService:(id)arg0 extra:(id)arg1 uniqueId:(id)arg2;
+ (void)monitorService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3 uniqueId:(id)arg4;
+ (id)categoryCommonParamKeyList;
+ (id)sharedCenter;

- (void)monitorEventName:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (void)monitorTrackData:(id)arg0 logTypeStr:(id)arg1;
- (void)reportLogWithFetchStartTime:(double)arg0 fetchEndTime:(double)arg1 scene:(id)arg2;

@end
