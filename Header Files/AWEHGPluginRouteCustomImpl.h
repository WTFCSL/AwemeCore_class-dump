//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHGPluginRouteCustomImpl : NSObject <AWEWebViewLoadTaskMessage, HGRouterPluginDelegate> {
    id /* block */ _closeWebViewBlock;
    id /* block */ _adWebViewLoadFinishBlk;
}

@property (copy, nonatomic) id /* block */ closeWebViewBlock;
@property (copy, nonatomic) id /* block */ adWebViewLoadFinishBlk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (BOOL)transferToURLString:(id)arg0;
- (id)viewControllerForURLString:(id)arg0;
- (BOOL)canOpenURLString:(id)arg0;
- (BOOL)hg_openUserProfile:(id)arg0;
- (BOOL)hg_canOpenLoadFailedPageForChannel:(long long)arg0 schema:(id)arg1;
- (void)hg_openLoadFailedPageForChannel:(long long)arg0 schema:(id)arg1 closeHandler:(id /* block */)arg2;
- (id)hg_loadFailedPageForChannel:(long long)arg0 schema:(id)arg1 loadFinishBlock:(id /* block */)arg2;
- (void)hg_openAppAndReopenGameWithUniqueID:(id)arg0 URL:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)hg_openCustomerServiceWithWebURLString:(id)arg0 extraInfo:(id)arg1;
- (BOOL)hg_openIMCustomerService:(id)arg0;
- (BOOL)hg_openSchemaWithURL:(id)arg0 userInfo:(id)arg1;
- (void)hg_navigateToVideoWithParam:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)hg_checkSidebarScene;
- (void)hg_navigateToSidebarWithUniqueID:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)transferToURLStringWithFormat:(id)arg0;
- (void)adWebViewDidFinishLoadWithWebViewController:(id)arg0;
- (void)adWebViewDidFailLoadWithWebViewController:(id)arg0 error:(id)arg1;
- (BOOL)transferWithInstance:(id)arg0;
- (void)hg_openSchemaAndCloseGameWithUniqueID:(id)arg0 URL:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)closeWebViewNotification:(id)arg0;
- (void)setCloseWebViewBlock:(id /* block */)arg0;
- (BOOL)openAdWebUrlWithParam:(id)arg0;
- (BOOL)openOtherWithParam:(id)arg0;
- (id)adWebUrlWithParam:(id)arg0;
- (void)setAdWebViewLoadFinishBlk:(id /* block */)arg0;
- (void)eventAdWebViewOpenWithParams:(id)arg0;
- (id)otherWebViewUrlWithParam:(id)arg0;
- (id /* block */)closeWebViewBlock;
- (id /* block */)adWebViewLoadFinishBlk;
- (void)hg_openGameDetailInfoWithUniqueID:(id)arg0;
- (void)hg_openUrl:(id)arg0 params:(id)arg1 fromH5:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
