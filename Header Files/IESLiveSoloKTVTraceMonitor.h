//
//     Generated by private class-dump
//

@protocol IESLiveFullLinkMonitor;

@interface IESLiveSoloKTVTraceMonitor : NSObject {
    id<IESLiveFullLinkMonitor> _innerMonitor;
}

@property (retain, nonatomic) id<IESLiveFullLinkMonitor> innerMonitor;

- (void)monitorServerAPI:(id)arg0 requestTimestamp:(double)arg1 error:(id)arg2 response:(id)arg3 extra:(id)arg4;
- (id)innerMonitor;
- (void)setInnerMonitor:(id)arg0;
- (void)monitorBussiness:(id)arg0 extra:(id)arg1;
- (void)monitorWithEventType:(unsigned long long)arg0 serviceName:(id)arg1 extra:(id)arg2;
- (void).cxx_destruct;

@end