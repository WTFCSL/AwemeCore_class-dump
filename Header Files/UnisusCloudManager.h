//
//     Generated by private class-dump
//

@interface UnisusCloudManager : NSObject

+ (id)sharedManager;

- (void)updatePushMessage:(id)arg0;
- (id)getMpConfigWithMpId:(id)arg0 forKey:(id)arg1;
- (void)monitorDeviceWithMpID:(id)arg0 from:(id)arg1;
- (void)requestCloudSettings:(unsigned long long)arg0 from:(id)arg1 isTriggerByAuto:(BOOL)arg2;
- (id)getSDKConfigForKey:(id)arg0;
- (id)getMpConfigWithMpId:(id)arg0;
- (void)monitorDeviceWithMpIDs:(id)arg0 from:(id)arg1;
- (void)addUpdateListner:(id /* block */)arg0;
- (id)init;

@end
