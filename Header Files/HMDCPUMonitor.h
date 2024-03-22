//
//     Generated by private class-dump
//

@interface HMDCPUMonitor : HMDMonitor

+ (id)cpuUsageInfoWithCustomScene:(id)arg0;
+ (id)cpuUsageInfo;
+ (id)sharedMonitor;

- (void)updateConfig:(id)arg0;
- (void)enterCustomSceneWithUniq:(id)arg0;
- (void)leaveCustomSceneWithUniq:(id)arg0;
- (unsigned long long)reporterPriority;
- (id)cpuUsageInfoWithoutAPPUsage;
- (struct hmd_app_cpu_usage { long long x0; long long x1; float x2; })appCpuInfoWithTheadInfo:(id)arg0 threadRecord:(BOOL)arg1;
- (id)refresh;
- (void)stop;
- (void)start;
- (Class)storeClass;

@end