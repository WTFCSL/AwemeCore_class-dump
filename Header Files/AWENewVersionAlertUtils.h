//
//     Generated by private class-dump
//

@interface AWENewVersionAlertUtils : NSObject

+ (id)mainStorage;
+ (BOOL)isFirstLaunchAfterUpdating;
+ (BOOL)isChannelTF;
+ (unsigned long long)coldLaunchTimes;
+ (double)appInstallTimestamp;
+ (void)recordDidFinishLaunch;
+ (BOOL)isChannelTest;
+ (BOOL)isChannelPP;
+ (BOOL)isChannelTestFlightOrAppStore;
+ (BOOL)appShouldRemindNewVersion;
+ (void)recordRequestNewVersionTimestamp;
+ (void)doNotRemindNewVersionUntilUpgrade;
+ (BOOL)isChannelTestFlight;
+ (BOOL)isChannelTFOnline;
+ (BOOL)isChannelAppStore;
+ (double)appRequestNewVerisonTimeStamp;

@end
