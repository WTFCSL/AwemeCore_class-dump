//
//     Generated by private class-dump
//

@interface BDHMInnerMonitor : NSObject

+ (id)getEventFrom:(id)arg0 phase:(long long)arg1;
+ (id)getTraceIdFrom:(id)arg0;
+ (id)generateTraceId;
+ (void)collectEventCreated:(id)arg0;
+ (void)collectEventUpdated:(id)arg0;
+ (void)collectEventTerminated:(id)arg0 reason:(long long)arg1;
+ (void)collectEventUnSampled:(id)arg0;
+ (void)collectEventUploaded:(id)arg0;
+ (id)getEventType:(id)arg0;
+ (void)setEnable:(BOOL)arg0;

@end
