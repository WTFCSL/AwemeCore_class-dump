//
//     Generated by private class-dump
//

@interface HMDCrashDirectory : NSObject

+ (void)setupUUID;
+ (void)setupDirectory;
+ (void)setupCurrentFolder;
+ (id)lastTimeDirectory;
+ (id)activeDirectory;
+ (id)eventDirectory;
+ (BOOL)checkAndMarkLaunchState;
+ (BOOL)lastTimeCrash;
+ (id)preparedDirectory;
+ (BOOL)isUrgent;
+ (void)removeLaunchState;
+ (id)currentDirectory;
+ (id)processingDirectory;
+ (void)setup;
+ (id)UUID;
+ (id)baseDirectory;

@end
