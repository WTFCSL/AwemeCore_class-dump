//
//     Generated by private class-dump
//

@interface BDPPluginOpenDataHg : BDPBridgeInstancePlugin

+ (void)bootstrapLaunch;
+ (unsigned long long)pluginMode;

- (void)getCloudStorageByRelationWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getUserCloudStorageWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)removeUserCloudStorageWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setUserCloudStorageWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)openUserProfileWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setUserGroupWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)init;
- (void)dealloc;

@end