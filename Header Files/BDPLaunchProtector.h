//
//     Generated by private class-dump
//

@interface BDPLaunchProtector : NSObject

+ (void)bootstrapLaunch;
+ (void)updateLaunchProtectionConfig:(id)arg0;
+ (id)protectionForAppLaunchWithId:(id)arg0;
+ (void)resetProtectionForAppLaunchWithId:(id)arg0;
+ (void)protectSDKLaunch;
+ (void)tryReportLoadFailed;

@end
