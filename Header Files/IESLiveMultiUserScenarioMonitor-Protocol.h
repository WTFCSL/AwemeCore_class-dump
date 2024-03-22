//
//     Generated by private class-dump
//

@class NSMutableDictionary;
@protocol IESLiveMultiUserScenarioMonitorContext;

@protocol IESLiveMultiUserScenarioMonitor <NSObject>

@property (readonly, nonatomic) id<IESLiveMultiUserScenarioMonitorContext> context;
@property (readonly, nonatomic) NSMutableDictionary *sharedBusinessContext;

- (void)monitorWithServiceName:(id)arg0 eventType:(unsigned long long)arg1 eventModule:(unsigned long long)arg2 extra:(id)arg3;
- (void)monitorServiceName:(id)arg0 eventType:(id)arg1 eventModule:(id)arg2 extra:(id)arg3;
- (void)monitorServerAPICallWithServiceName:(id)arg0 APIPath:(id)arg1 eventModule:(unsigned long long)arg2 requestTimestamp:(double)arg3 error:(id)arg4 response:(id)arg5 extra:(id)arg6;
- (void)monitorIMMessageReceiveWithServiceName:(id)arg0 message:(id)arg1 description:(id)arg2 eventModule:(unsigned long long)arg3 extra:(id)arg4;
- (void)monitorSDKAPICallWithServiceName:(id)arg0 APIName:(id)arg1 eventModule:(unsigned long long)arg2 extra:(id)arg3;
- (void)monitorSDKCallbackWithServiceName:(id)arg0 callbackName:(id)arg1 eventModule:(unsigned long long)arg2 extra:(id)arg3;
- (void)monitorBusinessLogicWithServiceName:(id)arg0 description:(id)arg1 eventModule:(unsigned long long)arg2 extra:(id)arg3;
- (void)monitorBusinessLogicWithServiceName:(id)arg0 description:(id)arg1 eventModule:(unsigned long long)arg2 extra:(id)arg3 metric:(id)arg4;
- (unsigned long long)fullLinkModuleByCurrentScene;
- (void)traceWithBusinessType:(unsigned long long)arg0 traceName:(id)arg1 step:(id)arg2 index:(id)arg3;
- (void)traceWithBusinessType:(unsigned long long)arg0 traceName:(id)arg1 step:(id)arg2 extra:(id)arg3;
- (void)traceWithBusinessType:(unsigned long long)arg0 traceName:(id)arg1 step:(id)arg2 errorCode:(long long)arg3 errorMessage:(id)arg4 index:(id)arg5 extra:(id)arg6;
- (id)sharedBusinessContext;
- (id)context;

@end