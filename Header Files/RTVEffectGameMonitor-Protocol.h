//
//     Generated by private class-dump
//

@protocol RTVEffectGameMonitor <RTVXRControllerInterface>

- (void)startEventWithIdentifier:(id)arg0;
- (void)endEventWithIdentifier:(id)arg0 service:(id)arg1 dictionary:(id)arg2 success:(BOOL)arg3 error:(id)arg4;
- (void)monitorEffectGameDevCreateWithIdentifier:(id)arg0 gameModel:(id)arg1;
- (void)monitorEffectGameDevCreateResult:(BOOL)arg0 identifier:(id)arg1 gameSession:(id)arg2 errorCode:(id)arg3 internalErrorCode:(id)arg4;
- (void)monitorEffectGameDevGameLoadWithIdentifier:(id)arg0 gameSession:(id)arg1;
- (void)monitorEffectGameDevGameLoadResult:(BOOL)arg0 identifier:(id)arg1 gameSession:(id)arg2 needDownload:(BOOL)arg3 failedStage:(unsigned long long)arg4 failedReason:(id)arg5;
- (void)monitorEffectGameDevGameStartWithIdentifier:(id)arg0 gameSession:(id)arg1;
- (void)monitorEffectGameDevGameEndWithIdentifier:(id)arg0 gameSession:(id)arg1 endReason:(unsigned long long)arg2;

@end
