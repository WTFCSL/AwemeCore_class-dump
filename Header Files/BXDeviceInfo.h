//
//     Generated by private class-dump
//

@interface BXDeviceInfo : NSObject

+ (unsigned long long)total_memory;
+ (long long)getAvailableMem;
+ (unsigned long long)current_jetsam_memory_limite;
+ (unsigned long long)apple_jetsam_memory_limite:(const char *)arg0;
+ (double)getMemUsage;
+ (double)getCPUUsage;
+ (double)getBatteryTemp;
+ (double)getBatteryLevel;
+ (long long)getProcessVirtualMemorySize;
+ (id)getScreenInfo;
+ (id)getSystemVersion;
+ (id)getGpuInfo;
+ (int)getCpuCores;
+ (long long)getCpuFrequency;
+ (long long)getStorageSize;
+ (long long)getMemorySize;
+ (float)gpuUsage;
+ (BOOL)isLowPowerModeEnable;
+ (id)getDeviceModel;

@end