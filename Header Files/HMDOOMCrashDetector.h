//
//     Generated by private class-dump
//

@interface HMDOOMCrashDetector : NSObject

@property (class) double systemStateUpdateInterval;

+ (void)updateConfig:(id)arg0;
+ (BOOL)findOrCreateDirectoryInPath:(id)arg0;
+ (void)setSystemStateUpdateInterval:(double)arg0;
+ (void)triggerCurrentEnvironmentInformationSaving;
+ (void)triggerCurrentEnvironmentInformationSavingWithAction:(id)arg0;
+ (id)logFileDictionary;
+ (void)triggerCurrentEnvironmentInfomationSaving;
+ (void)triggerCurrentEnvironmentInfomationSavingWithAction:(id)arg0;
+ (double)systemStateUpdateInterval;
+ (void)stop;
+ (void)start;
+ (void)startWithDelegate:(id)arg0;

@end
