//
//     Generated by private class-dump
//

@class NSString;

@interface BDPHeliumMonitorReportImpl : NSObject <HeliumMonitorDelegate, HeliumTrackerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)hg_monitorTrackData:(id)arg0 logTypeStr:(id)arg1;
- (void)onRTCLogReport:(id)arg0 logTypeStr:(id)arg1;
- (void)bdp_TraceWithContext:(long long)arg0 EventType:(id)arg1 Data:(id)arg2;

@end
