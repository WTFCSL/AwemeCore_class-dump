//
//     Generated by private class-dump
//

@protocol BDSCAppService <NSObject>

- (BOOL)isInHouse;
- (BOOL)isDebugConfiguration;
- (void)toastMessage:(id)arg0;
- (BOOL)userConfirmPrivacyPopup;

@optional

- (void)pushQoSLogString:(id)arg0 sceneName:(id)arg1 sceneProperty:(id)arg2;
- (void)traceLiveLogString:(id)arg0 traceEventName:(id)arg1 traceParams:(id)arg2 outerTraceLogInfo:(id)arg3;

@end
