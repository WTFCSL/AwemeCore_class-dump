//
//     Generated by private class-dump
//

@interface BDPCloudSyncManager : NSObject

+ (id)sharedManager;

- (void)setupObserver;
- (void)updatePushMessage:(id)arg0;
- (id)getMpConfigWithMpId:(id)arg0 forKey:(id)arg1;
- (void)monitorDeviceWithMpID:(id)arg0 from:(id)arg1;
- (void)requestCloudSettingsForce:(BOOL)arg0 from:(id)arg1 isTriggerByAuto:(BOOL)arg2;
- (id)getSDKConfigForKey:(id)arg0;
- (id)getMpConfigWithMpId:(id)arg0;
- (void)monitorDeviceWithMpIDs:(id)arg0 from:(id)arg1;
- (void)addUpdateListner:(id /* block */)arg0;
- (id)init;

@end
