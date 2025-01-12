//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPluginAnchorCustomImpl : NSObject <BDPAnchorPluginDelegate, AWEPublishTaskMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)showVideoSceneGuideWithUniqueID:(id)arg0 controller:(id)arg1 data:(id)arg2;
- (void)showLiveSceneGuideWithUniqueID:(id)arg0 controller:(id)arg1 data:(id)arg2;
- (void)fetchODRGuideDataWithODRSource:(unsigned long long)arg0 appID:(id)arg1 completion:(id /* block */)arg2;
- (id)mountedDataWithAnchorData:(id)arg0;
- (id)anchorActionFromAnchorType:(long long)arg0;
- (id)appIDFromContent:(id)arg0;
- (void)trackAnchorResult:(id)arg0 appID:(id)arg1;
- (void)requestAwemeWithItemID:(id)arg0 completion:(id /* block */)arg1;
- (void)bdp_anchorButtonDidClick:(id)arg0 snapshot:(id)arg1 completion:(id /* block */)arg2;
- (id)mountedDataWithUniqueID:(id)arg0;
- (void)bdp_getProductInfoWithAnchorData:(id)arg0 timeout:(id)arg1 completion:(id /* block */)arg2;
- (id)bdp_nativeGameAnchorConfigWithSchema:(id)arg0;
- (void)bdp_showAnchorODRGuideIfNeededWithUniqueID:(id)arg0;
- (id)init;

@end
