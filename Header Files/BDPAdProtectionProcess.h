//
//     Generated by private class-dump
//

@interface BDPAdProtectionProcess : BDPStorageManager_HG

+ (int)durationFromAbTestOrSettings;
+ (void)checkNewUserWithUniqueID:(id)arg0 adUnitID:(id)arg1 completion:(id /* block */)arg2;
+ (void)isNewUserWithType:(id)arg0 adUnitID:(id)arg1 uniqueID:(id)arg2 completion:(id /* block */)arg3;
+ (BOOL)checkBlockAndSettingsWithAppId:(id)arg0;
+ (void)onStateAdLoadedWithAdUnitID:(id)arg0 uniqueID:(id)arg1;
+ (void)checkUserInfoWithUniqueID:(id)arg0 adUnitID:(id)arg1 completion:(id /* block */)arg2;
+ (void)onStateAdClosedWithAdUnitID:(id)arg0 count:(long long)arg1 uniqueID:(id)arg2;
+ (void)trackerEventReport:(id)arg0 rewarded:(BOOL)arg1;
+ (void)trackerEventReportAlert:(id)arg0;

@end
