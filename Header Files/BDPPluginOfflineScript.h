//
//     Generated by private class-dump
//

@interface BDPPluginOfflineScript : BDPBridgeInstancePlugin

- (id)tryGetPackageInfoWithParam:(id)arg0 andUniqueID:(id)arg1 andError:(id *)arg2;
- (void)tryToEvaluteTheScripts:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)loadOfflineScriptWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;

@end
