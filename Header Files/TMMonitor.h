//
//     Generated by private class-dump
//

@class HMDTTMonitor;

@interface TMMonitor : NSObject {
    HMDTTMonitor *_monitor;
}

@property (retain, nonatomic) HMDTTMonitor *monitor;

+ (id)defaultMonitor;

- (void)tm_trackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;

@end
