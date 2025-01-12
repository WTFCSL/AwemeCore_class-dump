//
//     Generated by private class-dump
//

@protocol BDLGeckoProtocol <NSObject>

- (id)rootDirectoryForAccessKey:(id)arg0;
- (id)rootDirectoryForAccessKey:(id)arg0 channel:(id)arg1;
- (long long)fileTypeForAccessKey:(id)arg0 channel:(id)arg1;
- (unsigned long long)normalPolicyDelaySyncTime;
- (void)registerChannels:(id)arg0 forAccessKey:(id)arg1;
- (void)syncResourcesChannels:(id)arg0 completion:(id /* block */)arg1;
- (void)syncResourcesForAccessKey:(id)arg0 channels:(id)arg1 completion:(id /* block */)arg2;
- (id)rootDirectoryForChannel:(id)arg0;
- (id)accessKey;

@optional

- (id)defaultFileForGroupID:(id)arg0;
- (id)defaultFilerootDirForGroupID:(id)arg0;
- (void)syncResourcesWithAccessKey:(id)arg0 channels:(id)arg1 resourceVersion:(id)arg2 businessDomain:(id)arg3 forceSync:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)syncResourcesWithAccessKey:(id)arg0 channels:(id)arg1 businessDomain:(id)arg2 forceSync:(BOOL)arg3 customParams:(id)arg4 completion:(id /* block */)arg5;
- (void)syncResourcesWithAccessKey:(id)arg0 channels:(id)arg1 resourceVersion:(id)arg2 businessDomain:(id)arg3 completion:(id /* block */)arg4;
- (id)defaultGroupID;
- (void)syncResourcesWithAccessKey:(id)arg0 channels:(id)arg1 businessDomain:(id)arg2 customParams:(id)arg3 completion:(id /* block */)arg4;

@end
