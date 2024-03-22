//
//     Generated by private class-dump
//

@class HMDTTMonitor;

@interface CJPayMonitor : NSObject {
    HMDTTMonitor *_monitor;
    double _lastReportTime;
}

@property (retain, nonatomic) HMDTTMonitor *monitor;
@property (nonatomic) double lastReportTime;

+ (id)shared;

- (void)setLastReportTime:(double)arg0;
- (void)trackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (void)trackService:(id)arg0 value:(id)arg1 extra:(id)arg2;
- (void)trackService:(id)arg0 category:(id)arg1 extra:(id)arg2;
- (void)trackServiceAllInOne:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (void)trackService:(id)arg0 extra:(id)arg1;
- (void)trackService:(id)arg0 metric:(id)arg1 category:(id)arg2;
- (id)p_buildCommonCategoryParams;
- (void)p_uploadAlogWithEventName:(id)arg0;
- (void)p_uploadAlogWithStartTime:(double)arg0 endTime:(double)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;
- (double)lastReportTime;

@end
