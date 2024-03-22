//
//     Generated by private class-dump
//

@interface APRiskRemoteLogger : NSObject

+ (void)loggerMonitorReportWithParam:(id)arg0 seed:(id)arg1 ucId:(id)arg2;
+ (void)loggerMonitorReportWithParam:(id)arg0 seed:(id)arg1 ucId:(id)arg2 bizType:(id)arg3;
+ (void)monitorIntializeNormal:(id)arg0;
+ (void)monitorIntializeAbnormal:(id)arg0;
+ (void)monitorGetRiskResult:(id)arg0;
+ (void)monitorSyncInfo:(id)arg0;
+ (void)monitorInjectListInfo:(id)arg0;
+ (void)monitorPlugScanResult:(id)arg0;
+ (void)monitorBehaviorData;
+ (void)monitorScanH5Data:(id)arg0;
+ (void)monitorSafeStore:(id)arg0;
+ (void)monitorLightData:(id)arg0;
+ (void)monitorContentDetect:(id)arg0;
+ (void)monitorAntiFraud:(id)arg0;
+ (void)monitorFastRiskControl:(id)arg0;
+ (void)monitorCashierRpcFilter:(id)arg0;
+ (void)monitorRPCLRKEY:(id)arg0;
+ (void)monitorFeatureFull;
+ (void)monitorTransferData:(id)arg0;
+ (void)monitorEdgeSyncUpdate:(id)arg0;
+ (void)monitorModelBuried:(id)arg0;
+ (void)monitorScanData:(id)arg0;
+ (void)monitorContentDetectResult:(id)arg0;
+ (void)monitorContentDetectRuleResult:(char *)arg0;
+ (void)monitorContentResourceUpdate:(id)arg0;
+ (void)monitorScpFrameworkResult:(id)arg0 protocol:(id)arg1 log:(id)arg2;
+ (void)monitorApdidInitStatus:(long long)arg0;
+ (void)monitorBehaviorOtherData:(id)arg0;
+ (void)monitorSensorOtherData:(id)arg0;
+ (void)monitorCheatOtherData:(id)arg0;
+ (void)monitorOneKeyStopResult:(id)arg0 result:(id)arg1 cost:(id)arg2;
+ (void)monitorDynamicVmResult:(id)arg0 cost:(id)arg1;
+ (void)monitorDynamicDetect:(id)arg0;
+ (void)monitorTimerDetect:(id)arg0;
+ (void)monitorScreenRecording:(id)arg0;
+ (void)monitorDeviceColorInfo:(id)arg0;
+ (void)monitorBotDetection:(id)arg0;

@end