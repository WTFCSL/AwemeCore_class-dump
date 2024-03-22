//
//     Generated by private class-dump
//

@interface AWEFCoinActivityMonitor : NSObject

+ (void)logGoldCoinService:(id)arg0 status:(unsigned long long)arg1 extraInfo:(id)arg2;
+ (void)monitorLogSettingWithExtraInfo:(id)arg0 status:(unsigned long long)arg1;
+ (void)monitorLogSettingVersionWithExtraInfo:(id)arg0;
+ (void)monitorLogLeftEntranceFlagWithExtraInfo:(id)arg0 status:(unsigned long long)arg1;
+ (void)monitorLogActivityInProcessWithExtraInfo:(id)arg0 status:(unsigned long long)arg1;
+ (void)monitorLogTaskInProcessWithExtraInfo:(id)arg0 status:(unsigned long long)arg1;
+ (void)monitorLogGetTaskInfoWithExtraInfo:(id)arg0 status:(unsigned long long)arg1 error:(id)arg2;
+ (void)monitorLogReportTaskDoneWithExtraInfo:(id)arg0 status:(unsigned long long)arg1 error:(id)arg2;
+ (void)monitorLogNextTaskWithExtraInfo:(id)arg0 status:(unsigned long long)arg1;
+ (void)monitorLogDownloadResourceWithExtraInfo:(id)arg0 status:(unsigned long long)arg1;
+ (void)monitorLogStartTaskWithExtraInfo:(id)arg0;
+ (void)monitorLogFinishTaskWithExtraInfo:(id)arg0;
+ (void)monitorLogClosePendantWithExtraInfo:(id)arg0;
+ (void)monitorLogClickPendantWithExtraInfo:(id)arg0;
+ (void)monitorLogGetLottitWithExtraInfo:(id)arg0 status:(unsigned long long)arg1;
+ (void)monitorLogAnimationWithExtraInfo:(id)arg0;
+ (void)monitorLogShowPendantWithExtraInfo:(id)arg0;

@end
