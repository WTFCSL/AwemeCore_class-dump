//
//     Generated by private class-dump
//

@class NSString;

@interface PIAWebViewContainer : NSObject <PIALifeCycleReceiver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAfterPrepareTask;
+ (id)getReceiverInstance;

- (id)p_getPageConfigFromURL:(id)arg0;
- (void)onOpenScheme:(id)arg0;
- (void)engine:(id)arg0 onLoadStart:(id)arg1;
- (void)engine:(id)arg0 onURLChange:(id)arg1;
- (void)onNavigationCommit:(id)arg0;
- (void)engine:(id)arg0 onLoadFinish:(id)arg1;
- (void)onEngineDestroy:(id)arg0;
- (void)updateUserAgent:(id)arg0 URL:(id)arg1;
- (void)injectPIAContextAndFetchManifest:(id)arg0;
- (void)releasePIAPortWithInstance:(id)arg0;
- (void)releaseContextWithInstance:(id)arg0;
- (void)fetchManifestFromContext:(id)arg0;
- (void)p_updateManifest:(id)arg0 context:(id)arg1;
- (void)p_tryCacheManifestIfNeed:(id)arg0 context:(id)arg1;
- (void)p_validateAsyncWithContext:(id)arg0 version:(id)arg1 completion:(id /* block */)arg2;
- (void)p_onFetchManifest:(id)arg0 context:(id)arg1 manifestString:(id)arg2;
- (id)_init;

@end
