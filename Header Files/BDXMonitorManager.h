//
//     Generated by private class-dump
//

@class NSDictionary;

@interface BDXMonitorManager : NSObject {
    NSDictionary *_globalMonitorMap;
}

@property (copy) NSDictionary *globalMonitorMap;

+ (id)shareInstance;

- (id)fetchMonitorWithSessionId:(id)arg0;
- (void)destoryMonitorWithSessionId:(id)arg0;
- (void)collectCardStartWithSessionId:(id)arg0 timeStamp:(double)arg1;
- (BOOL)bindMonitor:(id)arg0 sessionId:(id)arg1;
- (void)setGlobalMonitorMap:(id)arg0;
- (id)globalMonitorMap;
- (id)getDurationForMonitor:(id)arg0 startTimeField:(id)arg1 endTimeField:(id)arg2;
- (void).cxx_destruct;

@end
