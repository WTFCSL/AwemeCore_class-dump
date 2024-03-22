//
//     Generated by private class-dump
//

@class NSString;

@interface BDPPluginPublicAdContainerDownload : BDPBridgeInstancePlugin <SKStoreProductViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openAdLandPageLinksWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)downloadWithParam:(id)arg0 callback:(id /* block */)arg1 uniqueID:(id)arg2;
- (void)downloadInSDKWithAppID:(id)arg0 callback:(id /* block */)arg1 uniqueID:(id)arg2;
- (void)downloadOutSDKWithURL:(id)arg0 callback:(id /* block */)arg1 uniqueID:(id)arg2;
- (void)openWithURL:(id)arg0 callback:(id /* block */)arg1 appID:(id)arg2;
- (void)openSchemaWithURL:(id)arg0 callback:(id /* block */)arg1 appId:(id)arg2;
- (void)downloadAppAdWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)productViewControllerDidFinish:(id)arg0;
- (id)topViewController;

@end
