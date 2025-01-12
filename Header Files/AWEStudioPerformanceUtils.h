//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStudioPerformanceUtils : NSObject <ACCPerformanceUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)timeIntervalForKey:(id)arg0;
+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })getMemoryUsageInfo;
+ (void)startTraceTimeForKey:(id)arg0;
+ (void)cancelTraceTimeForKey:(id)arg0;
+ (double)acc_applicationCPUUsage;
+ (double)acc_systemCPUUsage;
+ (unsigned long long)acc_totalPhysicalMemory;
+ (unsigned long long)acc_usedMemory;
+ (unsigned long long)acc_applicationUsedMemory;
+ (unsigned long long)acc_availabeMemory;
+ (unsigned long long)acc_totalDiskSpace;
+ (unsigned long long)acc_usedDiskSpace;
+ (unsigned long long)acc_availabelDiskSpace;
+ (long long)acc_screenBrightness;

@end
