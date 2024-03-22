//
//     Generated by private class-dump
//

@protocol IESLiveLinkmicMonitor <NSObject>

@property (nonatomic) unsigned long long linkSource;

- (void)updateBaseParams:(id)arg0;
- (void)monitorWithServiceName:(id)arg0 eventType:(unsigned long long)arg1 eventModule:(unsigned long long)arg2 extra:(id)arg3;
- (void)monitorBusinessLogicWithName:(id)arg0 description:(id)arg1 extra:(id)arg2;
- (void)monitorAndTraceSDKAPICallWithAPIName:(id)arg0 step:(id)arg1 traceEventType:(unsigned long long)arg2 extra:(id)arg3;
- (void)traceSDKAPICallWithAPIStep:(id)arg0 traceEventType:(unsigned long long)arg1 index:(id)arg2;
- (void)monitorSDKAPICallWithAPIName:(id)arg0 extra:(id)arg1;
- (void)monitorSDKCallbackWithCallbackName:(id)arg0 extra:(id)arg1;
- (void)monitorServerAPICallWithAPIPath:(id)arg0 requestTimestamp:(double)arg1 error:(id)arg2 response:(id)arg3 extra:(id)arg4;
- (void)monitorAndTraceSDKCallbackWithCallbackName:(id)arg0 step:(id)arg1 traceEventType:(unsigned long long)arg2 extra:(id)arg3;
- (void)setLinkSource:(unsigned long long)arg0;
- (void)monitorAndTraceBusinessLogicWithName:(id)arg0 step:(id)arg1 traceEventType:(unsigned long long)arg2 description:(id)arg3 extra:(id)arg4;
- (void)monitorIMMessageReceiveWithMessageName:(id)arg0 message:(id)arg1 extra:(id)arg2;
- (void)monitorAndTraceServerAPICallWithAPIPath:(id)arg0 step:(id)arg1 traceEventType:(unsigned long long)arg2 requestTimestamp:(double)arg3 error:(id)arg4 response:(id)arg5 extra:(id)arg6;
- (void)monitorAndTraceIMMessageReceiveWithMessageName:(id)arg0 step:(id)arg1 traceEventType:(unsigned long long)arg2 message:(id)arg3 extra:(id)arg4;
- (void)traceWithTraceEventType:(unsigned long long)arg0 step:(id)arg1 index:(id)arg2;
- (void)traceWithTraceEventType:(unsigned long long)arg0 step:(id)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 index:(id)arg4 extra:(id)arg5;
- (void)traceServerAPICallWithAPIStep:(id)arg0 traceEventType:(unsigned long long)arg1 requestTimestamp:(double)arg2 error:(id)arg3 response:(id)arg4 index:(id)arg5;
- (void)traceIMMessageReceiveWithMessageStep:(id)arg0 traceEventType:(unsigned long long)arg1 message:(id)arg2 index:(id)arg3;
- (void)traceSDKCallbackWithCallbackStep:(id)arg0 traceEventType:(unsigned long long)arg1 index:(id)arg2;
- (void)traceBusinessLogicWithStep:(id)arg0 traceEventType:(unsigned long long)arg1 description:(id)arg2 index:(id)arg3;
- (unsigned long long)linkSource;

@end
