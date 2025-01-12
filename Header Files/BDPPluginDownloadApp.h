//
//     Generated by private class-dump
//

@class NSString, BDPUniqueID, NSMutableDictionary;

@interface BDPPluginDownloadApp : BDPBridgeInstancePlugin <SKStoreProductViewControllerDelegate> {
    BDPUniqueID *_uniqueID;
    NSMutableDictionary *_pageParams;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSMutableDictionary *pageParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)pluginMode;

- (id)pageParams;
- (void)setPageParams:(id)arg0;
- (void)createDownloadAppTaskWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)setDownloadParamsWithParam:(id)arg0;
- (void)pageCloseProcess;
- (void)productViewControllerDidFinish:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;

@end
