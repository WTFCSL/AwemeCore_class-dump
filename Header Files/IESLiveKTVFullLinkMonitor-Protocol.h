//
//     Generated by private class-dump
//

@protocol IESLiveKTVFullLinkMonitor <NSObject>

- (void)monitorKTVBussiness:(id)arg0 extra:(id)arg1;
- (void)handleResponse:(id)arg0 error:(id)arg1 startTime:(double)arg2 event:(id)arg3 completion:(id /* block */)arg4;
- (void)monitorServerAPI:(id)arg0 startTime:(double)arg1 response:(id)arg2 error:(id)arg3 extra:(id)arg4;
- (void)monitorKTVMessage:(id)arg0 extra:(id)arg1;
- (void)trackWithStepName:(id)arg0 extra:(id)arg1;
- (void)traceWithEventType:(id)arg0 stepName:(id)arg1 extra:(id)arg2;

@end