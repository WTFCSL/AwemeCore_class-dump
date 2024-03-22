//
//     Generated by private class-dump
//

@class NSString;

@interface AWELifeCycleCustomImpl : NSObject <BDPLifeCyclePluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)firstFrameDidShow:(id)arg0;
- (void)_setNoticeFlag;
- (void)_visitAppWithAppSchema:(id)arg0;
- (BOOL)shouldOpenDebugAppWithLaunchParam:(id)arg0 isGame:(BOOL)arg1;
- (BOOL)canShowUIWithV3Configuration:(id)arg0 schema:(id)arg1;
- (id)configurationWithTheme:(id)arg0 config:(id)arg1;
- (BOOL)canShowUIWithConfiguration:(id)arg0 schema:(id)arg1;
- (BOOL)isLiveCustomWithUniqueID:(id)arg0;
- (BOOL)shouldOpenWithLaunchParam:(id)arg0 openBlk:(id /* block */)arg1;
- (BOOL)hg_shouldOpenWithLaunchParam:(id)arg0 openBlk:(id /* block */)arg1;
- (void)metaSuccessWithUniqueID:(id)arg0 model:(id)arg1;
- (void)pkgDownloadFinishWithUniqueID:(id)arg0;
- (void)pkgDownloadProgress:(float)arg0 uniqueID:(id)arg1;
- (void)loadFinishWithUniqueID:(id)arg0 error:(id)arg1 logParam:(id)arg2;
- (void)warmBootDoneWithUniqueID:(id)arg0;
- (void)enterWithUniqueID:(id)arg0 launchParam:(id)arg1;
- (void)exitWithUniqueID:(id)arg0;
- (void)applicationLCPArrive:(id)arg0 timestamp:(double)arg1;

@end