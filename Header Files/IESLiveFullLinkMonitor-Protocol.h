//
//     Generated by private class-dump
//

@protocol IESLiveFullLinkMonitor <NSObject>

- (void)trackEventWith:(id)arg0;
- (void)monitorWithEventType:(unsigned long long)arg0 eventModule:(unsigned long long)arg1 serviceName:(id)arg2 extra:(id)arg3;
- (void)monitorWithEventType:(unsigned long long)arg0 eventModule:(unsigned long long)arg1 serviceName:(id)arg2 extra:(id)arg3 metric:(id)arg4;
- (void)monitorEventType:(id)arg0 eventModule:(id)arg1 serviceName:(id)arg2 extra:(id)arg3 metric:(id)arg4;
- (void)monitorWithEventType:(unsigned long long)arg0 eventModule:(unsigned long long)arg1 serviceName:(id)arg2 category:(id)arg3 metric:(id)arg4 extra:(id)arg5;
- (void)traceWithProduct:(unsigned long long)arg0 businessType:(unsigned long long)arg1 traceName:(id)arg2 step:(id)arg3 errorCode:(long long)arg4 errorMessage:(id)arg5 index:(id)arg6 extra:(id)arg7;
- (void)traceWithProductName:(id)arg0 businessTypeName:(id)arg1 traceName:(id)arg2 step:(id)arg3 errorCode:(long long)arg4 errorMessage:(id)arg5 index:(id)arg6 extra:(id)arg7;

@end
